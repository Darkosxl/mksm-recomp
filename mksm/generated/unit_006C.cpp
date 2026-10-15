#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 16, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B0000;
    case 2u: goto L_002B0024;
    case 3u: goto L_002B004C;
    case 4u: goto L_002B0084;
    case 5u: goto L_002B009C;
    case 6u: goto L_002B00BC;
    case 7u: goto L_002B0178;
    case 8u: goto L_002B0198;
    case 9u: goto L_002B01AC;
    case 10u: goto L_002B01C0;
    case 11u: goto L_002B0218;
    case 12u: goto L_002B0264;
    case 13u: goto L_002B02B4;
    case 14u: goto L_002B02D8;
    case 15u: goto L_002B0304;
    case 16u: goto L_002B0308;
    case 17u: goto L_002B0314;
    case 18u: goto L_002B0324;
    case 19u: goto L_002B032C;
    case 20u: goto L_002B0334;
    case 21u: goto L_002B0348;
    case 22u: goto L_002B0384;
    case 23u: goto L_002B0398;
    case 24u: goto L_002B03A0;
    case 25u: goto L_002B03A8;
    case 26u: goto L_002B03B0;
    case 27u: goto L_002B03BC;
    case 28u: goto L_002B03E0;
    case 29u: goto L_002B0400;
    case 30u: goto L_002B0418;
    case 31u: goto L_002B0438;
    case 32u: goto L_002B0450;
    case 33u: goto L_002B0498;
    case 34u: goto L_002B04E0;
    case 35u: goto L_002B0500;
    case 36u: goto L_002B0554;
    case 37u: goto L_002B0578;
    case 38u: goto L_002B05AC;
    case 39u: goto L_002B0608;
    case 40u: goto L_002B0620;
    case 41u: goto L_002B063C;
    case 42u: goto L_002B0654;
    case 43u: goto L_002B06A0;
    case 44u: goto L_002B0700;
    case 45u: goto L_002B0880;
    case 46u: goto L_002B08B8;
    case 47u: goto L_002B08E8;
    case 48u: goto L_002B08F8;
    case 49u: goto L_002B0950;
    case 50u: goto L_002B097C;
    case 51u: goto L_002B09A8;
    case 52u: goto L_002B09D8;
    case 53u: goto L_002B0A00;
    case 54u: goto L_002B0A18;
    case 55u: goto L_002B0A30;
    case 56u: goto L_002B0A4C;
    case 57u: goto L_002B0A60;
    case 58u: goto L_002B0A88;
    case 59u: goto L_002B0AB8;
    case 60u: goto L_002B0AD0;
    case 61u: goto L_002B0B04;
    case 62u: goto L_002B0B40;
    case 63u: goto L_002B0B58;
    case 64u: goto L_002B0B90;
    case 65u: goto L_002B0BB4;
    case 66u: goto L_002B0BDC;
    case 67u: goto L_002B0C10;
    case 68u: goto L_002B0C20;
    case 69u: goto L_002B0C30;
    case 70u: goto L_002B0C40;
    case 71u: goto L_002B0C70;
    case 72u: goto L_002B0CA0;
    case 73u: goto L_002B0CD0;
    case 74u: goto L_002B0CF0;
    case 75u: goto L_002B0D00;
    case 76u: goto L_002B0D24;
    case 77u: goto L_002B0D38;
    case 78u: goto L_002B0D78;
    case 79u: goto L_002B0D94;
    case 80u: goto L_002B0DA8;
    case 81u: goto L_002B0DD4;
    case 82u: goto L_002B0E0C;
    case 83u: goto L_002B0E44;
    case 84u: goto L_002B0E54;
    case 85u: goto L_002B0E80;
    case 86u: goto L_002B0EA0;
    case 87u: goto L_002B0ED8;
    case 88u: goto L_002B0F00;
    case 89u: goto L_002B0F10;
    case 90u: goto L_002B0F28;
    case 91u: goto L_002B0F94;
    case 92u: goto L_002B0FB8;
    case 93u: goto L_002B0FEC;
    case 94u: goto L_002B1048;
    case 95u: goto L_002B1070;
    case 96u: goto L_002B1080;
    case 97u: goto L_002B10A8;
    case 98u: goto L_002B10D8;
    case 99u: goto L_002B10F0;
    case 100u: goto L_002B1130;
    case 101u: goto L_002B1140;
    case 102u: goto L_002B1170;
    case 103u: goto L_002B11B8;
    case 104u: goto L_002B11F8;
    case 105u: goto L_002B1248;
    case 106u: goto L_002B1258;
    case 107u: goto L_002B12AC;
    case 108u: goto L_002B12C0;
    case 109u: goto L_002B1304;
    case 110u: goto L_002B1310;
    case 111u: goto L_002B1350;
    case 112u: goto L_002B13A0;
    case 113u: goto L_002B13D4;
    case 114u: goto L_002B1418;
    case 115u: goto L_002B1438;
    case 116u: goto L_002B1470;
    case 117u: goto L_002B1490;
    case 118u: goto L_002B1520;
    case 119u: goto L_002B1530;
    case 120u: goto L_002B1544;
    case 121u: goto L_002B1558;
    case 122u: goto L_002B1588;
    case 123u: goto L_002B15C8;
    case 124u: goto L_002B15E8;
    case 125u: goto L_002B1620;
    case 126u: goto L_002B1640;
    case 127u: goto L_002B1670;
    case 128u: goto L_002B1688;
    case 129u: goto L_002B1698;
    case 130u: goto L_002B16B0;
    case 131u: goto L_002B16C0;
    case 132u: goto L_002B16E8;
    case 133u: goto L_002B1710;
    case 134u: goto L_002B1720;
    case 135u: goto L_002B1744;
    case 136u: goto L_002B1760;
    case 137u: goto L_002B1784;
    case 138u: goto L_002B17A0;
    case 139u: goto L_002B17C4;
    case 140u: goto L_002B17F0;
    case 141u: goto L_002B1838;
    case 142u: goto L_002B1848;
    case 143u: goto L_002B1880;
    case 144u: goto L_002B1898;
    case 145u: goto L_002B18C4;
    case 146u: goto L_002B18D0;
    case 147u: goto L_002B18F8;
    case 148u: goto L_002B1920;
    case 149u: goto L_002B1948;
    case 150u: goto L_002B1960;
    case 151u: goto L_002B198C;
    case 152u: goto L_002B1998;
    case 153u: goto L_002B19C0;
    case 154u: goto L_002B19F8;
    case 155u: goto L_002B1A28;
    case 156u: goto L_002B1A40;
    case 157u: goto L_002B1A50;
    case 158u: goto L_002B1AF8;
    case 159u: goto L_002B1B34;
    case 160u: goto L_002B1B4C;
    case 161u: goto L_002B1BA4;
    case 162u: goto L_002B1BB0;
    case 163u: goto L_002B1C58;
    case 164u: goto L_002B1C80;
    case 165u: goto L_002B1CE4;
    case 166u: goto L_002B1D00;
    case 167u: goto L_002B1D14;
    case 168u: goto L_002B1D2C;
    case 169u: goto L_002B1D30;
    case 170u: goto L_002B1D50;
    case 171u: goto L_002B1D78;
    case 172u: goto L_002B1DCC;
    case 173u: goto L_002B1E40;
    case 174u: goto L_002B1E58;
    case 175u: goto L_002B1E80;
    case 176u: goto L_002B1E90;
    case 177u: goto L_002B1EA0;
    case 178u: goto L_002B1EC4;
    case 179u: goto L_002B1F48;
    case 180u: goto L_002B1F6C;
    case 181u: goto L_002B1FB0;
    case 182u: goto L_002B2050;
    case 183u: goto L_002B2068;
    case 184u: goto L_002B2090;
    case 185u: goto L_002B20A0;
    case 186u: goto L_002B20B0;
    case 187u: goto L_002B2138;
    case 188u: goto L_002B2180;
    case 189u: goto L_002B21A8;
    case 190u: goto L_002B21C0;
    case 191u: goto L_002B21E8;
    case 192u: goto L_002B21F8;
    case 193u: goto L_002B2208;
    case 194u: goto L_002B2258;
    case 195u: goto L_002B22A0;
    case 196u: goto L_002B22C8;
    case 197u: goto L_002B2300;
    case 198u: goto L_002B2320;
    case 199u: goto L_002B2354;
    case 200u: goto L_002B237C;
    case 201u: goto L_002B2388;
    case 202u: goto L_002B23B0;
    case 203u: goto L_002B2418;
    case 204u: goto L_002B2430;
    case 205u: goto L_002B2448;
    case 206u: goto L_002B2458;
    case 207u: goto L_002B2490;
    case 208u: goto L_002B24C8;
    case 209u: goto L_002B2504;
    case 210u: goto L_002B2518;
    case 211u: goto L_002B2560;
    case 212u: goto L_002B2580;
    case 213u: goto L_002B2598;
    case 214u: goto L_002B25C0;
    case 215u: goto L_002B25D0;
    case 216u: goto L_002B25E0;
    case 217u: goto L_002B2618;
    case 218u: goto L_002B2650;
    case 219u: goto L_002B2678;
    case 220u: goto L_002B2690;
    case 221u: goto L_002B26B8;
    case 222u: goto L_002B26C8;
    case 223u: goto L_002B26D8;
    case 224u: goto L_002B2708;
    case 225u: goto L_002B2738;
    case 226u: goto L_002B2768;
    case 227u: goto L_002B2778;
    case 228u: goto L_002B2788;
    case 229u: goto L_002B27A0;
    case 230u: goto L_002B27E8;
    case 231u: goto L_002B27F8;
    case 232u: goto L_002B2808;
    case 233u: goto L_002B2818;
    case 234u: goto L_002B2828;
    case 235u: goto L_002B2878;
    case 236u: goto L_002B28A8;
    case 237u: goto L_002B2910;
    case 238u: goto L_002B2958;
    case 239u: goto L_002B2970;
    case 240u: goto L_002B2980;
    case 241u: goto L_002B2990;
    case 242u: goto L_002B29A8;
    case 243u: goto L_002B29B8;
    case 244u: goto L_002B29D4;
    case 245u: goto L_002B29E8;
    case 246u: goto L_002B2A18;
    case 247u: goto L_002B2A30;
    case 248u: goto L_002B2A40;
    case 249u: goto L_002B2A9C;
    case 250u: goto L_002B2AB4;
    case 251u: goto L_002B2ADC;
    case 252u: goto L_002B2AEC;
    case 253u: goto L_002B2AFC;
    case 254u: goto L_002B2B38;
    case 255u: goto L_002B2B58;
    case 256u: goto L_002B2B70;
    case 257u: goto L_002B2B90;
    case 258u: goto L_002B2BB0;
    case 259u: goto L_002B2BD8;
    case 260u: goto L_002B2BF0;
    case 261u: goto L_002B2C34;
    case 262u: goto L_002B2C40;
    case 263u: goto L_002B2C80;
    case 264u: goto L_002B2CA0;
    case 265u: goto L_002B2CC0;
    case 266u: goto L_002B2CE0;
    case 267u: goto L_002B2D00;
    case 268u: goto L_002B2D28;
    case 269u: goto L_002B2D74;
    case 270u: goto L_002B2DB0;
    case 271u: goto L_002B2DD0;
    case 272u: goto L_002B2DF0;
    case 273u: goto L_002B2E10;
    case 274u: goto L_002B2E30;
    case 275u: goto L_002B2E70;
    case 276u: goto L_002B2EB0;
    case 277u: goto L_002B2ED0;
    case 278u: goto L_002B2F10;
    case 279u: goto L_002B2F38;
    case 280u: goto L_002B2F48;
    case 281u: goto L_002B2F70;
    case 282u: goto L_002B2F88;
    case 283u: goto L_002B2F98;
    case 284u: goto L_002B2FC0;
    case 285u: goto L_002B2FCC;
    case 286u: goto L_002B2FF8;
    case 287u: goto L_002B3028;
    case 288u: goto L_002B3088;
    case 289u: goto L_002B30A8;
    case 290u: goto L_002B30F0;
    case 291u: goto L_002B3100;
    case 292u: goto L_002B3118;
    case 293u: goto L_002B3130;
    case 294u: goto L_002B3140;
    case 295u: goto L_002B316C;
    case 296u: goto L_002B317C;
    case 297u: goto L_002B31B0;
    case 298u: goto L_002B31C0;
    case 299u: goto L_002B3210;
    case 300u: goto L_002B3270;
    case 301u: goto L_002B3280;
    case 302u: goto L_002B3298;
    case 303u: goto L_002B32A8;
    case 304u: goto L_002B32C0;
    case 305u: goto L_002B32E8;
    case 306u: goto L_002B3300;
    case 307u: goto L_002B3318;
    case 308u: goto L_002B3360;
    case 309u: goto L_002B3384;
    case 310u: goto L_002B3408;
    case 311u: goto L_002B342C;
    case 312u: goto L_002B343C;
    case 313u: goto L_002B3458;
    case 314u: goto L_002B3484;
    case 315u: goto L_002B3494;
    case 316u: goto L_002B34A8;
    case 317u: goto L_002B34F0;
    case 318u: goto L_002B3510;
    case 319u: goto L_002B3534;
    case 320u: goto L_002B3588;
    case 321u: goto L_002B35A0;
    case 322u: goto L_002B35E0;
    case 323u: goto L_002B3608;
    case 324u: goto L_002B3630;
    case 325u: goto L_002B364C;
    case 326u: goto L_002B3668;
    case 327u: goto L_002B3680;
    case 328u: goto L_002B36A0;
    case 329u: goto L_002B36C8;
    case 330u: goto L_002B36E0;
    case 331u: goto L_002B36F0;
    case 332u: goto L_002B3740;
    case 333u: goto L_002B3764;
    case 334u: goto L_002B37F8;
    case 335u: goto L_002B3810;
    case 336u: goto L_002B3830;
    case 337u: goto L_002B3888;
    case 338u: goto L_002B38E0;
    case 339u: goto L_002B3920;
    case 340u: goto L_002B3934;
    case 341u: goto L_002B3950;
    case 342u: goto L_002B3980;
    case 343u: goto L_002B3998;
    case 344u: goto L_002B39C8;
    case 345u: goto L_002B3A08;
    case 346u: goto L_002B3A20;
    case 347u: goto L_002B3A40;
    case 348u: goto L_002B3A60;
    case 349u: goto L_002B3AD8;
    case 350u: goto L_002B3B0C;
    case 351u: goto L_002B3BA4;
    case 352u: goto L_002B3C48;
    case 353u: goto L_002B3D20;
    case 354u: goto L_002B3D48;
    case 355u: goto L_002B3E20;
    case 356u: goto L_002B3E94;
    case 357u: goto L_002B3EB8;
    case 358u: goto L_002B3F98;
    case 359u: goto L_002B3FB0;
    case 360u: goto L_002B3FCC;
    default: bad_entry(c, 0x002B0000u); return;
    }
