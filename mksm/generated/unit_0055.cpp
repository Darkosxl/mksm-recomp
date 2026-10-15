#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00254000;
    case 2u: goto L_00254008;
    case 3u: goto L_00254038;
    case 4u: goto L_0025407C;
    case 5u: goto L_002540A8;
    case 6u: goto L_002540C4;
    case 7u: goto L_002540EC;
    case 8u: goto L_00254118;
    case 9u: goto L_00254178;
    case 10u: goto L_00254188;
    case 11u: goto L_0025419C;
    case 12u: goto L_002541B0;
    case 13u: goto L_002541C0;
    case 14u: goto L_002541D0;
    case 15u: goto L_002541E4;
    case 16u: goto L_002541F4;
    case 17u: goto L_00254240;
    case 18u: goto L_00254250;
    case 19u: goto L_00254260;
    case 20u: goto L_00254290;
    case 21u: goto L_002542CC;
    case 22u: goto L_00254318;
    case 23u: goto L_00254378;
    case 24u: goto L_00254398;
    case 25u: goto L_002543B4;
    case 26u: goto L_002543D0;
    case 27u: goto L_002543F0;
    case 28u: goto L_0025444C;
    case 29u: goto L_00254460;
    case 30u: goto L_00254474;
    case 31u: goto L_00254488;
    case 32u: goto L_00254498;
    case 33u: goto L_002544A8;
    case 34u: goto L_002544BC;
    case 35u: goto L_002544CC;
    case 36u: goto L_00254518;
    case 37u: goto L_00254528;
    case 38u: goto L_00254538;
    case 39u: goto L_00254568;
    case 40u: goto L_002545B0;
    case 41u: goto L_002545E0;
    case 42u: goto L_002545F0;
    case 43u: goto L_00254604;
    case 44u: goto L_00254618;
    case 45u: goto L_00254628;
    case 46u: goto L_00254638;
    case 47u: goto L_0025464C;
    case 48u: goto L_0025465C;
    case 49u: goto L_002546A8;
    case 50u: goto L_002546B8;
    case 51u: goto L_002546C8;
    case 52u: goto L_002546F8;
    case 53u: goto L_00254780;
    case 54u: goto L_002547E0;
    case 55u: goto L_00254800;
    case 56u: goto L_0025481C;
    case 57u: goto L_00254838;
    case 58u: goto L_00254858;
    case 59u: goto L_002548B4;
    case 60u: goto L_002548C8;
    case 61u: goto L_002548DC;
    case 62u: goto L_002548F0;
    case 63u: goto L_00254900;
    case 64u: goto L_00254910;
    case 65u: goto L_00254924;
    case 66u: goto L_00254934;
    case 67u: goto L_00254980;
    case 68u: goto L_00254990;
    case 69u: goto L_002549A0;
    case 70u: goto L_002549D0;
    case 71u: goto L_00254A18;
    case 72u: goto L_00254A48;
    case 73u: goto L_00254A58;
    case 74u: goto L_00254A6C;
    case 75u: goto L_00254A80;
    case 76u: goto L_00254A90;
    case 77u: goto L_00254AA0;
    case 78u: goto L_00254AB4;
    case 79u: goto L_00254AC4;
    case 80u: goto L_00254B10;
    case 81u: goto L_00254B20;
    case 82u: goto L_00254B30;
    case 83u: goto L_00254B60;
    case 84u: goto L_00254BAC;
    case 85u: goto L_00254BBC;
    case 86u: goto L_00254BF8;
    case 87u: goto L_00254C04;
    case 88u: goto L_00254C60;
    case 89u: goto L_00254CA8;
    case 90u: goto L_00254CB4;
    case 91u: goto L_00254CC8;
    case 92u: goto L_00254D18;
    case 93u: goto L_00254D38;
    case 94u: goto L_00254E04;
    case 95u: goto L_00254E10;
    case 96u: goto L_00254E20;
    case 97u: goto L_00254E2C;
    case 98u: goto L_00254E3C;
    case 99u: goto L_00254E54;
    case 100u: goto L_00254E5C;
    case 101u: goto L_00254E78;
    case 102u: goto L_00254F20;
    case 103u: goto L_00254F64;
    case 104u: goto L_00254F70;
    case 105u: goto L_00254F80;
    case 106u: goto L_00254F8C;
    case 107u: goto L_00254F9C;
    case 108u: goto L_00254FD0;
    case 109u: goto L_00255014;
    case 110u: goto L_00255028;
    case 111u: goto L_00255060;
    case 112u: goto L_002550A8;
    case 113u: goto L_002550BC;
    case 114u: goto L_002550D0;
    case 115u: goto L_002550E4;
    case 116u: goto L_00255108;
    case 117u: goto L_00255138;
    case 118u: goto L_002551A0;
    case 119u: goto L_00255210;
    case 120u: goto L_00255230;
    case 121u: goto L_00255274;
    case 122u: goto L_0025528C;
    case 123u: goto L_002552B0;
    case 124u: goto L_002552C8;
    case 125u: goto L_00255310;
    case 126u: goto L_00255328;
    case 127u: goto L_0025536C;
    case 128u: goto L_00255384;
    case 129u: goto L_002553C4;
    case 130u: goto L_002553DC;
    case 131u: goto L_00255420;
    case 132u: goto L_00255460;
    case 133u: goto L_002554B0;
    case 134u: goto L_002554C0;
    case 135u: goto L_002554D4;
    case 136u: goto L_002554F8;
    case 137u: goto L_00255510;
    case 138u: goto L_00255538;
    case 139u: goto L_00255550;
    case 140u: goto L_0025556C;
    case 141u: goto L_002555A0;
    case 142u: goto L_002555B0;
    case 143u: goto L_002555C4;
    case 144u: goto L_002555E8;
    case 145u: goto L_00255600;
    case 146u: goto L_00255638;
    case 147u: goto L_00255650;
    case 148u: goto L_0025566C;
    case 149u: goto L_002556B0;
    case 150u: goto L_00255708;
    case 151u: goto L_00255730;
    case 152u: goto L_0025577C;
    case 153u: goto L_00255868;
    case 154u: goto L_002558AC;
    case 155u: goto L_002558FC;
    case 156u: goto L_00255948;
    case 157u: goto L_00255984;
    case 158u: goto L_002559B8;
    case 159u: goto L_002559E0;
    case 160u: goto L_00255A10;
    case 161u: goto L_00255A30;
    case 162u: goto L_00255A60;
    case 163u: goto L_00255AB0;
    case 164u: goto L_00255AD0;
    case 165u: goto L_00255ADC;
    case 166u: goto L_00255AFC;
    case 167u: goto L_00255B28;
    case 168u: goto L_00255BD0;
    case 169u: goto L_00255BF8;
    case 170u: goto L_00255C1C;
    case 171u: goto L_00255C40;
    case 172u: goto L_00255C88;
    case 173u: goto L_00255CA0;
    case 174u: goto L_00255CBC;
    case 175u: goto L_00255CD8;
    case 176u: goto L_00255CF4;
    case 177u: goto L_00255D10;
    case 178u: goto L_00255D28;
    case 179u: goto L_00255D40;
    case 180u: goto L_00255D58;
    case 181u: goto L_00255D70;
    case 182u: goto L_00255DC0;
    case 183u: goto L_00255DE8;
    case 184u: goto L_00255E10;
    case 185u: goto L_00255EC0;
    case 186u: goto L_00255ED0;
    case 187u: goto L_00255F48;
    case 188u: goto L_00255F74;
    case 189u: goto L_00255FA8;
    case 190u: goto L_00255FE0;
    case 191u: goto L_00256028;
    case 192u: goto L_00256040;
    case 193u: goto L_0025607C;
    case 194u: goto L_002560A0;
    case 195u: goto L_002560C8;
    case 196u: goto L_00256100;
    case 197u: goto L_002561B0;
    case 198u: goto L_002561C0;
    case 199u: goto L_0025622C;
    case 200u: goto L_00256264;
    case 201u: goto L_00256288;
    case 202u: goto L_002562DC;
    case 203u: goto L_00256318;
    case 204u: goto L_00256350;
    case 205u: goto L_00256360;
    case 206u: goto L_002563C0;
    case 207u: goto L_002563E0;
    case 208u: goto L_00256400;
    case 209u: goto L_00256428;
    case 210u: goto L_00256454;
    case 211u: goto L_00256474;
    case 212u: goto L_00256484;
    case 213u: goto L_002564A0;
    case 214u: goto L_002564E0;
    case 215u: goto L_002564FC;
    case 216u: goto L_00256518;
    case 217u: goto L_00256548;
    case 218u: goto L_002565A0;
    case 219u: goto L_002565C0;
    case 220u: goto L_002565F8;
    case 221u: goto L_00256644;
    case 222u: goto L_00256678;
    case 223u: goto L_002566A0;
    case 224u: goto L_002566B8;
    case 225u: goto L_00256728;
    case 226u: goto L_00256834;
    case 227u: goto L_00256854;
    case 228u: goto L_00256868;
    case 229u: goto L_00256880;
    case 230u: goto L_00256894;
    case 231u: goto L_002568A0;
    case 232u: goto L_002568C0;
    case 233u: goto L_002568D4;
    case 234u: goto L_002568E0;
    case 235u: goto L_002569C0;
    case 236u: goto L_002569E0;
    case 237u: goto L_002569F4;
    case 238u: goto L_00256A0C;
    case 239u: goto L_00256A20;
    case 240u: goto L_00256A2C;
    case 241u: goto L_00256A4C;
    case 242u: goto L_00256A60;
    case 243u: goto L_00256A6C;
    case 244u: goto L_00256AA0;
    case 245u: goto L_00256AD8;
    case 246u: goto L_00256B10;
    case 247u: goto L_00256B60;
    case 248u: goto L_00256BE8;
    case 249u: goto L_00256C08;
    case 250u: goto L_00256C44;
    case 251u: goto L_00256C54;
    case 252u: goto L_00256C90;
    case 253u: goto L_00256CDC;
    case 254u: goto L_00256CF8;
    case 255u: goto L_00256D0C;
    case 256u: goto L_00256D40;
    case 257u: goto L_00256D70;
    case 258u: goto L_00256DB0;
    case 259u: goto L_00256E10;
    case 260u: goto L_00256E24;
    case 261u: goto L_00256E38;
    case 262u: goto L_00256E70;
    case 263u: goto L_00256EC8;
    case 264u: goto L_00256EE8;
    case 265u: goto L_00256F68;
    case 266u: goto L_00256FB8;
    case 267u: goto L_0025707C;
    case 268u: goto L_00257088;
    case 269u: goto L_002570A0;
    case 270u: goto L_002570B0;
    case 271u: goto L_00257120;
    case 272u: goto L_002571A8;
    case 273u: goto L_002571F8;
    case 274u: goto L_0025729C;
    case 275u: goto L_002572B0;
    case 276u: goto L_002572D8;
    case 277u: goto L_002572E8;
    case 278u: goto L_002572FC;
    case 279u: goto L_0025730C;
    case 280u: goto L_00257318;
    case 281u: goto L_00257358;
    case 282u: goto L_00257368;
    case 283u: goto L_00257390;
    case 284u: goto L_002573C0;
    case 285u: goto L_00257414;
    case 286u: goto L_00257458;
    case 287u: goto L_002574B4;
    case 288u: goto L_002574F8;
    case 289u: goto L_00257510;
    case 290u: goto L_00257590;
    case 291u: goto L_002575C8;
    case 292u: goto L_00257608;
    case 293u: goto L_00257618;
    case 294u: goto L_002576D8;
    case 295u: goto L_00257720;
    case 296u: goto L_00257768;
    case 297u: goto L_00257788;
    case 298u: goto L_00257890;
    case 299u: goto L_002578AC;
    case 300u: goto L_002578BC;
    case 301u: goto L_002578D8;
    case 302u: goto L_002578F8;
    case 303u: goto L_00257938;
    case 304u: goto L_00257990;
    case 305u: goto L_00257A00;
    case 306u: goto L_00257A30;
    case 307u: goto L_00257A40;
    case 308u: goto L_00257A88;
    case 309u: goto L_00257AC8;
    case 310u: goto L_00257B58;
    case 311u: goto L_00257B98;
    case 312u: goto L_00257C10;
    case 313u: goto L_00257C70;
    case 314u: goto L_00257C9C;
    default: bad_entry(c, 0x00254000u); return;
    }
