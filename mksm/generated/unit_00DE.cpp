#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DE[4096] = {
    1, 2, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292,
    0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00DE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00478000;
    case 2u: goto L_00478004;
    case 3u: goto L_0047800C;
    case 4u: goto L_00478010;
    case 5u: goto L_00478024;
    case 6u: goto L_00478048;
    case 7u: goto L_00478054;
    case 8u: goto L_00478064;
    case 9u: goto L_00478074;
    case 10u: goto L_00478148;
    case 11u: goto L_00478154;
    case 12u: goto L_00478164;
    case 13u: goto L_0047817C;
    case 14u: goto L_00478190;
    case 15u: goto L_004781F4;
    case 16u: goto L_0047821C;
    case 17u: goto L_00478234;
    case 18u: goto L_0047824C;
    case 19u: goto L_00478298;
    case 20u: goto L_004782A4;
    case 21u: goto L_004782B0;
    case 22u: goto L_00478344;
    case 23u: goto L_0047835C;
    case 24u: goto L_00478364;
    case 25u: goto L_0047836C;
    case 26u: goto L_00478380;
    case 27u: goto L_0047838C;
    case 28u: goto L_00478398;
    case 29u: goto L_004783A4;
    case 30u: goto L_004783D0;
    case 31u: goto L_004783D8;
    case 32u: goto L_004783E4;
    case 33u: goto L_00478424;
    case 34u: goto L_00478448;
    case 35u: goto L_0047847C;
    case 36u: goto L_00478490;
    case 37u: goto L_0047849C;
    case 38u: goto L_004784A8;
    case 39u: goto L_004784B4;
    case 40u: goto L_004784C4;
    case 41u: goto L_004784E4;
    case 42u: goto L_004784F8;
    case 43u: goto L_00478508;
    case 44u: goto L_004785B4;
    case 45u: goto L_004785C8;
    case 46u: goto L_004785D8;
    case 47u: goto L_004785EC;
    case 48u: goto L_00478604;
    case 49u: goto L_0047861C;
    case 50u: goto L_00478634;
    case 51u: goto L_00478648;
    case 52u: goto L_00478660;
    case 53u: goto L_00478688;
    case 54u: goto L_00478694;
    case 55u: goto L_004786A0;
    case 56u: goto L_004786AC;
    case 57u: goto L_004786B8;
    case 58u: goto L_004786C4;
    case 59u: goto L_004786C8;
    case 60u: goto L_004786E8;
    case 61u: goto L_00478718;
    case 62u: goto L_00478738;
    case 63u: goto L_00478748;
    case 64u: goto L_00478750;
    case 65u: goto L_004787A0;
    case 66u: goto L_0047884C;
    case 67u: goto L_0047885C;
    case 68u: goto L_00478870;
    case 69u: goto L_004788B0;
    case 70u: goto L_00478960;
    case 71u: goto L_00478988;
    case 72u: goto L_00478998;
    case 73u: goto L_004789B8;
    case 74u: goto L_004789D0;
    case 75u: goto L_004789DC;
    case 76u: goto L_004789EC;
    case 77u: goto L_004789F8;
    case 78u: goto L_00478A18;
    case 79u: goto L_00478A20;
    case 80u: goto L_00478A38;
    case 81u: goto L_00478A70;
    case 82u: goto L_00478A88;
    case 83u: goto L_00478A90;
    case 84u: goto L_00478A98;
    case 85u: goto L_00478AB0;
    case 86u: goto L_00478AE8;
    case 87u: goto L_00478B00;
    case 88u: goto L_00478B10;
    case 89u: goto L_00478B2C;
    case 90u: goto L_00478B40;
    case 91u: goto L_00478B6C;
    case 92u: goto L_00478B70;
    case 93u: goto L_00478B80;
    case 94u: goto L_00478B9C;
    case 95u: goto L_00478BB0;
    case 96u: goto L_00478BC8;
    case 97u: goto L_00478BD8;
    case 98u: goto L_00478BF0;
    case 99u: goto L_00478C00;
    case 100u: goto L_00478C2C;
    case 101u: goto L_00478C40;
    case 102u: goto L_00478C58;
    case 103u: goto L_00478C98;
    case 104u: goto L_00478CBC;
    case 105u: goto L_00478CD4;
    case 106u: goto L_00478CE4;
    case 107u: goto L_00478CFC;
    case 108u: goto L_00478D14;
    case 109u: goto L_00478D50;
    case 110u: goto L_00478DD0;
    case 111u: goto L_00478E68;
    case 112u: goto L_00478ED0;
    case 113u: goto L_00478EFC;
    case 114u: goto L_00478F64;
    case 115u: goto L_00478FCC;
    case 116u: goto L_00479034;
    case 117u: goto L_00479100;
    case 118u: goto L_004791B8;
    case 119u: goto L_00479290;
    case 120u: goto L_004792AC;
    case 121u: goto L_004793A0;
    case 122u: goto L_00479420;
    case 123u: goto L_004794C8;
    case 124u: goto L_00479518;
    case 125u: goto L_00479540;
    case 126u: goto L_00479574;
    case 127u: goto L_00479588;
    case 128u: goto L_004795A0;
    case 129u: goto L_004795D0;
    case 130u: goto L_00479600;
    case 131u: goto L_00479638;
    case 132u: goto L_00479690;
    case 133u: goto L_004796A0;
    case 134u: goto L_00479784;
    case 135u: goto L_004797C0;
    case 136u: goto L_004797DC;
    case 137u: goto L_004797F4;
    case 138u: goto L_00479804;
    case 139u: goto L_00479810;
    case 140u: goto L_00479820;
    case 141u: goto L_00479828;
    case 142u: goto L_00479840;
    case 143u: goto L_00479850;
    case 144u: goto L_0047985C;
    case 145u: goto L_00479870;
    case 146u: goto L_00479890;
    case 147u: goto L_004798D8;
    case 148u: goto L_004798E0;
    case 149u: goto L_004798F0;
    case 150u: goto L_00479904;
    case 151u: goto L_00479928;
    case 152u: goto L_00479944;
    case 153u: goto L_00479998;
    case 154u: goto L_004799A4;
    case 155u: goto L_004799B0;
    case 156u: goto L_004799BC;
    case 157u: goto L_004799C8;
    case 158u: goto L_004799D8;
    case 159u: goto L_004799F0;
    case 160u: goto L_00479A08;
    case 161u: goto L_00479A14;
    case 162u: goto L_00479A3C;
    case 163u: goto L_00479A68;
    case 164u: goto L_00479A8C;
    case 165u: goto L_00479AD8;
    case 166u: goto L_00479B28;
    case 167u: goto L_00479BE8;
    case 168u: goto L_00479C30;
    case 169u: goto L_00479C80;
    case 170u: goto L_00479C90;
    case 171u: goto L_00479CB8;
    case 172u: goto L_00479CF0;
    case 173u: goto L_00479D38;
    case 174u: goto L_00479D60;
    case 175u: goto L_00479D78;
    case 176u: goto L_00479DC8;
    case 177u: goto L_00479DD4;
    case 178u: goto L_00479DDC;
    case 179u: goto L_00479DF8;
    case 180u: goto L_00479E08;
    case 181u: goto L_00479E44;
    case 182u: goto L_00479E60;
    case 183u: goto L_00479E68;
    case 184u: goto L_00479E88;
    case 185u: goto L_00479ED8;
    case 186u: goto L_00479F00;
    case 187u: goto L_00479F3C;
    case 188u: goto L_00479F84;
    case 189u: goto L_00479F88;
    case 190u: goto L_00479F8C;
    case 191u: goto L_00479FB4;
    case 192u: goto L_00479FCC;
    case 193u: goto L_00479FD4;
    case 194u: goto L_00479FDC;
    case 195u: goto L_00479FF4;
    case 196u: goto L_00479FFC;
    case 197u: goto L_0047A008;
    case 198u: goto L_0047A048;
    case 199u: goto L_0047A07C;
    case 200u: goto L_0047A084;
    case 201u: goto L_0047A090;
    case 202u: goto L_0047A0B8;
    case 203u: goto L_0047A0C0;
    case 204u: goto L_0047A0C8;
    case 205u: goto L_0047A0DC;
    case 206u: goto L_0047A0E4;
    case 207u: goto L_0047A110;
    case 208u: goto L_0047A114;
    case 209u: goto L_0047A164;
    case 210u: goto L_0047A1A0;
    case 211u: goto L_0047A1B4;
    case 212u: goto L_0047A1C4;
    case 213u: goto L_0047A1D0;
    case 214u: goto L_0047A1F0;
    case 215u: goto L_0047A200;
    case 216u: goto L_0047A20C;
    case 217u: goto L_0047A258;
    case 218u: goto L_0047A270;
    case 219u: goto L_0047A290;
    case 220u: goto L_0047A2F8;
    case 221u: goto L_0047A2FC;
    case 222u: goto L_0047A33C;
    case 223u: goto L_0047A360;
    case 224u: goto L_0047A388;
    case 225u: goto L_0047A3AC;
    case 226u: goto L_0047A3C4;
    case 227u: goto L_0047A3C8;
    case 228u: goto L_0047A408;
    case 229u: goto L_0047A414;
    case 230u: goto L_0047A4D0;
    case 231u: goto L_0047A520;
    case 232u: goto L_0047A528;
    case 233u: goto L_0047A544;
    case 234u: goto L_0047A578;
    case 235u: goto L_0047A5BC;
    case 236u: goto L_0047A5F0;
    case 237u: goto L_0047A608;
    case 238u: goto L_0047A698;
    case 239u: goto L_0047A700;
    case 240u: goto L_0047A73C;
    case 241u: goto L_0047A778;
    case 242u: goto L_0047A7A0;
    case 243u: goto L_0047A7DC;
    case 244u: goto L_0047A850;
    case 245u: goto L_0047A8C4;
    case 246u: goto L_0047A904;
    case 247u: goto L_0047A938;
    case 248u: goto L_0047A9A0;
    case 249u: goto L_0047A9D4;
    case 250u: goto L_0047AA10;
    case 251u: goto L_0047AA38;
    case 252u: goto L_0047AA74;
    case 253u: goto L_0047AA98;
    case 254u: goto L_0047AB00;
    case 255u: goto L_0047AB34;
    case 256u: goto L_0047AB70;
    case 257u: goto L_0047AB98;
    case 258u: goto L_0047ABD4;
    case 259u: goto L_0047ABFC;
    case 260u: goto L_0047AC28;
    case 261u: goto L_0047AC68;
    case 262u: goto L_0047AC98;
    case 263u: goto L_0047AD00;
    case 264u: goto L_0047AD34;
    case 265u: goto L_0047AD70;
    case 266u: goto L_0047AD98;
    case 267u: goto L_0047ADD4;
    case 268u: goto L_0047AE18;
    case 269u: goto L_0047AE50;
    case 270u: goto L_0047AEE0;
    case 271u: goto L_0047AF70;
    case 272u: goto L_0047AFD8;
    case 273u: goto L_0047B000;
    case 274u: goto L_0047B050;
    case 275u: goto L_0047B060;
    case 276u: goto L_0047B088;
    case 277u: goto L_0047B0C0;
    case 278u: goto L_0047B108;
    case 279u: goto L_0047B12C;
    case 280u: goto L_0047B138;
    case 281u: goto L_0047B188;
    case 282u: goto L_0047B190;
    case 283u: goto L_0047B1B0;
    case 284u: goto L_0047B200;
    case 285u: goto L_0047B228;
    case 286u: goto L_0047B264;
    case 287u: goto L_0047B2AC;
    case 288u: goto L_0047B2B0;
    case 289u: goto L_0047B2B4;
    case 290u: goto L_0047B2DC;
    case 291u: goto L_0047B2F4;
    case 292u: goto L_0047B2FC;
    case 293u: goto L_0047B304;
    case 294u: goto L_0047B31C;
    case 295u: goto L_0047B324;
    case 296u: goto L_0047B330;
    case 297u: goto L_0047B370;
    case 298u: goto L_0047B3A4;
    case 299u: goto L_0047B3AC;
    case 300u: goto L_0047B3B8;
    case 301u: goto L_0047B3E0;
    case 302u: goto L_0047B3E8;
    case 303u: goto L_0047B3FC;
    case 304u: goto L_0047B404;
    case 305u: goto L_0047B430;
    case 306u: goto L_0047B434;
    case 307u: goto L_0047B484;
    case 308u: goto L_0047B4EC;
    case 309u: goto L_0047B4F0;
    case 310u: goto L_0047B530;
    case 311u: goto L_0047B554;
    case 312u: goto L_0047B57C;
    case 313u: goto L_0047B5A0;
    case 314u: goto L_0047B5B4;
    case 315u: goto L_0047B5B8;
    case 316u: goto L_0047B5F8;
    case 317u: goto L_0047B604;
    case 318u: goto L_0047B6C8;
    case 319u: goto L_0047B718;
    case 320u: goto L_0047B720;
    case 321u: goto L_0047B73C;
    case 322u: goto L_0047B770;
    case 323u: goto L_0047B7B4;
    case 324u: goto L_0047B7E4;
    case 325u: goto L_0047B7FC;
    case 326u: goto L_0047B888;
    case 327u: goto L_0047B8F0;
    case 328u: goto L_0047B92C;
    case 329u: goto L_0047B968;
    case 330u: goto L_0047B990;
    case 331u: goto L_0047B9CC;
    case 332u: goto L_0047BA40;
    case 333u: goto L_0047BAB4;
    case 334u: goto L_0047BAF4;
    case 335u: goto L_0047BB28;
    case 336u: goto L_0047BB90;
    case 337u: goto L_0047BBC4;
    case 338u: goto L_0047BC00;
    case 339u: goto L_0047BC28;
    case 340u: goto L_0047BC64;
    case 341u: goto L_0047BC88;
    case 342u: goto L_0047BCF0;
    case 343u: goto L_0047BD24;
    case 344u: goto L_0047BD60;
    case 345u: goto L_0047BD88;
    case 346u: goto L_0047BDC4;
    case 347u: goto L_0047BDEC;
    case 348u: goto L_0047BE18;
    case 349u: goto L_0047BE58;
    case 350u: goto L_0047BE88;
    case 351u: goto L_0047BEF0;
    case 352u: goto L_0047BF24;
    case 353u: goto L_0047BF60;
    case 354u: goto L_0047BF88;
    case 355u: goto L_0047BFC4;
    default: bad_entry(c, 0x00478000u); return;
    }