L_002B0000:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B0024; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 5;
L_002B0024:
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] - 7152u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B004Cu);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002B004Cu) [[unlikely]] return; }
L_002B004C:
    c.f[1] = ld32((c.r[19].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 148u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[3]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B009C; } }
L_002B0084:
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B009Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002B009Cu) [[unlikely]] return; }
L_002B009C:
    c.f[2] = ld32((c.r[19].w[0] + 176u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = ld32((c.r[19].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.f[1] = ld32((c.r[19].w[0] + 184u));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B00F0; } }
L_002B00BC:
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B00F0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B00F0; } }
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0204; } }
L_002B00F0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B0128; } }
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B0128; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B01F8; } }
L_002B0128:
    c.f[5] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[5]));
    st32((c.r[29].w[0] + 100u), c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.f[4]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B0154; } }
    st32((c.r[29].w[0] + 96u), c.f[4]);
    c.budget -= 1;
L_002B0154:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B016C; } }
    st32((c.r[29].w[0] + 100u), c.f[4]);
    c.budget -= 1;
L_002B016C:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 3;
L_002B0178:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B0184; } }
    st32((c.r[29].w[0] + 104u), c.f[4]);
    c.budget -= 1;
L_002B0184:
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0198u);  if (depth < kMaxDepth) unit_0045(c, 70u, depth + 1u); else { c.pc = 0x00215720u; return; } if (c.pc != 0x002B0198u) [[unlikely]] return; }
L_002B0198:
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01ACu);  if (depth < kMaxDepth) unit_0044(c, 285u, depth + 1u); else { c.pc = 0x00213E88u; return; } if (c.pc != 0x002B01ACu) [[unlikely]] return; }
L_002B01AC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01C0u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002B01C0u) [[unlikely]] return; }
L_002B01C0:
    c.f[1] = ld32((c.r[19].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 180u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    c.f[0] = ld32((c.r[19].w[0] + 184u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[3]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0204; } }
L_002B01F8:
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 3;
L_002B0204:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0218u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x002B0218u) [[unlikely]] return; }
L_002B0218:
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[18].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 120u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[29].w[0] + 92u), c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0264u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002B0264u) [[unlikely]] return; }
L_002B0264:
    c.f[5] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[20].w[0] + 14208u);
    c.f[4] = ld32((c.r[29].w[0] + 84u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[18].w[0] + 160u));
    c.f[1] = ld32((c.r[18].w[0] + 164u));
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    set32(c.r[6], ld32((c.r[18].w[0] + 148u)));
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 160u), c.f[5]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 164u), c.f[4]);
    st32((c.r[18].w[0] + 168u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02B4u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x002B02B4u) [[unlikely]] return; }