L_00254000:
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_00254008:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254008u | kUnwind; return; } goto L_00254008; } }
    set32(c.r[17], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_00254038:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254038u | kUnwind; return; } goto L_00254038; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28364u)));
    c.f[22] = ld32((c.r[30].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[12] = c.f[23];
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025407Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0025407Cu) [[unlikely]] return; }
L_0025407C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28364u)));
    c.f[12] = c.f[23];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[22] = fp::add(c.f[22], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540A8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002540A8u) [[unlikely]] return; }
L_002540A8:
    c.f[14] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[12] = c.f[22];
    c.f[13] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002540C4u) [[unlikely]] return; }
L_002540C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 28364u)));
    c.f[22] = ld32((c.r[30].w[0] + 28368u));
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[12] = c.f[23];
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540ECu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002540ECu) [[unlikely]] return; }
L_002540EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 28364u)));
    c.f[12] = c.f[23];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[22] = fp::add(c.f[22], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254118u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00254118u) [[unlikely]] return; }
L_00254118:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025415C; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254168; } }
L_0025415C:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00254168:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254178u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254178u) [[unlikely]] return; }
L_00254178:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254188u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254188u) [[unlikely]] return; }
L_00254188:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025419Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0025419Cu) [[unlikely]] return; }
L_0025419C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541B0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002541B0u) [[unlikely]] return; }
L_002541B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541C0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002541C0u) [[unlikely]] return; }
L_002541C0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541D0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002541D0u) [[unlikely]] return; }
L_002541D0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541E4u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002541E4u) [[unlikely]] return; }
L_002541E4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541F4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002541F4u) [[unlikely]] return; }
L_002541F4:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254240u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254240u) [[unlikely]] return; }
L_00254240:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254250u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254250u) [[unlikely]] return; }
L_00254250:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00254260:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254260u | kUnwind; return; } goto L_00254260; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_00254290:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254290u | kUnwind; return; } goto L_00254290; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253DE0u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 320u, depth); } }
L_002542CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00254734; } }
    c.f[0] = fp::cvt_w_s(c.f[25]);
    set32(c.r[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[28] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] - 18880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[24] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[26] = 0u;
    set32(c.r[30], c.r[3].w[0] << 16);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 13;
L_00254318:
    c.f[22] = c.r[17].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 28372u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[18].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.f[22] = fp::add(c.f[22], c.f[22]);
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    fpu_div(c, 22u, c.f[22], c.f[1]);
    c.f[22] = fp::add(c.f[22], c.f[2]);
    c.f[12] = c.f[22];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254378u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00254378u) [[unlikely]] return; }
L_00254378:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[21].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[28]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254398u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00254398u) [[unlikely]] return; }
L_00254398:
    c.f[14] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[12] = c.f[23];
    c.f[13] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002543B4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002543B4u) [[unlikely]] return; }
L_002543B4:
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = c.f[22];
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002543D0u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002543D0u) [[unlikely]] return; }
L_002543D0:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[21].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[28]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002543F0u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002543F0u) [[unlikely]] return; }
L_002543F0:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00254430; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025443C; } }
L_00254430:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0025443C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025444Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x0025444Cu) [[unlikely]] return; }
L_0025444C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254460u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254460u) [[unlikely]] return; }
L_00254460:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254474u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254474u) [[unlikely]] return; }
L_00254474:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254488u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254488u) [[unlikely]] return; }
L_00254488:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254498u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254498u) [[unlikely]] return; }
L_00254498:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544A8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002544A8u) [[unlikely]] return; }
L_002544A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544BCu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002544BCu) [[unlikely]] return; }
L_002544BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544CCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002544CCu) [[unlikely]] return; }
L_002544CC:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254518u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254518u) [[unlikely]] return; }
L_00254518:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254528u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254528u) [[unlikely]] return; }
L_00254528:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00254538:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254538u | kUnwind; return; } goto L_00254538; } }
    set32(c.r[17], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_00254568:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254568u | kUnwind; return; } goto L_00254568; } }
    c.f[12] = ld32((c.r[22].w[0] + 28368u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[25];
    c.f[14] = c.f[26];
    c.f[15] = c.f[26];
    set32(c.r[16], 0u + c.r[2].w[0]);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002545B0u) [[unlikely]] return; }
L_002545B0:
    c.f[0] = ld32((c.r[22].w[0] + 28368u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], 0u + c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    if (c.r[18].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].d[0] = c.r[30].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545E0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002545E0u) [[unlikely]] return; }
L_002545E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545F0u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002545F0u) [[unlikely]] return; }
L_002545F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254604u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254604u) [[unlikely]] return; }
L_00254604:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254618u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254618u) [[unlikely]] return; }
L_00254618:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254628u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254628u) [[unlikely]] return; }
L_00254628:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254638u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254638u) [[unlikely]] return; }
L_00254638:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025464Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0025464Cu) [[unlikely]] return; }
L_0025464C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025465Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0025465Cu) [[unlikely]] return; }
L_0025465C:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546A8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002546A8u) [[unlikely]] return; }
L_002546A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546B8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002546B8u) [[unlikely]] return; }
L_002546B8:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_002546C8:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002546C8u | kUnwind; return; } goto L_002546C8; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_002546F8:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002546F8u | kUnwind; return; } goto L_002546F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28372u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254318u | kUnwind; return; } goto L_00254318; } }
L_00254734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00254B98; } }
    c.f[0] = fp::cvt_w_s(c.f[27]);
    set32(c.r[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[26] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] - 18880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[24] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[25] = 0u;
    set32(c.r[30], c.r[3].w[0] << 16);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 13;
L_00254780:
    c.f[22] = c.r[17].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 28372u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[18].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.f[22] = fp::add(c.f[22], c.f[22]);
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    fpu_div(c, 22u, c.f[22], c.f[1]);
    c.f[22] = fp::add(c.f[22], c.f[2]);
    c.f[12] = c.f[22];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002547E0u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002547E0u) [[unlikely]] return; }
L_002547E0:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[21].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254800u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00254800u) [[unlikely]] return; }
L_00254800:
    c.f[14] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[15] = 0u;
    c.f[12] = c.f[23];
    c.f[13] = c.f[27];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025481Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0025481Cu) [[unlikely]] return; }