L_00478000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00478004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00478688; } }
L_0047800C:
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_00478010:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478024u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 198u, depth + 1u); else { c.pc = 0x0047EBC0u; return; } if (c.pc != 0x00478024u) [[unlikely]] return; }
L_00478024:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[7], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.r[7].w[0]);  if (t) { goto L_004784B4; } }
    c.budget -= 1;
L_00478048:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478054u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 227u, depth + 1u); else { c.pc = 0x0047F180u; return; } if (c.pc != 0x00478054u) [[unlikely]] return; }
L_00478054:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 234u, depth + 1u); else { c.pc = 0x0047F2D8u; return; } if (c.pc != 0x00478064u) [[unlikely]] return; }
L_00478064:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_004780E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047868C; } }
L_00478074:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_00478174; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004780CC; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 12;
    c.r[2].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_00478124; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];  if (t) { goto L_00478688; } }
L_004780CC:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00478124; } }
L_004780E0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] & c.r[5].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[5].d[0];  if (t) { goto L_00478688; } }
L_00478124:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0047868C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477FF0u | kUnwind; return; } [[clang::musttail]] return unit_00DD(c, 350u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 245u, depth + 1u); else { c.pc = 0x0047F4D0u; return; } if (c.pc != 0x00478148u) [[unlikely]] return; }
L_00478148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478154u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x00478154u) [[unlikely]] return; }
L_00478154:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478164u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00478164u) [[unlikely]] return; }
L_00478164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477FD4u | kUnwind; return; } [[clang::musttail]] return unit_00DD(c, 348u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047868C; } }
L_00478174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047817Cu); set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_00DF(c, 253u, depth + 1u); else { c.pc = 0x0047F8B0u; return; } if (c.pc != 0x0047817Cu) [[unlikely]] return; }
L_0047817C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00478190u) [[unlikely]] return; }
L_00478190:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00478224; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004781B0; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00478250; } }
L_004781B0:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004781E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477FD8u | kUnwind; return; } [[clang::musttail]] return unit_00DD(c, 349u, depth); } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[18].d[0] = 0ull | 49136ull;
    c.r[18].d[0] = c.r[18].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478250; } }
L_004781E4:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004781F4u) [[unlikely]] return; }
L_004781F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047820C; } }
    c.r[16].d[0] = 0ull | 65408ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478244; } }
L_0047820C:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047821Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0047821Cu) [[unlikely]] return; }
L_0047821C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00478240; } }
L_00478224:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x00478234u) [[unlikely]] return; }
L_00478234:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00478250; } }
L_00478240:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00478244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047824Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047824Cu) [[unlikely]] return; }
L_0047824C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00478250:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[30].d[0];
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FE00000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00478324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFCB00000u);
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], 0u - 1u);
    c.r[19].d[0] = c.r[19].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] & c.r[19].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 245u, depth + 1u); else { c.pc = 0x0047F4D0u; return; } if (c.pc != 0x00478298u) [[unlikely]] return; }
L_00478298:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004782A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x004782A4u) [[unlikely]] return; }
L_004782A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004782B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x004782B0u) [[unlikely]] return; }
L_004782B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7C9F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[30].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x03500000u);  if (t) { goto L_00478310; } }
    c.r[2].d[0] = 0ull | 65503ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.budget -= 9;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[17].d[0] & c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477DD8u | kUnwind; return; } [[clang::musttail]] return unit_00DD(c, 335u, depth); } }
    c.r[2].d[0] = 0ull | 65503ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] << 31;
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];  if (t) { goto L_00478484; } }
L_00478310:
    c.r[17].d[0] = c.r[17].d[0] & c.r[19].d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_004783A8; } }
L_00478324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03400000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00478384; } }
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00478344u) [[unlikely]] return; }
L_00478344:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00478384; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047835Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0047835Cu) [[unlikely]] return; }
L_0047835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478364u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x00478364u) [[unlikely]] return; }
L_00478364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047836Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047836Cu) [[unlikely]] return; }
L_0047836C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00478384; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478380u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x00478380u) [[unlikely]] return; }
L_00478380:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00478384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047838Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 245u, depth + 1u); else { c.pc = 0x0047F4D0u; return; } if (c.pc != 0x0047838Cu) [[unlikely]] return; }
L_0047838C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478398u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x00478398u) [[unlikely]] return; }
L_00478398:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x004783A4u) [[unlikely]] return; }
L_004783A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004783A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[18].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00478488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 6u, depth + 1u); else { c.pc = 0x00488410u; return; } if (c.pc != 0x004783D0u) [[unlikely]] return; }
L_004783D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 36u, depth + 1u); else { c.pc = 0x00488658u; return; } if (c.pc != 0x004783D8u) [[unlikely]] return; }
L_004783D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x004783E4u) [[unlikely]] return; }
L_004783E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00478400; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00478458; } }
L_00478400:
    c.r[5].d[0] = 0ull | 65407ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65534ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 42241ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 5525ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00478424u) [[unlikely]] return; }
L_00478424:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0047868C; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | 54975ull;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 9525ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00478448u) [[unlikely]] return; }
L_00478448:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00478688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478488; } }
L_00478458:
    c.r[5].d[0] = 0ull | 65343ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65534ull;
    c.r[5].d[0] = c.r[5].d[0] << 17;
    c.r[5].d[0] = c.r[5].d[0] | 42241ull;
    c.r[5].d[0] = c.r[5].d[0] << 13;
    c.r[5].d[0] = c.r[5].d[0] | 5525ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047847Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047847Cu) [[unlikely]] return; }
L_0047847C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  goto L_0047868C; }
L_00478484:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00478488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478490u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x00478490u) [[unlikely]] return; }
L_00478490:
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047849Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x0047849Cu) [[unlikely]] return; }
L_0047849C:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784A8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004784A8u) [[unlikely]] return; }
L_004784A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784B4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004784B4u) [[unlikely]] return; }
L_004784B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784C4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 189u, depth + 1u); else { c.pc = 0x0047E9D8u; return; } if (c.pc != 0x004784C4u) [[unlikely]] return; }
L_004784C4:
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] + 12u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784E4u); set32(c.r[6], c.r[6].w[0] + 8u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x004784E4u) [[unlikely]] return; }
L_004784E4:
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784F8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 248u, depth + 1u); else { c.pc = 0x0047F730u; return; } if (c.pc != 0x004784F8u) [[unlikely]] return; }
L_004784F8:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478508u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DF(c, 211u, depth + 1u); else { c.pc = 0x0047EE40u; return; } if (c.pc != 0x00478508u) [[unlikely]] return; }
L_00478508:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_00478528; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0047853C; } }
L_00478528:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u - c.r[3].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_0047853C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);  goto L_0047854C; }
    set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0047854C:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[7].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047856C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[4].w[0] + 1075u);  if (t) { goto L_00478574; } }
L_0047856C:
    set32(c.r[2], 0u + 54u);
    set32(c.r[19], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_00478574:
    set32(c.r[7], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[18].d[0];
    c.r[3].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[20].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_004785A4; } }
    set32(c.r[20], c.r[20].w[0] - c.r[7].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[7].w[0]);
    c.budget -= 3;