L_002B02B4:
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B02D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[19].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[17], 0u + 31u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
L_002B0304:
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_002B0308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0314u);  if (depth < kMaxDepth) unit_006C(c, 57u, depth + 1u); else { c.pc = 0x002B0A60u; return; } if (c.pc != 0x002B0314u) [[unlikely]] return; }
L_002B0314:
    set32(c.r[16], c.r[16].w[0] + 80u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0308u | kUnwind; return; } goto L_002B0308; } }
L_002B0324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0334; } }
L_002B032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0334u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x002B0334u) [[unlikely]] return; }
L_002B0334:
    set32(c.r[2], c.r[19].w[0] + 2592u);
    set32(c.r[3], 0u + 127u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
L_002B0348:
    st32((c.r[2].w[0] + 144u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 148u), c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0348u | kUnwind; return; } goto L_002B0348; } }
L_002B0384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] + 32380u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0398u);  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002B0F10u; return; } if (c.pc != 0x002B0398u) [[unlikely]] return; }
L_002B0398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B03B0; } }
L_002B03A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03A8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x002B03A8u) [[unlikely]] return; }
L_002B03A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03B0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x002B03B0u) [[unlikely]] return; }
L_002B03B0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0470; } }
L_002B03BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B032Cu | kUnwind; return; } goto L_002B032C; } }
    set32(c.r[2], 0u + 31u);
    set32(c.r[3], 0u + 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B032Cu | kUnwind; return; } goto L_002B032C; } }
L_002B03E0:
    set32(c.r[2], c.r[2].w[0] - 80u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03E0u | kUnwind; return; } goto L_002B03E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B032Cu | kUnwind; return; } goto L_002B032C; } }
L_002B0400:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A0u | kUnwind; return; } goto L_002B03A0; } }
    set32(c.r[2], c.r[19].w[0] + 27168u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A0u | kUnwind; return; } goto L_002B03A0; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B0418:
    set32(c.r[2], c.r[2].w[0] - 192u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0418u | kUnwind; return; } goto L_002B0418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A0u | kUnwind; return; } goto L_002B03A0; } }
L_002B0438:
    set32(c.r[3], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A8u | kUnwind; return; } goto L_002B03A8; } }
    set32(c.r[2], c.r[19].w[0] + 2576u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A8u | kUnwind; return; } goto L_002B03A8; } }
L_002B0450:
    set32(c.r[2], c.r[2].w[0] - 80u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0450u | kUnwind; return; } goto L_002B0450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B03A8u | kUnwind; return; } goto L_002B03A8; } }
L_002B0470:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0498:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04E0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x002B04E0u) [[unlikely]] return; }
L_002B04E0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 2576u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002B0668; } }
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002B0500:
    set32(c.r[19], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002B0654; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[22].w[0])));
    set32(c.r[21], ld32((c.r[23].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0534; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B05DC; } }
L_002B0534:
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], 0u + 80u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0554u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002B0554u) [[unlikely]] return; }
L_002B0554:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B056C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B05B8; } }
L_002B056C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0578u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x002B0578u) [[unlikely]] return; }
L_002B0578:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[21].w[0]);
    set32(c.r[8], c.r[2].w[0] - 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B05ACu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B05ACu) [[unlikely]] return; }
L_002B05AC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_002B05B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B05CC; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B05D8; } }
L_002B05CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002B05D8:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002B05DC:
    st32((c.r[22].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002B0654; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0610; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0608u);  if (depth < kMaxDepth) unit_006C(c, 106u, depth + 1u); else { c.pc = 0x002B1258u; return; } if (c.pc != 0x002B0608u) [[unlikely]] return; }
L_002B0608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0620; } }
L_002B0610:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0620u);  if (depth < kMaxDepth) unit_006C(c, 104u, depth + 1u); else { c.pc = 0x002B11F8u; return; } if (c.pc != 0x002B0620u) [[unlikely]] return; }
L_002B0620:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0644; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B063Cu);  if (depth < kMaxDepth) unit_006C(c, 102u, depth + 1u); else { c.pc = 0x002B1170u; return; } if (c.pc != 0x002B063Cu) [[unlikely]] return; }
L_002B063C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0654; } }
L_002B0644:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0654u);  if (depth < kMaxDepth) unit_006C(c, 103u, depth + 1u); else { c.pc = 0x002B11B8u; return; } if (c.pc != 0x002B0654u) [[unlikely]] return; }
L_002B0654:
    set32(c.r[30], c.r[30].w[0] - 1u);
    set32(c.r[22], c.r[22].w[0] + 20u);
    set32(c.r[23], c.r[23].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0500u | kUnwind; return; } goto L_002B0500; } }
L_002B0668:
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
L_002B06A0:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[17].w[0] + 2592u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 688u), c.f[20]);
    st32((c.r[17].w[0] + 2576u), 0u);
    c.budget -= 18;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002B0918; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[30], 0u + 8u);
    set32(c.r[23], 0u + 9u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 6;
L_002B0700:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 8u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B072C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0864; } }
L_002B072C:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0750; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 96u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0750:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0774; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[16], c.r[17].w[0] + 176u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0774:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0798; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[16], c.r[17].w[0] + 256u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0798:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B07BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B07BC:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B07E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[16], c.r[17].w[0] + 416u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B07E0:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0804; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[16], c.r[17].w[0] + 496u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0804:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0828; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[16], c.r[17].w[0] + 576u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0828:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0848; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] + 656u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0860; } }
L_002B0848:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0864; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] + 736u);
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B0860:
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 1;
L_002B0864:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B0908; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[22].w[0] - 14960u);
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0880u);  if (depth < kMaxDepth) unit_0060(c, 264u, depth + 1u); else { c.pc = 0x00283C88u; return; } if (c.pc != 0x002B0880u) [[unlikely]] return; }
L_002B0880:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002B08F8; } }
    st32((c.r[18].w[0] + 144u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08B8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B08B8u) [[unlikely]] return; }
L_002B08B8:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[18].w[0] + 124u), c.f[20]);
    st32((c.r[18].w[0] + 160u), c.f[20]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 116u), c.f[1]);
    st32((c.r[18].w[0] + 120u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08E8u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x002B08E8u) [[unlikely]] return; }
L_002B08E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08F8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002B08F8u) [[unlikely]] return; }
L_002B08F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2576u)));
    set32(c.r[18], c.r[18].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 2576u), c.r[2].w[0]);
    c.budget -= 4;