L_0025481C:
    c.f[20] = ld32((c.r[21].w[0] + 28364u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[12] = c.f[22];
    c.f[23] = ld32((c.r[22].w[0] + 28368u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254838u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00254838u) [[unlikely]] return; }
L_00254838:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[22];
    c.f[21] = ld32((c.r[21].w[0] + 28364u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[26]);
    c.f[23] = fp::add(c.f[23], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254858u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00254858u) [[unlikely]] return; }
L_00254858:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00254898; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002548A4; } }
L_00254898:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_002548A4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548B4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002548B4u) [[unlikely]] return; }
L_002548B4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548C8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002548C8u) [[unlikely]] return; }
L_002548C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002548DCu) [[unlikely]] return; }
L_002548DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002548F0u) [[unlikely]] return; }
L_002548F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254900u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254900u) [[unlikely]] return; }
L_00254900:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254910u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254910u) [[unlikely]] return; }
L_00254910:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254924u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00254924u) [[unlikely]] return; }
L_00254924:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254934u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254934u) [[unlikely]] return; }
L_00254934:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254980u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254980u) [[unlikely]] return; }
L_00254980:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254990u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254990u) [[unlikely]] return; }
L_00254990:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_002549A0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002549A0u | kUnwind; return; } goto L_002549A0; } }
    set32(c.r[17], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_002549D0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002549D0u | kUnwind; return; } goto L_002549D0; } }
    c.f[12] = ld32((c.r[22].w[0] + 28368u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[27];
    c.f[14] = c.f[25];
    c.f[15] = c.f[25];
    set32(c.r[16], 0u + c.r[2].w[0]);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A18u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00254A18u) [[unlikely]] return; }
L_00254A18:
    c.f[0] = ld32((c.r[22].w[0] + 28368u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], 0u + c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    if (c.r[18].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].d[0] = c.r[30].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A48u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254A48u) [[unlikely]] return; }
L_00254A48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A58u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254A58u) [[unlikely]] return; }
L_00254A58:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A6Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254A6Cu) [[unlikely]] return; }
L_00254A6C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A80u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00254A80u) [[unlikely]] return; }
L_00254A80:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A90u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254A90u) [[unlikely]] return; }
L_00254A90:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AA0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254AA0u) [[unlikely]] return; }
L_00254AA0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AB4u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x00254AB4u) [[unlikely]] return; }
L_00254AB4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AC4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00254AC4u) [[unlikely]] return; }
L_00254AC4:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[1], c.f[24]);
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B10u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254B10u) [[unlikely]] return; }
L_00254B10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B20u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00254B20u) [[unlikely]] return; }
L_00254B20:
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00254B30:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254B30u | kUnwind; return; } goto L_00254B30; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_00254B60:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254B60u | kUnwind; return; } goto L_00254B60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28372u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254780u | kUnwind; return; } goto L_00254780; } }
L_00254B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BACu);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00254BACu) [[unlikely]] return; }
L_00254BAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BBCu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x00254BBCu) [[unlikely]] return; }
L_00254BBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x00254BE0u);  goto L_00254BE4; }
L_00254BE4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BF8u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00254BF8u) [[unlikely]] return; }
L_00254BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C04u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00254C04u) [[unlikely]] return; }
L_00254C04:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[28] = ld32((c.r[29].w[0] + 336u));
    c.f[27] = ld32((c.r[29].w[0] + 328u));
    c.f[26] = ld32((c.r[29].w[0] + 320u));
    c.f[25] = ld32((c.r[29].w[0] + 312u));
    c.f[24] = ld32((c.r[29].w[0] + 304u));
    c.f[23] = ld32((c.r[29].w[0] + 296u));
    c.f[22] = ld32((c.r[29].w[0] + 288u));
    c.f[21] = ld32((c.r[29].w[0] + 280u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00254C60:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CA8u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00254CA8u) [[unlikely]] return; }
L_00254CA8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CB4u);  if (depth < kMaxDepth) unit_004F(c, 94u, depth + 1u); else { c.pc = 0x0023E378u; return; } if (c.pc != 0x00254CB4u) [[unlikely]] return; }
L_00254CB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[19], c.r[3].w[0] - 18936u);
    st32((c.r[2].w[0] + 20444u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00254CC8:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 255u);
    c.r[4].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254E3C; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 20660u)));
    set32(c.r[5], 0u + 1024u);
    set32(c.r[7], c.r[23].w[0] + 21616u);
    set32(c.r[8], c.r[22].w[0] + 21664u);
    set32(c.r[9], 0u + 5057u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D18u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00254D18u) [[unlikely]] return; }
L_00254D18:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[10], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[9], 0u + 8u);
    set32(c.r[8], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] - 1408u);
    c.budget -= 8;
L_00254D38:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    c.r[6].d[0] = c.r[2].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_00254D7C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254D6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_00254D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254DA4; } }
L_00254D6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00254D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254DA4; } }
L_00254D7C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254DA4; } }
L_00254D8C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254DA4; } }
L_00254D9C:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_00254DA4:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254D38u | kUnwind; return; } goto L_00254D38; } }
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] + 255u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E04u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00254E04u) [[unlikely]] return; }
L_00254E04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E10u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00254E10u) [[unlikely]] return; }
L_00254E10:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] - 1408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E20u);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x00254E20u) [[unlikely]] return; }
L_00254E20:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E2Cu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00254E2Cu) [[unlikely]] return; }
L_00254E2C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E3Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00254E3Cu) [[unlikely]] return; }
L_00254E3C:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254CC8u | kUnwind; return; } goto L_00254CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E54u);  if (depth < kMaxDepth) unit_004A(c, 108u, depth + 1u); else { c.pc = 0x002291F0u; return; } if (c.pc != 0x00254E54u) [[unlikely]] return; }
L_00254E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E5Cu);  if (depth < kMaxDepth) unit_004A(c, 115u, depth + 1u); else { c.pc = 0x00229348u; return; } if (c.pc != 0x00254E5Cu) [[unlikely]] return; }
L_00254E5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[12], 0u + 16u);
    set32(c.r[11], 0u + 8u);
    set32(c.r[10], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] - 1408u);
    c.budget -= 7;
L_00254E78:
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & 31ull;
    c.r[7].d[0] = c.r[5].d[0] & 224ull;
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[12].d[0];  if (t) { goto L_00254EBC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254EAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_00254EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254EE4; } }
L_00254EAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_00254ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254EE4; } }
L_00254EBC:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254EE4; } }
L_00254ECC:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254EE4; } }
L_00254EDC:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_00254EE4:
    set32(c.r[3], c.r[5].w[0] << 16);
    set32(c.r[2], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254E78u | kUnwind; return; } goto L_00254E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F20u);  if (depth < kMaxDepth) unit_0053(c, 215u, depth + 1u); else { c.pc = 0x0024E680u; return; } if (c.pc != 0x00254F20u) [[unlikely]] return; }
L_00254F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 18920u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[7].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 16u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F64u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00383A48u; return; } if (c.pc != 0x00254F64u) [[unlikely]] return; }
L_00254F64:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F70u);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00254F70u) [[unlikely]] return; }
L_00254F70:
    set32(c.r[5], c.r[21].w[0] - 1408u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F80u);  if (depth < kMaxDepth) unit_00A0(c, 278u, depth + 1u); else { c.pc = 0x00383C30u; return; } if (c.pc != 0x00254F80u) [[unlikely]] return; }
L_00254F80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F8Cu);  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x00254F8Cu) [[unlikely]] return; }
L_00254F8C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F9Cu);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382938u; return; } if (c.pc != 0x00254F9Cu) [[unlikely]] return; }
L_00254F9C:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00254FD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[22].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255014u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00255014u) [[unlikely]] return; }
L_00255014:
    set32(c.r[23], ld32((c.r[22].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_002550F4; } }
    set32(c.r[30], c.r[22].w[0] + 80u);
    c.budget -= 1;
L_00255028:
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00255048; } }
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00255074; } }
L_00255048:
    set32(c.r[16], c.r[18].w[0] + 224u);
    set32(c.r[17], c.r[18].w[0] + 240u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255060u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00255060u) [[unlikely]] return; }
L_00255060:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 64u), c.r[30].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002550AC; } }
L_00255074:
    set32(c.r[2], 0u + 448u);
    set32(c.r[3], ld32((c.r[22].w[0] + 24u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[18].w[0] + 240u);
    set32(c.r[2], c.r[18].w[0] + 224u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] + 240u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550A8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002550A8u) [[unlikely]] return; }
L_002550A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002550AC:
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[16], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002550BCu) [[unlikely]] return; }
L_002550BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002550D0u) [[unlikely]] return; }
L_002550D0:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550E4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002550E4u) [[unlikely]] return; }
L_002550E4:
    set32(c.r[18], c.r[18].w[0] + 448u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255028u | kUnwind; return; } goto L_00255028; } }
L_002550F4:
    set32(c.r[18], ld32((c.r[22].w[0] + 24u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_00255168; } }
    set32(c.r[4], c.r[22].w[0] + 80u);
    c.budget -= 1;
L_00255108:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 448u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00255154; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0025513C; } }
    st32((c.r[3].w[0] + 68u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255154; } }
    c.budget -= 1;
