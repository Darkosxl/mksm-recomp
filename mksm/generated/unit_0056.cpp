#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201,
    202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 316, 0, 317, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 325, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00258000;
    case 2u: goto L_00258014;
    case 3u: goto L_00258018;
    case 4u: goto L_00258040;
    case 5u: goto L_00258110;
    case 6u: goto L_00258124;
    case 7u: goto L_00258134;
    case 8u: goto L_00258144;
    case 9u: goto L_00258160;
    case 10u: goto L_0025817C;
    case 11u: goto L_00258198;
    case 12u: goto L_002581A8;
    case 13u: goto L_002581C4;
    case 14u: goto L_00258220;
    case 15u: goto L_00258230;
    case 16u: goto L_00258254;
    case 17u: goto L_00258260;
    case 18u: goto L_00258268;
    case 19u: goto L_00258278;
    case 20u: goto L_00258368;
    case 21u: goto L_00258388;
    case 22u: goto L_0025839C;
    case 23u: goto L_002583B4;
    case 24u: goto L_002583C8;
    case 25u: goto L_002583D4;
    case 26u: goto L_002583F4;
    case 27u: goto L_00258408;
    case 28u: goto L_00258414;
    case 29u: goto L_00258578;
    case 30u: goto L_00258588;
    case 31u: goto L_002585A4;
    case 32u: goto L_002585B4;
    case 33u: goto L_002585F4;
    case 34u: goto L_0025863C;
    case 35u: goto L_00258654;
    case 36u: goto L_00258668;
    case 37u: goto L_00258684;
    case 38u: goto L_00258694;
    case 39u: goto L_002586B4;
    case 40u: goto L_002586B8;
    case 41u: goto L_002586CC;
    case 42u: goto L_00258704;
    case 43u: goto L_00258718;
    case 44u: goto L_0025873C;
    case 45u: goto L_0025874C;
    case 46u: goto L_0025875C;
    case 47u: goto L_00258770;
    case 48u: goto L_00258798;
    case 49u: goto L_002587A8;
    case 50u: goto L_002587C0;
    case 51u: goto L_002587D0;
    case 52u: goto L_00258814;
    case 53u: goto L_00258828;
    case 54u: goto L_00258844;
    case 55u: goto L_00258868;
    case 56u: goto L_00258878;
    case 57u: goto L_00258898;
    case 58u: goto L_002588E0;
    case 59u: goto L_00258934;
    case 60u: goto L_00258940;
    case 61u: goto L_00258998;
    case 62u: goto L_002589F0;
    case 63u: goto L_00258A0C;
    case 64u: goto L_00258A30;
    case 65u: goto L_00258A40;
    case 66u: goto L_00258A48;
    case 67u: goto L_00258A58;
    case 68u: goto L_00258A6C;
    case 69u: goto L_00258A88;
    case 70u: goto L_00258A98;
    case 71u: goto L_00258AA8;
    case 72u: goto L_00258AD8;
    case 73u: goto L_00258AE8;
    case 74u: goto L_00258B20;
    case 75u: goto L_00258B38;
    case 76u: goto L_00258B70;
    case 77u: goto L_00258BEC;
    case 78u: goto L_00258C20;
    case 79u: goto L_00258C44;
    case 80u: goto L_00258C58;
    case 81u: goto L_00258C68;
    case 82u: goto L_00258D60;
    case 83u: goto L_00258D80;
    case 84u: goto L_00258D94;
    case 85u: goto L_00258DAC;
    case 86u: goto L_00258DC0;
    case 87u: goto L_00258DCC;
    case 88u: goto L_00258DEC;
    case 89u: goto L_00258E00;
    case 90u: goto L_00258E0C;
    case 91u: goto L_00258F6C;
    case 92u: goto L_00258F80;
    case 93u: goto L_00258F94;
    case 94u: goto L_00258FA8;
    case 95u: goto L_00259010;
    case 96u: goto L_0025905C;
    case 97u: goto L_00259074;
    case 98u: goto L_00259088;
    case 99u: goto L_002590A8;
    case 100u: goto L_002590BC;
    case 101u: goto L_002590E0;
    case 102u: goto L_002590E8;
    case 103u: goto L_00259100;
    case 104u: goto L_00259138;
    case 105u: goto L_0025914C;
    case 106u: goto L_0025916C;
    case 107u: goto L_002591C0;
    case 108u: goto L_00259280;
    case 109u: goto L_002592D8;
    case 110u: goto L_002592F4;
    case 111u: goto L_00259328;
    case 112u: goto L_00259340;
    case 113u: goto L_00259358;
    case 114u: goto L_00259368;
    case 115u: goto L_00259384;
    case 116u: goto L_002593C0;
    case 117u: goto L_002593F8;
    case 118u: goto L_0025944C;
    case 119u: goto L_00259464;
    case 120u: goto L_0025948C;
    case 121u: goto L_002594AC;
    case 122u: goto L_002594B0;
    case 123u: goto L_002594C0;
    case 124u: goto L_002594DC;
    case 125u: goto L_0025950C;
    case 126u: goto L_00259528;
    case 127u: goto L_002595A8;
    case 128u: goto L_002595BC;
    case 129u: goto L_002595CC;
    case 130u: goto L_002595E4;
    case 131u: goto L_002595F0;
    case 132u: goto L_00259608;
    case 133u: goto L_0025964C;
    case 134u: goto L_00259680;
    case 135u: goto L_002596D4;
    case 136u: goto L_00259704;
    case 137u: goto L_00259714;
    case 138u: goto L_00259720;
    case 139u: goto L_0025972C;
    case 140u: goto L_00259768;
    case 141u: goto L_002597BC;
    case 142u: goto L_002597D0;
    case 143u: goto L_002597F0;
    case 144u: goto L_00259838;
    case 145u: goto L_00259850;
    case 146u: goto L_00259868;
    case 147u: goto L_00259878;
    case 148u: goto L_00259894;
    case 149u: goto L_002598C0;
    case 150u: goto L_002598F0;
    case 151u: goto L_0025995C;
    case 152u: goto L_00259990;
    case 153u: goto L_002599D0;
    case 154u: goto L_002599F0;
    case 155u: goto L_002599F8;
    case 156u: goto L_00259A08;
    case 157u: goto L_00259A24;
    case 158u: goto L_00259A50;
    case 159u: goto L_00259A6C;
    case 160u: goto L_00259ACC;
    case 161u: goto L_00259AE0;
    case 162u: goto L_00259AF0;
    case 163u: goto L_00259B08;
    case 164u: goto L_00259B14;
    case 165u: goto L_00259B30;
    case 166u: goto L_00259B74;
    case 167u: goto L_00259BA8;
    case 168u: goto L_00259BFC;
    case 169u: goto L_00259C2C;
    case 170u: goto L_00259C3C;
    case 171u: goto L_00259C48;
    case 172u: goto L_00259C54;
    case 173u: goto L_00259C90;
    case 174u: goto L_00259CE0;
    case 175u: goto L_00259D00;
    case 176u: goto L_00259D44;
    case 177u: goto L_00259D78;
    case 178u: goto L_00259D8C;
    case 179u: goto L_00259D9C;
    case 180u: goto L_00259DF0;
    case 181u: goto L_00259E3C;
    case 182u: goto L_00259E54;
    case 183u: goto L_00259E88;
    case 184u: goto L_00259EA4;
    case 185u: goto L_00259ECC;
    case 186u: goto L_00259EF4;
    case 187u: goto L_00259F14;
    case 188u: goto L_00259F30;
    case 189u: goto L_00259F6C;
    case 190u: goto L_00259F90;
    case 191u: goto L_00259FA8;
    case 192u: goto L_00259FD0;
    case 193u: goto L_00259FDC;
    case 194u: goto L_0025A000;
    case 195u: goto L_0025A04C;
    case 196u: goto L_0025A064;
    case 197u: goto L_0025A07C;
    case 198u: goto L_0025A0A0;
    case 199u: goto L_0025A0C8;
    case 200u: goto L_0025A0EC;
    case 201u: goto L_0025A0FC;
    case 202u: goto L_0025A100;
    case 203u: goto L_0025A108;
    case 204u: goto L_0025A110;
    case 205u: goto L_0025A138;
    case 206u: goto L_0025A144;
    case 207u: goto L_0025A178;
    case 208u: goto L_0025A1E4;
    case 209u: goto L_0025A210;
    case 210u: goto L_0025A240;
    case 211u: goto L_0025A26C;
    case 212u: goto L_0025A284;
    case 213u: goto L_0025A298;
    case 214u: goto L_0025A2BC;
    case 215u: goto L_0025A2F4;
    case 216u: goto L_0025A314;
    case 217u: goto L_0025A3E0;
    case 218u: goto L_0025A424;
    case 219u: goto L_0025A470;
    case 220u: goto L_0025A4A8;
    case 221u: goto L_0025A4DC;
    case 222u: goto L_0025A50C;
    case 223u: goto L_0025A538;
    case 224u: goto L_0025A568;
    case 225u: goto L_0025A588;
    case 226u: goto L_0025A5B8;
    case 227u: goto L_0025A5F8;
    case 228u: goto L_0025A624;
    case 229u: goto L_0025A644;
    case 230u: goto L_0025A660;
    case 231u: goto L_0025A6A0;
    case 232u: goto L_0025A6C8;
    case 233u: goto L_0025A6DC;
    case 234u: goto L_0025A6E4;
    case 235u: goto L_0025A700;
    case 236u: goto L_0025A710;
    case 237u: goto L_0025A730;
    case 238u: goto L_0025A750;
    case 239u: goto L_0025A784;
    case 240u: goto L_0025A7A8;
    case 241u: goto L_0025A800;
    case 242u: goto L_0025A838;
    case 243u: goto L_0025A8C8;
    case 244u: goto L_0025A8E8;
    case 245u: goto L_0025A924;
    case 246u: goto L_0025A978;
    case 247u: goto L_0025A9B0;
    case 248u: goto L_0025A9D8;
    case 249u: goto L_0025AA30;
    case 250u: goto L_0025AA68;
    case 251u: goto L_0025AAF0;
    case 252u: goto L_0025AB10;
    case 253u: goto L_0025AB4C;
    case 254u: goto L_0025AB90;
    case 255u: goto L_0025ABAC;
    case 256u: goto L_0025ABB8;
    case 257u: goto L_0025ABD8;
    case 258u: goto L_0025ABF8;
    case 259u: goto L_0025AC04;
    case 260u: goto L_0025AC28;
    case 261u: goto L_0025AC40;
    case 262u: goto L_0025AC64;
    case 263u: goto L_0025AC98;
    case 264u: goto L_0025ACC4;
    case 265u: goto L_0025ACD0;
    case 266u: goto L_0025ACF0;
    case 267u: goto L_0025AD00;
    case 268u: goto L_0025AD18;
    case 269u: goto L_0025AD24;
    case 270u: goto L_0025AD38;
    case 271u: goto L_0025AD48;
    case 272u: goto L_0025AD4C;
    case 273u: goto L_0025AD54;
    case 274u: goto L_0025AD5C;
    case 275u: goto L_0025AD74;
    case 276u: goto L_0025ADB8;
    case 277u: goto L_0025ADF4;
    case 278u: goto L_0025AE04;
    case 279u: goto L_0025AE14;
    case 280u: goto L_0025AE30;
    case 281u: goto L_0025AEE4;
    case 282u: goto L_0025AF00;
    case 283u: goto L_0025AF54;
    case 284u: goto L_0025AFA4;
    case 285u: goto L_0025B038;
    case 286u: goto L_0025B080;
    case 287u: goto L_0025B094;
    case 288u: goto L_0025B0B0;
    case 289u: goto L_0025B164;
    case 290u: goto L_0025B180;
    case 291u: goto L_0025B1D4;
    case 292u: goto L_0025B224;
    case 293u: goto L_0025B2C0;
    case 294u: goto L_0025B300;
    case 295u: goto L_0025B348;
    case 296u: goto L_0025B358;
    case 297u: goto L_0025B364;
    case 298u: goto L_0025B370;
    case 299u: goto L_0025B390;
    case 300u: goto L_0025B3E4;
    case 301u: goto L_0025B400;
    case 302u: goto L_0025B49C;
    case 303u: goto L_0025B4CC;
    case 304u: goto L_0025B4EC;
    case 305u: goto L_0025B508;
    case 306u: goto L_0025B544;
    case 307u: goto L_0025B564;
    case 308u: goto L_0025B594;
    case 309u: goto L_0025B5BC;
    case 310u: goto L_0025B5D4;
    case 311u: goto L_0025B608;
    case 312u: goto L_0025B618;
    case 313u: goto L_0025B63C;
    case 314u: goto L_0025B64C;
    case 315u: goto L_0025B660;
    case 316u: goto L_0025B664;
    case 317u: goto L_0025B66C;
    case 318u: goto L_0025B674;
    case 319u: goto L_0025B6C0;
    case 320u: goto L_0025B6CC;
    case 321u: goto L_0025B700;
    case 322u: goto L_0025B758;
    case 323u: goto L_0025B768;
    case 324u: goto L_0025B76C;
    case 325u: goto L_0025B774;
    case 326u: goto L_0025B77C;
    case 327u: goto L_0025B7A4;
    case 328u: goto L_0025B7B4;
    case 329u: goto L_0025B7BC;
    case 330u: goto L_0025B7C4;
    case 331u: goto L_0025B7CC;
    case 332u: goto L_0025B7F0;
    case 333u: goto L_0025B834;
    case 334u: goto L_0025B8B0;
    case 335u: goto L_0025B8F0;
    case 336u: goto L_0025B938;
    case 337u: goto L_0025B944;
    case 338u: goto L_0025B950;
    case 339u: goto L_0025B970;
    case 340u: goto L_0025B9C8;
    case 341u: goto L_0025B9D0;
    case 342u: goto L_0025BA48;
    case 343u: goto L_0025BA64;
    case 344u: goto L_0025BA6C;
    case 345u: goto L_0025BA84;
    case 346u: goto L_0025BA9C;
    case 347u: goto L_0025BAAC;
    case 348u: goto L_0025BACC;
    case 349u: goto L_0025BB20;
    case 350u: goto L_0025BB50;
    case 351u: goto L_0025BB70;
    case 352u: goto L_0025BCD0;
    case 353u: goto L_0025BD00;
    case 354u: goto L_0025BEB8;
    case 355u: goto L_0025BED0;
    default: bad_entry(c, 0x00258000u); return;
    }