L_004785A4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_004785D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004785B4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 220u, depth + 1u); else { c.pc = 0x0047F080u; return; } if (c.pc != 0x004785B4u) [[unlikely]] return; }
L_004785B4:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004785C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 213u, depth + 1u); else { c.pc = 0x0047EE78u; return; } if (c.pc != 0x004785C8u) [[unlikely]] return; }
L_004785C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004785D8u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004785D8u) [[unlikely]] return; }
L_004785D8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_004785F0; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004785ECu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 227u, depth + 1u); else { c.pc = 0x0047F180u; return; } if (c.pc != 0x004785ECu) [[unlikely]] return; }
L_004785EC:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_004785F0:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_00478608; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478604u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 220u, depth + 1u); else { c.pc = 0x0047F080u; return; } if (c.pc != 0x00478604u) [[unlikely]] return; }
L_00478604:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00478608:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_00478620; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047861Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 227u, depth + 1u); else { c.pc = 0x0047F180u; return; } if (c.pc != 0x0047861Cu) [[unlikely]] return; }
L_0047861C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00478620:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_00478638; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478634u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 227u, depth + 1u); else { c.pc = 0x0047F180u; return; } if (c.pc != 0x00478634u) [[unlikely]] return; }
L_00478634:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00478638:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478648u); set32(c.r[6], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_00DF(c, 238u, depth + 1u); else { c.pc = 0x0047F340u; return; } if (c.pc != 0x00478648u) [[unlikely]] return; }
L_00478648:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478660u); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00DF(c, 234u, depth + 1u); else { c.pc = 0x0047F2D8u; return; } if (c.pc != 0x00478660u) [[unlikely]] return; }
L_00478660:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478074u | kUnwind; return; } goto L_00478074; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0047868C; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478048u | kUnwind; return; } goto L_00478048; } }
L_00478688:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0047868C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478694u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x00478694u) [[unlikely]] return; }
L_00478694:
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786A0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004786A0u) [[unlikely]] return; }
L_004786A0:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786ACu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004786ACu) [[unlikely]] return; }
L_004786AC:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786B8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004786B8u) [[unlikely]] return; }
L_004786B8:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786C4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 192u, depth + 1u); else { c.pc = 0x0047EA80u; return; } if (c.pc != 0x004786C4u) [[unlikely]] return; }
L_004786C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_004786C8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[21].w[0]);  goto L_004786D0; }
L_004786D0:
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004786E8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x004786E8u) [[unlikely]] return; }
L_004786E8:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00478718:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478738u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 310u, depth + 1u); else { c.pc = 0x00477820u; return; } if (c.pc != 0x00478738u) [[unlikely]] return; }
L_00478738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00478748:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00478750:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[5], c.r[23].w[0] - 4447u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 20;
L_004787A0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004787A0u | kUnwind; return; } goto L_004787A0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_004787D4; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004787E0; } }
L_004787D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_004787E4; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_004787E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004787E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_004787F4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00478820; } }
L_004787F4:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_00478820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_00478814; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00478820; } }
L_00478814:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[19], 0u + 16u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 3;
L_00478820:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0047883C; } }
    set32(c.r[19], 0u + 10u);
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = c.r[17].d[0] ^ 48ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
L_0047883C:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047884Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x0047884Cu) [[unlikely]] return; }
L_0047884C:
    set32(c.r[4], 0u - 1u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047885Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x0047885Cu) [[unlikely]] return; }
L_0047885C:
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004788BC; } }
    c.budget -= 1;
L_00478870:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004788F4; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[2].d[0] = c.r[21].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_004788A0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], 0u - 1u);  goto L_004788B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[21].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004788A8; } }
    c.r[2].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004788A8; } }
L_004788A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_004788B4; } }
L_004788A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004788B0u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00205F20u; return; } if (c.pc != 0x004788B0u) [[unlikely]] return; }
L_004788B0:
    c.r[4].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 1;
L_004788B4:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_004788BC:
    set32(c.r[2], c.r[23].w[0] - 4447u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_004788DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478870u | kUnwind; return; } goto L_00478870; } }
L_004788DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - 87u);  if (t) { goto L_004788F4; } }
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 55u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478870u | kUnwind; return; } goto L_00478870; } }
L_004788F4:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00478910; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 34u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00478918; } }
L_00478910:
    c.r[2].d[0] = 0ull - c.r[4].d[0];
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00478918:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0047892C; } }
    set32(c.r[2], c.r[18].w[0] - 1u);
    if (c.r[20].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047892C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00478960:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478988u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 64u, depth + 1u); else { c.pc = 0x00478750u; return; } if (c.pc != 0x00478988u) [[unlikely]] return; }
L_00478988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00478998:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004789BC; } }
L_004789B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004789BC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004789E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004789D0u);  if (depth < kMaxDepth) unit_00DF(c, 53u, depth + 1u); else { c.pc = 0x0047D278u; return; } if (c.pc != 0x004789D0u) [[unlikely]] return; }
L_004789D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004789DCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 53u, depth + 1u); else { c.pc = 0x0047D278u; return; } if (c.pc != 0x004789DCu) [[unlikely]] return; }
L_004789DC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004789B8u | kUnwind; return; } goto L_004789B8; }
L_004789E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004789ECu); c.r[4].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_00DF(c, 53u, depth + 1u); else { c.pc = 0x0047D278u; return; } if (c.pc != 0x004789ECu) [[unlikely]] return; }
L_004789EC:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004789F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 53u, depth + 1u); else { c.pc = 0x0047D278u; return; } if (c.pc != 0x004789F8u) [[unlikely]] return; }
L_004789F8:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00478A18:
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 2;
L_00478A20:
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_00478A58; } }
L_00478A38:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478A38u | kUnwind; return; } goto L_00478A38; } }
L_00478A58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];  c.pc = t; return; }
L_00478A70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { goto L_00478A90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_00478A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00478A90:
    c.budget -= 2;
L_00478A98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478A88u | kUnwind; return; } goto L_00478A88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00478AD0; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00478AB0:
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478A88u | kUnwind; return; } goto L_00478A88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478AB0u | kUnwind; return; } goto L_00478AB0; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00478AD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478A90u | kUnwind; return; } goto L_00478A90; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00478AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[2].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478B00u); set32(c.r[6], c.r[6].w[0] + 92u);  if (depth < kMaxDepth) unit_00DE(c, 88u, depth + 1u); else { c.pc = 0x00478B10u; return; } if (c.pc != 0x00478B00u) [[unlikely]] return; }
L_00478B00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00478B10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00478B2C; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_00478B30; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00478B2C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_00478B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00478B58; } }
L_00478B40:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478B2Cu | kUnwind; return; } goto L_00478B2C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478B40u | kUnwind; return; } goto L_00478B40; } }
L_00478B58:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_00478B6C; } }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00478B6C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_00478B70:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
L_00478B80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00478B9C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(0u));  goto L_00478B94; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00478B94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_00478B9C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478B80u | kUnwind; return; } goto L_00478B80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478B70u | kUnwind; return; } goto L_00478B70; } }
    c.budget -= 1;
L_00478BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478BC8u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00DE(c, 97u, depth + 1u); else { c.pc = 0x00478BD8u; return; } if (c.pc != 0x00478BC8u) [[unlikely]] return; }
L_00478BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00478BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] + 14268u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478BF0u); set32(c.r[5], c.r[5].w[0] + 124u);  if (depth < kMaxDepth) unit_00DE(c, 99u, depth + 1u); else { c.pc = 0x00478C00u; return; } if (c.pc != 0x00478BF0u) [[unlikely]] return; }
L_00478BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00478C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 20864ull;
    c.r[16].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 466u, depth + 1u); else { c.pc = 0x00487D20u; return; } if (c.pc != 0x00478C2Cu) [[unlikely]] return; }
L_00478C2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 20864ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478C40u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x00478C40u) [[unlikely]] return; }
L_00478C40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00478C70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 20864ull;
    c.budget -= 3;
L_00478C58:
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] < 0; c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(-1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478C58u | kUnwind; return; } goto L_00478C58; } }
L_00478C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 20863ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00478CB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[4].d[0] = c.r[4].d[0] | 44672ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 20863ull;
    c.budget -= 5;
L_00478C98:
    c.r[16].d[0] = c.r[16].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00478C98u | kUnwind; return; } goto L_00478C98; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00478CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478CBCu); set32(c.r[5], 0u + 3600u);  if (depth < kMaxDepth) unit_00E1(c, 466u, depth + 1u); else { c.pc = 0x00487D20u; return; } if (c.pc != 0x00478CBCu) [[unlikely]] return; }
L_00478CBC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478CD4u); st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x00478CD4u) [[unlikely]] return; }
L_00478CD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478CE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 466u, depth + 1u); else { c.pc = 0x00487D20u; return; } if (c.pc != 0x00478CE4u) [[unlikely]] return; }
L_00478CE4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478CFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x00478CFCu) [[unlikely]] return; }
L_00478CFC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(4ll);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D14u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x00478D14u) [[unlikely]] return; }
L_00478D14:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00478D2C; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_00478D2C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[5], 0u + 1970u);  if (t) { goto L_00478DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], 0u + 100u);
    set32(c.r[9], c.r[2].w[0] - 2640u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_00478D54; } }
    c.budget -= 1;
L_00478D50:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00478D54:
    c.r[2].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00478D78; } }
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[8].d[0]) { breakpoint(c, 0x00478D68u);  goto L_00478D6C; }
L_00478D6C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_00478D94; }
L_00478D78:
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[8].d[0]) { breakpoint(c, 0x00478D80u);  goto L_00478D84; }
L_00478D84:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00478D98; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00478D94:
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 1;
L_00478D98:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = c.r[17].d[0] - c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478D50u | kUnwind; return; } goto L_00478D50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_00478E2C; } }
L_00478DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], 0u + 100u);
    set32(c.r[9], c.r[2].w[0] - 2640u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 400u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
L_00478DD0:
    c.r[2].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00478DF4; } }
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[8].d[0]) { breakpoint(c, 0x00478DE4u);  goto L_00478DE8; }
L_00478DE8:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_00478E10; }
L_00478DF4:
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[8].d[0]) { breakpoint(c, 0x00478DFCu);  goto L_00478E00; }
L_00478E00:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00478E14; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00478E10:
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 1;
L_00478E14:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[17].d[0] + c.r[3].d[0];
    c.budget -= 5;
    if (c.r[17].sd[0] < 0) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478DD0u | kUnwind; return; } goto L_00478DD0; }
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_00478E2C:
    set32(c.r[2], c.r[5].w[0] - 1900u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2736u);
    st32((c.r[18].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00478E9C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_00478E68:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] << 2);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[17].d[0] = c.r[17].d[0] - c.r[5].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478E68u | kUnwind; return; } goto L_00478E68; }
    c.r[2].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00478E9C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00478ED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 28u);  if (t) { goto L_00478F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478EFCu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00DF(c, 188u, depth + 1u); else { c.pc = 0x0047E958u; return; } if (c.pc != 0x00478EFCu) [[unlikely]] return; }
L_00478EFC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00478F4C; } }
    set32(c.r[2], c.r[5].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00478F4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_00478FB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478F64u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00DF(c, 188u, depth + 1u); else { c.pc = 0x0047E958u; return; } if (c.pc != 0x00478F64u) [[unlikely]] return; }