L_00255138:
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 1;
L_0025513C:
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255138u | kUnwind; return; } goto L_00255138; } }
    st32((c.r[5].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 1;
L_00255154:
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255108u | kUnwind; return; } goto L_00255108; } }
L_00255168:
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
L_002551A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[10], 0u + 44u);
    set32(c.r[9], ld32((c.r[2].w[0] - 18436u)));
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 4824u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[9].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255210u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00255210u) [[unlikely]] return; }
L_00255210:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255428; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255230u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x00255230u) [[unlikely]] return; }
L_00255230:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002552D0; } }
    set32(c.r[2], 0u + 464u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[17].w[0] + 21616u);
    set32(c.r[16], c.r[16].w[0] + 21688u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 5343u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255274u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00255274u) [[unlikely]] return; }
L_00255274:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025528Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0025528Cu) [[unlikely]] return; }
L_0025528C:
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 5351u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552B0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002552B0u) [[unlikely]] return; }
L_002552B0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552C8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002552C8u) [[unlikely]] return; }
L_002552C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002552D8; } }
L_002552D0:
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 44u), 0u);
    c.budget -= 2;
L_002552D8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00255330; } }
    set32(c.r[2], 0u + 448u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21688u);
    set32(c.r[9], 0u + 5372u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255310u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00255310u) [[unlikely]] return; }
L_00255310:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255328u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00255328u) [[unlikely]] return; }
L_00255328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255334; } }
L_00255330:
    st32((c.r[19].w[0] + 32u), 0u);
    c.budget -= 1;
L_00255334:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0025538C; } }
    set32(c.r[2], 0u + 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21688u);
    set32(c.r[9], 0u + 5391u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025536Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025536Cu) [[unlikely]] return; }
L_0025536C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255384u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00255384u) [[unlikely]] return; }
L_00255384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255390; } }
L_0025538C:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 1;
L_00255390:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002553E4; } }
    set32(c.r[18], c.r[30].w[0] << 5);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21688u);
    set32(c.r[9], 0u + 5410u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002553C4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002553C4u) [[unlikely]] return; }
L_002553C4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002553DCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002553DCu) [[unlikely]] return; }
L_002553DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002553E8; } }
L_002553E4:
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 1;
L_002553E8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00255424; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21688u);
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 5427u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255420u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00255420u) [[unlikely]] return; }
L_00255420:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00255424:
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_00255428:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00255460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[5].w[0] + 127u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[18].d[0] & c.r[3].d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[19].w[0] + 4132u), c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 4108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4104u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255520; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 2;
L_002554B0:
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554C0u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026CB00u; return; } if (c.pc != 0x002554C0u) [[unlikely]] return; }
L_002554C0:
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554D4u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0026CB40u; return; } if (c.pc != 0x002554D4u) [[unlikely]] return; }
L_002554D4:
    c.r[6].d[0] = ld16((c.r[21].w[0] - 18912u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554F8u);  if (depth < kMaxDepth) unit_005B(c, 65u, depth + 1u); else { c.pc = 0x0026CB20u; return; } if (c.pc != 0x002554F8u) [[unlikely]] return; }
L_002554F8:
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255510u);  if (depth < kMaxDepth) unit_005B(c, 67u, depth + 1u); else { c.pc = 0x0026CB60u; return; } if (c.pc != 0x00255510u) [[unlikely]] return; }
L_00255510:
    set32(c.r[2], ld32((c.r[19].w[0] + 4104u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002554B0u | kUnwind; return; } goto L_002554B0; } }
L_00255520:
    set32(c.r[16], ld32((c.r[19].w[0] + 4108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4104u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255580; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 1;
L_00255538:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255550u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00255550u) [[unlikely]] return; }
L_00255550:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025556Cu);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0025556Cu) [[unlikely]] return; }
L_0025556C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4104u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255538u | kUnwind; return; } goto L_00255538; } }
L_00255580:
    set32(c.r[17], ld32((c.r[19].w[0] + 4108u)));
    set32(c.r[21], c.r[18].w[0] + 127u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4104u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255610; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 2;
L_002555A0:
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555B0u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026CB00u; return; } if (c.pc != 0x002555B0u) [[unlikely]] return; }
L_002555B0:
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555C4u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0026CB40u; return; } if (c.pc != 0x002555C4u) [[unlikely]] return; }
L_002555C4:
    c.r[6].d[0] = ld16((c.r[20].w[0] - 18912u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[6], c.r[16].w[0] - c.r[6].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555E8u);  if (depth < kMaxDepth) unit_005B(c, 65u, depth + 1u); else { c.pc = 0x0026CB20u; return; } if (c.pc != 0x002555E8u) [[unlikely]] return; }
L_002555E8:
    set32(c.r[4], ld32((c.r[18].w[0] - 364u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255600u);  if (depth < kMaxDepth) unit_005B(c, 67u, depth + 1u); else { c.pc = 0x0026CB60u; return; } if (c.pc != 0x00255600u) [[unlikely]] return; }
L_00255600:
    set32(c.r[2], ld32((c.r[19].w[0] + 4104u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002555A0u | kUnwind; return; } goto L_002555A0; } }
L_00255610:
    set32(c.r[2], 0u - 128u);
    set32(c.r[16], ld32((c.r[19].w[0] + 4108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4104u)));
    c.r[18].d[0] = c.r[21].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4128u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255680; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 2;
L_00255638:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255650u);  if (depth < kMaxDepth) unit_005B(c, 129u, depth + 1u); else { c.pc = 0x0026D590u; return; } if (c.pc != 0x00255650u) [[unlikely]] return; }
L_00255650:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] - 364u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025566Cu);  if (depth < kMaxDepth) unit_005A(c, 35u, depth + 1u); else { c.pc = 0x00268648u; return; } if (c.pc != 0x0025566Cu) [[unlikely]] return; }
L_0025566C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4104u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255638u | kUnwind; return; } goto L_00255638; } }
L_00255680:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
L_002556B0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 24880u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 4208u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 14600u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 512u), c.f[20]);
    st32((c.r[16].w[0] + 28224u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255708u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00255708u) [[unlikely]] return; }
L_00255708:
    set32(c.r[3], ld32((c.r[16].w[0] + 28224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[29].w[0] + 228u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255730u);  if (depth < kMaxDepth) unit_0090(c, 199u, depth + 1u); else { c.pc = 0x00341E10u; return; } if (c.pc != 0x00255730u) [[unlikely]] return; }
L_00255730:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28224u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0025575C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0025574Cu);  goto L_00255750; }
L_00255750:
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 3;
L_0025575C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26432u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 244u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025577Cu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0025577Cu) [[unlikely]] return; }
L_0025577C:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[6], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[2].w[0] + 3588u), c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] - 18768u);
    set32(c.r[2], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[7].w[0] + 4108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 324u)));
    st32((c.r[7].w[0] + 4104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[30], c.r[29].w[0] + 128u);
    set32(c.r[10], c.r[29].w[0] + 156u);
    set32(c.r[14], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 268u), c.r[10].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 272u), c.r[14].w[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[10], c.r[29].w[0] + 192u);
    set32(c.r[14], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 288u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 296u), c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 300u), c.r[10].w[0]);
    set32(c.r[4], c.r[29].w[0] + 172u);
    st32((c.r[29].w[0] + 304u), c.r[14].w[0]);
    set32(c.r[23], c.r[29].w[0] + 132u);
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[22], c.r[29].w[0] + 136u);
    set32(c.r[5], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[21], c.r[29].w[0] + 140u);
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[20], c.r[29].w[0] + 144u);
    set32(c.r[10], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[19], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 204u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[14], c.r[14].w[0] + c.r[6].w[0]);
    set32(c.r[17], c.r[29].w[0] + 152u);
    set32(c.r[18], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 332u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[14].w[0]);
    c.budget -= 58;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002558C8; } }
    c.budget -= 1;
L_00255868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[16], c.r[2].w[0] - 18768u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558ACu);  if (depth < kMaxDepth) unit_005B(c, 179u, depth + 1u); else { c.pc = 0x0026DD90u; return; } if (c.pc != 0x002558ACu) [[unlikely]] return; }
L_002558AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 4120u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4100u), c.r[2].w[0]);
    c.budget -= 7;
L_002558C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558FCu);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x002558FCu) [[unlikely]] return; }
L_002558FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255868u | kUnwind; return; } goto L_00255868; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025591C; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[10].w[0] + 4104u)));
    st32((c.r[10].w[0] + 4100u), c.r[2].w[0]);
    c.budget -= 3;
L_0025591C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[14], c.r[14].w[0] + 2328u);
    st32((c.r[29].w[0] + 260u), c.r[14].w[0]);
    set32(c.r[2], c.r[2].w[0] + 528u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255984; } }
    c.budget -= 1;
L_00255948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[3].w[0] - 18768u);
    set32(c.r[4], ld32((c.r[5].w[0] - 364u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255984u);  if (depth < kMaxDepth) unit_005B(c, 181u, depth + 1u); else { c.pc = 0x0026DE10u; return; } if (c.pc != 0x00255984u) [[unlikely]] return; }
L_00255984:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 9u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    c.r[11].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559B8u);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x002559B8u) [[unlikely]] return; }
L_002559B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255948u | kUnwind; return; } goto L_00255948; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[19], c.r[2].w[0] - 18768u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[17], 0u + 10u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255A30; } }
L_002559E0:
    set32(c.r[5], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A10u);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026DDD0u; return; } if (c.pc != 0x00255A10u) [[unlikely]] return; }