L_002B0908:
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0700u | kUnwind; return; } goto L_002B0700; } }
L_002B0918:
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    c.f[20] = ld32((c.r[29].w[0] + 688u));
    set32(c.r[29], c.r[29].w[0] + 704u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B09F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B0984; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 14880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B097Cu);  if (depth < kMaxDepth) unit_006C(c, 14u, depth + 1u); else { c.pc = 0x002B02D8u; return; } if (c.pc != 0x002B097Cu) [[unlikely]] return; }
L_002B097C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B09F0; } }
L_002B0984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 14880u);
    set32(c.r[4], c.r[2].w[0] + 2592u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B09C0; } }
    set32(c.r[3], c.r[2].w[0] + 27168u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B09C0; } }
    c.budget -= 1;
L_002B09A8:
    set32(c.r[3], c.r[3].w[0] - 192u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B09A8u | kUnwind; return; } goto L_002B09A8; } }
L_002B09C0:
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B09F0; } }
    set32(c.r[2], c.r[2].w[0] + 2576u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B09F0; } }
L_002B09D8:
    set32(c.r[2], c.r[2].w[0] - 80u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B09D8u | kUnwind; return; } goto L_002B09D8; } }
L_002B09F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A18u);  if (depth < kMaxDepth) unit_006C(c, 57u, depth + 1u); else { c.pc = 0x002B0A60u; return; } if (c.pc != 0x002B0A18u) [[unlikely]] return; }
L_002B0A18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B0A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A4Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002B0A4Cu) [[unlikely]] return; }
L_002B0A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0A88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AB8u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002B0AB8u) [[unlikely]] return; }
L_002B0AB8:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0B18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AD0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x002B0AD0u) [[unlikely]] return; }
L_002B0AD0:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B04u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B0B04u) [[unlikely]] return; }
L_002B0B04:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0B1C; } }
L_002B0B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B0B1C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0B40:
    set32(c.r[29], c.r[29].w[0] - 528u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0B58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20672u)));
    set32(c.r[6], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0] - 3028u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B90u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x002B0B90u) [[unlikely]] return; }
L_002B0B90:
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BB4u);  if (depth < kMaxDepth) unit_0057(c, 190u, depth + 1u); else { c.pc = 0x0025EB58u; return; } if (c.pc != 0x002B0BB4u) [[unlikely]] return; }
L_002B0BB4:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 32192u);
    set32(c.r[7], c.r[7].w[0] - 32136u);
    set32(c.r[8], 0u + 221u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BDCu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002B0BDCu) [[unlikely]] return; }
L_002B0BDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0BEC; } }
    st32((c.r[2].w[0] + 296u), c.r[18].w[0]);
    c.budget -= 1;
L_002B0BEC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C10:
    st32((c.r[4].w[0] + 68u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C20:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C30:
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C40:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0C5C; } }
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[2].w[0] + 240u), 0u);
    c.budget -= 4;
L_002B0C5C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C70:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0C8C; } }
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[2].w[0] + 240u), 0u);
    c.budget -= 4;
L_002B0C8C:
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0CA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0CBC; } }
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[2].w[0] + 240u), 0u);
    c.budget -= 4;
L_002B0CBC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CF0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002B0CF0u) [[unlikely]] return; }
L_002B0CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D24u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002B0D24u) [[unlikely]] return; }
L_002B0D24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0D38:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B0D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D94u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002B0D94u) [[unlikely]] return; }
L_002B0D94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0DA8:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DD4u);  if (depth < kMaxDepth) unit_0060(c, 264u, depth + 1u); else { c.pc = 0x00283C88u; return; } if (c.pc != 0x002B0DD4u) [[unlikely]] return; }
L_002B0DD4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002B0E60; } }
    st32((c.r[16].w[0] + 144u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E0Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B0E0Cu) [[unlikely]] return; }
L_002B0E0C:
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    st32((c.r[16].w[0] + 112u), c.f[3]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.f[2]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E44u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x002B0E44u) [[unlikely]] return; }
L_002B0E44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E54u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x002B0E54u) [[unlikely]] return; }
L_002B0E54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0E64; } }
L_002B0E60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B0E64:
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 592u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 2592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0EB8; } }
    set32(c.r[2], c.r[4].w[0] + 27168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0EB8; } }
L_002B0EA0:
    set32(c.r[2], c.r[2].w[0] - 192u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0EA0u | kUnwind; return; } goto L_002B0EA0; } }
L_002B0EB8:
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0EF0; } }
    set32(c.r[2], c.r[4].w[0] + 2576u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0EF0; } }
    c.budget -= 1;
L_002B0ED8:
    set32(c.r[2], c.r[2].w[0] - 80u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0ED8u | kUnwind; return; } goto L_002B0ED8; } }
L_002B0EF0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B0F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F00u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002B0F00u) [[unlikely]] return; }
L_002B0F00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0F10:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 2576u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0F28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0F74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B101C; } }
L_002B0F74:
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F94u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002B0F94u) [[unlikely]] return; }
L_002B0F94:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0FAC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0FF8; } }
L_002B0FAC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FB8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x002B0FB8u) [[unlikely]] return; }
L_002B0FB8:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FECu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B0FECu) [[unlikely]] return; }
L_002B0FEC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_002B0FF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B100C; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1018; } }
L_002B100C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002B1018:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B101C:
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
L_002B1048:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1070; } }
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1070:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1080:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B109C; } }
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 84u), c.f[12]);
    c.budget -= 4;
L_002B109C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B10A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 16u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B1108; } }
    c.budget -= 1;
L_002B10D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B10F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10F0u);  if (depth < kMaxDepth) unit_006B(c, 239u, depth + 1u); else { c.pc = 0x002AFC58u; return; } if (c.pc != 0x002B10F0u) [[unlikely]] return; }
L_002B10F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 80u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B10D8u | kUnwind; return; } goto L_002B10D8; } }
L_002B1108:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[18].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1154; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2576u)));
    set32(c.r[17], c.r[18].w[0] + 2592u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B1154; } }
    c.budget -= 1;
L_002B1130:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1140u);  if (depth < kMaxDepth) unit_006B(c, 244u, depth + 1u); else { c.pc = 0x002AFDC0u; return; } if (c.pc != 0x002B1140u) [[unlikely]] return; }
L_002B1140:
    set32(c.r[17], c.r[17].w[0] + 192u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2576u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1130u | kUnwind; return; } goto L_002B1130; } }
L_002B1154:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1170:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B118C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B119C; } }
L_002B118C:
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B119C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B11AC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_002B11AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B11B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B11D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B11E4; } }
L_002B11D4:
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B11E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B11F0; } }
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 1;
L_002B11F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B11F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B121C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B122C; } }
L_002B121C:
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B122C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1248; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1248u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002B1248u) [[unlikely]] return; }
L_002B1248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B127C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B128C; } }
L_002B127C:
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B128C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B12AC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12ACu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002B12ACu) [[unlikely]] return; }
L_002B12AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B12C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B12DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B12EC; } }
L_002B12DC:
    set32(c.r[2], 0u + 80u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B12EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1304; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1304:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[19].w[0] + 2592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 2576u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B13EC; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 2;
L_002B1350:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 23216u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B137C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 23212u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1380; } }
L_002B137C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1380:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B13AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B13A0u) [[unlikely]] return; }
L_002B13A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B13B0; } }
L_002B13AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B13B0:
    st32((c.r[17].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B13D4; } }
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13D4u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x002B13D4u) [[unlikely]] return; }
L_002B13D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 2576u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 192u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1350u | kUnwind; return; } goto L_002B1350; } }
L_002B13EC:
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
L_002B1418:
    set32(c.r[2], ld32((c.r[4].w[0] + 2576u)));
    set32(c.r[3], c.r[4].w[0] + 2592u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B1460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1450; } }