L_00258000:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257C70u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 313u, depth); } }
L_00258014:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00258018:
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
L_00258040:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 320u), c.f[26]);
    st32((c.r[29].w[0] + 312u), c.f[25]);
    st32((c.r[29].w[0] + 304u), c.f[24]);
    st32((c.r[29].w[0] + 296u), c.f[23]);
    st32((c.r[29].w[0] + 288u), c.f[22]);
    st32((c.r[29].w[0] + 280u), c.f[21]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    st32((c.r[29].w[0] + 72u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[8].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002580EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[20].w[0] + 56u), c.f[0]);
    st32((c.r[20].w[0] + 68u), c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    st32((c.r[20].w[0] + 60u), c.f[1]);
    st32((c.r[20].w[0] + 64u), c.f[1]);
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 76u), 0u);
    st32((c.r[20].w[0] + 80u), 0u);
    c.budget -= 15;
L_002580EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258110u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x00258110u) [[unlikely]] return; }
L_00258110:
    st32((c.r[29].w[0] + 84u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258124u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00258124u) [[unlikely]] return; }
L_00258124:
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258134u);  if (depth < kMaxDepth) unit_00A1(c, 87u, depth + 1u); else { c.pc = 0x00384D68u; return; } if (c.pc != 0x00258134u) [[unlikely]] return; }
L_00258134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258144u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00258144u) [[unlikely]] return; }
L_00258144:
    set32(c.r[2], ld32((c.r[22].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00258920; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 104u), c.r[4].w[0]);
    c.budget -= 4;
L_00258160:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025817Cu);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x0025817Cu) [[unlikely]] return; }
L_0025817C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002581AC; } }
    c.budget -= 1;
L_00258198:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581A8u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002581A8u) [[unlikely]] return; }
L_002581A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002581AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002581F0; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581C4u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002581C4u) [[unlikely]] return; }
L_002581C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[22].w[0] + 444u)));
    set32(c.r[5], c.r[5].w[0] - 18768u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[4], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258198u | kUnwind; return; } goto L_00258198; } }
L_002581F0:
    set32(c.r[7], c.r[20].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[26] = c.r[1].w[0];
    set32(c.r[23], c.r[2].w[0] - 18880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[25] = c.r[1].w[0];
    c.f[24] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[1].w[0];
    st32((c.r[29].w[0] + 100u), c.r[7].w[0]);
    c.budget -= 12;
L_00258220:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258230u);  if (depth < kMaxDepth) unit_0054(c, 141u, depth + 1u); else { c.pc = 0x00251E60u; return; } if (c.pc != 0x00258230u) [[unlikely]] return; }
L_00258230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[4], c.r[2].w[0] - 18880u);
    c.r[5].d[0] = 0ull | 32772ull;
    set32(c.r[6], 0u + 109u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258254u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00258254u) [[unlikely]] return; }
L_00258254:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258260u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x00258260u) [[unlikely]] return; }
L_00258260:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00258268:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258284; } }
L_00258278:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258600; } }
L_00258284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.f[0] = ld32((c.r[3].w[0] + 28256u));
    set32(c.r[5], 0u + 6u);
    c.f[20] = ld32((c.r[18].w[0] + 4u));
    c.f[21] = ld32((c.r[18].w[0] + 8u));
    c.f[22] = ld32((c.r[18].w[0] + 12u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00258430; } }
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002582D0; } }
    st32((c.r[20].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_002582D0:
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002582E8; } }
    st32((c.r[20].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_002582E8:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258300; } }
    st32((c.r[20].w[0] + 52u), c.f[21]);
    c.budget -= 1;
L_00258300:
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258318; } }
    st32((c.r[20].w[0] + 64u), c.f[21]);
    c.budget -= 1;
L_00258318:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258330; } }
    st32((c.r[20].w[0] + 56u), c.f[22]);
    c.budget -= 1;
L_00258330:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258348; } }
    st32((c.r[20].w[0] + 68u), c.f[22]);
    c.budget -= 1;
L_00258348:
    c.f[12] = ld32((c.r[20].w[0] + 48u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258368u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00258368u) [[unlikely]] return; }
L_00258368:
    c.f[13] = ld32((c.r[20].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[20].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258388u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00258388u) [[unlikely]] return; }
L_00258388:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025839Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0025839Cu) [[unlikely]] return; }
L_0025839C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583B4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002583B4u) [[unlikely]] return; }
L_002583B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583C8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002583C8u) [[unlikely]] return; }
L_002583C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583D4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002583D4u) [[unlikely]] return; }
L_002583D4:
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583F4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002583F4u) [[unlikely]] return; }
L_002583F4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258408u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x00258408u) [[unlikely]] return; }
L_00258408:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258414u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00258414u) [[unlikely]] return; }
L_00258414:
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    set32(c.r[3], 0u + 6u);
    st32((c.r[20].w[0] + 72u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00258448; } }
L_00258430:
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258460; } }
L_00258448:
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    c.f[1] = fp::mul(c.f[1], c.f[25]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    c.budget -= 6;
L_00258460:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4097ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258488; } }
    c.r[3].d[0] = ld64((c.r[22].w[0] + 304u));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 304u), c.r[3].d[0]);
    c.budget -= 5;
L_00258488:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4097ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002584A8; } }
    c.r[3].d[0] = ld64((c.r[22].w[0] + 304u));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 304u), c.r[3].d[0]);
    c.budget -= 5;
L_002584A8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002584C4; } }
    c.f[20] = fp::sub(c.f[20], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002584C8; } }
L_002584C4:
    c.f[20] = fp::add(c.f[20], c.f[23]);
    c.budget -= 1;
L_002584C8:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002584E4; } }
    c.f[21] = fp::sub(c.f[21], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002584E8; } }
L_002584E4:
    c.f[21] = fp::add(c.f[21], c.f[23]);
    c.budget -= 1;
L_002584E8:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258504; } }
    c.f[22] = fp::sub(c.f[22], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258508; } }
L_00258504:
    c.f[22] = fp::add(c.f[22], c.f[23]);
    c.budget -= 1;
L_00258508:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[5], c.f[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[4], c.f[0]);
    set32(c.r[17], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025855C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258568; } }
L_0025855C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00258568:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258578u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258578u) [[unlikely]] return; }
L_00258578:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258588u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258588u) [[unlikely]] return; }
L_00258588:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585A4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002585A4u) [[unlikely]] return; }
L_002585A4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585B4u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x002585B4u) [[unlikely]] return; }
L_002585B4:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002585D0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002585D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585F4u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002585F4u) [[unlikely]] return; }
L_002585F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258278u | kUnwind; return; } goto L_00258278; } }
L_00258600:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[3], 0u + 78u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00258698; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00258698; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002586A4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025863Cu);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x0025863Cu) [[unlikely]] return; }
L_0025863C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258654u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258654u) [[unlikely]] return; }
L_00258654:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258668u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258668u) [[unlikely]] return; }
L_00258668:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002586A4; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], c.r[17].w[0] - 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258684u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258684u) [[unlikely]] return; }
L_00258684:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258694u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258694u) [[unlikely]] return; }
L_00258694:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00258698:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258724; } }
L_002586A4:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586B4u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x002586B4u) [[unlikely]] return; }
L_002586B4:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002586B8:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586CCu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002586CCu) [[unlikely]] return; }
L_002586CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002586F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002586F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002586B8u | kUnwind; return; } goto L_002586B8; } }
L_002586F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 28224u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258704u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258704u) [[unlikely]] return; }
L_00258704:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258718u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258718u) [[unlikely]] return; }
L_00258718:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 78ll ? 1ull : 0ull;
    c.budget -= 3;
L_00258724:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258268u | kUnwind; return; } goto L_00258268; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025873Cu);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x0025873Cu) [[unlikely]] return; }
L_0025873C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025874Cu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0025874Cu) [[unlikely]] return; }
L_0025874C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025875Cu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0025875Cu) [[unlikely]] return; }
L_0025875C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65280ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258770u);  if (depth < kMaxDepth) unit_00A1(c, 112u, depth + 1u); else { c.pc = 0x003852B8u; return; } if (c.pc != 0x00258770u) [[unlikely]] return; }
L_00258770:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], 0u + 736u);
    set32(c.r[5], 0u + 247u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258798u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00258798u) [[unlikely]] return; }