L_00478F64:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00478FB4; } }
    set32(c.r[2], c.r[5].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00478FB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00478FB8:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00479020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478FCCu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00DF(c, 188u, depth + 1u); else { c.pc = 0x0047E958u; return; } if (c.pc != 0x00478FCCu) [[unlikely]] return; }
L_00478FCC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0047901C; } }
    set32(c.r[2], c.r[5].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_0047901C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00479020:
    c.r[2].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_00479088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479034u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00DF(c, 188u, depth + 1u); else { c.pc = 0x0047E958u; return; } if (c.pc != 0x00479034u) [[unlikely]] return; }
L_00479034:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00479084; } }
    set32(c.r[2], c.r[5].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_00479084:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00479088:
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_004790D8; }
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x004790A0u);  goto L_004790A4; }
L_004790A4:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], 0u + 29u);  goto L_004790D4; }
    set32(c.r[3], c.r[4].w[0] + 1900u);
    set32(c.r[2], 0u + 400u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x004790C0u);  goto L_004790C4; }
L_004790C4:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_004790D8; }
    set32(c.r[17], 0u + 29u);
    c.budget -= 1;
L_004790D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004790D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047919C; } }
    set32(c.r[11], 0u - 1u);
    set32(c.r[10], c.r[2].w[0] - 2632u);
    set32(c.r[9], 0u + 11u);
    set32(c.r[6], 0u + 100u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 400u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_00479100:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[11].d[0]; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00479168; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00479164; } }
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { breakpoint(c, 0x00479130u);  goto L_00479134; }
L_00479134:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 29u);  if (t) { goto L_00479168; } }
    set32(c.r[2], c.r[4].w[0] + 1899u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x00479148u);  goto L_0047914C; }
L_0047914C:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 28u);  if (t) { goto L_00479168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 29u);  if (t) { goto L_00479168; } }
L_00479164:
    set32(c.r[17], 0u + 28u);
    c.budget -= 1;
L_00479168:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00479188; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0047918C; } }
L_00479188:
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0047918C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479100u | kUnwind; return; } goto L_00479100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_00479280; } }
L_0047919C:
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], c.r[2].w[0] - 2632u);
    set32(c.r[10], 0u + 12u);
    set32(c.r[6], 0u + 100u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 400u);  if (t) { goto L_00479244; } }
L_004791B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[9].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_004791D4; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_004791D8; } }
L_004791D4:
    set32(c.r[3], c.r[4].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_004791D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[10].d[0]; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00479244; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00479240; } }
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { breakpoint(c, 0x0047920Cu);  goto L_00479210; }
L_00479210:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 29u);  if (t) { goto L_00479244; } }
    set32(c.r[2], c.r[4].w[0] + 1901u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x00479224u);  goto L_00479228; }
L_00479228:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 28u);  if (t) { goto L_00479244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 29u);  if (t) { goto L_00479244; } }
L_00479240:
    set32(c.r[17], 0u + 28u);
    c.budget -= 1;
L_00479244:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[9].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00479270; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004791B8u | kUnwind; return; } goto L_004791B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_00479280; } }
L_00479270:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004791B8u | kUnwind; return; } goto L_004791B8; }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 1;
L_00479280:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00479290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004792ACu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 112u, depth + 1u); else { c.pc = 0x00478ED0u; return; } if (c.pc != 0x004792ACu) [[unlikely]] return; }
L_004792AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], 0u + 3600u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2584u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[16], c.r[2].w[0] - 1u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[16].d[0] + c.r[8].d[0];  if (t) { goto L_0047934C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  goto L_00479350; }
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00479318u);  goto L_0047931C; }
L_0047931C:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);  goto L_0047934C; }
    set32(c.r[3], c.r[4].w[0] + 1900u);
    set32(c.r[2], 0u + 400u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00479338u);  goto L_0047933C; }
L_0047933C:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  goto L_00479350; }
    c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0047934C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00479350:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[5].w[0] + 10000u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20001ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00479370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00479500; } }
L_00479370:
    c.r[2].d[0] = c.r[5].sd[0] < 71ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 70ll ? 1ull : 0ull;  if (t) { goto L_004793F8; } }
    set32(c.r[4], 0u + 70u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004794BC; } }
    set32(c.r[6], 0u + 100u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 400u);
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
L_004793A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(365ll);  goto L_004793E0; }
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { breakpoint(c, 0x004793B0u);  goto L_004793B4; }
L_004793B4:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(366ll);  goto L_004793E0; }
    set32(c.r[2], c.r[4].w[0] + 1900u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x004793C8u);  goto L_004793CC; }
L_004793CC:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(365ll);  goto L_004793E0; }
    c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(366ll);
    c.budget -= 1;
L_004793E0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004793A0u | kUnwind; return; } goto L_004793A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(4ll);  if (t) { goto L_004794C0; } }
L_004793F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 69ll ? 1ull : 0ull;  if (t) { goto L_004794BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 69u);  if (t) { goto L_00479470; } }
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 100u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 400u);
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 6;
L_00479420:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-365ll);  goto L_00479460; }
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { breakpoint(c, 0x00479430u);  goto L_00479434; }
L_00479434:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-366ll);  goto L_00479460; }
    set32(c.r[2], c.r[4].w[0] + 1900u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x00479448u);  goto L_0047944C; }
L_0047944C:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-365ll);  goto L_00479460; }
    c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-366ll);
    c.budget -= 1;
L_00479460:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479420u | kUnwind; return; } goto L_00479420; } }
L_00479470:
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-365ll);  goto L_004794BC; }
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00479488u);  goto L_0047948C; }
L_0047948C:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-366ll);  goto L_004794BC; }
    set32(c.r[3], c.r[4].w[0] + 1900u);
    set32(c.r[2], 0u + 400u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x004794A8u);  goto L_004794AC; }
L_004794AC:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-365ll);  goto L_004794BC; }
    c.r[16].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-366ll);
    c.budget -= 1;
L_004794BC:
    c.r[4].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(4ll);
    c.budget -= 1;
L_004794C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004794C8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00E2(c, 43u, depth + 1u); else { c.pc = 0x004886F0u; return; } if (c.pc != 0x004794C8u) [[unlikely]] return; }
L_004794C8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004794E0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_004794E0:
    c.r[2].d[0] = c.r[16].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[16].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 4;
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 7;
    c.r[2].d[0] = c.r[18].d[0] + c.r[2].d[0];
    c.budget -= 8;
L_00479500:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00479518:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0047957C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 53ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 48u);  if (t) { goto L_0047957C; } }
    set32(c.r[6], 0u + 57u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_00479540:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_00479558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479540u | kUnwind; return; } goto L_00479540; }
L_00479558:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 57u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_00479574; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00479574:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0047957C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00479588:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004795B8; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_004795A0:
    set32(c.r[2], c.r[9].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004795A0u | kUnwind; return; } goto L_004795A0; }
L_004795B8:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004795F8; } }
    set32(c.r[6], c.r[7].w[0] + c.r[9].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_004795D0:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004795D0u | kUnwind; return; } goto L_004795D0; } }
L_004795F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[9].d[0] + 0ull;  c.pc = t; return; }
L_00479600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[10], c.r[4].w[0] >> 31);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00479620; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].d[0] ^ 10ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_00479620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[2].w[0] + 15144u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.budget -= 6;
L_00479638:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[8].d[0]) { breakpoint(c, 0x0047963Cu);  goto L_00479640; }
L_00479640:
    set32(c.r[5], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    if (c.r[6].d[0] == c.r[8].d[0]) { breakpoint(c, 0x00479660u);  goto L_00479664; }
L_00479664:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479638u | kUnwind; return; } goto L_00479638; }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);  if (t) { goto L_00479680; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_00479680:
    set32(c.r[2], c.r[9].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479690u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00DE(c, 127u, depth + 1u); else { c.pc = 0x00479588u; return; } if (c.pc != 0x00479690u) [[unlikely]] return; }
L_00479690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004796A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], c.r[6].w[0] << 24);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 24));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[4], c.r[2].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[4].d[0] & 2048ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 2047ull;
    set32(c.r[2], 0u + 2047u);
    c.budget -= 30;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00479770; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00479760; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_00479764; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00479750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 2528u)));
    set32(c.r[4], c.r[3].w[0] - 2528u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] + 30592u);
    st32((c.r[2].w[0] + 30592u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00479BF4; } }
L_00479750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] - 2520u)));  if (t) { goto L_00479768; } }
L_00479760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.budget -= 1;
L_00479764:
    set32(c.r[4], ld32((c.r[2].w[0] - 2512u)));
    c.budget -= 1;
L_00479768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 30592u), c.r[4].w[0]);  if (t) { goto L_00479BF4; } }
L_00479770:
    set32(c.r[21], ld32((c.r[29].w[0])));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479784u) [[unlikely]] return; }
L_00479784:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_004797C8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_004797A4; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] + 30592u);  if (t) { goto L_004797B4; } }
L_004797A4:
    set32(c.r[3], 0u + 45u);
    set32(c.r[4], c.r[2].w[0] + 30592u);
    st8((c.r[2].w[0] + 30592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[22], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_004797B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004797C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x004797C0u) [[unlikely]] return; }
L_004797C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004797CC; } }
L_004797C8:
    set32(c.r[22], c.r[2].w[0] + 30592u);
    c.budget -= 1;
L_004797CC:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004797DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004797DCu) [[unlikely]] return; }
L_004797DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004798BC; } }
    c.r[19].d[0] = 0ull | 32840ull;
    c.r[19].d[0] = c.r[19].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004797F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 62u, depth + 1u); else { c.pc = 0x0047D3C8u; return; } if (c.pc != 0x004797F4u) [[unlikely]] return; }
L_004797F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479804u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x00479804u) [[unlikely]] return; }
L_00479804:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < 163ll ? 1ull : 0ull;
    c.budget -= 3;
L_00479810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00479878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 70u, depth + 1u); else { c.pc = 0x0047D5B8u; return; } if (c.pc != 0x00479820u) [[unlikely]] return; }
L_00479820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479828u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x00479828u) [[unlikely]] return; }
L_00479828:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[22].w[0] + c.r[20].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x00479840u) [[unlikely]] return; }
L_00479840:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479850u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x00479850u) [[unlikely]] return; }
L_00479850:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047985Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0047985Cu) [[unlikely]] return; }
L_0047985C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479870u) [[unlikely]] return; }
L_00479870:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[20].sd[0] < 163ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479810u | kUnwind; return; } goto L_00479810; } }
L_00479878:
    set32(c.r[7], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004798B8; } }
    set32(c.r[6], c.r[7].w[0] + c.r[22].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_00479890:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479890u | kUnwind; return; } goto L_00479890; } }