L_00255A10:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.f[12] = ld32((c.r[29].w[0] + 196u));
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.f[14] = ld32((c.r[29].w[0] + 204u));
    c.f[15] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A30u);  if (depth < kMaxDepth) unit_005B(c, 191u, depth + 1u); else { c.pc = 0x0026DF80u; return; } if (c.pc != 0x00255A30u) [[unlikely]] return; }
L_00255A30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A60u);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x00255A60u) [[unlikely]] return; }
L_00255A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002559E0u | kUnwind; return; } goto L_002559E0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[5], ld32((c.r[7].w[0] - 18436u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], 0u + 200u);
    set32(c.r[3], ld32((c.r[10].w[0] - 18432u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[4].w[0] - 4828u), c.r[6].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[6].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[18], c.r[14].w[0] - 14960u);
    st32((c.r[6].w[0] + 36u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[6].w[0] + 3588u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AB0u);  if (depth < kMaxDepth) unit_0060(c, 260u, depth + 1u); else { c.pc = 0x00283C18u; return; } if (c.pc != 0x00255AB0u) [[unlikely]] return; }
L_00255AB0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u + 44u);
    set32(c.r[16], ld32((c.r[7].w[0] - 18436u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[10].w[0] - 4824u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
L_00255AD0:
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255ADCu);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x00255ADCu) [[unlikely]] return; }
L_00255ADC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AFCu);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x00255AFCu) [[unlikely]] return; }
L_00255AFC:
    set32(c.r[14], ld32((c.r[29].w[0] + 332u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 5u);
    set32(c.r[4], c.r[3].w[0] + 5u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B28u);  if (depth < kMaxDepth) unit_0055(c, 118u, depth + 1u); else { c.pc = 0x002551A0u; return; } if (c.pc != 0x00255B28u) [[unlikely]] return; }
L_00255B28:
    set32(c.r[4], ld32((c.r[29].w[0] + 328u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[13], c.r[7].w[0] + 13016u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 3028u)));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[10].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[7], c.r[14].w[0] + 21616u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[8], c.r[3].w[0] + 21712u);
    set32(c.r[10], ld32((c.r[2].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[9], 0u + 5815u);
    c.r[5].d[0] = c.r[5].d[0] | 49664ull;
    st32((c.r[14].w[0] + 24u), c.r[10].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[10], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[14].w[0] + 56u), c.r[10].w[0]);
    st32((c.r[14].w[0] + 52u), c.r[11].w[0]);
    st32((c.r[14].w[0] + 3608u), c.r[12].w[0]);
    st32((c.r[14].w[0] + 48u), c.r[11].w[0]);
    st32((c.r[14].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[14].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[14].w[0] + 64u), 0u);
    st32((c.r[14].w[0] + 3532u), 0u);
    st32((c.r[14].w[0] + 3536u), 0u);
    st32((c.r[14].w[0] + 3548u), 0u);
    st32((c.r[14].w[0] + 3540u), 0u);
    st32((c.r[14].w[0] + 3544u), 0u);
    st32((c.r[14].w[0] + 3528u), 0u);
    st32((c.r[14].w[0] + 3552u), 0u);
    st32((c.r[14].w[0] + 3576u), 0u);
    st32((c.r[13].w[0] + 4u), 0u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BD0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00255BD0u) [[unlikely]] return; }
L_00255BD0:
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[14].w[0] + 3672u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 49664ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 13016u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BF8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00255BF8u) [[unlikely]] return; }
L_00255BF8:
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[5], 0u + 10u);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C1Cu);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00255C1Cu) [[unlikely]] return; }
L_00255C1C:
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_00255C58; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 240u)));
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[10].w[0] + 346u);
    c.budget -= 3;
L_00255C40:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255C40u | kUnwind; return; } goto L_00255C40; } }
L_00255C58:
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[14].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[14].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00255DA0; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[19], 0u + 2u);
    c.budget -= 6;
L_00255C88:
    set32(c.r[16], c.r[17].w[0] + 432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 21736u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CA0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255CA0u) [[unlikely]] return; }
L_00255CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 21752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CBCu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255CBCu) [[unlikely]] return; }
L_00255CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 21768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CD8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255CD8u) [[unlikely]] return; }
L_00255CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 21776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CF4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255CF4u) [[unlikely]] return; }
L_00255CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[10].w[0] + 21792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D10u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255D10u) [[unlikely]] return; }
L_00255D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[23].w[0] + 21808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D28u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255D28u) [[unlikely]] return; }
L_00255D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + 21824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D40u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255D40u) [[unlikely]] return; }
L_00255D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 21840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D58u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255D58u) [[unlikely]] return; }
L_00255D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255D78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 21856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D70u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00255D70u) [[unlikely]] return; }
L_00255D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255D84; } }
L_00255D78:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 352u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    st64((c.r[17].w[0] + 352u), c.r[2].d[0]);
    c.budget -= 3;
L_00255D84:
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 448u);
    set32(c.r[2], ld32((c.r[14].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255C88u | kUnwind; return; } goto L_00255C88; } }
L_00255DA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00255FF4; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 348u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[4].w[0]);
    c.budget -= 4;
L_00255DC0:
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], c.r[30].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 264u), c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + 432u);
    st32((c.r[29].w[0] + 252u), c.r[18].w[0]);
    set32(c.r[6], 0u + 15u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DE8u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x00255DE8u) [[unlikely]] return; }
L_00255DE8:
    set32(c.r[7], ld32((c.r[29].w[0] + 240u)));
    st8((c.r[7].w[0] + 447u), static_cast<std::uint8_t>(0u));
    set32(c.r[14], c.r[7].w[0] + 240u);
    set32(c.r[2], c.r[7].w[0] + 448u);
    st32((c.r[29].w[0] + 336u), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[3], c.r[10].w[0] + 1u);
    set32(c.r[23], c.r[10].w[0] << 2);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.budget -= 10;
L_00255E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18748u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 18740u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00255E6C; } }
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[22], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255F08; } }
L_00255E6C:
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    set32(c.r[5], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00255F08; } }
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_00255EC0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255ED0u);  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x00255ED0u) [[unlikely]] return; }
L_00255ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255EF4; } }
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255EF4; } }
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00255EF4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255EC0u | kUnwind; return; } goto L_00255EC0; } }
L_00255F08:
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255E10u | kUnwind; return; } goto L_00255E10; } }
    c.f[1] = ld32((c.r[30].w[0] + 56u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[6].w[0] - 7152u);
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    set32(c.r[6], ld32((c.r[29].w[0] + 348u)));
    c.f[0] = ld32((c.r[30].w[0] + 60u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[30].w[0] + 64u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F48u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x00255F48u) [[unlikely]] return; }
L_00255F48:
    c.f[1] = ld32((c.r[30].w[0] + 44u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[5], c.r[7].w[0] + 21872u);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[30].w[0] + 48u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[30].w[0] + 52u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F74u);  if (depth < kMaxDepth) unit_00DE(c, 81u, depth + 1u); else { c.pc = 0x00478A70u; return; } if (c.pc != 0x00255F74u) [[unlikely]] return; }
L_00255F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255F90; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[10].w[0] + 347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255F98; } }
L_00255F90:
    set32(c.r[14], ld32((c.r[29].w[0] + 240u)));
    st8((c.r[14].w[0] + 347u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00255F98:
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00255FA8u) [[unlikely]] return; }
L_00255FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[4], c.r[4].w[0] - 12200u);
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], c.r[23].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[18], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 216u), c.r[7].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FE0u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00255FE0u) [[unlikely]] return; }
L_00255FE0:
    set32(c.r[10], ld32((c.r[29].w[0] + 224u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255DC0u | kUnwind; return; } goto L_00255DC0; } }
L_00255FF4:
    set32(c.r[14], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_0025605C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[16], c.r[16].w[0] - 27328u);
    set32(c.r[2], c.r[2].w[0] + c.r[14].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256028u);  if (depth < kMaxDepth) unit_0047(c, 273u, depth + 1u); else { c.pc = 0x0021FC78u; return; } if (c.pc != 0x00256028u) [[unlikely]] return; }
L_00256028:
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256040u);  if (depth < kMaxDepth) unit_0048(c, 220u, depth + 1u); else { c.pc = 0x00222F98u; return; } if (c.pc != 0x00256040u) [[unlikely]] return; }
L_00256040:
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], 0u + 448u);
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 7;
L_0025605C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28224u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 212u), c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025607Cu);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0025607Cu) [[unlikely]] return; }
L_0025607C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 228u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].sd[0] <= 0;  if (t) { goto L_0025629C; } }
    set32(c.r[14], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 348u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 4;
L_002560A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], c.r[30].w[0] + 80u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 320u), c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 432u);
    set32(c.r[6], 0u + 15u);
    st32((c.r[29].w[0] + 252u), c.r[18].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560C8u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x002560C8u) [[unlikely]] return; }
L_002560C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    st8((c.r[4].w[0] + 447u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[4].w[0] + 240u);
    set32(c.r[7], c.r[4].w[0] + 448u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 336u), c.r[6].w[0]);
    set32(c.r[10], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 340u), c.r[7].w[0]);
    set32(c.r[23], c.r[5].w[0] << 2);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 256u), c.r[10].w[0]);
    c.budget -= 14;