L_00258798:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002587A8u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x002587A8u) [[unlikely]] return; }
L_002587A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00258858; } }
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[19], 0u + 80u);
    c.budget -= 3;
L_002587C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002587D0u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002587D0u) [[unlikely]] return; }
L_002587D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258814u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258814u) [[unlikely]] return; }
L_00258814:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { goto L_00258844; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258828u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00258828u) [[unlikely]] return; }
L_00258828:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 33209ull;
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258844u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00258844u) [[unlikely]] return; }
L_00258844:
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002587C0u | kUnwind; return; } goto L_002587C0; } }
L_00258858:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[19], c.r[7].w[0] - 18768u);
    set32(c.r[17], c.r[2].w[0] << 5);
    c.budget -= 4;
L_00258868:
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258878u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258878u) [[unlikely]] return; }
L_00258878:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002588B4; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258898u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00258898u) [[unlikely]] return; }
L_00258898:
    set32(c.r[3], ld32((c.r[22].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258868u | kUnwind; return; } goto L_00258868; } }
L_002588B4:
    set32(c.r[3], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002588C0u);  goto L_002588C4; }
L_002588C4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588E0u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x002588E0u) [[unlikely]] return; }
L_002588E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 28260u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 28260u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258220u | kUnwind; return; } goto L_00258220; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 300u)));
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258160u | kUnwind; return; } goto L_00258160; } }
L_00258920:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[7].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258934u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00258934u) [[unlikely]] return; }
L_00258934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258940u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00258940u) [[unlikely]] return; }
L_00258940:
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
    c.f[26] = ld32((c.r[29].w[0] + 320u));
    c.f[25] = ld32((c.r[29].w[0] + 312u));
    c.f[24] = ld32((c.r[29].w[0] + 304u));
    c.f[23] = ld32((c.r[29].w[0] + 296u));
    c.f[22] = ld32((c.r[29].w[0] + 288u));
    c.f[21] = ld32((c.r[29].w[0] + 280u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00258998:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002589F0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002589F0u) [[unlikely]] return; }
L_002589F0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65280ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A0Cu);  if (depth < kMaxDepth) unit_00A1(c, 112u, depth + 1u); else { c.pc = 0x003852B8u; return; } if (c.pc != 0x00258A0Cu) [[unlikely]] return; }
L_00258A0C:
    set32(c.r[2], 0u + 725u);
    set32(c.r[5], 0u + 225u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[18].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 126u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A30u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00258A30u) [[unlikely]] return; }
L_00258A30:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A40u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258A40u) [[unlikely]] return; }
L_00258A40:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_00258B28; } }
L_00258A48:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A58u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258A58u) [[unlikely]] return; }
L_00258A58:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00258AA8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A6Cu);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x00258A6Cu) [[unlikely]] return; }
L_00258A6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A88u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x00258A88u) [[unlikely]] return; }
L_00258A88:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], c.r[23].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A98u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258A98u) [[unlikely]] return; }
L_00258A98:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AA8u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00258AA8u) [[unlikely]] return; }
L_00258AA8:
    set32(c.r[19], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00258AE8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[30].w[0] + 8u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AD8u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x00258AD8u) [[unlikely]] return; }
L_00258AD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AE8u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00258AE8u) [[unlikely]] return; }
L_00258AE8:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[5], c.r[19].w[0] << 24);
    set32(c.r[3], c.r[16].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] - 18880u);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B20u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258B20u) [[unlikely]] return; }
L_00258B20:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258A48u | kUnwind; return; } goto L_00258A48; } }
L_00258B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[2].w[0] - 18880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B38u);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x00258B38u) [[unlikely]] return; }
L_00258B38:
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
L_00258B70:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 320u)));
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[26]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.f[25]);
    set32(c.r[30], c.r[17].w[0] + 32u);
    st32((c.r[29].w[0] + 288u), c.f[24]);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st32((c.r[29].w[0] + 84u), c.r[10].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258BECu);  if (depth < kMaxDepth) unit_0054(c, 141u, depth + 1u); else { c.pc = 0x00251E60u; return; } if (c.pc != 0x00258BECu) [[unlikely]] return; }
L_00258BEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[26] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 4u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.r[5].d[0] = 0ull | 32772ull;
    set32(c.r[6], 0u + 109u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258C20u);  if (depth < kMaxDepth) unit_00A1(c, 101u, depth + 1u); else { c.pc = 0x00384FF8u; return; } if (c.pc != 0x00258C20u) [[unlikely]] return; }
L_00258C20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[25] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[24] = 0u;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258C44u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x00258C44u) [[unlikely]] return; }
L_00258C44:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00258C58:
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258C74; } }
L_00258C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259020; } }
L_00258C74:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[20] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 28256u));
    c.f[21] = ld32((c.r[19].w[0] + 8u));
    c.f[22] = ld32((c.r[19].w[0] + 12u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00258E14; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_00258E28; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258CC8; } }
    st32((c.r[17].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_00258CC8:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258CE0; } }
    st32((c.r[17].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_00258CE0:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258CF8; } }
    st32((c.r[17].w[0] + 52u), c.f[21]);
    c.budget -= 1;
L_00258CF8:
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258D10; } }
    st32((c.r[17].w[0] + 64u), c.f[21]);
    c.budget -= 1;
L_00258D10:
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258D28; } }
    st32((c.r[17].w[0] + 56u), c.f[22]);
    c.budget -= 1;
L_00258D28:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258D40; } }
    st32((c.r[17].w[0] + 68u), c.f[22]);
    c.budget -= 1;
L_00258D40:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258D60u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00258D60u) [[unlikely]] return; }
L_00258D60:
    c.f[13] = ld32((c.r[17].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[17].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258D80u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00258D80u) [[unlikely]] return; }
L_00258D80:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258D94u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00258D94u) [[unlikely]] return; }
L_00258D94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DACu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00258DACu) [[unlikely]] return; }
L_00258DAC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DC0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00258DC0u) [[unlikely]] return; }
L_00258DC0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DCCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00258DCCu) [[unlikely]] return; }
L_00258DCC:
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DECu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00258DECu) [[unlikely]] return; }
L_00258DEC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E00u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x00258E00u) [[unlikely]] return; }
L_00258E00:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E0Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00258E0Cu) [[unlikely]] return; }
L_00258E0C:
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 2;
L_00258E14:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00258E38; } }
L_00258E28:
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258E48; } }
L_00258E38:
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    c.f[1] = fp::mul(c.f[1], c.f[25]);
    c.budget -= 4;
L_00258E48:
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4097ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258E78; } }
    c.r[2].d[0] = ld64((c.r[23].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 31;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[23].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 5;
L_00258E78:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4097ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258E98; } }
    c.r[2].d[0] = ld64((c.r[23].w[0] + 304u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[23].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 5;
L_00258E98:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258EB4; } }
    c.f[20] = fp::sub(c.f[20], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258EB8; } }
L_00258EB4:
    c.f[20] = fp::add(c.f[20], c.f[23]);
    c.budget -= 1;
L_00258EB8:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258ED4; } }
    c.f[21] = fp::sub(c.f[21], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258ED8; } }
L_00258ED4:
    c.f[21] = fp::add(c.f[21], c.f[23]);
    c.budget -= 1;
L_00258ED8:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258EF4; } }
    c.f[22] = fp::sub(c.f[22], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258EF8; } }
L_00258EF4:
    c.f[22] = fp::add(c.f[22], c.f[23]);
    c.budget -= 1;
L_00258EF8:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[5], c.f[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.f[0] = fp::cvt_w_s(c.f[22]);
    set32(c.r[4], c.f[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258F4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258F58; } }
L_00258F4C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00258F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F6Cu);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258F6Cu) [[unlikely]] return; }
L_00258F6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F80u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258F80u) [[unlikely]] return; }
L_00258F80:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F94u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258F94u) [[unlikely]] return; }
L_00258F94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[5], 0u + 4096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258FA8u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003852D0u; return; } if (c.pc != 0x00258FA8u) [[unlikely]] return; }
L_00258FA8:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00258FE0; } }
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258FE0; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00258FE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258FFC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00258FFC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259010u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259010u) [[unlikely]] return; }
L_00259010:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258C68u | kUnwind; return; } goto L_00258C68; } }
L_00259020:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], 0u + 78u);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002590C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002590C0; } }
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[4].d[0];  if (t) { goto L_002590CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025905Cu);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x0025905Cu) [[unlikely]] return; }
L_0025905C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    set32(c.r[5], c.r[18].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259074u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00259074u) [[unlikely]] return; }
L_00259074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259088u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259088u) [[unlikely]] return; }
L_00259088:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002590CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[18].w[0] - 3u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590A8u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x002590A8u) [[unlikely]] return; }
L_002590A8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590BCu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002590BCu) [[unlikely]] return; }
L_002590BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002590C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259154; } }
L_002590CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590E0u);  if (depth < kMaxDepth) unit_0090(c, 120u, depth + 1u); else { c.pc = 0x00341170u; return; } if (c.pc != 0x002590E0u) [[unlikely]] return; }
L_002590E0:
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002590E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259100u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259100u) [[unlikely]] return; }
L_00259100:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259124; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259124; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002590E8u | kUnwind; return; } goto L_002590E8; } }
L_00259124:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259138u);  if (depth < kMaxDepth) unit_0090(c, 121u, depth + 1u); else { c.pc = 0x00341180u; return; } if (c.pc != 0x00259138u) [[unlikely]] return; }
L_00259138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025914Cu);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0025914Cu) [[unlikely]] return; }
L_0025914C:
    set32(c.r[3], c.r[22].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 78ll ? 1ull : 0ull;
    c.budget -= 2;
L_00259154:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258C58u | kUnwind; return; } goto L_00258C58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[3].w[0] - 18880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025916Cu);  if (depth < kMaxDepth) unit_00A1(c, 102u, depth + 1u); else { c.pc = 0x00385088u; return; } if (c.pc != 0x0025916Cu) [[unlikely]] return; }
L_0025916C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
    c.f[26] = ld32((c.r[29].w[0] + 304u));
    c.f[25] = ld32((c.r[29].w[0] + 296u));
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002591C0:
    set32(c.r[29], c.r[29].w[0] - 8272u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 8224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 8176u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 8160u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 8128u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 8256u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 8240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 8208u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 8192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 8144u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 8112u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    st32((c.r[29].w[0] + 8060u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8064u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 8068u), 0u);
    st32((c.r[29].w[0] + 8076u), 0u);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00259258; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[22].w[0] + 56u), c.f[0]);
    st32((c.r[22].w[0] + 68u), c.f[1]);
    st32((c.r[22].w[0] + 48u), c.f[0]);
    st32((c.r[22].w[0] + 52u), c.f[0]);
    st32((c.r[22].w[0] + 60u), c.f[1]);
    st32((c.r[22].w[0] + 64u), c.f[1]);
    st32((c.r[22].w[0] + 72u), 0u);
    st32((c.r[22].w[0] + 76u), 0u);
    st32((c.r[22].w[0] + 80u), 0u);
    c.budget -= 15;
L_00259258:
    set32(c.r[2], ld32((c.r[29].w[0] + 8060u)));
    set32(c.r[4], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[16].w[0] - 18880u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8064u)));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259280u);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x00259280u) [[unlikely]] return; }