L_004798B8:
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004798BC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00479958; } }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047994C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004798D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004798D8u) [[unlikely]] return; }
L_004798D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00479918; } }
L_004798E0:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004798F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x004798F0u) [[unlikely]] return; }
L_004798F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479904u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479904u) [[unlikely]] return; }
L_00479904:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[19].sd[0] < -1020ll ? 1ull : 0ull;  if (t) { goto L_00479914; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004798E0u | kUnwind; return; } goto L_004798E0; }
L_00479914:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_00479918:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479928u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479928u) [[unlikely]] return; }
L_00479928:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_00479958; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479944u); set32(c.r[21], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x00479944u) [[unlikely]] return; }
L_00479944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00479958; } }
L_0047994C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[20], 0u + 1u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00479958:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00479968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00479984; } }
L_00479968:
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[21].w[0] + 1u);  if (t) { goto L_00479984; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00479984:
    c.r[21].d[0] = 0ull | 62016ull;
    c.r[21].d[0] = c.r[21].d[0] << 46;
    set32(c.r[30], c.r[17].w[0] + 1u);
    c.r[23].d[0] = 0ull | 32840ull;
    c.r[23].d[0] = c.r[23].d[0] << 47;
    c.budget -= 5;
L_00479998:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x004799A4u) [[unlikely]] return; }
L_004799A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x004799B0u) [[unlikely]] return; }
L_004799B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x004799BCu) [[unlikely]] return; }
L_004799BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x004799C8u) [[unlikely]] return; }
L_004799C8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799D8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x004799D8u) [[unlikely]] return; }
L_004799D8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00479A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799F0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x004799F0u) [[unlikely]] return; }
L_004799F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00479A2C; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A08u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x00479A08u) [[unlikely]] return; }
L_00479A08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479A14u) [[unlikely]] return; }
L_00479A14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[22].w[0] + c.r[20].w[0]);  if (t) { goto L_00479A2C; } }
    set32(c.r[3], c.r[16].w[0] + 48u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479998u | kUnwind; return; } goto L_00479998; } }
L_00479A2C:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x00479A3Cu) [[unlikely]] return; }
L_00479A3C:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[22].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00479A80; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 2;
L_00479A68:
    set32(c.r[3], c.r[22].w[0] + c.r[20].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479A68u | kUnwind; return; } goto L_00479A68; } }
L_00479A80:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A8Cu); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 124u, depth + 1u); else { c.pc = 0x00479518u; return; } if (c.pc != 0x00479A8Cu) [[unlikely]] return; }
L_00479A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_00479AA8; } }
    set32(c.r[2], 0u + 49u);
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 5;
L_00479AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00479AFC; } }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00479AC4; } }
    c.r[2].d[0] = c.r[19].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[19].d[0];
    c.budget -= 2;
L_00479AC4:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[22].w[0] + c.r[5].w[0]);  if (t) { goto L_00479AF0; } }
    set32(c.r[4], c.r[17].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_00479AD8:
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479AD8u | kUnwind; return; } goto L_00479AD8; } }
L_00479AF0:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00479B00; } }
L_00479AFC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00479B00:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00479B58; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);  if (t) { goto L_00479B40; } }
    set32(c.r[4], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], c.r[17].w[0] - 1u);  goto L_00479B4C; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00479B28:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);  if (t) { goto L_00479B40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479B28u | kUnwind; return; } goto L_00479B28; }
L_00479B40:
    set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
L_00479B4C:
    c.r[3].d[0] = c.r[3].d[0] ^ 46ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[4].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_00479B58:
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] + c.r[22].w[0]);  if (t) { goto L_00479BF0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00479BA8; } }
    set32(c.r[2], c.r[19].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    if (c.r[19].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 43u);
    c.r[3].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00479BD4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 48u);
    set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00479BD4; } }
L_00479BA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], 0u + 45u);
    set32(c.r[3], c.r[22].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00479BD0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 48u);
    set32(c.r[2], c.r[22].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00479BD0:
    set32(c.r[19], 0u - c.r[19].w[0]);
    c.budget -= 1;
L_00479BD4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479BE8u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00DE(c, 130u, depth + 1u); else { c.pc = 0x00479600u; return; } if (c.pc != 0x00479BE8u) [[unlikely]] return; }
L_00479BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_00479BF8; } }
L_00479BF0:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00479BF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.budget -= 1;
L_00479BF8:
    set32(c.r[2], c.r[3].w[0] + 30592u);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00479C30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00479C98; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[17], c.r[17].w[0] + 30760u);
    set32(c.r[6], ld32((c.r[16].w[0] + 15184u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479C80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x00479C80u) [[unlikely]] return; }
L_00479C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 15184u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 15188u), c.r[17].w[0]);  if (t) { goto L_00479D10; } }
L_00479C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00479D10; } }
L_00479C98:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00479D0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[21], c.r[2].w[0] + 30760u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 6;
L_00479CB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 15188u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 15184u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 15188u)));
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 15184u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 15188u), c.r[3].w[0]);  if (t) { goto L_00479CFC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479CF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x00479CF0u) [[unlikely]] return; }
L_00479CF0:
    st32((c.r[17].w[0] + 15188u), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 15184u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479C90u | kUnwind; return; } goto L_00479C90; } }
L_00479CFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479CB8u | kUnwind; return; } goto L_00479CB8; } }
L_00479D0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479D10:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00479D38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00479DEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 2;
L_00479D60:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00479DE0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00479DE0; } }
L_00479D78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[6].w[0]));  goto L_00479D98; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479D78u | kUnwind; return; } goto L_00479D78; }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 1;
L_00479D98:
    set32(c.r[2], c.r[2].w[0] - 69u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00479DDC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00478000u < 16384u) { entry = entries_00DE[(t - 0x00478000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00479DC8:
    set32(c.r[4], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479DD4u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 180u, depth + 1u); else { c.pc = 0x00479E08u; return; } if (c.pc != 0x00479DD4u) [[unlikely]] return; }
L_00479DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00479DFC; } }
L_00479DDC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00479DE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479D60u | kUnwind; return; } goto L_00479D60; }
L_00479DEC:
    set32(c.r[4], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479DF8u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 280u, depth + 1u); else { c.pc = 0x0047B138u; return; } if (c.pc != 0x00479DF8u) [[unlikely]] return; }
L_00479DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00479DFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00479E08:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 448u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E44u); c.r[30].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 56u, depth + 1u); else { c.pc = 0x0047D2B0u; return; } if (c.pc != 0x00479E44u) [[unlikely]] return; }
L_00479E44:
    set32(c.r[2], c.r[29].w[0] + 388u);
    set32(c.r[3], c.r[29].w[0] + 392u);
    st32((c.r[29].w[0] + 400u), 0u);
    st32((c.r[29].w[0] + 424u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 428u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 392u), 0u);
    c.budget -= 7;
L_00479E60:
    c.r[20].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[18], 0u + 37u);
    c.budget -= 2;
L_00479E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 14268u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 16312u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 424u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E88u); set32(c.r[8], ld32((c.r[29].w[0] + 428u)));  if (depth < kMaxDepth) unit_00DD(c, 240u, depth + 1u); else { c.pc = 0x00476A20u; return; } if (c.pc != 0x00479E88u) [[unlikely]] return; }
L_00479E88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 388u)));  if (t) { goto L_00479EA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[30], c.r[30].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E68u | kUnwind; return; } goto L_00479E68; } }
    set32(c.r[30], c.r[30].w[0] - 1u);
    c.budget -= 1;
L_00479EA0:
    set32(c.r[18], c.r[30].w[0] - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00479F48; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_00479F18; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00479EF4; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479ED8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00479ED8u) [[unlikely]] return; }
L_00479ED8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00479F3C; } }
L_00479EF4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F00u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00479F00u) [[unlikely]] return; }
L_00479F00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00479F3C; } }
L_00479F18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_00479F2C; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_00479F2C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x00479F3Cu) [[unlikely]] return; }
L_00479F3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 3;
L_00479F48:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_0047ADF8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));  goto L_00479F70; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_0047AE1C; } }
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00479F70:
    set32(c.r[30], c.r[30].w[0] + 1u);
    st32((c.r[29].w[0] + 408u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 404u), 0u);
    set32(c.r[23], 0u - 1u);
    c.budget -= 5;
L_00479F84:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    c.budget -= 1;
L_00479F88:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_00479F8C:
    set32(c.r[3], c.r[22].w[0] - 32u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047A608; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00478000u < 16384u) { entry = entries_00DE[(t - 0x00478000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00479FB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F88u | kUnwind; return; } goto L_00479F88; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_00479FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_00479FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 512ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_00479FDC:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[29].w[0] + 404u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    c.budget -= 2;
L_00479FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_00479FFC:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A008:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_0047A034; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[23], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[23].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A034:
    set32(c.r[2], c.r[22].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047A068; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0047A048:
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[16], c.r[2].w[0] + c.r[22].w[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    set32(c.r[2], c.r[22].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A048u | kUnwind; return; } goto L_0047A048; } }
L_0047A068:
    set32(c.r[2], 0u - 2u);
    set32(c.r[23], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[23].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F8Cu | kUnwind; return; } goto L_00479F8C; } }
L_0047A07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A084:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
L_0047A090:
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[16], c.r[2].w[0] + c.r[22].w[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    set32(c.r[2], c.r[22].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A090u | kUnwind; return; } goto L_0047A090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 404u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F8Cu | kUnwind; return; } goto L_00479F8C; } }
L_0047A0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A0C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[21].d[0] = c.r[21].d[0] | 16ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; }
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_0047A0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479F84u | kUnwind; return; } goto L_00479F84; } }
L_0047A0E4:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[19].w[0] - 8u));
    c.r[4].d[0] = c.r[21].d[0] & 4ull;
    set32(c.r[20], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 432u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0047A62C; } }
L_0047A110:
    c.r[21].d[0] = c.r[21].d[0] | 16ull;
    c.budget -= 1;
L_0047A114:
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047A130; }
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 64ull;  if (t) { goto L_0047A138; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047A130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047A14C; } }
L_0047A138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047A148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 8u)));  if (t) { goto L_0047A14C; } }
L_0047A148:
    set32(c.r[16], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 1;
L_0047A14C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[18], 0u + 1u);  if (t) { goto L_0047A470; } }
    set32(c.r[2], 0u + 45u);
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0047A470; } }
L_0047A164:
    c.r[2].d[0] = ~(0ull | c.r[23].d[0]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    if (c.r[2].d[0] == 0) c.r[23].d[0] = c.r[3].d[0];
    c.r[20].d[0] = ld64((c.r[19].w[0] - 8u));
    set32(c.r[2], 0u + 103u);
    c.budget -= 8;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0047A190; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[21].d[0] & 1ull;  if (t) { goto L_0047A234; } }
L_0047A190:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047A1A0u) [[unlikely]] return; }
L_0047A1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047A1D8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047A1B4u) [[unlikely]] return; }
L_0047A1B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047A1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0047A1C4u) [[unlikely]] return; }
L_0047A1C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047A1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 139u, depth + 1u); else { c.pc = 0x0047E030u; return; } if (c.pc != 0x0047A1D0u) [[unlikely]] return; }
L_0047A1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047A1E0; } }
L_0047A1D8:
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.budget -= 2;
L_0047A1E0:
    c.r[5].d[0] = 0ull | 49168ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047A1F0u) [[unlikely]] return; }