L_00256100:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 18748u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[2].w[0] + c.r[14].w[0]);
    set32(c.r[5], c.r[5].w[0] - 18740u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0025615C; } }
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[22], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256200; } }
L_0025615C:
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    set32(c.r[5], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00256200; } }
    set32(c.r[3], 0u + 7300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4208u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_002561B0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002561C0u);  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x002561C0u) [[unlikely]] return; }
L_002561C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002561EC; } }
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00256200; } }
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256200; } }
L_002561EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002561B0u | kUnwind; return; } goto L_002561B0; } }
L_00256200:
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256100u | kUnwind; return; } goto L_00256100; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[5], c.r[7].w[0] - 7152u);
    set32(c.r[18], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025622Cu);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0025622Cu) [[unlikely]] return; }
L_0025622C:
    set32(c.r[10], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 240u), c.r[10].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    c.f[1] = ld32((c.r[30].w[0] + 24u));
    st32((c.r[29].w[0] + 216u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    c.f[0] = ld32((c.r[30].w[0] + 28u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[30].w[0] + 32u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256264u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00256264u) [[unlikely]] return; }
L_00256264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[30].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 12200u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[23].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256288u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00256288u) [[unlikely]] return; }
L_00256288:
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002560A0u | kUnwind; return; } goto L_002560A0; } }
L_0025629C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[10], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[14], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] - c.r[14].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[10].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562DCu);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002562DCu) [[unlikely]] return; }
L_002562DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] - 18768u);
    set32(c.r[19], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002563D4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002563D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[22], c.r[2].w[0] - 4208u);
    set32(c.r[23], c.r[22].w[0] + 7300u);
    c.budget -= 4;
L_00256318:
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 252u), c.r[18].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_002563A4; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 216u)));
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 6;
L_00256350:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[30].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256360u);  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x00256360u) [[unlikely]] return; }
L_00256360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256390; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002563A4; } }
L_00256390:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256350u | kUnwind; return; } goto L_00256350; } }
L_002563A4:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[14], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], ld32((c.r[10].w[0] + 28224u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[29].w[0] + 216u), c.r[14].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563C0u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x002563C0u) [[unlikely]] return; }
L_002563C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256318u | kUnwind; return; } goto L_00256318; } }
L_002563D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] - 4208u);
    c.budget -= 3;
L_002563E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[16], c.r[16].w[0] + 7300u);
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256400u);  if (depth < kMaxDepth) unit_006B(c, 148u, depth + 1u); else { c.pc = 0x002AED48u; return; } if (c.pc != 0x00256400u) [[unlikely]] return; }
L_00256400:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002563E0u | kUnwind; return; } goto L_002563E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[5].w[0] - 3028u)));
    set32(c.r[16], c.r[6].w[0] - 12200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256428u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x00256428u) [[unlikely]] return; }
L_00256428:
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    st32((c.r[7].w[0] + 3584u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256454u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256454u) [[unlikely]] return; }
L_00256454:
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.r[21].d[0] = c.r[21].d[0] & c.r[3].d[0];
    set32(c.r[6], 0u + 600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256474u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256474u) [[unlikely]] return; }
L_00256474:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256484u);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x00256484u) [[unlikely]] return; }
L_00256484:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], c.r[10].w[0] + 24880u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564A0u);  if (depth < kMaxDepth) unit_0057(c, 171u, depth + 1u); else { c.pc = 0x0025E798u; return; } if (c.pc != 0x002564A0u) [[unlikely]] return; }
L_002564A0:
    set32(c.r[5], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], 0u + 464u);
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], ld32((c.r[14].w[0] + 32u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002564E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 220u)));
    c.r[5].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564E0u);  if (depth < kMaxDepth) unit_0047(c, 289u, depth + 1u); else { c.pc = 0x0021FFD0u; return; } if (c.pc != 0x002564E0u) [[unlikely]] return; }
L_002564E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564FCu);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002564FCu) [[unlikely]] return; }
L_002564FC:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00256650; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[23], 0u + 2u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[20], c.r[10].w[0] + 3556u);
    c.budget -= 4;
L_00256518:
    set32(c.r[14], 0u + 1u);
    st32((c.r[17].w[0] + 272u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 316u), c.r[21].w[0]);
    set32(c.r[19], c.r[30].w[0] + 80u);
    st32((c.r[17].w[0] + 20u), c.r[14].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 21880u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256548u);  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x00256548u) [[unlikely]] return; }
L_00256548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256568; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 20;
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 6;
L_00256568:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28224u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] >> 4);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565A0u);  if (depth < kMaxDepth) unit_0054(c, 80u, depth + 1u); else { c.pc = 0x00250FD0u; return; } if (c.pc != 0x002565A0u) [[unlikely]] return; }
L_002565A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[23].w[0]);
    set32(c.r[2], c.r[16].w[0] >> 5);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[5], c.r[22].w[0] + 21888u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565C0u);  if (depth < kMaxDepth) unit_00DE(c, 81u, depth + 1u); else { c.pc = 0x00478A70u; return; } if (c.pc != 0x002565C0u) [[unlikely]] return; }
L_002565C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025661C; } }
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 3548u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025661C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 3552u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025661C; } }
    set32(c.r[4], c.r[30].w[0] + 86u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565F8u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002565F8u) [[unlikely]] return; }
L_002565F8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[10].w[0] + 3552u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[10].w[0] + 3552u), c.r[2].w[0]);
    c.budget -= 9;
L_0025661C:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[14].w[0] + 28224u)));
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 464u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256644u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00256644u) [[unlikely]] return; }
L_00256644:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256518u | kUnwind; return; } goto L_00256518; } }
L_00256650:
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00256708; } }
    set32(c.r[22], 0u + 448u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00256678:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[20].w[0] + 21896u);
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + 432u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566A0u);  if (depth < kMaxDepth) unit_00DE(c, 81u, depth + 1u); else { c.pc = 0x00478A70u; return; } if (c.pc != 0x002566A0u) [[unlikely]] return; }
L_002566A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002566C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 21904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566B8u);  if (depth < kMaxDepth) unit_00DE(c, 81u, depth + 1u); else { c.pc = 0x00478A70u; return; } if (c.pc != 0x002566B8u) [[unlikely]] return; }
L_002566B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002566E8; } }
L_002566C0:
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002566E8; } }
    st32((c.r[17].w[0] + 124u), c.f[1]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    c.budget -= 2;
L_002566E8:
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 464u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256678u | kUnwind; return; } goto L_00256678; } }
L_00256708:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00256A88; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[20], c.r[6].w[0] + 3904u);
    set32(c.r[16], c.r[6].w[0] + 3872u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_00256728:
    set32(c.r[3], 0u + 464u);
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 448u);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    c.f[6] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[3] = ld32((c.r[17].w[0] + 96u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[4] = ld32((c.r[17].w[0] + 100u));
    c.f[5] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 240u));
    c.f[2] = ld32((c.r[6].w[0] + 244u));
    c.f[3] = fp::add(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[6].w[0] + 248u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256790; } }
    st32((c.r[16].w[0] + 48u), c.f[3]);
    c.budget -= 1;
L_00256790:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002567A8; } }
    st32((c.r[16].w[0] + 60u), c.f[3]);
    c.budget -= 1;
L_002567A8:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002567C0; } }
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.budget -= 1;
L_002567C0:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002567D8; } }
    st32((c.r[16].w[0] + 64u), c.f[2]);
    c.budget -= 1;
L_002567D8:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002567F0; } }
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.budget -= 1;
L_002567F0:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256808; } }
    st32((c.r[16].w[0] + 68u), c.f[1]);
    c.budget -= 1;
L_00256808:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    c.f[14] = ld32((c.r[16].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256834u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00256834u) [[unlikely]] return; }
L_00256834:
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = ld32((c.r[16].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256854u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00256854u) [[unlikely]] return; }
L_00256854:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256868u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00256868u) [[unlikely]] return; }
L_00256868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256880u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00256880u) [[unlikely]] return; }
L_00256880:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256894u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00256894u) [[unlikely]] return; }
L_00256894:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568A0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002568A0u) [[unlikely]] return; }
L_002568A0:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568C0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002568C0u) [[unlikely]] return; }
L_002568C0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568D4u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x002568D4u) [[unlikely]] return; }
L_002568D4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568E0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002568E0u) [[unlikely]] return; }
L_002568E0:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[4] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[10].w[0] + 240u));
    c.f[3] = ld32((c.r[10].w[0] + 248u));
    c.f[5] = fp::add(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[2] = ld32((c.r[10].w[0] + 244u));
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = fp::add(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256924; } }
    st32((c.r[16].w[0] + 48u), c.f[5]);
    c.budget -= 1;
L_00256924:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025693C; } }
    st32((c.r[16].w[0] + 60u), c.f[5]);
    c.budget -= 1;
L_0025693C:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256954; } }
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.budget -= 1;
L_00256954:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025696C; } }
    st32((c.r[16].w[0] + 64u), c.f[2]);
    c.budget -= 1;
L_0025696C:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256984; } }
    st32((c.r[16].w[0] + 56u), c.f[3]);
    c.budget -= 1;
L_00256984:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025699C; } }
    st32((c.r[16].w[0] + 68u), c.f[3]);
    c.budget -= 1;