L_002B1438:
    set32(c.r[2], ld32((c.r[4].w[0] + 2576u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 192u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1460; } }
L_002B1450:
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1438u | kUnwind; return; } goto L_002B1438; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002B1460:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1470:
    set32(c.r[2], ld32((c.r[4].w[0] + 2576u)));
    set32(c.r[3], c.r[4].w[0] + 2592u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B14B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B14A8; } }
L_002B1490:
    set32(c.r[2], ld32((c.r[4].w[0] + 2576u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 192u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B14B8; } }
L_002B14A8:
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1490u | kUnwind; return; } goto L_002B1490; } }
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002B14B8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002B1520; } }
    c.f[1] = ld32((c.r[9].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 20u));
    st32((c.r[7].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[9].w[0] + 24u));
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 36u));
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[9].w[0] + 40u));
    st32((c.r[8].w[0] + 12u), 0u);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1520:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1544u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002B1544u) [[unlikely]] return; }
L_002B1544:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[7].w[0] + 2592u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 2576u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B15B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B15A0; } }
    c.budget -= 1;
L_002B1588:
    set32(c.r[2], ld32((c.r[7].w[0] + 2576u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 192u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B15B0; } }
L_002B15A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1588u | kUnwind; return; } goto L_002B1588; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002B15B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B15D4; } }
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002B15C8u) [[unlikely]] return; }
L_002B15C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B15D8; } }
L_002B15D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B15D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B15E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[16], c.r[18].w[0] + 16u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B1650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_002B1620:
    st32((c.r[16].w[0] + 68u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1640u);  if (depth < kMaxDepth) unit_006B(c, 239u, depth + 1u); else { c.pc = 0x002AFC58u; return; } if (c.pc != 0x002B1640u) [[unlikely]] return; }
L_002B1640:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1620u | kUnwind; return; } goto L_002B1620; } }
L_002B1650:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1688u);  if (depth < kMaxDepth) unit_006C(c, 49u, depth + 1u); else { c.pc = 0x002B0950u; return; } if (c.pc != 0x002B1688u) [[unlikely]] return; }
L_002B1688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16B0u);  if (depth < kMaxDepth) unit_006C(c, 49u, depth + 1u); else { c.pc = 0x002B0950u; return; } if (c.pc != 0x002B16B0u) [[unlikely]] return; }
L_002B16B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B16C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16E8u);  if (depth < kMaxDepth) unit_00E2(c, 46u, depth + 1u); else { c.pc = 0x00489868u; return; } if (c.pc != 0x002B16E8u) [[unlikely]] return; }
L_002B16E8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1710; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1710u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B1710u) [[unlikely]] return; }
L_002B1710:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1720u);  if (depth < kMaxDepth) unit_00E2(c, 46u, depth + 1u); else { c.pc = 0x00489868u; return; } if (c.pc != 0x002B1720u) [[unlikely]] return; }
L_002B1720:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B174C; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1744u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B1744u) [[unlikely]] return; }
L_002B1744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1750; } }
L_002B174C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1750:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1760u);  if (depth < kMaxDepth) unit_00E2(c, 46u, depth + 1u); else { c.pc = 0x00489868u; return; } if (c.pc != 0x002B1760u) [[unlikely]] return; }
L_002B1760:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B178C; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1784u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B1784u) [[unlikely]] return; }
L_002B1784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1790; } }
L_002B178C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1790:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B17A0u);  if (depth < kMaxDepth) unit_00E2(c, 46u, depth + 1u); else { c.pc = 0x00489868u; return; } if (c.pc != 0x002B17A0u) [[unlikely]] return; }
L_002B17A0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B17CC; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B17C4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B17C4u) [[unlikely]] return; }
L_002B17C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B17D0; } }
L_002B17CC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B17D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B17F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B1838; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B1838; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 3010u);
    set32(c.r[2], c.r[3].w[0] + 12288u);
    st32((c.r[3].w[0] + 12288u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1838u);  if (depth < kMaxDepth) unit_006C(c, 131u, depth + 1u); else { c.pc = 0x002B16C0u; return; } if (c.pc != 0x002B1838u) [[unlikely]] return; }
L_002B1838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3010u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1880u);  if (depth < kMaxDepth) unit_006C(c, 131u, depth + 1u); else { c.pc = 0x002B16C0u; return; } if (c.pc != 0x002B1880u) [[unlikely]] return; }
L_002B1880:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1898:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B18C4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B18C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B18D0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B18F8:
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1920:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12288u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1948:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1960:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B198C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B198C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1998:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B19C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27064u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B19F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 27064u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27448u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1A28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A40u);  if (depth < kMaxDepth) unit_006C(c, 140u, depth + 1u); else { c.pc = 0x002B17F0u; return; } if (c.pc != 0x002B1A40u) [[unlikely]] return; }
L_002B1A40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[19].w[0] + 12832u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], c.r[17].w[0] - 31920u);
    set32(c.r[18], c.r[18].w[0] - 31872u);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[9], 0u + 216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[10].w[0] + 16u);
    st32((c.r[16].w[0] + 56u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[10].w[0] + 8u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AF8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002B1AF8u) [[unlikely]] return; }
L_002B1AF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[10], 0u + 20u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[9], 0u + 222u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B34u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002B1B34u) [[unlikely]] return; }
L_002B1B34:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B4Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002B1B4Cu) [[unlikely]] return; }
L_002B1B4C:
    set32(c.r[11], ld32((c.r[16].w[0] + 56u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[12], ld32((c.r[16].w[0] + 92u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 9304u);
    set32(c.r[2], ld32((c.r[11].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[9].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[11].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[12].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1BA4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B1BA4u) [[unlikely]] return; }
L_002B1BA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1BB0u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x002B1BB0u) [[unlikely]] return; }
L_002B1BB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1BE8; } }
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1BF4; } }
L_002B1BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002B1BF4:
    set32(c.r[7], c.r[19].w[0] + 12832u);
    set32(c.r[4], ld32((c.r[7].w[0] + 136u)));
    set32(c.r[3], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[4].d[0];
    set32(c.r[17], c.r[17].w[0] + 4095u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[17].w[0] + 4095u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[17], c.r[17].w[0] << 12);
    mmi::div(c, 0, c.r[6].w[0], c.r[17].w[0]);
    st32((c.r[7].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 17;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x002B1C34u);  goto L_002B1C38; }
L_002B1C38:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[4], ld32((c.r[7].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[7].w[0] + 112u), c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 140u), c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C58u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B1C58u) [[unlikely]] return; }
L_002B1C58:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B1C80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B20F8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CE4u);  if (depth < kMaxDepth) unit_006C(c, 254u, depth + 1u); else { c.pc = 0x002B2B38u; return; } if (c.pc != 0x002B1CE4u) [[unlikely]] return; }
L_002B1CE4:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[30], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D34; } }
L_002B1D00:
    set32(c.r[19], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D14u);  if (depth < kMaxDepth) unit_006C(c, 266u, depth + 1u); else { c.pc = 0x002B2CE0u; return; } if (c.pc != 0x002B1D14u) [[unlikely]] return; }
L_002B1D14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D2Cu);  if (depth < kMaxDepth) unit_006C(c, 265u, depth + 1u); else { c.pc = 0x002B2CC0u; return; } if (c.pc != 0x002B1D2Cu) [[unlikely]] return; }
L_002B1D2C:
    set32(c.r[20], c.r[19].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_002B1D30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002B1D34:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1D88; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D50u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002B2E10u; return; } if (c.pc != 0x002B1D50u) [[unlikely]] return; }
L_002B1D50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1D30u | kUnwind; return; } goto L_002B1D30; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 36u)));
    c.r[30].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D78u);  if (depth < kMaxDepth) unit_006C(c, 264u, depth + 1u); else { c.pc = 0x002B2CA0u; return; } if (c.pc != 0x002B1D78u) [[unlikely]] return; }
L_002B1D78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1D00u | kUnwind; return; } goto L_002B1D00; } }
    set32(c.r[30], 0u + 1u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_002B1D88:
    set32(c.r[16], c.r[23].w[0] + 12832u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B1EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DCCu);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x002B1DCCu) [[unlikely]] return; }