L_0047A1F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[22].d[0] ^ 103ull;  if (t) { goto L_0047A214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A200u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0047A200u) [[unlikely]] return; }
L_0047A200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A20Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0047A20Cu) [[unlikely]] return; }
L_0047A20C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[22].d[0] ^ 103ull;  if (t) { goto L_0047A228; } }
L_0047A214:
    set32(c.r[2], 0u + 101u);
    set32(c.r[3], 0u + 69u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[22].d[0] = c.r[3].d[0];  if (t) { goto L_0047A22C; } }
L_0047A228:
    set32(c.r[22], 0u + 102u);
    c.budget -= 1;
L_0047A22C:
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 2;
L_0047A234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047A244; } }
    c.r[7].d[0] = 0ull + 0ull;
    if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_0047A244:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A258u); set32(c.r[8], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00DE(c, 133u, depth + 1u); else { c.pc = 0x004796A0u; return; } if (c.pc != 0x0047A258u) [[unlikely]] return; }
L_0047A258:
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    c.r[5].d[0] = c.r[21].d[0] & 4ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 432u), c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A270u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0047A270u) [[unlikely]] return; }
L_0047A270:
    c.r[3].d[0] = c.r[21].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 396u), c.r[2].w[0]);  if (t) { goto L_0047A62C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 396u);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047A5E8; } }
L_0047A290:
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_0047A2AC; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[6].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E60u | kUnwind; return; } goto L_00479E60; } }
L_0047A2AC:
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_0047A2C8; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E60u | kUnwind; return; } goto L_00479E60; } }
L_0047A2C8:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_0047A2E4; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E60u | kUnwind; return; } goto L_00479E60; } }
L_0047A2E4:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[5], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E60u | kUnwind; return; } goto L_00479E60; } }
L_0047A2F8:
    c.r[21].d[0] = c.r[21].d[0] | 16ull;
    c.budget -= 1;
L_0047A2FC:
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047A318; }
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 64ull;  if (t) { goto L_0047A320; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047A318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047A334; } }
L_0047A320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047A330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047A334; } }
L_0047A330:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047A334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0047A46C; } }
L_0047A33C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 2320u);
    set32(c.r[18], 0u + 2u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    c.r[21].d[0] = c.r[21].d[0] | 2ull;
    set32(c.r[22], 0u + 120u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] - 8u)));  if (t) { goto L_0047A46C; } }
L_0047A360:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047A374; } }
    set32(c.r[20], c.r[2].w[0] - 2296u);
    c.budget -= 1;
L_0047A374:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047A3A4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A388u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 58u, depth + 1u); else { c.pc = 0x0047D2D8u; return; } if (c.pc != 0x0047A388u) [[unlikely]] return; }
L_0047A388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);  if (t) { goto L_0047A39C; } }
    c.r[3].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 396u), c.r[2].w[0]);  if (t) { goto L_0047A3B0; } }
L_0047A39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 396u), c.r[23].w[0]);  if (t) { goto L_0047A3B0; } }
L_0047A3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A3ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0047A3ACu) [[unlikely]] return; }
L_0047A3AC:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.budget -= 1;
L_0047A3B0:
    c.r[6].d[0] = c.r[21].d[0] & 4ull;
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.r[6].w[0]);  if (t) { goto L_0047A62C; } }
L_0047A3C4:
    c.r[21].d[0] = c.r[21].d[0] | 16ull;
    c.budget -= 1;
L_0047A3C8:
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047A3E4; }
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 64ull;  if (t) { goto L_0047A3EC; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047A3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047A400; } }
L_0047A3EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047A3FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047A400; } }
L_0047A3FC:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047A400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0047A46C; } }
L_0047A408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 2288u);  if (t) { goto L_0047A41C; } }
L_0047A414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 2320u);
    c.budget -= 2;
L_0047A41C:
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047A43C; }
    c.r[2].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 64ull;  if (t) { goto L_0047A444; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047A43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047A458; } }
L_0047A444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047A454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047A458; } }
L_0047A454:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047A458:
    c.r[3].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_0047A46C; } }
    c.r[2].d[0] = c.r[21].d[0] | 2ull;
    if (c.r[16].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_0047A46C:
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0047A470:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] < 0; st32((c.r[29].w[0] + 408u), c.r[23].w[0]);  if (t) { goto L_0047A480; } }
    set32(c.r[2], 0u - 129u);
    c.r[21].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_0047A480:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 364u);  if (t) { goto L_0047A49C; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 408u)));
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  if (t) { goto L_0047A5C4; } }
L_0047A49C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[21].d[0] & 4ull;  if (t) { goto L_0047A508; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0047A4C0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047A568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] & 4ull;  if (t) { goto L_0047A5A8; } }
L_0047A4C0:
    c.r[4].d[0] = c.r[21].d[0] & 4ull;
    c.r[3].d[0] = c.r[21].d[0] & 1ull;
    st32((c.r[29].w[0] + 432u), c.r[4].w[0]);
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    c.budget -= 4;
L_0047A4D0:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A4D0u | kUnwind; return; } goto L_0047A4D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_0047A5C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047A5C8; } }
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0047A5C8; } }
L_0047A508:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 432u), c.r[5].w[0]);  if (t) { goto L_0047A554; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0047A520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A528u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x0047A528u) [[unlikely]] return; }
L_0047A528:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A544u); st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x0047A544u) [[unlikely]] return; }
L_0047A544:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A520u | kUnwind; return; } goto L_0047A520; } }
L_0047A554:
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0047A5C4; } }
L_0047A568:
    c.r[6].d[0] = c.r[21].d[0] & 4ull;
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    st32((c.r[29].w[0] + 432u), c.r[6].w[0]);
    c.budget -= 4;
L_0047A578:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A578u | kUnwind; return; } goto L_0047A578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047A5C8; } }
L_0047A5A8:
    set32(c.r[20], c.r[2].w[0] - 2264u);
    st32((c.r[29].w[0] + 432u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A5BCu); c.r[23].d[0] = c.r[21].d[0] & 132ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0047A5BCu) [[unlikely]] return; }
L_0047A5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 396u), c.r[2].w[0]);  if (t) { goto L_0047A62C; } }
L_0047A5C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047A5C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] - c.r[20].w[0]);  if (t) { goto L_0047A5FC; } }
    c.r[2].d[0] = c.r[21].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047A5F8; } }
    set32(c.r[6], c.r[29].w[0] + 364u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 396u);
    c.budget -= 3;
L_0047A5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A5F0u);  if (depth < kMaxDepth) unit_00DE(c, 269u, depth + 1u); else { c.pc = 0x0047AE50u; return; } if (c.pc != 0x0047A5F0u) [[unlikely]] return; }
L_0047A5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047A62C; } }
L_0047A5F8:
    set32(c.r[2], c.r[29].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0047A5FC:
    set32(c.r[2], c.r[2].w[0] + 364u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 396u), c.r[2].w[0]);  if (t) { goto L_0047A62C; } }
L_0047A608:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047ADF4; } }
    c.r[5].d[0] = c.r[21].d[0] & 4ull;
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[20], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[23].d[0] = c.r[21].d[0] & 132ull;
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 432u), c.r[5].w[0]);
    c.budget -= 7;
L_0047A62C:
    set32(c.r[6], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 408u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 384u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 412u), c.r[4].w[0]);  if (t) { goto L_0047A654; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 412u), c.r[4].w[0]);  if (t) { goto L_0047A664; } }
L_0047A654:
    set32(c.r[5], ld32((c.r[29].w[0] + 412u)));
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 412u), c.r[5].w[0]);
    c.budget -= 4;
L_0047A664:
    set32(c.r[6], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 404u)));
    c.r[6].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[29].w[0] + 420u), c.r[6].w[0]);  if (t) { goto L_0047A7DC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047A7DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047A74C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 2;
L_0047A698:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047A718; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047A6F8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[18].w[0] - 2352u);
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[5], (c.r[3].w[0] + 15u));
    ldr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[5], (c.r[2].w[0] + 15u));
    sdr(c.r[5], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047A73C; } }
L_0047A6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A700u); set32(c.r[5], c.r[18].w[0] - 2352u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047A700u) [[unlikely]] return; }
L_0047A700:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047A73C; } }
L_0047A718:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047A72C; }
    set32(c.r[4], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047A72C:
    set32(c.r[5], c.r[18].w[0] - 2352u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A73Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047A73Cu) [[unlikely]] return; }
L_0047A73C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A698u | kUnwind; return; } goto L_0047A698; }
L_0047A74C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047A7B8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 2352u);  if (t) { goto L_0047A794; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A778u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047A778u) [[unlikely]] return; }
L_0047A778:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047A7DC; } }
L_0047A794:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A7A0u); set32(c.r[5], c.r[18].w[0] - 2352u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047A7A0u) [[unlikely]] return; }
L_0047A7A0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047A7DC; } }
L_0047A7B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047A7CC; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047A7CC:
    set32(c.r[5], c.r[18].w[0] - 2352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A7DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047A7DCu) [[unlikely]] return; }
L_0047A7DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[29].w[0] + 384u));  if (t) { goto L_0047A858; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047A82C; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047A824; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_0047A8AC; } }
L_0047A824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 384u);  if (t) { goto L_0047A8BC; } }
L_0047A82C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047A840; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047A840:
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A850u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047A850u) [[unlikely]] return; }
L_0047A850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0047A908; } }
L_0047A858:
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0047A904; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 369u), static_cast<std::uint8_t>(c.r[22].w[0]));  if (t) { goto L_0047A8DC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047A8B8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 368u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 369u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 9;
L_0047A8AC:
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047A904; } }
L_0047A8B8:
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_0047A8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A8C4u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047A8C4u) [[unlikely]] return; }
L_0047A8C4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047A904; } }
L_0047A8DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047A8F4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047A8F4:
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A904u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047A904u) [[unlikely]] return; }
L_0047A904:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0047A908:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 396u)));  if (t) { goto L_0047AA78; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[16], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047AA74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047A9E4; } }
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
L_0047A938:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047A9B8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047A998; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[18].w[0] - 2336u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047A9D4; } }
L_0047A998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A9A0u); set32(c.r[5], c.r[18].w[0] - 2336u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047A9A0u) [[unlikely]] return; }
L_0047A9A0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047A9D4; } }
L_0047A9B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[21].w[0]));  goto L_0047A9C0; }
L_0047A9C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[18].w[0] - 2336u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A9D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047A9D4u) [[unlikely]] return; }
L_0047A9D4:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047A938u | kUnwind; return; } goto L_0047A938; }
L_0047A9E4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047AA50; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 2336u);  if (t) { goto L_0047AA2C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AA10u) [[unlikely]] return; }
L_0047AA10:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047AA74; } }
L_0047AA2C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA38u); set32(c.r[5], c.r[18].w[0] - 2336u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AA38u) [[unlikely]] return; }
L_0047AA38:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047AA74; } }
L_0047AA50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047AA64; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047AA64:
    set32(c.r[5], c.r[18].w[0] - 2336u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047AA74u) [[unlikely]] return; }