L_0025699C:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[14] = ld32((c.r[16].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569C0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002569C0u) [[unlikely]] return; }
L_002569C0:
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = ld32((c.r[16].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002569E0u) [[unlikely]] return; }
L_002569E0:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569F4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002569F4u) [[unlikely]] return; }
L_002569F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A0Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00256A0Cu) [[unlikely]] return; }
L_00256A0C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A20u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00256A20u) [[unlikely]] return; }
L_00256A20:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A2Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00256A2Cu) [[unlikely]] return; }
L_00256A2C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A4Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00256A4Cu) [[unlikely]] return; }
L_00256A4C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A60u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x00256A60u) [[unlikely]] return; }
L_00256A60:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A6Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00256A6Cu) [[unlikely]] return; }
L_00256A6C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[14].w[0] + 56u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256728u | kUnwind; return; } goto L_00256728; } }
L_00256A88:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[30], 0u + 600u);
    set32(c.r[23], 0u + 600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AA0u);  if (depth < kMaxDepth) unit_006D(c, 14u, depth + 1u); else { c.pc = 0x002B44A8u; return; } if (c.pc != 0x00256AA0u) [[unlikely]] return; }
L_00256AA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[3].w[0] + 13016u);
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], c.r[4].w[0] - 18768u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[19], c.r[5].w[0] + 1728u);
    st32((c.r[5].w[0] + 3664u), c.r[21].w[0]);
    st32((c.r[5].w[0] + 3680u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    st32((c.r[5].w[0] + 3668u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 14;
L_00256AD8:
    mmi::mult(c, 0, c.r[17].w[0], c.r[30].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 4208u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], 0u + 7300u);
    set32(c.r[18], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + 1728u);
    mmi::madd(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 600u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B10u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00256B10u) [[unlikely]] return; }
L_00256B10:
    set32(c.r[22], c.r[17].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 18748u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00256BB8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00256BB8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 18724u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[10], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
L_00256B60:
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[10].d[0];  if (t) { goto L_00256BA0; } }
    set32(c.r[5], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00256B90; } }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256BA0; } }
L_00256B90:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00256BA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256B60u | kUnwind; return; } goto L_00256B60; } }
L_00256BB8:
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256AD8u | kUnwind; return; } goto L_00256AD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] - 18768u);
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00256C28; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00256BE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C08u);  if (depth < kMaxDepth) unit_0058(c, 28u, depth + 1u); else { c.pc = 0x00260520u; return; } if (c.pc != 0x00256C08u) [[unlikely]] return; }
L_00256C08:
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 3664u)));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256BE8u | kUnwind; return; } goto L_00256BE8; } }
L_00256C28:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[10].w[0] - 17344u);
    set32(c.r[6], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C44u);  if (depth < kMaxDepth) unit_005F(c, 241u, depth + 1u); else { c.pc = 0x0027E840u; return; } if (c.pc != 0x00256C44u) [[unlikely]] return; }
L_00256C44:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C54u);  if (depth < kMaxDepth) unit_0055(c, 132u, depth + 1u); else { c.pc = 0x00255460u; return; } if (c.pc != 0x00256C54u) [[unlikely]] return; }
L_00256C54:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    c.f[20] = ld32((c.r[29].w[0] + 512u));
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00256C90:
    set32(c.r[29], c.r[29].w[0] - 848u);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 688u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CDCu);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x00256CDCu) [[unlikely]] return; }
L_00256CDC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[17], c.r[20].w[0] + 528u);
    set32(c.r[6], 0u + 600u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CF8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256CF8u) [[unlikely]] return; }
L_00256CF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 24u);
    set32(c.r[6], 0u + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256D0Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256D0Cu) [[unlikely]] return; }
L_00256D0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], c.r[22].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - 18768u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00256DC4; } }
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00256D40:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00256D9C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00256D98; } }
L_00256D70:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00256D9C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256D70u | kUnwind; return; } goto L_00256D70; } }
L_00256D98:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00256D9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00256DB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DB0u);  if (depth < kMaxDepth) unit_006B(c, 189u, depth + 1u); else { c.pc = 0x002AF6B8u; return; } if (c.pc != 0x00256DB0u) [[unlikely]] return; }
L_00256DB0:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256D40u | kUnwind; return; } goto L_00256D40; } }
L_00256DC4:
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00256DE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256DEC; } }
L_00256DE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00256DEC:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[30].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E10u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x00256E10u) [[unlikely]] return; }
L_00256E10:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[20].w[0] + 528u);
    set32(c.r[6], 0u + 600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E24u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256E24u) [[unlikely]] return; }
L_00256E24:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E38u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00256E38u) [[unlikely]] return; }
L_00256E38:
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[23].w[0]));
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 688u));
    set32(c.r[29], c.r[29].w[0] + 848u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00256E70:
    set32(c.r[29], c.r[29].w[0] - 784u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[19]);
    c.r[25].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[17]);
    set32(c.r[13], c.r[19].w[0] + 528u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[30]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[20]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 624u), c.r[31].d[0]);
    c.budget -= 20;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_00256F44; } }
    set32(c.r[15], c.r[29].w[0] + 224u);
    set32(c.r[14], 0u - 2u);
    c.budget -= 2;
L_00256EC8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[21], c.r[17].w[0] + 1u);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_00256EE8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[14].w[0] - c.r[2].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[11].d[0];  if (t) { goto L_00256F10; } }
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256F2C; } }
L_00256F10:
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[10].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256EE8u | kUnwind; return; } goto L_00256EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.budget -= 2;
L_00256F2C:
    set32(c.r[3], c.r[15].w[0] + c.r[12].w[0]);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256EC8u | kUnwind; return; } goto L_00256EC8; } }
L_00256F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[22], c.r[7].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28224u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], 0u - 2u);
    set32(c.r[23], ld32((c.r[2].w[0] + 56u)));
    c.r[5].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 9;
L_00256F68:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[7].w[0] - c.r[2].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00256F90; } }
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256FAC; } }
L_00256F90:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[8].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256F68u | kUnwind; return; } goto L_00256F68; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[20].d[0] = c.r[20].d[0] | 16960ull;
    c.budget -= 2;
L_00256FAC:
    c.r[5].d[0] = c.r[13].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 2u);
    c.budget -= 3;
L_00256FB8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[7].w[0] - c.r[2].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00256FE0; } }
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256FFC; } }
L_00256FE0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[9].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256FB8u | kUnwind; return; } goto L_00256FB8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[18].d[0] = c.r[18].d[0] | 16960ull;
    c.budget -= 2;
L_00256FFC:
    set32(c.r[6], 0u + 464u);
    set32(c.r[8], 0u + 2u);
    mmi::mult(c, 0, c.r[25].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[4].w[0] - 18880u);
    c.r[5].d[0] = c.r[24].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0] + 316u), c.r[24].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025707Cu);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x0025707Cu) [[unlikely]] return; }
L_0025707C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257088u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00257088u) [[unlikely]] return; }
L_00257088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570A0u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002570A0u) [[unlikely]] return; }
L_002570A0:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_002572C0; } }
    c.budget -= 1;
L_002570B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[21], c.r[17].w[0] + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], ld32((c.r[19].w[0] + 32u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00257174; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00257120; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257174; } }
    c.budget -= 1;
L_00257120:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 464u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257174; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257120u | kUnwind; return; } goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257120u | kUnwind; return; } goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257120u | kUnwind; return; } goto L_00257120; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257120u | kUnwind; return; } goto L_00257120; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00257174:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0025729C; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 224u)));
    c.r[15].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[9].w[0] + 24u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    set32(c.r[16], c.r[29].w[0] + 224u);
    c.budget -= 10;
L_002571A8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[14], c.r[4].w[0] + 1u);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[13].d[0];  if (t) { goto L_0025722C; } }
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002571D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002571E4; } }
L_002571D8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025722C; } }
L_002571E4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_0025722C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00257224; } }
L_002571F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025722C; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002571F8u | kUnwind; return; } goto L_002571F8; } }
L_00257224:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0025722C:
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002571A8u | kUnwind; return; } goto L_002571A8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[8].d[0];  if (t) { goto L_0025729C; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0025729C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[5], c.r[30].w[0] << 16);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 28224u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[7].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] >> 4);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025729Cu);  if (depth < kMaxDepth) unit_0054(c, 32u, depth + 1u); else { c.pc = 0x00250450u; return; } if (c.pc != 0x0025729Cu) [[unlikely]] return; }
L_0025729C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572B0u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x002572B0u) [[unlikely]] return; }
L_002572B0:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002570B0u | kUnwind; return; } goto L_002570B0; } }
L_002572C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572D8u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x002572D8u) [[unlikely]] return; }
L_002572D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572E8u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002572E8u) [[unlikely]] return; }
L_002572E8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572FCu);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x002572FCu) [[unlikely]] return; }
L_002572FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025730Cu);  if (depth < kMaxDepth) unit_00A1(c, 99u, depth + 1u); else { c.pc = 0x00384FA0u; return; } if (c.pc != 0x0025730Cu) [[unlikely]] return; }
L_0025730C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257318u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00257318u) [[unlikely]] return; }
L_00257318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] - 18880u)));
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    set32(c.r[29], c.r[29].w[0] + 784u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00257358:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00257368:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
L_00257390:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_00257438; } }
    c.r[22].d[0] = 0ull | 40960ull;
    c.r[22].d[0] = c.r[22].d[0] << 24;
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[19], c.r[23].w[0] + 4u);
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
L_002573C0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 39;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257424; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257424; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00257418; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] - c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00257418; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257414u);  if (depth < kMaxDepth) unit_00DD(c, 44u, depth + 1u); else { c.pc = 0x00474718u; return; } if (c.pc != 0x00257414u) [[unlikely]] return; }
L_00257414:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00257418:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
L_00257424:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002573C0u | kUnwind; return; } goto L_002573C0; } }
L_00257438:
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_002574D8; } }
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[19], c.r[23].w[0] + 4u);
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
L_00257458:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 39;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002574C4; } }
    c.r[5].d[0] = 0ull | 40960ull;
    c.r[5].d[0] = c.r[5].d[0] << 24;
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002574C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002574B8; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] - c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002574B8; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002574B4u);  if (depth < kMaxDepth) unit_00DD(c, 44u, depth + 1u); else { c.pc = 0x00474718u; return; } if (c.pc != 0x002574B4u) [[unlikely]] return; }
L_002574B4:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002574B8:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
L_002574C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257458u | kUnwind; return; } goto L_00257458; } }
L_002574D8:
    set32(c.r[22], c.r[22].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257558; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_00257558; } }
    set32(c.r[6], c.r[22].w[0] - 1u);
    c.budget -= 1;