L_00259280:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[8], 0u + 32u);
    c.r[3].d[0] = ld64((c.r[7].w[0] - 18848u));
    c.r[6].d[0] = 0ull | 64512ull;
    c.r[6].d[0] = c.r[6].d[0] << 17;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 15;
    c.r[6].d[0] = c.r[6].d[0] | 32767ull;
    st32((c.r[29].w[0] + 8072u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] >> 47;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 47;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[7].w[0] - 18848u), c.r[3].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592D8u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x002592D8u) [[unlikely]] return; }
L_002592D8:
    set32(c.r[16], ld32((c.r[16].w[0] - 18880u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8080u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592F4u);  if (depth < kMaxDepth) unit_00A1(c, 93u, depth + 1u); else { c.pc = 0x00384E40u; return; } if (c.pc != 0x002592F4u) [[unlikely]] return; }
L_002592F4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 4016u);
    set32(c.r[6], c.r[29].w[0] + 8016u);
    st32((c.r[29].w[0] + 8096u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8100u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8104u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 300u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00259590; } }
    set32(c.r[2], c.r[29].w[0] + 8048u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 8108u), c.r[2].w[0]);
    c.budget -= 4;
L_00259328:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 8048u);
    set32(c.r[7], ld32((c.r[30].w[0] + 8u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259340u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x00259340u) [[unlikely]] return; }
L_00259340:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 8072u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 8088u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025936C; } }
L_00259358:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259368u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259368u) [[unlikely]] return; }
L_00259368:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025936C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00259578; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259384u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259384u) [[unlikely]] return; }
L_00259384:
    set32(c.r[4], ld32((c.r[29].w[0] + 8072u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    set32(c.r[5], c.r[5].w[0] - 18768u);
    set32(c.r[3], c.r[4].w[0] << 5);
    st32((c.r[29].w[0] + 8092u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259358u | kUnwind; return; } goto L_00259358; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[18], c.r[23].w[0] - 18880u);
    c.budget -= 3;
L_002593C0:
    set32(c.r[2], ld32((c.r[23].w[0] - 18880u)));
    set32(c.r[6], c.r[19].w[0] + 1u);
    set32(c.r[3], 0u - 16u);
    st32((c.r[29].w[0] + 8084u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[17], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[7], c.r[29].w[0] + 8052u);
    set32(c.r[5], c.r[29].w[0] + 8056u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259414; } }
L_002593F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002593F8u | kUnwind; return; } goto L_002593F8; } }
L_00259414:
    set32(c.r[4], ld32((c.r[29].w[0] + 8096u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[23].w[0] - 18880u)));
    c.r[10].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 8064u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 8072u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8060u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025944Cu);  if (depth < kMaxDepth) unit_0056(c, 76u, depth + 1u); else { c.pc = 0x00258B70u; return; } if (c.pc != 0x0025944Cu) [[unlikely]] return; }
L_0025944C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259464u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x00259464u) [[unlikely]] return; }
L_00259464:
    set32(c.r[6], ld32((c.r[29].w[0] + 8100u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[23].w[0] - 18880u)));
    set32(c.r[19], c.r[5].w[0] - 18768u);
    set32(c.r[2], c.r[6].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025948Cu);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x0025948Cu) [[unlikely]] return; }
L_0025948C:
    set32(c.r[4], ld32((c.r[29].w[0] + 8052u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 8056u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8068u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594ACu);  if (depth < kMaxDepth) unit_0056(c, 61u, depth + 1u); else { c.pc = 0x00258998u; return; } if (c.pc != 0x002594ACu) [[unlikely]] return; }
L_002594AC:
    c.budget -= 1;
L_002594B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594C0u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x002594C0u) [[unlikely]] return; }
L_002594C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025952C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594DCu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x002594DCu) [[unlikely]] return; }
L_002594DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 8092u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002594B0u | kUnwind; return; } goto L_002594B0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025950Cu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x0025950Cu) [[unlikely]] return; }
L_0025950C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0025952C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259528u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259528u) [[unlikely]] return; }
L_00259528:
    st32((c.r[29].w[0] + 8076u), c.r[2].w[0]);
    c.budget -= 1;
L_0025952C:
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00259538u);  goto L_0025953C; }
L_0025953C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8068u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 8052u)));
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 8084u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 8068u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002593C0u | kUnwind; return; } goto L_002593C0; } }
L_00259578:
    set32(c.r[4], ld32((c.r[29].w[0] + 8088u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 300u)));
    st32((c.r[29].w[0] + 8072u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259328u | kUnwind; return; } goto L_00259328; } }
L_00259590:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[5].w[0] - 18880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595A8u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x002595A8u) [[unlikely]] return; }
L_002595A8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595BCu);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x002595BCu) [[unlikely]] return; }
L_002595BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 8080u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 8104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595CCu);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x002595CCu) [[unlikely]] return; }
L_002595CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8104u)));
    set32(c.r[5], ld32((c.r[6].w[0] - 18880u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595E4u);  if (depth < kMaxDepth) unit_00A1(c, 93u, depth + 1u); else { c.pc = 0x00384E40u; return; } if (c.pc != 0x002595E4u) [[unlikely]] return; }
L_002595E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595F0u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x002595F0u) [[unlikely]] return; }
L_002595F0:
    set32(c.r[3], c.r[19].w[0] - 1u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0025968C; } }
    set32(c.r[19], ld32((c.r[29].w[0] + 8096u)));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00259608:
    set32(c.r[3], ld32((c.r[29].w[0] + 8100u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025964Cu);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x0025964Cu) [[unlikely]] return; }
L_0025964C:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259680u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259680u) [[unlikely]] return; }
L_00259680:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259608u | kUnwind; return; } goto L_00259608; } }
L_0025968C:
    set32(c.r[5], ld32((c.r[29].w[0] + 8100u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[6], ld32((c.r[29].w[0] + 8096u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - 18880u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002596D4u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x002596D4u) [[unlikely]] return; }
L_002596D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] - 18880u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259704u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259704u) [[unlikely]] return; }
L_00259704:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259714u);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00259714u) [[unlikely]] return; }
L_00259714:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259720u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00259720u) [[unlikely]] return; }
L_00259720:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025972Cu);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x0025972Cu) [[unlikely]] return; }
L_0025972C:
    ld128((c.r[29].w[0] + 8256u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 8240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 8224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 8208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 8192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 8176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 8160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 8144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 8128u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8112u));
    set32(c.r[29], c.r[29].w[0] + 8272u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00259768:
    set32(c.r[29], c.r[29].w[0] - 8272u);
    st128((c.r[29].w[0] + 8160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 8256u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 8224u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 8128u) & ~15u, c.r[30]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 8240u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 8144u) & ~15u, c.r[23]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 8208u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[16].w[0] - 18880u);
    st128((c.r[29].w[0] + 8192u) & ~15u, c.r[20]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 8176u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 8112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8060u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597BCu);  if (depth < kMaxDepth) unit_0054(c, 79u, depth + 1u); else { c.pc = 0x00250E38u; return; } if (c.pc != 0x002597BCu) [[unlikely]] return; }
L_002597BC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 8064u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597D0u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x002597D0u) [[unlikely]] return; }
L_002597D0:
    set32(c.r[16], ld32((c.r[16].w[0] - 18880u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 8068u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8072u), c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597F0u);  if (depth < kMaxDepth) unit_00A1(c, 93u, depth + 1u); else { c.pc = 0x00384E40u; return; } if (c.pc != 0x002597F0u) [[unlikely]] return; }
L_002597F0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[29].w[0] + 4016u);
    set32(c.r[4], c.r[29].w[0] + 8016u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 8104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8088u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8084u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 300u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00259AB4; } }
    set32(c.r[5], c.r[29].w[0] + 8048u);
    set32(c.r[2], c.r[29].w[0] + 8052u);
    set32(c.r[3], c.r[29].w[0] + 8056u);
    st32((c.r[29].w[0] + 8092u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8096u), c.r[2].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[29].w[0] + 8100u), c.r[3].w[0]);
    c.budget -= 8;
L_00259838:
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 8048u);
    set32(c.r[7], ld32((c.r[30].w[0] + 8u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259850u);  if (depth < kMaxDepth) unit_0090(c, 281u, depth + 1u); else { c.pc = 0x003431B8u; return; } if (c.pc != 0x00259850u) [[unlikely]] return; }
L_00259850:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[23].w[0] + 1u);
    st32((c.r[29].w[0] + 8080u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025987C; } }
    c.budget -= 1;
L_00259868:
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259878u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259878u) [[unlikely]] return; }
L_00259878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025987C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002598BC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259894u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259894u) [[unlikely]] return; }
L_00259894:
    set32(c.r[6], ld32((c.r[22].w[0] + 444u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[5].w[0] - 18768u);
    set32(c.r[3], c.r[23].w[0] << 5);
    set32(c.r[4], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259868u | kUnwind; return; } goto L_00259868; } }
L_002598BC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 1;
L_002598C0:
    set32(c.r[2], ld32((c.r[20].w[0] - 18880u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[4], 0u - 16u);
    st32((c.r[29].w[0] + 8076u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[19], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025991C; } }
L_002598F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 18880u);
    set32(c.r[4], c.r[4].w[0] - 18880u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002598F0u | kUnwind; return; } goto L_002598F0; } }
L_0025991C:
    set32(c.r[5], ld32((c.r[29].w[0] + 8084u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] - 18880u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[5].w[0] + c.r[19].w[0]);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 8096u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = c.r[30].d[0] + 0ull;
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 8100u)));
    set32(c.r[18], c.r[20].w[0] - 18880u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025995Cu);  if (depth < kMaxDepth) unit_0056(c, 76u, depth + 1u); else { c.pc = 0x00258B70u; return; } if (c.pc != 0x0025995Cu) [[unlikely]] return; }
L_0025995C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 16u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    st32((c.r[20].w[0] - 18880u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002599AC; } }
L_00259990:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259990u | kUnwind; return; } goto L_00259990; } }
L_002599AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 8104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x17000000u);
    set32(c.r[3], ld32((c.r[20].w[0] - 18880u)));
    set32(c.r[2], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[23].w[0] << 5);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] - 18880u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599D0u);  if (depth < kMaxDepth) unit_00A1(c, 111u, depth + 1u); else { c.pc = 0x003852A0u; return; } if (c.pc != 0x002599D0u) [[unlikely]] return; }
L_002599D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 8052u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 8056u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8064u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 8060u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599F0u);  if (depth < kMaxDepth) unit_0056(c, 61u, depth + 1u); else { c.pc = 0x00258998u; return; } if (c.pc != 0x002599F0u) [[unlikely]] return; }
L_002599F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[18], c.r[2].w[0] - 18768u);
    c.budget -= 2;
L_002599F8:
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A08u);  if (depth < kMaxDepth) unit_0090(c, 284u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00259A08u) [[unlikely]] return; }
L_00259A08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00259A70; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A24u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259A24u) [[unlikely]] return; }
L_00259A24:
    set32(c.r[3], ld32((c.r[22].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002599F8u | kUnwind; return; } goto L_002599F8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A50u);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259A50u) [[unlikely]] return; }