L_0047AA74:
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 1;
L_0047AA78:
    set32(c.r[3], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047ABD4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047AB44; } }
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 2;
L_0047AA98:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047AB18; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047AAF8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[18].w[0] - 2336u);
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[5], (c.r[3].w[0] + 15u));
    ldr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[5], (c.r[2].w[0] + 15u));
    sdr(c.r[5], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047AB34; } }
L_0047AAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB00u); set32(c.r[5], c.r[18].w[0] - 2336u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AB00u) [[unlikely]] return; }
L_0047AB00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047AB34; } }
L_0047AB18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[21].w[0]));  goto L_0047AB20; }
L_0047AB20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[18].w[0] - 2336u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047AB34u) [[unlikely]] return; }
L_0047AB34:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047AA98u | kUnwind; return; } goto L_0047AA98; }
L_0047AB44:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047ABB0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 2336u);  if (t) { goto L_0047AB8C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB70u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AB70u) [[unlikely]] return; }
L_0047AB70:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047ABD4; } }
L_0047AB8C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB98u); set32(c.r[5], c.r[18].w[0] - 2336u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AB98u) [[unlikely]] return; }
L_0047AB98:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047ABD4; } }
L_0047ABB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047ABC4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047ABC4:
    set32(c.r[5], c.r[18].w[0] - 2336u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ABD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047ABD4u) [[unlikely]] return; }
L_0047ABD4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 396u)));  if (t) { goto L_0047AC40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_0047AC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ABFCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047ABFCu) [[unlikely]] return; }
L_0047ABFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047AC68; } }
L_0047AC1C:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC28u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AC28u) [[unlikely]] return; }
L_0047AC28:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047AC68; } }
L_0047AC40:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047AC58; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047AC58:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047AC68u) [[unlikely]] return; }
L_0047AC68:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 404u)));  if (t) { goto L_0047ADD4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[16], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047ADD4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047AD44; } }
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
L_0047AC98:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047AD18; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047ACF8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[18].w[0] - 2352u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047AD34; } }
L_0047ACF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD00u); set32(c.r[5], c.r[18].w[0] - 2352u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AD00u) [[unlikely]] return; }
L_0047AD00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047AD34; } }
L_0047AD18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[20].w[0]));  goto L_0047AD20; }
L_0047AD20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[18].w[0] - 2352u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047AD34u) [[unlikely]] return; }
L_0047AD34:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047AC98u | kUnwind; return; } goto L_0047AC98; }
L_0047AD44:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047ADB0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 2352u);  if (t) { goto L_0047AD8C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD70u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AD70u) [[unlikely]] return; }
L_0047AD70:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047ADD4; } }
L_0047AD8C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD98u); set32(c.r[5], c.r[18].w[0] - 2352u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AD98u) [[unlikely]] return; }
L_0047AD98:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047ADD4; } }
L_0047ADB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047ADC4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047ADC4:
    set32(c.r[5], c.r[18].w[0] - 2352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ADD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047ADD4u) [[unlikely]] return; }
L_0047ADD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 400u)));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 400u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00479E60u | kUnwind; return; } goto L_00479E60; } }
L_0047ADF4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0047ADF8:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_0047AE1C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AE18u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00DE(c, 168u, depth + 1u); else { c.pc = 0x00479C30u; return; } if (c.pc != 0x0047AE18u) [[unlikely]] return; }
L_0047AE18:
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 1;
L_0047AE1C:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 448u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_0047AE50:
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], c.r[2].w[0] + 25u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 10u);
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + c.r[16].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[7], c.r[2].w[0] - 1u);  if (t) { goto L_0047AEAC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047AFE0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047AEB4; } }
L_0047AEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047AFE0; } }
L_0047AEB4:
    st32((c.r[30].w[0]), 0u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[30].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0047AF3C; } }
    set32(c.r[13], 0u + 69u);
    set32(c.r[12], 0u + 46u);
    set32(c.r[11], 0u + 101u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
L_0047AEE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[13].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;  if (t) { goto L_0047AF20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047AF00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[12].d[0]; set32(c.r[2], ld32((c.r[30].w[0])));  if (t) { goto L_0047AF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0047AF28; } }
L_0047AF00:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[11].d[0]) { st32((c.r[30].w[0]), c.r[9].w[0]);  goto L_0047AF24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0047AF28; } }
L_0047AF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[30].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0047AF24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[10].w[0]);  if (t) { goto L_0047AF24; } }
L_0047AF20:
    st32((c.r[30].w[0]), c.r[9].w[0]);
    c.budget -= 1;
L_0047AF24:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0047AF28:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[30].w[0])));  if (t) { goto L_0047AF3C; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[9].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047AEE0u | kUnwind; return; } goto L_0047AEE0; }
L_0047AF3C:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0047AF54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047AFE0; } }
L_0047AF54:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], ld32((c.r[30].w[0] + 4u)));  if (t) { goto L_0047AFBC; } }
    set32(c.r[6], 0u + 3u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 44u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_0047AF70:
    c.r[3].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0047AFAC; } }
    mmi::div(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[11].d[0]) { breakpoint(c, 0x0047AF88u);  goto L_0047AF8C; }
L_0047AF8C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0047AFAC; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0047AFAC; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
L_0047AFAC:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047AF70u | kUnwind; return; } goto L_0047AF70; }
L_0047AFBC:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] - 10u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AFD8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047AFD8u) [[unlikely]] return; }
L_0047AFD8:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0047AFE0:
    c.r[29].d[0] = c.r[30].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047B000:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047B068; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[17], c.r[17].w[0] + 30888u);
    set32(c.r[6], ld32((c.r[16].w[0] + 15192u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B050u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x0047B050u) [[unlikely]] return; }
L_0047B050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 15192u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 15196u), c.r[17].w[0]);  if (t) { goto L_0047B0E0; } }
L_0047B060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047B0E0; } }
L_0047B068:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047B0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[21], c.r[2].w[0] + 30888u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 6;
L_0047B088:
    set32(c.r[4], ld32((c.r[17].w[0] + 15196u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 15192u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 15196u)));
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 15192u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 15196u), c.r[3].w[0]);  if (t) { goto L_0047B0CC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B0C0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 106u, depth + 1u); else { c.pc = 0x00480428u; return; } if (c.pc != 0x0047B0C0u) [[unlikely]] return; }
L_0047B0C0:
    st32((c.r[17].w[0] + 15196u), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 15192u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B060u | kUnwind; return; } goto L_0047B060; } }
L_0047B0CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[22].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B088u | kUnwind; return; } goto L_0047B088; } }
L_0047B0DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047B0E0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047B108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B12Cu); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 280u, depth + 1u); else { c.pc = 0x0047B138u; return; } if (c.pc != 0x0047B12Cu) [[unlikely]] return; }
L_0047B12C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047B138:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[2], c.r[29].w[0] + 68u);
    set32(c.r[3], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 20;
L_0047B188:
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[18], 0u + 37u);
    c.budget -= 2;
L_0047B190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 14268u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 16312u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B1B0u); set32(c.r[8], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_00DD(c, 240u, depth + 1u); else { c.pc = 0x00476A20u; return; } if (c.pc != 0x0047B1B0u) [[unlikely]] return; }
L_0047B1B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_0047B1C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[23], c.r[23].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B190u | kUnwind; return; } goto L_0047B190; } }
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 1;
L_0047B1C8:
    set32(c.r[18], c.r[23].w[0] - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0047B270; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047B240; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047B21C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B200u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047B200u) [[unlikely]] return; }
L_0047B200:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047B264; } }
L_0047B21C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B228u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047B228u) [[unlikely]] return; }
L_0047B228:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047B264; } }
L_0047B240:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047B254; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047B254:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B264u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047B264u) [[unlikely]] return; }
L_0047B264:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_0047B270:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_0047BFE8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));  goto L_0047B298; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { [[clang::musttail]] return unit_00DF(c, 3u, depth); } }
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0047B298:
    set32(c.r[23], c.r[23].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[30], 0u - 1u);
    c.budget -= 5;
L_0047B2AC:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 1;
L_0047B2B0:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0047B2B4:
    set32(c.r[3], c.r[21].w[0] - 32u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047B7FC; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1728u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00478000u < 16384u) { entry = entries_00DE[(t - 0x00478000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0047B2DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2B0u | kUnwind; return; } goto L_0047B2B0; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 512ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B304:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_0047B31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B324:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B330:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { goto L_0047B35C; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[30], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[30].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B35C:
    set32(c.r[2], c.r[21].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047B390; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0047B370:
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], c.r[21].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B370u | kUnwind; return; } goto L_0047B370; } }
L_0047B390:
    set32(c.r[2], 0u - 2u);
    set32(c.r[30], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[30].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2B4u | kUnwind; return; } goto L_0047B2B4; } }
L_0047B3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B3AC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
L_0047B3B8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], c.r[21].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B3B8u | kUnwind; return; } goto L_0047B3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2B4u | kUnwind; return; } goto L_0047B2B4; } }
L_0047B3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B3E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = c.r[18].d[0] | 16ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0047B3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B2ACu | kUnwind; return; } goto L_0047B2AC; } }
L_0047B404:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[19].w[0] - 8u));
    c.r[4].d[0] = c.r[18].d[0] & 4ull;
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0047B820; } }
L_0047B430:
    c.r[18].d[0] = c.r[18].d[0] | 16ull;
    c.budget -= 1;
L_0047B434:
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047B450; }
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 64ull;  if (t) { goto L_0047B458; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047B450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047B46C; } }
L_0047B458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047B468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 8u)));  if (t) { goto L_0047B46C; } }
L_0047B468:
    set32(c.r[16], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 1;
L_0047B46C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[22], 0u + 1u);  if (t) { goto L_0047B660; } }
    set32(c.r[2], 0u + 45u);
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0047B660; } }
L_0047B484:
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0047B4A0; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[5].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B188u | kUnwind; return; } goto L_0047B188; } }
L_0047B4A0:
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0047B4BC; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[6].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B188u | kUnwind; return; } goto L_0047B188; } }
L_0047B4BC:
    c.r[2].d[0] = c.r[18].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0047B4D8; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B188u | kUnwind; return; } goto L_0047B188; } }
L_0047B4D8:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B188u | kUnwind; return; } goto L_0047B188; } }
L_0047B4EC:
    c.r[18].d[0] = c.r[18].d[0] | 16ull;
    c.budget -= 1;
L_0047B4F0:
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047B50C; }
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 64ull;  if (t) { goto L_0047B514; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047B50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047B528; } }
L_0047B514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047B524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047B528; } }
L_0047B524:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047B528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0047B65C; } }
L_0047B530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 1824u);
    set32(c.r[22], 0u + 2u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    set32(c.r[21], 0u + 120u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] - 8u)));  if (t) { goto L_0047B65C; } }
L_0047B554:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047B568; } }
    set32(c.r[20], c.r[2].w[0] - 1800u);
    c.budget -= 1;