L_002574F8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00257548; } }
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00257510:
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[5].w[0] + 120u));
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257538; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 2;
L_00257538:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257510u | kUnwind; return; } goto L_00257510; } }
L_00257548:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002574F8u | kUnwind; return; } goto L_002574F8; } }
L_00257558:
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
L_00257590:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 25256u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[13], ld32((c.r[14].w[0] + 56u)));
    c.budget -= 14;
L_002575C8:
    st32((c.r[2].w[0] - 4u), 0u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002575C8u | kUnwind; return; } goto L_002575C8; } }
    set32(c.r[17], ld32((c.r[14].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].sd[0] <= 0;  if (t) { goto L_002576CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[11].d[0] = 0ull | 40960ull;
    c.r[11].d[0] = c.r[11].d[0] << 24;
    set32(c.r[6], c.r[2].w[0] + 25256u);
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 39;
    c.budget -= 6;
L_00257608:
    set32(c.r[10], c.r[7].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] + 464u);
    set32(c.r[4], c.r[6].w[0] + 8u);
    c.budget -= 4;
L_00257618:
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257668; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025765C; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025765C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257668; } }
L_0025765C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00257668:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257618u | kUnwind; return; } goto L_00257618; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002576AC; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002576AC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 524u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 524u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002576B8; } }
L_002576AC:
    set32(c.r[2], ld32((c.r[6].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 3;
L_002576B8:
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257608u | kUnwind; return; } goto L_00257608; } }
L_002576CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[2].w[0] + 25256u);
    c.budget -= 3;
L_002576D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 84u);
    c.budget -= 13;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002576D8u | kUnwind; return; } goto L_002576D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + 25256u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 5;
L_00257720:
    st32((c.r[2].w[0] - 4u), 0u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257720u | kUnwind; return; } goto L_00257720; } }
    set32(c.r[17], ld32((c.r[14].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].sd[0] <= 0;  if (t) { goto L_0025787C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[15], 0u + 464u);
    set32(c.r[8], c.r[2].w[0] + 25256u);
    c.r[12].d[0] = 0ull | 40960ull;
    c.r[12].d[0] = c.r[12].d[0] << 24;
    c.r[11].d[0] = 0ull | 32768ull;
    c.r[11].d[0] = c.r[11].d[0] << 39;
    c.budget -= 8;
L_00257768:
    mmi::mult(c, 0, c.r[7].w[0], c.r[15].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[14].w[0] + 32u)));
    set32(c.r[10], c.r[7].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] + 464u);
    set32(c.r[5], c.r[8].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 272u), c.r[7].w[0]);
    c.budget -= 8;
L_00257788:
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002577F8; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002577DC; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002577DC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] - 4u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002577F8; } }
L_002577DC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] - 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_002577F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257788u | kUnwind; return; } goto L_00257788; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 304u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025784C; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025784C; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 524u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 516u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[8].w[0] + 524u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257868; } }
L_0025784C:
    set32(c.r[2], ld32((c.r[8].w[0] + 520u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 512u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[8].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 7;
L_00257868:
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257768u | kUnwind; return; } goto L_00257768; } }
L_0025787C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[20], c.r[2].w[0] + 1408u);
    set32(c.r[16], c.r[3].w[0] + 25256u);
    set32(c.r[18], 0u + 32u);
    c.budget -= 5;
L_00257890:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578ACu);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x002578ACu) [[unlikely]] return; }
L_002578AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578BCu);  if (depth < kMaxDepth) unit_0055(c, 282u, depth + 1u); else { c.pc = 0x00257368u; return; } if (c.pc != 0x002578BCu) [[unlikely]] return; }
L_002578BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578D8u);  if (depth < kMaxDepth) unit_00DD(c, 258u, depth + 1u); else { c.pc = 0x00476E00u; return; } if (c.pc != 0x002578D8u) [[unlikely]] return; }
L_002578D8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257890u | kUnwind; return; } goto L_00257890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[2].w[0] + 25264u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[14], c.r[12].w[0] + 4u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 6;
L_002578F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[11], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002579C4; } }
    set32(c.r[6], c.r[4].w[0] << 4);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[12].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0025796C; } }
    set32(c.r[8], c.r[15].w[0] + 25256u);
    set32(c.r[10], c.r[8].w[0] + 8u);
    c.budget -= 3;
L_00257938:
    set32(c.r[2], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 276u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257938u | kUnwind; return; } goto L_00257938; } }
L_0025796C:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002579C4; } }
    set32(c.r[8], c.r[13].w[0] + 25260u);
    set32(c.r[9], c.r[8].w[0] + 8u);
    c.budget -= 3;
L_00257990:
    set32(c.r[2], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 276u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257990u | kUnwind; return; } goto L_00257990; } }
L_002579C4:
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002578F8u | kUnwind; return; } goto L_002578F8; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00257A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 7200u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], c.r[16].w[0] + 25784u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A30u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00257A30u) [[unlikely]] return; }
L_00257A30:
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + 3600u);
    c.budget -= 4;
L_00257A40:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3600u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257A40u | kUnwind; return; } goto L_00257A40; } }
    set32(c.r[6], c.r[24].w[0] + 25256u);
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + 8u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00257B28; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 3;
L_00257A88:
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    st32((c.r[4].w[0] + 276u), c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00257B0C; } }
    set32(c.r[9], c.r[14].w[0] + 25784u);
    set32(c.r[12], 0u + 20u);
    set32(c.r[11], c.r[9].w[0] + 4u);
    set32(c.r[10], 0u - 1u);
    c.budget -= 5;
L_00257AC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 444u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[10].d[0];  if (t) { goto L_00257AF0; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_00257AF0:
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 300u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257AC8u | kUnwind; return; } goto L_00257AC8; } }
L_00257B0C:
    set32(c.r[3], c.r[13].w[0] + c.r[15].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257A88u | kUnwind; return; } goto L_00257A88; } }
L_00257B28:
    set32(c.r[6], c.r[24].w[0] + 25256u);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 12u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00257BF8; } }
    set32(c.r[16], c.r[6].w[0] + 4u);
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 4;
L_00257B58:
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    st32((c.r[4].w[0] + 276u), c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00257BDC; } }
    set32(c.r[9], c.r[14].w[0] + 29384u);
    set32(c.r[12], 0u + 20u);
    set32(c.r[11], c.r[9].w[0] + 4u);
    set32(c.r[10], 0u - 1u);
    c.budget -= 5;
L_00257B98:
    set32(c.r[3], ld32((c.r[4].w[0] + 444u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[10].d[0];  if (t) { goto L_00257BC0; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_00257BC0:
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 300u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257B98u | kUnwind; return; } goto L_00257B98; } }
L_00257BDC:
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[15].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257B58u | kUnwind; return; } goto L_00257B58; } }
L_00257BF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00257C10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 30432u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0056(c, 2u, depth); } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 464u);
    c.budget -= 3;
L_00257C70:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257CB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 24880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C9Cu);  if (depth < kMaxDepth) unit_0090(c, 176u, depth + 1u); else { c.pc = 0x00341988u; return; } if (c.pc != 0x00257C9Cu) [[unlikely]] return; }
L_00257C9C:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 11296u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 6;
L_00257CB4:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[9], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257CE8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257CE8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257D18; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 34;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257D18:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[8], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257D4C; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 39;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257D4C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[7], 0u + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257D80; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 41;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257D80:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[6], 0u + 64u);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257DB4; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 42;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257DB4:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257DDC; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 6;
L_00257DDC:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E0C; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 7;
L_00257E0C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E3C; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 7;
L_00257E3C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E64; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 6;
L_00257E64:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E98; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 4144u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st64((c.r[18].w[0] + 4144u), c.r[3].d[0]);
    c.budget -= 9;
L_00257E98:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257EC0; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 6;
L_00257EC0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257EE8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 6;
L_00257EE8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257F14; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 7;
L_00257F14:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257F44; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 43;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257F44:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257F74; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 44;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257F74:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257FA4; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 45;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
L_00257FA4:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257FD0; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 312u), c.r[2].d[0]);
    c.budget -= 7;
L_00257FD0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 1u, depth); } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 37;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 8;
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}