L_00259A50:
    set32(c.r[5], ld32((c.r[29].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00259A70; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28224u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A6Cu);  if (depth < kMaxDepth) unit_0090(c, 193u, depth + 1u); else { c.pc = 0x00341D30u; return; } if (c.pc != 0x00259A6Cu) [[unlikely]] return; }
L_00259A6C:
    st32((c.r[29].w[0] + 8068u), c.r[2].w[0]);
    c.budget -= 1;
L_00259A70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8064u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], ld32((c.r[29].w[0] + 8076u)));
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8064u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 28260u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002598C0u | kUnwind; return; } goto L_002598C0; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 300u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 8080u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259838u | kUnwind; return; } goto L_00259838; } }
L_00259AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] - 18880u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259ACCu);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00259ACCu) [[unlikely]] return; }
L_00259ACC:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AE0u);  if (depth < kMaxDepth) unit_00A1(c, 109u, depth + 1u); else { c.pc = 0x00385220u; return; } if (c.pc != 0x00259AE0u) [[unlikely]] return; }
L_00259AE0:
    set32(c.r[5], ld32((c.r[29].w[0] + 8072u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 8088u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AF0u);  if (depth < kMaxDepth) unit_00A1(c, 86u, depth + 1u); else { c.pc = 0x00384D58u; return; } if (c.pc != 0x00259AF0u) [[unlikely]] return; }
L_00259AF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8088u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 18880u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B08u);  if (depth < kMaxDepth) unit_00A1(c, 93u, depth + 1u); else { c.pc = 0x00384E40u; return; } if (c.pc != 0x00259B08u) [[unlikely]] return; }
L_00259B08:
    set32(c.r[4], ld32((c.r[29].w[0] + 8088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B14u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00259B14u) [[unlikely]] return; }
L_00259B14:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00259BB4; } }
    set32(c.r[19], ld32((c.r[29].w[0] + 8084u)));
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00259B30:
    set32(c.r[5], ld32((c.r[29].w[0] + 8104u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B74u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259B74u) [[unlikely]] return; }
L_00259B74:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BA8u);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259BA8u) [[unlikely]] return; }
L_00259BA8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259B30u | kUnwind; return; } goto L_00259B30; } }
L_00259BB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8104u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 8084u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] - 18880u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BFCu);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259BFCu) [[unlikely]] return; }
L_00259BFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] - 18880u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C2Cu);  if (depth < kMaxDepth) unit_00A1(c, 95u, depth + 1u); else { c.pc = 0x00384EB0u; return; } if (c.pc != 0x00259C2Cu) [[unlikely]] return; }
L_00259C2C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C3Cu);  if (depth < kMaxDepth) unit_00A1(c, 97u, depth + 1u); else { c.pc = 0x00384F48u; return; } if (c.pc != 0x00259C3Cu) [[unlikely]] return; }
L_00259C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C48u);  if (depth < kMaxDepth) unit_00A1(c, 88u, depth + 1u); else { c.pc = 0x00384D78u; return; } if (c.pc != 0x00259C48u) [[unlikely]] return; }
L_00259C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C54u);  if (depth < kMaxDepth) unit_00A1(c, 90u, depth + 1u); else { c.pc = 0x00384DD0u; return; } if (c.pc != 0x00259C54u) [[unlikely]] return; }
L_00259C54:
    ld128((c.r[29].w[0] + 8256u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 8240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 8224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 8208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 8192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 8176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 8160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 8144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 8128u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8112u));
    set32(c.r[29], c.r[29].w[0] + 8272u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00259C90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 8u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 13460u), 0u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CE0u);  if (depth < kMaxDepth) unit_005B(c, 94u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x00259CE0u) [[unlikely]] return; }
L_00259CE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00259DB8; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[23], 0u + 448u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00259D00:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[17], c.r[3].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 312u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259DA0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[21].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[22].w[0] - 23144u)));
    st32((c.r[6].w[0] + 13460u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0] + 13464u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D44u);  if (depth < kMaxDepth) unit_005B(c, 94u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x00259D44u) [[unlikely]] return; }
L_00259D44:
    set32(c.r[4], ld32((c.r[21].w[0] - 364u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 444u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259D78u) [[unlikely]] return; }
L_00259D78:
    set32(c.r[4], ld32((c.r[21].w[0] - 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D8Cu);  if (depth < kMaxDepth) unit_005B(c, 119u, depth + 1u); else { c.pc = 0x0026D298u; return; } if (c.pc != 0x00259D8Cu) [[unlikely]] return; }
L_00259D8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 444u)));
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D9Cu);  if (depth < kMaxDepth) unit_004E(c, 20u, depth + 1u); else { c.pc = 0x00238FF8u; return; } if (c.pc != 0x00259D9Cu) [[unlikely]] return; }
L_00259D9C:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_00259DA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 464u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259D00u | kUnwind; return; } goto L_00259D00; } }
L_00259DB8:
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
L_00259DF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 24880u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[18], c.r[18].w[0] - 14960u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[20].w[0] + 28224u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E3Cu);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x00259E3Cu) [[unlikely]] return; }
L_00259E3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E54u);  if (depth < kMaxDepth) unit_0090(c, 48u, depth + 1u); else { c.pc = 0x00340420u; return; } if (c.pc != 0x00259E54u) [[unlikely]] return; }
L_00259E54:
    set32(c.r[2], ld32((c.r[20].w[0] + 28224u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[4].w[0] - 26432u);
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + c.r[8].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E88u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00259E88u) [[unlikely]] return; }
L_00259E88:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 3588u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259EA4u);  if (depth < kMaxDepth) unit_0060(c, 265u, depth + 1u); else { c.pc = 0x00283CA8u; return; } if (c.pc != 0x00259EA4u) [[unlikely]] return; }
L_00259EA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], ld32((c.r[19].w[0] - 18436u)));
    set32(c.r[6], ld32((c.r[3].w[0] - 18432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[2].w[0] - 4828u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[21].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259ECCu);  if (depth < kMaxDepth) unit_0060(c, 260u, depth + 1u); else { c.pc = 0x00283C18u; return; } if (c.pc != 0x00259ECCu) [[unlikely]] return; }
L_00259ECC:
    set32(c.r[16], ld32((c.r[19].w[0] - 18436u)));
    set32(c.r[4], 0u + 44u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 4824u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259EF4u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x00259EF4u) [[unlikely]] return; }
L_00259EF4:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F14u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x00259F14u) [[unlikely]] return; }
L_00259F14:
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F30u);  if (depth < kMaxDepth) unit_0055(c, 118u, depth + 1u); else { c.pc = 0x002551A0u; return; } if (c.pc != 0x00259F30u) [[unlikely]] return; }
L_00259F30:
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[21].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[21].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 64u), 0u);
    st32((c.r[21].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[21].w[0] + 3608u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F6Cu);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x00259F6Cu) [[unlikely]] return; }
L_00259F6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[8], ld32((c.r[3].w[0] - 22504u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 220u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F90u);  if (depth < kMaxDepth) unit_0055(c, 312u, depth + 1u); else { c.pc = 0x00257C10u; return; } if (c.pc != 0x00259F90u) [[unlikely]] return; }
L_00259F90:
    set32(c.r[5], ld32((c.r[20].w[0] + 28224u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259FA8u);  if (depth < kMaxDepth) unit_0057(c, 97u, depth + 1u); else { c.pc = 0x0025D4D0u; return; } if (c.pc != 0x00259FA8u) [[unlikely]] return; }
L_00259FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 18944u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 28224u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 10436u), c.r[7].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259FD0u);  if (depth < kMaxDepth) unit_0057(c, 78u, depth + 1u); else { c.pc = 0x0025D098u; return; } if (c.pc != 0x00259FD0u) [[unlikely]] return; }
L_00259FD0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259FDCu);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0025B2C0u; return; } if (c.pc != 0x00259FDCu) [[unlikely]] return; }
L_00259FDC:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025A02C; } }
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 42;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0025A000:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 304u));
    set32(c.r[6], c.r[6].w[0] + 464u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 304u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A000u | kUnwind; return; } goto L_0025A000; } }
L_0025A02C:
    set32(c.r[5], ld32((c.r[20].w[0] + 28224u)));
    set32(c.r[2], 0u - 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 4136u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A04Cu);  if (depth < kMaxDepth) unit_0057(c, 137u, depth + 1u); else { c.pc = 0x0025DEB0u; return; } if (c.pc != 0x0025A04Cu) [[unlikely]] return; }
L_0025A04C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 12200u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A064u);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x0025A064u) [[unlikely]] return; }
L_0025A064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 10420u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A07Cu);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0025A07Cu) [[unlikely]] return; }
L_0025A07C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 3696u), 0u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[21].w[0] + 4168u), c.f[0]);
    st32((c.r[21].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0A0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025A0A0u) [[unlikely]] return; }
L_0025A0A0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21912u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 8547u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0C8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025A0C8u) [[unlikely]] return; }
L_0025A0C8:
    c.r[3].d[0] = ld64((c.r[21].w[0] + 4144u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A12C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 208u);
    set32(c.r[5], ld32((c.r[2].w[0] - 3028u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0ECu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0025A0ECu) [[unlikely]] return; }
L_0025A0EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0FCu);  if (depth < kMaxDepth) unit_005B(c, 266u, depth + 1u); else { c.pc = 0x0026ECF0u; return; } if (c.pc != 0x0025A0FCu) [[unlikely]] return; }
L_0025A0FC:
    st32((c.r[21].w[0] + 3576u), c.r[2].w[0]);
    c.budget -= 1;
L_0025A100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A110; } }
L_0025A108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A110u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0025A110u) [[unlikely]] return; }
L_0025A110:
    set32(c.r[4], ld32((c.r[21].w[0] + 3576u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8096u);
    set32(c.r[3], ld32((c.r[21].w[0] + 3576u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 7;
L_0025A12C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A138u);  if (depth < kMaxDepth) unit_0056(c, 350u, depth + 1u); else { c.pc = 0x0025BB50u; return; } if (c.pc != 0x0025A138u) [[unlikely]] return; }
L_0025A138:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A14C; } }
L_0025A144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A108u | kUnwind; return; } goto L_0025A108; } }
L_0025A14C:
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
L_0025A178:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 24880u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[16], c.r[21].w[0] + 21936u);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    set32(c.r[18], c.r[22].w[0] + 21616u);
    st32((c.r[17].w[0] + 28224u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A1E4u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x0025A1E4u) [[unlikely]] return; }
L_0025A1E4:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28224u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18712u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 324u)));
    set32(c.r[9], 0u + 8590u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A210u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025A210u) [[unlikely]] return; }
L_0025A210:
    set32(c.r[3], ld32((c.r[17].w[0] + 28224u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18712u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 324u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[9], 0u + 8591u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A240u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025A240u) [[unlikely]] return; }
L_0025A240:
    set32(c.r[3], ld32((c.r[17].w[0] + 28224u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18712u)));
    set32(c.r[9], 0u + 8592u);
    set32(c.r[5], ld32((c.r[3].w[0] + 324u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A26Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025A26Cu) [[unlikely]] return; }
L_0025A26C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A284u);  if (depth < kMaxDepth) unit_0090(c, 187u, depth + 1u); else { c.pc = 0x00341BC0u; return; } if (c.pc != 0x0025A284u) [[unlikely]] return; }
L_0025A284:
    set32(c.r[4], ld32((c.r[17].w[0] + 28224u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A298u);  if (depth < kMaxDepth) unit_0090(c, 48u, depth + 1u); else { c.pc = 0x00340420u; return; } if (c.pc != 0x0025A298u) [[unlikely]] return; }
L_0025A298:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] + 24880u);
    set32(c.r[3], c.r[3].w[0] + 100u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2BCu);  if (depth < kMaxDepth) unit_0094(c, 129u, depth + 1u); else { c.pc = 0x00351918u; return; } if (c.pc != 0x0025A2BCu) [[unlikely]] return; }