L_0047B568:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047B598; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B57Cu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 58u, depth + 1u); else { c.pc = 0x0047D2D8u; return; } if (c.pc != 0x0047B57Cu) [[unlikely]] return; }
L_0047B57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);  if (t) { goto L_0047B590; } }
    c.r[3].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0047B5A4; } }
L_0047B590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[30].w[0]);  if (t) { goto L_0047B5A4; } }
L_0047B598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B5A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0047B5A0u) [[unlikely]] return; }
L_0047B5A0:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0047B5A4:
    c.r[5].d[0] = c.r[18].d[0] & 4ull;
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[18].d[0] & 132ull;  if (t) { goto L_0047B81C; } }
L_0047B5B4:
    c.r[18].d[0] = c.r[18].d[0] | 16ull;
    c.budget -= 1;
L_0047B5B8:
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047B5D4; }
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 64ull;  if (t) { goto L_0047B5DC; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047B5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047B5F0; } }
L_0047B5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047B5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047B5F0; } }
L_0047B5EC:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047B5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0047B65C; } }
L_0047B5F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1792u);  if (t) { goto L_0047B60C; } }
L_0047B604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 1824u);
    c.budget -= 2;
L_0047B60C:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 8u);  goto L_0047B62C; }
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 64ull;  if (t) { goto L_0047B634; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0047B62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0047B648; } }
L_0047B634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0047B644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0047B648; } }
L_0047B644:
    c.r[16].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0047B648:
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0047B65C; } }
    c.r[2].d[0] = c.r[18].d[0] | 2ull;
    if (c.r[16].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_0047B65C:
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0047B660:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; st32((c.r[29].w[0] + 88u), c.r[30].w[0]);  if (t) { goto L_0047B674; } }
    set32(c.r[2], 0u - 129u);
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_0047B674:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 40u);  if (t) { goto L_0047B690; } }
    c.r[2].d[0] = c.r[18].d[0] & 4ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0047B7BC; } }
L_0047B690:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[18].d[0] & 4ull;  if (t) { goto L_0047B700; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0047B6B4; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047B760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] & 4ull;  if (t) { goto L_0047B7A0; } }
L_0047B6B4:
    c.r[4].d[0] = c.r[18].d[0] & 4ull;
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    c.budget -= 5;
L_0047B6C8:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B6C8u | kUnwind; return; } goto L_0047B6C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_0047B7BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047B7C0; } }
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0047B7C0; } }
L_0047B700:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[5].w[0]);  if (t) { goto L_0047B74C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0047B718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B720u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00E2(c, 45u, depth + 1u); else { c.pc = 0x00489328u; return; } if (c.pc != 0x0047B720u) [[unlikely]] return; }
L_0047B720:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B73Cu); st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E2(c, 44u, depth + 1u); else { c.pc = 0x00488D58u; return; } if (c.pc != 0x0047B73Cu) [[unlikely]] return; }
L_0047B73C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B718u | kUnwind; return; } goto L_0047B718; } }
L_0047B74C:
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0047B7BC; } }
L_0047B760:
    c.r[6].d[0] = c.r[18].d[0] & 4ull;
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    st32((c.r[29].w[0] + 112u), c.r[6].w[0]);
    c.budget -= 4;
L_0047B770:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B770u | kUnwind; return; } goto L_0047B770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047B7C0; } }
L_0047B7A0:
    set32(c.r[20], c.r[2].w[0] - 1768u);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7B4u); c.r[30].d[0] = c.r[18].d[0] & 132ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0047B7B4u) [[unlikely]] return; }
L_0047B7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0047B820; } }
L_0047B7BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047B7C0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] - 40u);  if (t) { goto L_0047B7F0; } }
    c.r[2].d[0] = c.r[18].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0047B7EC; } }
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7E4u); set32(c.r[7], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00DE(c, 269u, depth + 1u); else { c.pc = 0x0047AE50u; return; } if (c.pc != 0x0047B7E4u) [[unlikely]] return; }
L_0047B7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047B820; } }
L_0047B7EC:
    set32(c.r[2], c.r[20].w[0] - 40u);
    c.budget -= 1;
L_0047B7F0:
    set32(c.r[3], c.r[29].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0047B820; } }
L_0047B7FC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047BFE4; } }
    c.r[5].d[0] = c.r[18].d[0] & 4ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[20].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[18].d[0] & 132ull;
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0047B81C:
    st32((c.r[29].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 1;
L_0047B820:
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_0047B848; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_0047B858; } }
L_0047B848:
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[2].d[0] = c.r[18].d[0] & 2ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 4;
L_0047B858:
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.r[6].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[30].d[0] != 0ull; st32((c.r[29].w[0] + 100u), c.r[6].w[0]);  if (t) { goto L_0047B9CC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047B9CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047B93C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0047B888:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047B908; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047B8E8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[22].w[0] - 1856u);
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[5], (c.r[3].w[0] + 15u));
    ldr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[5], (c.r[2].w[0] + 15u));
    sdr(c.r[5], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047B92C; } }
L_0047B8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B8F0u); set32(c.r[5], c.r[22].w[0] - 1856u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047B8F0u) [[unlikely]] return; }
L_0047B8F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047B92C; } }
L_0047B908:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047B91C; }
    set32(c.r[4], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047B91C:
    set32(c.r[5], c.r[22].w[0] - 1856u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B92Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047B92Cu) [[unlikely]] return; }
L_0047B92C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B888u | kUnwind; return; } goto L_0047B888; }
L_0047B93C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047B9A8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] - 1856u);  if (t) { goto L_0047B984; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B968u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047B968u) [[unlikely]] return; }
L_0047B968:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047B9CC; } }
L_0047B984:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B990u); set32(c.r[5], c.r[22].w[0] - 1856u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047B990u) [[unlikely]] return; }
L_0047B990:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047B9CC; } }
L_0047B9A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047B9BC; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047B9BC:
    set32(c.r[5], c.r[22].w[0] - 1856u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B9CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047B9CCu) [[unlikely]] return; }
L_0047B9CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[29].w[0] + 64u));  if (t) { goto L_0047BA48; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BA1C; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047BA14; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_0047BA9C; } }
L_0047BA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 64u);  if (t) { goto L_0047BAAC; } }
L_0047BA1C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BA30; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BA30:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BA40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BA40u) [[unlikely]] return; }
L_0047BA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0047BAF8; } }
L_0047BA48:
    c.r[2].d[0] = c.r[18].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0047BAF4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_0047BACC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047BAA8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 49u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 9;
L_0047BA9C:
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BAF4; } }
L_0047BAA8:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0047BAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAB4u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BAB4u) [[unlikely]] return; }
L_0047BAB4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BAF4; } }
L_0047BACC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BAE4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BAE4:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BAF4u) [[unlikely]] return; }
L_0047BAF4:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0047BAF8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0047BC68; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047BC64; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047BBD4; } }
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
L_0047BB28:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BBA8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047BB88; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[18].w[0] - 1840u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BBC4; } }
L_0047BB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BB90u); set32(c.r[5], c.r[18].w[0] - 1840u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BB90u) [[unlikely]] return; }
L_0047BB90:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BBC4; } }
L_0047BBA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[21].w[0]));  goto L_0047BBB0; }
L_0047BBB0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[18].w[0] - 1840u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BBC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BBC4u) [[unlikely]] return; }
L_0047BBC4:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047BB28u | kUnwind; return; } goto L_0047BB28; }
L_0047BBD4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BC40; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 1840u);  if (t) { goto L_0047BC1C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC00u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BC00u) [[unlikely]] return; }
L_0047BC00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BC64; } }
L_0047BC1C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC28u); set32(c.r[5], c.r[18].w[0] - 1840u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BC28u) [[unlikely]] return; }
L_0047BC28:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BC64; } }
L_0047BC40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BC54; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BC54:
    set32(c.r[5], c.r[18].w[0] - 1840u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BC64u) [[unlikely]] return; }
L_0047BC64:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_0047BC68:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047BDC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047BD34; } }
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 2;
L_0047BC88:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BD08; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047BCE8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[18].w[0] - 1840u);
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[5], (c.r[3].w[0] + 15u));
    ldr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[5], (c.r[2].w[0] + 15u));
    sdr(c.r[5], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BD24; } }
L_0047BCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BCF0u); set32(c.r[5], c.r[18].w[0] - 1840u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BCF0u) [[unlikely]] return; }
L_0047BCF0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BD24; } }
L_0047BD08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[21].w[0]));  goto L_0047BD10; }
L_0047BD10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[18].w[0] - 1840u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BD24u) [[unlikely]] return; }
L_0047BD24:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047BC88u | kUnwind; return; } goto L_0047BC88; }
L_0047BD34:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BDA0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] - 1840u);  if (t) { goto L_0047BD7C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD60u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BD60u) [[unlikely]] return; }
L_0047BD60:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BDC4; } }
L_0047BD7C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD88u); set32(c.r[5], c.r[18].w[0] - 1840u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BD88u) [[unlikely]] return; }
L_0047BD88:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BDC4; } }
L_0047BDA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BDB4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BDB4:
    set32(c.r[5], c.r[18].w[0] - 1840u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BDC4u) [[unlikely]] return; }
L_0047BDC4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0047BE30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_0047BE0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BDECu) [[unlikely]] return; }
L_0047BDEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BE58; } }
L_0047BE0C:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BE18u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BE18u) [[unlikely]] return; }
L_0047BE18:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BE58; } }
L_0047BE30:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BE48; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BE48:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BE58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BE58u) [[unlikely]] return; }
L_0047BE58:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0047BFC4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0047BFC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0047BF34; } }
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
L_0047BE88:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BF08; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0047BEE8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[22].w[0] - 1856u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BF24; } }
L_0047BEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BEF0u); set32(c.r[5], c.r[22].w[0] - 1856u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BEF0u) [[unlikely]] return; }
L_0047BEF0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BF24; } }
L_0047BF08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_0047BF10; }
L_0047BF10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[5], c.r[22].w[0] - 1856u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BF24u) [[unlikely]] return; }
L_0047BF24:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047BE88u | kUnwind; return; } goto L_0047BE88; }
L_0047BF34:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0047BFA0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] - 1856u);  if (t) { goto L_0047BF7C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF60u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BF60u) [[unlikely]] return; }
L_0047BF60:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0047BFC4; } }
L_0047BF7C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF88u); set32(c.r[5], c.r[22].w[0] - 1856u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0047BF88u) [[unlikely]] return; }
L_0047BF88:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047BFC4; } }
L_0047BFA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  goto L_0047BFB4; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
L_0047BFB4:
    set32(c.r[5], c.r[22].w[0] - 1856u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BFC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DE(c, 273u, depth + 1u); else { c.pc = 0x0047B000u; return; } if (c.pc != 0x0047BFC4u) [[unlikely]] return; }
L_0047BFC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047B188u | kUnwind; return; } goto L_0047B188; } }
L_0047BFE4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0047BFE8:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { [[clang::musttail]] return unit_00DF(c, 3u, depth); } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_00DF(c, 1u, depth);
}

}