L_002B1DCC:
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1EE0; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[17].w[0] + 2047u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[19], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[17], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B1E30; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002B1EBC; } }
L_002B1E30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B1EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E40u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B1E40u) [[unlikely]] return; }
L_002B1E40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B1E58; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E58u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B1E58u) [[unlikely]] return; }
L_002B1E58:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 10728u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E80u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B1E80u) [[unlikely]] return; }
L_002B1E80:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E90u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B1E90u) [[unlikely]] return; }
L_002B1E90:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B1EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EA0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B1EA0u) [[unlikely]] return; }
L_002B1EA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31256u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 31256u), c.r[4].w[0]);
    c.budget -= 7;
L_002B1EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EC4u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x002B1EC4u) [[unlikely]] return; }
L_002B1EC4:
    set32(c.r[3], c.r[23].w[0] + 12832u);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1EF8; } }
L_002B1EE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002B1EECu);  goto L_002B1EF0; }
L_002B1EF0:
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 2;
L_002B1EF8:
    set32(c.r[16], c.r[23].w[0] + 12832u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1F8C; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1F8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1F8C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F48u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002B1F48u) [[unlikely]] return; }
L_002B1F48:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[6], c.r[18].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F6Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002B1F6Cu) [[unlikely]] return; }
L_002B1F6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002B1F78u);  goto L_002B1F7C; }
L_002B1F7C:
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1FE4; } }
L_002B1F8C:
    set32(c.r[16], c.r[23].w[0] + 12832u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1FB0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002B1FB0u) [[unlikely]] return; }
L_002B1FB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1FDC; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1FDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002B1FDC:
    set32(c.r[2], c.r[23].w[0] + 12832u);
    st32((c.r[2].w[0] + 128u), c.r[18].w[0]);
    c.budget -= 2;
L_002B1FE4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B20FC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] - 31256u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2008; } }
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002B2008:
    set32(c.r[17], c.r[23].w[0] + 12832u);
    set32(c.r[7], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2040; } }
    set32(c.r[16], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002B20C8; } }
L_002B2040:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B20C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2050u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B2050u) [[unlikely]] return; }
L_002B2050:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B2068; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2068u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B2068u) [[unlikely]] return; }
L_002B2068:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 10728u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2090u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B2090u) [[unlikely]] return; }
L_002B2090:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20A0u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B20A0u) [[unlikely]] return; }
L_002B20A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B20B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20B0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B20B0u) [[unlikely]] return; }
L_002B20B0:
    set32(c.r[2], ld32((c.r[20].w[0] - 31256u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] - 31256u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_002B20C8:
    set32(c.r[4], c.r[23].w[0] + 12832u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002B20E4u);  goto L_002B20E8; }
L_002B20E8:
    c.r[6].d[0] = c.hi.d[0];
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B20FC; } }
L_002B20F8:
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_002B20FC:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
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
L_002B2138:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 12832u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B227C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12832u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B227C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2180u);  if (depth < kMaxDepth) unit_006C(c, 164u, depth + 1u); else { c.pc = 0x002B1C80u; return; } if (c.pc != 0x002B2180u) [[unlikely]] return; }
L_002B2180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2278; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[18].w[0] + 12832u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2228; } }
    set32(c.r[2], 0u + 2048u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21A8u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B21A8u) [[unlikely]] return; }
L_002B21A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002B21C0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21C0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B21C0u) [[unlikely]] return; }
L_002B21C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[8], c.r[8].w[0] + 9752u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21E8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B21E8u) [[unlikely]] return; }
L_002B21E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21F8u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B21F8u) [[unlikely]] return; }
L_002B21F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002B2208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2208u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B2208u) [[unlikely]] return; }
L_002B2208:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B226C; } }
L_002B2228:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B226C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - 31920u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], c.r[7].w[0] - 31848u);
    set32(c.r[8], 0u + 647u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2258u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002B2258u) [[unlikely]] return; }
L_002B2258:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 12832u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 5;
L_002B226C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B227C; } }
L_002B2278:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B227C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B22A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22C8u);  if (depth < kMaxDepth) unit_006C(c, 187u, depth + 1u); else { c.pc = 0x002B2138u; return; } if (c.pc != 0x002B22C8u) [[unlikely]] return; }
L_002B22C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B2388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[2].w[0] + 12832u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B233C; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002B2300:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B232C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2320u) [[unlikely]] return; }
L_002B2320:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 3;
L_002B232C:
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2300u | kUnwind; return; } goto L_002B2300; } }
L_002B233C:
    set32(c.r[16], c.r[20].w[0] + 12832u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2358; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2354u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2354u) [[unlikely]] return; }
L_002B2354:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_002B2358:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 6672u), c.r[2].w[0]);
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 488u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B237Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002B237Cu) [[unlikely]] return; }
L_002B237C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2388u);  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x002B2388u) [[unlikely]] return; }
L_002B2388:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B23B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B2430; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 12816u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31816u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 488u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2418u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002B2418u) [[unlikely]] return; }
L_002B2418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31832u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2430u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x002B2430u) [[unlikely]] return; }
L_002B2430:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2448:
    st32((c.r[4].w[0] + 488u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[16].w[0] + 12832u);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2490u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x002B2490u) [[unlikely]] return; }
L_002B2490:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 7;
    if (c.r[4].sd[0] < 0) { set32(c.r[4], 0u - c.r[4].w[0]);  goto L_002B24AC; }
L_002B24AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B24C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2504u);  if (depth < kMaxDepth) unit_006C(c, 233u, depth + 1u); else { c.pc = 0x002B2818u; return; } if (c.pc != 0x002B2504u) [[unlikely]] return; }
L_002B2504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2524; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2518u);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B2808u; return; } if (c.pc != 0x002B2518u) [[unlikely]] return; }
L_002B2518:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B253C; } }
L_002B2524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[2].w[0] + 12832u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002B25EC; } }
L_002B253C:
    set32(c.r[16], c.r[5].w[0] + 12832u);
    st32((c.r[5].w[0] + 12832u), 0u);
    st32((c.r[16].w[0] + 40u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[18].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2560u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x002B2560u) [[unlikely]] return; }
L_002B2560:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2580u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B2580u) [[unlikely]] return; }
L_002B2580:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002B2598; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2598u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B2598u) [[unlikely]] return; }
L_002B2598:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 6736u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B25C0u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B25C0u) [[unlikely]] return; }
L_002B25C0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B25D0u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B25D0u) [[unlikely]] return; }
L_002B25D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002B25E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B25E0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B25E0u) [[unlikely]] return; }
L_002B25E0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    c.budget -= 3;
L_002B25EC:
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
L_002B2618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 12832u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 120u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2048u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 12832u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2678u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B2678u) [[unlikely]] return; }
L_002B2678:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002B2690; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2690u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B2690u) [[unlikely]] return; }
L_002B2690:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[8], c.r[8].w[0] + 9752u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26B8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B26B8u) [[unlikely]] return; }
L_002B26B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26C8u);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B26C8u) [[unlikely]] return; }
L_002B26C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002B26D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26D8u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B26D8u) [[unlikely]] return; }
L_002B26D8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2708:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2738u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x002B2738u) [[unlikely]] return; }
L_002B2738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B27C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12832u);
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B27C0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2768u);  if (depth < kMaxDepth) unit_006C(c, 254u, depth + 1u); else { c.pc = 0x002B2B38u; return; } if (c.pc != 0x002B2768u) [[unlikely]] return; }
L_002B2768:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_002B27B4; } }
L_002B2778:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2788u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002B2E10u; return; } if (c.pc != 0x002B2788u) [[unlikely]] return; }
L_002B2788:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27A0u);  if (depth < kMaxDepth) unit_006C(c, 255u, depth + 1u); else { c.pc = 0x002B2B58u; return; } if (c.pc != 0x002B27A0u) [[unlikely]] return; }
L_002B27A0:
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2778u | kUnwind; return; } goto L_002B2778; } }
L_002B27B4:
    set32(c.r[3], c.r[21].w[0] + 12832u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
L_002B27C0:
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
L_002B27E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12868u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B27F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12872u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12952u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2818:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12948u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2828:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 12832u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B288C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - 31920u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], c.r[7].w[0] - 31848u);
    set32(c.r[8], 0u + 647u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2878u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002B2878u) [[unlikely]] return; }