L_0025A2BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28224u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[4].w[0] - 26432u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2F4u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0025A2F4u) [[unlikely]] return; }
L_0025A2F4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st32((c.r[23].w[0] + 3588u), c.r[20].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[23].w[0] + 4136u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A314u);  if (depth < kMaxDepth) unit_0060(c, 265u, depth + 1u); else { c.pc = 0x00283CA8u; return; } if (c.pc != 0x0025A314u) [[unlikely]] return; }
L_0025A314:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[6].w[0] - 18768u);
    set32(c.r[5], ld32((c.r[2].w[0] + 10400u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    st32((c.r[23].w[0] + 4108u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[23].w[0] + 4104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[20].w[0]);
    set32(c.r[30], c.r[29].w[0] + 24u);
    set32(c.r[3], c.r[29].w[0] + 52u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    set32(c.r[22], c.r[29].w[0] + 28u);
    set32(c.r[21], c.r[29].w[0] + 32u);
    set32(c.r[19], c.r[29].w[0] + 36u);
    set32(c.r[18], c.r[29].w[0] + 40u);
    set32(c.r[20], c.r[29].w[0] + 44u);
    set32(c.r[17], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 50;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A43C; } }
    c.budget -= 1;
L_0025A3E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[16], c.r[3].w[0] - 18768u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A424u);  if (depth < kMaxDepth) unit_005B(c, 179u, depth + 1u); else { c.pc = 0x0026DD90u; return; } if (c.pc != 0x0025A424u) [[unlikely]] return; }
L_0025A424:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[23].w[0] + 4120u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[23].w[0] + 4100u), c.r[2].w[0]);
    c.budget -= 6;
L_0025A43C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A470u);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x0025A470u) [[unlikely]] return; }
L_0025A470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A3E0u | kUnwind; return; } goto L_0025A3E0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0025A48C; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 4104u)));
    st32((c.r[23].w[0] + 4100u), c.r[2].w[0]);
    c.budget -= 2;
L_0025A48C:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[17], c.r[2].w[0] - 18768u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[16], 0u + 9u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A4DC; } }
L_0025A4A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 320u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] - 364u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A4DCu);  if (depth < kMaxDepth) unit_005B(c, 181u, depth + 1u); else { c.pc = 0x0026DE10u; return; } if (c.pc != 0x0025A4DCu) [[unlikely]] return; }
L_0025A4DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28224u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A50Cu);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x0025A50Cu) [[unlikely]] return; }
L_0025A50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A4A8u | kUnwind; return; } goto L_0025A4A8; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[20], c.r[2].w[0] - 18768u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[17], 0u + 10u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A588; } }
    c.budget -= 1;
L_0025A538:
    set32(c.r[5], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A568u);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026DDD0u; return; } if (c.pc != 0x0025A568u) [[unlikely]] return; }
L_0025A568:
    set32(c.r[4], ld32((c.r[16].w[0] - 364u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.f[13] = ld32((c.r[29].w[0] + 96u));
    c.f[14] = ld32((c.r[29].w[0] + 100u));
    c.f[15] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A588u);  if (depth < kMaxDepth) unit_005B(c, 191u, depth + 1u); else { c.pc = 0x0026DF80u; return; } if (c.pc != 0x0025A588u) [[unlikely]] return; }
L_0025A588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 28224u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5B8u);  if (depth < kMaxDepth) unit_0090(c, 179u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x0025A5B8u) [[unlikely]] return; }
L_0025A5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A538u | kUnwind; return; } goto L_0025A538; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[18], c.r[5].w[0] - 14960u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18432u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], ld32((c.r[6].w[0] - 18436u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[5].w[0] - 4828u), c.r[23].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[23].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5F8u);  if (depth < kMaxDepth) unit_0060(c, 260u, depth + 1u); else { c.pc = 0x00283C18u; return; } if (c.pc != 0x0025A5F8u) [[unlikely]] return; }
L_0025A5F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u + 44u);
    set32(c.r[16], ld32((c.r[6].w[0] - 18436u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[4].w[0] - 4824u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A624u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x0025A624u) [[unlikely]] return; }
L_0025A624:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A644u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x0025A644u) [[unlikely]] return; }
L_0025A644:
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A660u);  if (depth < kMaxDepth) unit_0055(c, 118u, depth + 1u); else { c.pc = 0x002551A0u; return; } if (c.pc != 0x0025A660u) [[unlikely]] return; }
L_0025A660:
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[23].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[23].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[23].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 64u), 0u);
    st32((c.r[23].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[23].w[0] + 3608u), c.r[6].w[0]);
    st32((c.r[23].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6A0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025A6A0u) [[unlikely]] return; }
L_0025A6A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 22504u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 24880u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6C8u);  if (depth < kMaxDepth) unit_0055(c, 312u, depth + 1u); else { c.pc = 0x00257C10u; return; } if (c.pc != 0x0025A6C8u) [[unlikely]] return; }
L_0025A6C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] - 22504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6DCu);  if (depth < kMaxDepth) unit_0088(c, 200u, depth + 1u); else { c.pc = 0x00322088u; return; } if (c.pc != 0x0025A6DCu) [[unlikely]] return; }
L_0025A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6E4u);  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00273630u; return; } if (c.pc != 0x0025A6E4u) [[unlikely]] return; }
L_0025A6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 28224u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A700u);  if (depth < kMaxDepth) unit_0057(c, 97u, depth + 1u); else { c.pc = 0x0025D4D0u; return; } if (c.pc != 0x0025A700u) [[unlikely]] return; }
L_0025A700:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A710u);  if (depth < kMaxDepth) unit_0055(c, 290u, depth + 1u); else { c.pc = 0x00257590u; return; } if (c.pc != 0x0025A710u) [[unlikely]] return; }
L_0025A710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 18944u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    st32((c.r[5].w[0] + 10436u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A730u);  if (depth < kMaxDepth) unit_0055(c, 305u, depth + 1u); else { c.pc = 0x00257A00u; return; } if (c.pc != 0x0025A730u) [[unlikely]] return; }
L_0025A730:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[6].w[0] + 25256u);
    set32(c.r[2], ld32((c.r[3].w[0] + 520u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025A93C; } }
    set32(c.r[30], c.r[3].w[0] + 512u);
    set32(c.r[22], c.r[3].w[0] + 520u);
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
L_0025A750:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[30].w[0])));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_0025A898; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025A790; } }
L_0025A784:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A7D4; } }
L_0025A790:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0025A7D0; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 3;
L_0025A7A8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A784u | kUnwind; return; } goto L_0025A784; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A7A8u | kUnwind; return; } goto L_0025A7A8; } }
L_0025A7D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025A7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A898; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[17].w[0] + 420u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[17].w[0] + 428u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], c.r[2].w[0] + 420u);
    c.budget -= 9;
L_0025A800:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A800u | kUnwind; return; } goto L_0025A800; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], c.r[2].w[0] + 428u);
    c.budget -= 7;
L_0025A838:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A838u | kUnwind; return; } goto L_0025A838; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 436u)));
    st32((c.r[17].w[0] + 436u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 440u)));
    st32((c.r[17].w[0] + 440u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 444u)));
    st32((c.r[17].w[0] + 444u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A928; } }
L_0025A898:
    c.f[1] = ld32((c.r[17].w[0] + 412u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A908; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025A928; } }
    c.budget -= 1;
L_0025A8C8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8E8u);  if (depth < kMaxDepth) unit_0053(c, 172u, depth + 1u); else { c.pc = 0x0024DFF0u; return; } if (c.pc != 0x0025A8E8u) [[unlikely]] return; }
L_0025A8E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 300u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A8C8u | kUnwind; return; } goto L_0025A8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A928; } }
L_0025A908:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A924u);  if (depth < kMaxDepth) unit_0053(c, 146u, depth + 1u); else { c.pc = 0x0024DB78u; return; } if (c.pc != 0x0025A924u) [[unlikely]] return; }
L_0025A924:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025A928:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A750u | kUnwind; return; } goto L_0025A750; } }
L_0025A93C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + 25256u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[6], c.r[5].w[0] + 12u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025AB74; } }
    set32(c.r[30], c.r[5].w[0] + 4u);
    c.f[20] = 0u;
    set32(c.r[19], c.r[4].w[0] + c.r[30].w[0]);
    c.budget -= 4;
L_0025A978:
    set32(c.r[2], c.r[4].w[0] + c.r[30].w[0]);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_0025AAC8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025A9BC; } }
L_0025A9B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AA04; } }
L_0025A9BC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0025AA00; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 444u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 4;
L_0025A9D8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A9B0u | kUnwind; return; } goto L_0025A9B0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A9D8u | kUnwind; return; } goto L_0025A9D8; } }
L_0025AA00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025AA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AAC8; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[17].w[0] + 420u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[17].w[0] + 428u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], c.r[2].w[0] + 420u);
    c.budget -= 9;
L_0025AA30:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AA30u | kUnwind; return; } goto L_0025AA30; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], c.r[2].w[0] + 428u);
    c.budget -= 7;
L_0025AA68:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AA68u | kUnwind; return; } goto L_0025AA68; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 436u)));
    st32((c.r[17].w[0] + 436u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 440u)));
    st32((c.r[17].w[0] + 440u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 444u)));
    st32((c.r[17].w[0] + 444u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AB50; } }
L_0025AAC8:
    c.f[0] = ld32((c.r[17].w[0] + 412u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025AB30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025AB50; } }
    c.budget -= 1;
L_0025AAF0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AB10u);  if (depth < kMaxDepth) unit_0053(c, 172u, depth + 1u); else { c.pc = 0x0024DFF0u; return; } if (c.pc != 0x0025AB10u) [[unlikely]] return; }
L_0025AB10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 300u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AAF0u | kUnwind; return; } goto L_0025AAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AB50; } }
L_0025AB30:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AB4Cu);  if (depth < kMaxDepth) unit_0053(c, 146u, depth + 1u); else { c.pc = 0x0024DB78u; return; } if (c.pc != 0x0025AB4Cu) [[unlikely]] return; }
L_0025AB4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025AB50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25268u);
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A978u | kUnwind; return; } goto L_0025A978; } }
L_0025AB74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 28224u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AB90u);  if (depth < kMaxDepth) unit_0057(c, 78u, depth + 1u); else { c.pc = 0x0025D098u; return; } if (c.pc != 0x0025AB90u) [[unlikely]] return; }
L_0025AB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[3].w[0] + 21936u);
    set32(c.r[17], c.r[2].w[0] + 21616u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABACu);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0025B2C0u; return; } if (c.pc != 0x0025ABACu) [[unlikely]] return; }
L_0025ABAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABB8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025ABB8u) [[unlikely]] return; }
L_0025ABB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[9], 0u + 8807u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABD8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025ABD8u) [[unlikely]] return; }
L_0025ABD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] - 30944u);
    set32(c.r[4], ld32((c.r[5].w[0] - 22504u)));
    st32((c.r[3].w[0] + 8u), c.r[23].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABF8u);  if (depth < kMaxDepth) unit_0088(c, 165u, depth + 1u); else { c.pc = 0x00321C00u; return; } if (c.pc != 0x0025ABF8u) [[unlikely]] return; }
L_0025ABF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC04u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AC04u) [[unlikely]] return; }
L_0025AC04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 28224u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC28u);  if (depth < kMaxDepth) unit_0057(c, 137u, depth + 1u); else { c.pc = 0x0025DEB0u; return; } if (c.pc != 0x0025AC28u) [[unlikely]] return; }
L_0025AC28:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], c.r[2].w[0] - 12200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC40u);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x0025AC40u) [[unlikely]] return; }
L_0025AC40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 364u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 10420u));
    st32((c.r[23].w[0] + 4168u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC64u);  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0025AC64u) [[unlikely]] return; }
L_0025AC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28224u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[23].w[0] + 76u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 18712u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 324u)));
    set32(c.r[8], 0u + 8831u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC98u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0025AC98u) [[unlikely]] return; }
L_0025AC98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 28224u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 18712u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 324u)));
    set32(c.r[8], 0u + 8832u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACC4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0025ACC4u) [[unlikely]] return; }
L_0025ACC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACD0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025ACD0u) [[unlikely]] return; }
L_0025ACD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 8838u);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACF0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025ACF0u) [[unlikely]] return; }
L_0025ACF0:
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD00u);  if (depth < kMaxDepth) unit_0060(c, 245u, depth + 1u); else { c.pc = 0x00283A60u; return; } if (c.pc != 0x0025AD00u) [[unlikely]] return; }
L_0025AD00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22504u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD18u);  if (depth < kMaxDepth) unit_0085(c, 199u, depth + 1u); else { c.pc = 0x00315FB8u; return; } if (c.pc != 0x0025AD18u) [[unlikely]] return; }
L_0025AD18:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD24u);  if (depth < kMaxDepth) unit_0056(c, 173u, depth + 1u); else { c.pc = 0x00259C90u; return; } if (c.pc != 0x0025AD24u) [[unlikely]] return; }
L_0025AD24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 3028u)));
    set32(c.r[4], 0u + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD38u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0025AD38u) [[unlikely]] return; }
L_0025AD38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD48u);  if (depth < kMaxDepth) unit_005B(c, 266u, depth + 1u); else { c.pc = 0x0026ECF0u; return; } if (c.pc != 0x0025AD48u) [[unlikely]] return; }
L_0025AD48:
    st32((c.r[23].w[0] + 3576u), c.r[2].w[0]);
    c.budget -= 1;
L_0025AD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AD5C; } }
L_0025AD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD5Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0025AD5Cu) [[unlikely]] return; }
L_0025AD5C:
    set32(c.r[4], ld32((c.r[23].w[0] + 3576u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[4].w[0] + 204u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AD7C; } }
L_0025AD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AD54u | kUnwind; return; } goto L_0025AD54; } }
L_0025AD7C:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025ADB8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ADF4u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x0025ADF4u) [[unlikely]] return; }
L_0025ADF4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE04u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AE04u) [[unlikely]] return; }
L_0025AE04:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] | 1024ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE14u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AE14u) [[unlikely]] return; }
L_0025AE14:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] - 12224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AE34; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE30u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AE30u) [[unlikely]] return; }
L_0025AE30:
    st32((c.r[16].w[0] - 12224u), c.r[2].w[0]);
    c.budget -= 1;
L_0025AE34:
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] - 18768u), c.r[19].w[0]);
    c.r[9].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] + 28320u);
    c.r[4].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[5], c.r[3].w[0] - 18768u);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[8], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 25;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0025AEEC; } }
    c.r[2].d[0] = c.r[9].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AEB8; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_0025AECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AF04; } }
L_0025AEB8:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_0025AEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AF04; } }
L_0025AECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 352u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AEE4u);  if (depth < kMaxDepth) unit_0058(c, 165u, depth + 1u); else { c.pc = 0x00262BE8u; return; } if (c.pc != 0x0025AEE4u) [[unlikely]] return; }
L_0025AEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AF04; } }
L_0025AEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF00u);  if (depth < kMaxDepth) unit_0059(c, 237u, depth + 1u); else { c.pc = 0x00267DE0u; return; } if (c.pc != 0x0025AF00u) [[unlikely]] return; }
L_0025AF00:
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0025AF04:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[16].w[0] - 18768u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18224u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 284u);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    lwl(c.r[7], (c.r[29].w[0] + 3u));
    lwr(c.r[7], (c.r[29].w[0]));
    swl(c.r[7], (c.r[3].w[0] + 3u));
    swr(c.r[7], (c.r[3].w[0]));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF54u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AF54u) [[unlikely]] return; }
L_0025AF54:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[7], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + 212u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[18].d[0] | 1024ull;
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AFA4u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025AFA4u) [[unlikely]] return; }
L_0025AFA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[7], c.r[21].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + 248u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[16].w[0] + 172u);
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B038:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B080u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025B080u) [[unlikely]] return; }
L_0025B080:
    set32(c.r[4], ld32((c.r[16].w[0] + 18712u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B094u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025B094u) [[unlikely]] return; }
L_0025B094:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] - 12224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B0B4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 18708u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B0B0u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025B0B0u) [[unlikely]] return; }
L_0025B0B0:
    st32((c.r[16].w[0] - 12224u), c.r[2].w[0]);
    c.budget -= 1;
L_0025B0B4:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] - 18768u), c.r[18].w[0]);
    c.r[9].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] + 28320u);
    c.r[4].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[5], c.r[3].w[0] - 18768u);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[8], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 25;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0025B16C; } }
    c.r[2].d[0] = c.r[9].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B138; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_0025B14C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B184; } }
L_0025B138:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_0025B16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B184; } }
L_0025B14C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 352u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B164u);  if (depth < kMaxDepth) unit_0058(c, 228u, depth + 1u); else { c.pc = 0x002637A8u; return; } if (c.pc != 0x0025B164u) [[unlikely]] return; }
L_0025B164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B184; } }
L_0025B16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B180u);  if (depth < kMaxDepth) unit_0059(c, 237u, depth + 1u); else { c.pc = 0x00267DE0u; return; } if (c.pc != 0x0025B180u) [[unlikely]] return; }
L_0025B180:
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0025B184:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[16], c.r[16].w[0] - 18768u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18224u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 18708u)));
    set32(c.r[17], c.r[16].w[0] + 284u);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    lwl(c.r[7], (c.r[29].w[0] + 3u));
    lwr(c.r[7], (c.r[29].w[0]));
    swl(c.r[7], (c.r[3].w[0] + 3u));
    swr(c.r[7], (c.r[3].w[0]));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1D4u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025B1D4u) [[unlikely]] return; }
L_0025B1D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[7], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + 212u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 18712u)));
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B224u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x0025B224u) [[unlikely]] return; }
L_0025B224:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[7], c.r[20].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + 248u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[16].w[0] + 172u);
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0025B328; } }
    set32(c.r[8], 0u - 1u);
    set32(c.r[6], c.r[2].w[0] - 4208u);
    set32(c.r[5], c.r[17].w[0] - 12200u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
L_0025B300:
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 448u);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B300u | kUnwind; return; } goto L_0025B300; } }
L_0025B328:
    set32(c.r[6], 0u + 7300u);
    set32(c.r[2], c.r[2].w[0] - 4208u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B348u);  if (depth < kMaxDepth) unit_006B(c, 148u, depth + 1u); else { c.pc = 0x002AED48u; return; } if (c.pc != 0x0025B348u) [[unlikely]] return; }
L_0025B348:
    set32(c.r[5], c.r[17].w[0] - 12200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B358u);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x0025B358u) [[unlikely]] return; }
L_0025B358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B364u);  if (depth < kMaxDepth) unit_0056(c, 350u, depth + 1u); else { c.pc = 0x0025BB50u; return; } if (c.pc != 0x0025B364u) [[unlikely]] return; }
L_0025B364:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B370u);  if (depth < kMaxDepth) unit_0058(c, 74u, depth + 1u); else { c.pc = 0x00260C30u; return; } if (c.pc != 0x0025B370u) [[unlikely]] return; }
L_0025B370:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025B3D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 4;
L_0025B390:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 464u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B390u | kUnwind; return; } goto L_0025B390; } }
L_0025B3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B3E4u);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x0025B3E4u) [[unlikely]] return; }
L_0025B3E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18436u)));
    set32(c.r[7], 0u + 44u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[2].w[0] - 4824u);
    st32((c.r[16].w[0] + 4136u), c.r[4].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025B470; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0025B470:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0025B4B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[2].w[0] - 4828u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0025B49C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3584u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B49Cu);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x0025B49Cu) [[unlikely]] return; }
L_0025B49C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B69C; } }
L_0025B4B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26432u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4CCu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0025B4CCu) [[unlikely]] return; }
L_0025B4CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[6], 0u + 4248u);
    st32((c.r[2].w[0] - 4828u), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4ECu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0025B4ECu) [[unlikely]] return; }
L_0025B4EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B508u);  if (depth < kMaxDepth) unit_0055(c, 118u, depth + 1u); else { c.pc = 0x002551A0u; return; } if (c.pc != 0x0025B508u) [[unlikely]] return; }
L_0025B508:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 464u);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[17].w[0] + 32u), c.r[4].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 44u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B544u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0025B544u) [[unlikely]] return; }
L_0025B544:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], 0u + 448u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B564u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0025B564u) [[unlikely]] return; }
L_0025B564:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025B5E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 3532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B608; } }
    set32(c.r[16], 0u + 304u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B594u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x0025B594u) [[unlikely]] return; }
L_0025B594:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], 0u + 9640u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21616u);
    set32(c.r[8], c.r[8].w[0] + 21984u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5BCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0025B5BCu) [[unlikely]] return; }
L_0025B5BC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 3548u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5D4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0025B5D4u) [[unlikely]] return; }
L_0025B5D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 3548u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B608; } }
L_0025B5E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 3532u)));
    set32(c.r[6], 0u + 304u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 3548u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B608u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0025B608u) [[unlikely]] return; }
L_0025B608:
    set32(c.r[5], ld32((c.r[19].w[0] + 3584u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B618u);  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254FD0u; return; } if (c.pc != 0x0025B618u) [[unlikely]] return; }
L_0025B618:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B684; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0025B68C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B63Cu);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x0025B63Cu) [[unlikely]] return; }
L_0025B63C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B64Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0025B64Cu) [[unlikely]] return; }
L_0025B64C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 3580u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B660u);  if (depth < kMaxDepth) unit_005F(c, 204u, depth + 1u); else { c.pc = 0x0027DFD0u; return; } if (c.pc != 0x0025B660u) [[unlikely]] return; }
L_0025B660:
    st32((c.r[17].w[0] + 3580u), c.r[2].w[0]);
    c.budget -= 1;
L_0025B664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B674; } }
L_0025B66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B674u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0025B674u) [[unlikely]] return; }
L_0025B674:
    set32(c.r[2], ld32((c.r[17].w[0] + 3580u)));
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B68C; } }
L_0025B684:
    st32((c.r[17].w[0] + 3580u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 2;
L_0025B68C:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
L_0025B69C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 4164u), c.f[1]);
    st32((c.r[16].w[0] + 4168u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B6C0u);  if (depth < kMaxDepth) unit_0056(c, 350u, depth + 1u); else { c.pc = 0x0025BB50u; return; } if (c.pc != 0x0025B6C0u) [[unlikely]] return; }