L_002B2878:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 12832u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 5;
L_002B288C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B28A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[3].w[0] + 12832u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 23224u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B2938; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2938; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2938; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2910u);  if (depth < kMaxDepth) unit_009C(c, 102u, depth + 1u); else { c.pc = 0x00370AC0u; return; } if (c.pc != 0x002B2910u) [[unlikely]] return; }
L_002B2910:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2938; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 6;
L_002B2938:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12832u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[2].w[0] + 12832u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12832u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29A8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002B29A8u) [[unlikely]] return; }
L_002B29A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B29B8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 12848u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29D4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002B29D4u) [[unlikely]] return; }
L_002B29D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B29E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31256u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] - 31256u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[2].w[0] + 12320u), 0u);
    c.budget -= 2;
L_002B2A08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2A18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31256u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2A30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2A40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 12832u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2A8C; } }
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002B2B18; } }
L_002B2A8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B2B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A9Cu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x002B2A9Cu) [[unlikely]] return; }
L_002B2A9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B2AB4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AB4u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002B2AB4u) [[unlikely]] return; }
L_002B2AB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 10728u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2ADCu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002B2ADCu) [[unlikely]] return; }
L_002B2ADC:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AECu);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00379168u; return; } if (c.pc != 0x002B2AECu) [[unlikely]] return; }
L_002B2AEC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002B2AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AFCu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002B2AFCu) [[unlikely]] return; }
L_002B2AFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31256u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 31256u), c.r[4].w[0]);
    c.budget -= 7;
L_002B2B18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12888u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12888u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 12904u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 12892u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12888u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + 12832u);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002B2C34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2C34:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2C80:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2CA0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2CC0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2CE0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D28u);  if (depth < kMaxDepth) unit_0079(c, 129u, depth + 1u); else { c.pc = 0x002E6098u; return; } if (c.pc != 0x002B2D28u) [[unlikely]] return; }
L_002B2D28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12832u);
    set32(c.r[7], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 4u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D74u);  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF908u; return; } if (c.pc != 0x002B2D74u) [[unlikely]] return; }
L_002B2D74:
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2DB0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2DD0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2DF0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2E10:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[2].w[0] + 12832u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0] + 56u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_002B2EA4; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E98; } }
    c.budget -= 1;
L_002B2E70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2EA4; } }
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[10].w[0] + 12832u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
L_002B2E98:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2E70u | kUnwind; return; } goto L_002B2E70; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_002B2EA4:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2EB0:
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12916u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] + 12832u);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2F1C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2F10u) [[unlikely]] return; }
L_002B2F10:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 3;
L_002B2F1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[2].w[0] + 12920u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12832u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2F74; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2F70u) [[unlikely]] return; }
L_002B2F70:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_002B2F74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[2].w[0] + 12864u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2F98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 12976u), c.r[16].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2FE0; } }
    c.budget -= 1;
L_002B2FC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FCCu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x002B2FCCu) [[unlikely]] return; }
L_002B2FCC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 24u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2FC0u | kUnwind; return; } goto L_002B2FC0; } }
L_002B2FE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2FF8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B3008; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B3008:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B3018; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B3018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12976u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B302C; } }
L_002B3028:
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 1;
L_002B302C:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B307C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3028u | kUnwind; return; } goto L_002B3028; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B3054; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B3054:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B3064; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B3064:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002B3074; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B3074:
    set32(c.r[2], c.r[3].w[0] + 20u);
    st32((c.r[4].w[0] + 492u), c.r[2].w[0]);
    c.budget -= 2;
L_002B307C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3088:
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B30AC; } }
    c.budget -= 1;
L_002B30A8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002B30AC:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B30E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 492u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B30D8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B30E0; } }
L_002B30D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B30A8u | kUnwind; return; } goto L_002B30A8; } }
L_002B30E0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B30F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12872u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12832u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3130u);  if (depth < kMaxDepth) unit_006C(c, 202u, depth + 1u); else { c.pc = 0x002B23B0u; return; } if (c.pc != 0x002B3130u) [[unlikely]] return; }
L_002B3130:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 448u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B316Cu);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B316Cu) [[unlikely]] return; }
L_002B316C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B317Cu);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B317Cu) [[unlikely]] return; }
L_002B317C:
    mmi::mult(c, 0, c.r[16].w[0], c.r[19].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB6DB0000u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 28087ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31B0u);  if (depth < kMaxDepth) unit_006C(c, 341u, depth + 1u); else { c.pc = 0x002B3950u; return; } if (c.pc != 0x002B31B0u) [[unlikely]] return; }
L_002B31B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31C0u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B31C0u) [[unlikely]] return; }
L_002B31C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002B324C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B323C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002B320C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3200; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_002B3200:
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B323C; } }
L_002B320C:
    c.budget -= 1;
L_002B3210:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B323C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3210u | kUnwind; return; } goto L_002B3210; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3238; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_002B3238:
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_002B323C:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 4;
L_002B324C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3280u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3280u) [[unlikely]] return; }
L_002B3280:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B32A8u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B32A8u) [[unlikely]] return; }
L_002B32A8:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    st8((c.r[2].w[0] + 416u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002B32D8; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002B32C0:
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 448u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B32C0u | kUnwind; return; } goto L_002B32C0; } }
L_002B32D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B32E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3300u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3300u) [[unlikely]] return; }
L_002B3300:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_002B3318:
    set32(c.r[2], ld32((c.r[16].w[0] - 1200u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002B3338; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] - 1200u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002B3338:
    set32(c.r[16], c.r[16].w[0] + 600u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3318u | kUnwind; return; } goto L_002B3318; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3384u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002B3384u) [[unlikely]] return; }
L_002B3384:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B33F4; } }
    set32(c.r[2], c.r[6].w[0] + 528u);
    set32(c.r[8], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B33F4; } }
    set32(c.r[7], 0u - 2u);
    set32(c.r[5], c.r[6].w[0] + 1728u);
    set32(c.r[2], c.r[7].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + 1128u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2328u);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 18;
L_002B33F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3408:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B342Cu);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002B342Cu) [[unlikely]] return; }
L_002B342C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B343Cu);  if (depth < kMaxDepth) unit_006C(c, 317u, depth + 1u); else { c.pc = 0x002B34F0u; return; } if (c.pc != 0x002B343Cu) [[unlikely]] return; }
L_002B343C:
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3458:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3484u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002B3484u) [[unlikely]] return; }
L_002B3484:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3494u);  if (depth < kMaxDepth) unit_006C(c, 317u, depth + 1u); else { c.pc = 0x002B34F0u; return; } if (c.pc != 0x002B3494u) [[unlikely]] return; }
L_002B3494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 104u);
    set32(c.r[3], 0u + 7u);
    c.budget -= 5;
L_002B34A8:
    c.f[0] = ld32((c.r[2].w[0] - 8u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 4u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B34A8u | kUnwind; return; } goto L_002B34A8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B34F0:
    set32(c.r[3], 0u + 464u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3534u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x002B3534u) [[unlikely]] return; }
L_002B3534:
    set32(c.r[4], 0u + 464u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0] + 108u));
    c.f[2] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 100u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[3].w[0] + 104u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35A0u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B35A0u) [[unlikely]] return; }
L_002B35A0:
    set32(c.r[4], 0u + 448u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB6DB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 28087ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B35E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3608u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3608u) [[unlikely]] return; }
L_002B3608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B364C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B3638; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3630u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x002B3630u) [[unlikely]] return; }
L_002B3630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B364C; } }
L_002B3638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B364Cu);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x002B364Cu) [[unlikely]] return; }
L_002B364C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3668:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3680u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3680u) [[unlikely]] return; }
L_002B3680:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2928u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B36A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36C8u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B36C8u) [[unlikely]] return; }
L_002B36C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B371C; } }
    c.budget -= 1;
L_002B36E0:
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36F0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002B36F0u) [[unlikely]] return; }
L_002B36F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3704; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3720; } }
L_002B3704:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 448u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B36E0u | kUnwind; return; } goto L_002B36E0; } }
L_002B371C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B3720:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3764u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3764u) [[unlikely]] return; }
L_002B3764:
    set32(c.r[4], 0u + 448u);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002B379C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B37C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B37DC; } }
L_002B379C:
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B37C0; } }
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B37DC; } }
L_002B37C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB6DB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 28087ull;
    set32(c.r[2], 0u + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_002B37DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B37F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3808; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_002B3808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3830u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3830u) [[unlikely]] return; }
L_002B3830:
    set32(c.r[3], 0u + 448u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002B38C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B38B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002B3884; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3878; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_002B3878:
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38B4; } }
L_002B3884:
    c.budget -= 1;
L_002B3888:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B38B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3888u | kUnwind; return; } goto L_002B3888; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B38B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 1;
L_002B38B0:
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_002B38B4:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 4;
L_002B38C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B38E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B3934; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B390C; } }
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B390C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3920u);  if (depth < kMaxDepth) unit_006C(c, 338u, depth + 1u); else { c.pc = 0x002B38E0u; return; } if (c.pc != 0x002B3920u) [[unlikely]] return; }
L_002B3920:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3934u);  if (depth < kMaxDepth) unit_006C(c, 338u, depth + 1u); else { c.pc = 0x002B38E0u; return; } if (c.pc != 0x002B3934u) [[unlikely]] return; }
L_002B3934:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3950:
    set32(c.r[2], 0u + 600u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 1728u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2928u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3998u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3998u) [[unlikely]] return; }
L_002B3998:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1728u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2928u)));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B39C8:
    set32(c.r[7], c.r[4].w[0] + 2928u);
    set32(c.r[2], 0u + 600u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1728u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3A08:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2928u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3A20:
    set32(c.r[2], 0u + 600u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3A40:
    set32(c.r[2], 0u + 600u);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1728u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3A60:
    set32(c.r[29], c.r[29].w[0] - 688u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 13936u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    set32(c.r[20], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 14160u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B3CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 14176u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
L_002B3AD8:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[20].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    if (c.r[6].sd[0] < 0) { set32(c.r[6], 0u - c.r[6].w[0]);  goto L_002B3B00; }
L_002B3B00:
    set32(c.r[10], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B0Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B3B0Cu) [[unlikely]] return; }
L_002B3B0C:
    set32(c.r[21], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[23].w[0] + 14160u)));
    set32(c.r[4], ld32((c.r[30].w[0] - 28812u)));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] << 4);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.f[2]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    set32(c.r[7], c.f[3]);
    mmi::pextlw(c.r[8], c.r[5], c.r[4]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st32((c.r[23].w[0] + 14160u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 23;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B3CCC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 28808u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3CCC; } }
    set32(c.r[6], ld32((c.r[16].w[0] - 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    if (c.r[6].sd[0] < 0) { set32(c.r[6], 0u - c.r[6].w[0]);  goto L_002B3B90; }
L_002B3B90:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3BA4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002B3BA4u) [[unlikely]] return; }
L_002B3BA4:
    set32(c.r[17], c.r[16].w[0] - 8u);
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    set32(c.r[3], ld32((c.r[18].w[0] - 28808u)));
    c.f[11] = fp::sub(c.f[3], c.f[0]);
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.f[3] = ld32((c.r[19].w[0] + 136u));
    c.f[10] = fp::sub(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_div(c, 11u, c.f[11], c.f[1]);
    c.f[9] = fp::sub(c.f[5], c.f[3]);
    c.f[8] = fp::sub(c.f[6], c.f[0]);
    fpu_div(c, 10u, c.f[10], c.f[1]);
    fpu_div(c, 9u, c.f[9], c.f[1]);
    fpu_div(c, 8u, c.f[8], c.f[1]);
    c.budget -= 33;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002B3CCC; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[11], ld32((c.r[2].w[0] - 28812u)));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[12].w[0] + 14160u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
L_002B3C48:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[6] = ld32((c.r[6].w[0] + 128u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[5] = ld32((c.r[6].w[0] + 132u));
    c.f[3] = ld32((c.r[6].w[0] + 136u));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[10].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.f[7] = fp::mul(c.f[8], c.f[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[4] = fp::mul(c.f[11], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[1] = fp::mul(c.f[10], c.f[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[6] = fp::add(c.f[6], c.f[4]);
    c.f[5] = fp::add(c.f[5], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[7]);
    set32(c.r[13], c.f[6]);
    set32(c.r[14], c.f[5]);
    set32(c.r[15], c.f[3]);
    set32(c.r[16], c.f[2]);
    mmi::pextlw(c.r[8], c.r[14], c.r[13]);
    mmi::pextlw(c.r[9], c.r[16], c.r[15]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3C48u | kUnwind; return; } goto L_002B3C48; } }
    st32((c.r[12].w[0] + 14160u), c.r[4].w[0]);
    c.budget -= 1;
L_002B3CCC:
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3AD8u | kUnwind; return; } goto L_002B3AD8; } }
L_002B3CE8:
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 688u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3D20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14160u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B3E10; } }
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.vu0.vf[3] = c.r[5];
    set32(c.r[12], 0u + 448u);
    c.budget -= 4;
L_002B3D48:
    set32(c.r[3], ld32((c.r[10].w[0] - 28812u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 2u, 3u);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B3DFC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 78u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.f[2]);
    set32(c.r[2], c.r[2].w[0] + 80u);
    set32(c.r[3], c.f[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[5], c.f[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    set32(c.r[6], c.f[0]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    mmi::pextlw(c.r[8], c.r[4], c.r[3]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[3] = c.r[8];
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 15u, 4u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 15u, 3u, 1u, c.vu0.vf[3].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[3]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3E14; } }
L_002B3DFC:
    set32(c.r[2], ld32((c.r[11].w[0] + 14160u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3D48u | kUnwind; return; } goto L_002B3D48; } }
L_002B3E10:
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    c.budget -= 1;
L_002B3E14:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3E20:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 344u), c.f[21]);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 13u, depth); } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14048u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 13u, depth); } }
    c.f[21] = ld32((c.r[19].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E94u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x002B3E94u) [[unlikely]] return; }
L_002B3E94:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 3664u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EB8u);  if (depth < kMaxDepth) unit_006C(c, 348u, depth + 1u); else { c.pc = 0x002B3A60u; return; } if (c.pc != 0x002B3EB8u) [[unlikely]] return; }
L_002B3EB8:
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[5], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[4], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 1u, 1u, 0u, c.vu0.vf[1].w[3]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = ld32((c.r[2].w[0] + 13024u));
    set32(c.r[21], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 4u, c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::add(c.f[3], c.f[3]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.f[2]);
    c.r[30].d[0] = 0ull + 0ull;
    mmi::pextlw(c.r[8], c.r[2], c.r[4]);
    mmi::pextlw(c.r[9], c.r[4], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    c.r[22].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    set32(c.r[8], c.f[1]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 15u, 3u, 2u, 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    c.budget -= 55;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 10u, depth); } }
    c.budget -= 1;
L_002B3F98:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_002B3FB0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FB0u);  if (depth < kMaxDepth) unit_006B(c, 189u, depth + 1u); else { c.pc = 0x002AF6B8u; return; } if (c.pc != 0x002B3FB0u) [[unlikely]] return; }
L_002B3FB0:
    set32(c.r[2], ld32((c.r[20].w[0] - 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[20].w[0] - 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FCCu);  if (depth < kMaxDepth) unit_004F(c, 39u, depth + 1u); else { c.pc = 0x0023C790u; return; } if (c.pc != 0x002B3FCCu) [[unlikely]] return; }
L_002B3FCC:
    c.r[2].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006D(c, 2u, depth); } }
    set32(c.r[3], 0u + 448u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 224u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[6].w[0] + 12816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 80u);
    c.budget -= 10;
    [[clang::musttail]] return unit_006D(c, 1u, depth);
}

}