L_0025B6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B6CCu);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x0025B6CCu) [[unlikely]] return; }
L_0025B6CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0025B798; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025B72C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 347u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B728; } }
L_0025B700:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B72C; } }
    set32(c.r[2], 0u + 448u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 347u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B700u | kUnwind; return; } goto L_0025B700; } }
L_0025B728:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0025B72C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025B798; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 208u);
    set32(c.r[5], ld32((c.r[2].w[0] - 3028u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B758u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0025B758u) [[unlikely]] return; }
L_0025B758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B768u);  if (depth < kMaxDepth) unit_005B(c, 266u, depth + 1u); else { c.pc = 0x0026ECF0u; return; } if (c.pc != 0x0025B768u) [[unlikely]] return; }
L_0025B768:
    st32((c.r[16].w[0] + 3576u), c.r[2].w[0]);
    c.budget -= 1;
L_0025B76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B77C; } }
L_0025B774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B77Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0025B77Cu) [[unlikely]] return; }
L_0025B77C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3576u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B798; } }
L_0025B790:
    st32((c.r[16].w[0] + 3576u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_0025B798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B7CC; } }
L_0025B7A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7B4u);  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x00283BD8u; return; } if (c.pc != 0x0025B7B4u) [[unlikely]] return; }
L_0025B7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B66Cu | kUnwind; return; } goto L_0025B66C; } }
L_0025B7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B774u | kUnwind; return; } goto L_0025B774; } }
L_0025B7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7CCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0025B7CCu) [[unlikely]] return; }
L_0025B7CC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B7F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 4u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B834u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0025B834u) [[unlikely]] return; }
L_0025B834:
    c.r[4].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[11], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u + 24u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[11].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18224u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[2].w[0] + 4u);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 30944u);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[5].w[0] + c.r[3].w[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[8].w[0] - 18436u), c.r[7].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BAD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22016u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B8B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0025B918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 12200u);
    set32(c.r[5], c.r[9].w[0] - 4208u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
L_0025B8F0:
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 448u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B8F0u | kUnwind; return; } goto L_0025B8F0; } }
L_0025B918:
    set32(c.r[6], 0u + 7300u);
    set32(c.r[2], c.r[9].w[0] - 4208u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B938u);  if (depth < kMaxDepth) unit_006B(c, 148u, depth + 1u); else { c.pc = 0x002AED48u; return; } if (c.pc != 0x0025B938u) [[unlikely]] return; }
L_0025B938:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B944u);  if (depth < kMaxDepth) unit_0056(c, 350u, depth + 1u); else { c.pc = 0x0025BB50u; return; } if (c.pc != 0x0025B944u) [[unlikely]] return; }
L_0025B944:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B950u);  if (depth < kMaxDepth) unit_0058(c, 74u, depth + 1u); else { c.pc = 0x00260C30u; return; } if (c.pc != 0x0025B950u) [[unlikely]] return; }
L_0025B950:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025B9B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 4;
L_0025B970:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 464u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B970u | kUnwind; return; } goto L_0025B970; } }
L_0025B9B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B9C8u);  if (depth < kMaxDepth) unit_0051(c, 47u, depth + 1u); else { c.pc = 0x002457D0u; return; } if (c.pc != 0x0025B9C8u) [[unlikely]] return; }
L_0025B9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA9C; } }
L_0025B9D0:
    set32(c.r[4], ld32((c.r[21].w[0] - 18436u)));
    set32(c.r[2], 0u + 44u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] - 4824u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025BA08; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0025BA08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0025BA34; } }
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], c.r[10].w[0] - 18224u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA4C; } }
L_0025BA34:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA48u);  if (depth < kMaxDepth) unit_0056(c, 301u, depth + 1u); else { c.pc = 0x0025B400u; return; } if (c.pc != 0x0025BA48u) [[unlikely]] return; }
L_0025BA48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025BA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 14960u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA94; } }
L_0025BA64:
    set32(c.r[2], 0u + 2u);
    st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025BA6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA84u);  if (depth < kMaxDepth) unit_0056(c, 301u, depth + 1u); else { c.pc = 0x0025B400u; return; } if (c.pc != 0x0025BA84u) [[unlikely]] return; }
L_0025BA84:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 14960u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0025BA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA9Cu);  if (depth < kMaxDepth) unit_0060(c, 265u, depth + 1u); else { c.pc = 0x00283CA8u; return; } if (c.pc != 0x0025BA9Cu) [[unlikely]] return; }
L_0025BA9C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 2u));
    st32((c.r[17].w[0] + 3868u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BAEC; } }
L_0025BAAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 352u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BACCu);  if (depth < kMaxDepth) unit_0058(c, 231u, depth + 1u); else { c.pc = 0x002638C8u; return; } if (c.pc != 0x0025BACCu) [[unlikely]] return; }
L_0025BACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BAEC; } }
L_0025BAD8:
    c.r[2].d[0] = ld16((c.r[29].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_0025BAEC:
    set32(c.r[2], ld32((c.r[21].w[0] - 18436u)));
    set32(c.r[4], c.r[22].w[0] - 14960u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB20u);  if (depth < kMaxDepth) unit_0060(c, 252u, depth + 1u); else { c.pc = 0x00283B68u; return; } if (c.pc != 0x0025BB20u) [[unlikely]] return; }
L_0025BB20:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025BB50:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025BC20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.budget -= 3;
L_0025BB70:
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[5] = ld32((c.r[3].w[0] + 68u));
    c.f[3] = ld32((c.r[3].w[0] + 60u));
    c.f[4] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    st32((c.r[3].w[0] + 184u), c.f[1]);
    st32((c.r[3].w[0] + 192u), c.f[2]);
    st32((c.r[3].w[0] + 96u), c.f[2]);
    st32((c.r[3].w[0] + 100u), c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[1]);
    st32((c.r[3].w[0] + 108u), c.f[6]);
    st32((c.r[3].w[0] + 112u), c.f[2]);
    st32((c.r[3].w[0] + 116u), c.f[0]);
    st32((c.r[3].w[0] + 120u), c.f[5]);
    st32((c.r[3].w[0] + 124u), c.f[6]);
    st32((c.r[3].w[0] + 128u), c.f[3]);
    st32((c.r[3].w[0] + 132u), c.f[0]);
    st32((c.r[3].w[0] + 136u), c.f[5]);
    st32((c.r[3].w[0] + 140u), c.f[6]);
    st32((c.r[3].w[0] + 144u), c.f[3]);
    st32((c.r[3].w[0] + 152u), c.f[1]);
    st32((c.r[3].w[0] + 156u), c.f[6]);
    st32((c.r[3].w[0] + 160u), c.f[3]);
    st32((c.r[3].w[0] + 164u), c.f[4]);
    st32((c.r[3].w[0] + 168u), c.f[1]);
    st32((c.r[3].w[0] + 172u), c.f[6]);
    st32((c.r[3].w[0] + 176u), c.f[2]);
    st32((c.r[3].w[0] + 180u), c.f[4]);
    st32((c.r[3].w[0] + 188u), c.f[6]);
    st32((c.r[3].w[0] + 196u), c.f[4]);
    st32((c.r[3].w[0] + 200u), c.f[5]);
    st32((c.r[3].w[0] + 204u), c.f[6]);
    st32((c.r[3].w[0] + 208u), c.f[3]);
    st32((c.r[3].w[0] + 212u), c.f[4]);
    st32((c.r[3].w[0] + 216u), c.f[5]);
    st32((c.r[3].w[0] + 220u), c.f[6]);
    set32(c.r[3], c.r[3].w[0] + 464u);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 44;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BB70u | kUnwind; return; } goto L_0025BB70; } }
L_0025BC20:
    set32(c.r[2], c.r[4].w[0] + 3872u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[6] = ld32((c.r[2].w[0] + 68u));
    c.f[4] = ld32((c.r[2].w[0] + 60u));
    c.f[5] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[2].w[0] + 148u), c.f[1]);
    st32((c.r[2].w[0] + 184u), c.f[2]);
    st32((c.r[2].w[0] + 192u), c.f[3]);
    st32((c.r[2].w[0] + 96u), c.f[3]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[2]);
    st32((c.r[2].w[0] + 108u), c.f[0]);
    st32((c.r[2].w[0] + 112u), c.f[3]);
    st32((c.r[2].w[0] + 116u), c.f[1]);
    st32((c.r[2].w[0] + 120u), c.f[6]);
    st32((c.r[2].w[0] + 124u), c.f[0]);
    st32((c.r[2].w[0] + 128u), c.f[4]);
    st32((c.r[2].w[0] + 132u), c.f[1]);
    st32((c.r[2].w[0] + 136u), c.f[6]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 144u), c.f[4]);
    st32((c.r[2].w[0] + 152u), c.f[2]);
    st32((c.r[2].w[0] + 156u), c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[4]);
    st32((c.r[2].w[0] + 164u), c.f[5]);
    st32((c.r[2].w[0] + 168u), c.f[2]);
    st32((c.r[2].w[0] + 172u), c.f[0]);
    st32((c.r[2].w[0] + 176u), c.f[3]);
    st32((c.r[2].w[0] + 180u), c.f[5]);
    st32((c.r[2].w[0] + 188u), c.f[0]);
    st32((c.r[2].w[0] + 196u), c.f[5]);
    st32((c.r[2].w[0] + 200u), c.f[6]);
    st32((c.r[2].w[0] + 204u), c.f[0]);
    st32((c.r[2].w[0] + 220u), c.f[0]);
    st32((c.r[2].w[0] + 208u), c.f[4]);
    st32((c.r[2].w[0] + 212u), c.f[5]);
    st32((c.r[2].w[0] + 216u), c.f[6]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025BCD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025BEAC; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0025BEAC; } }
    set32(c.r[14], 0u - 1u);
    set32(c.r[13], 0u + 464u);
    set32(c.r[8], 0u + 1u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[10].d[0] = 0ull | 32768ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    set32(c.r[9], 0u + 2u);
    c.budget -= 8;
L_0025BD00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[14].d[0];  if (t) { goto L_0025BE9C; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 304u), 0u);
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BD30; } }
    st32((c.r[3].w[0] + 304u), c.r[8].w[0]);
    c.budget -= 1;
L_0025BD30:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BD4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BD4C:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BD68; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BD68:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BD84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BD84:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BDA0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BDA0:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BDBC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BDBC:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BDD8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BDD8:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BDF4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BDF4:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE10; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BE10:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE2C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BE2C:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE48; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BE48:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE64; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BE64:
    c.r[7].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[7].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE80; } }
    st32((c.r[3].w[0] + 452u), c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BE9C; } }
L_0025BE80:
    c.r[2].d[0] = c.r[7].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BE98; } }
    st32((c.r[3].w[0] + 452u), c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BE9C; } }
L_0025BE98:
    st32((c.r[3].w[0] + 452u), 0u);
    c.budget -= 1;
L_0025BE9C:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BD00u | kUnwind; return; } goto L_0025BD00; } }
L_0025BEAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025BEB8:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0057(c, 2u, depth); } }
    c.budget -= 1;
L_0025BED0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 464u);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 304u), 0u);
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF00; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 2;
L_0025BF00:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF1C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BF1C:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BF38:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BF54:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BF70:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BF8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BF8C:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BFA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BFA8:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BFC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BFC4:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BFE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BFE0:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BFFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0025BFFC:
    c.r[2].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0057(c, 1u, depth);
}

}
