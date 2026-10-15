#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C2[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0,
    0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00408000;
    case 2u: goto L_00408018;
    case 3u: goto L_00408038;
    case 4u: goto L_00408088;
    case 5u: goto L_004080B8;
    case 6u: goto L_004080C4;
    case 7u: goto L_004080CC;
    case 8u: goto L_004080EC;
    case 9u: goto L_00408140;
    case 10u: goto L_0040816C;
    case 11u: goto L_004081A4;
    case 12u: goto L_004081D0;
    case 13u: goto L_00408210;
    case 14u: goto L_00408260;
    case 15u: goto L_0040827C;
    case 16u: goto L_0040828C;
    case 17u: goto L_00408298;
    case 18u: goto L_004082BC;
    case 19u: goto L_004082DC;
    case 20u: goto L_004082EC;
    case 21u: goto L_004082F4;
    case 22u: goto L_00408304;
    case 23u: goto L_00408324;
    case 24u: goto L_0040832C;
    case 25u: goto L_00408334;
    case 26u: goto L_00408358;
    case 27u: goto L_00408384;
    case 28u: goto L_00408394;
    case 29u: goto L_004083C0;
    case 30u: goto L_00408400;
    case 31u: goto L_00408448;
    case 32u: goto L_00408488;
    case 33u: goto L_004084D0;
    case 34u: goto L_00408568;
    case 35u: goto L_00408574;
    case 36u: goto L_004085C8;
    case 37u: goto L_004085E0;
    case 38u: goto L_004085E8;
    case 39u: goto L_004085F4;
    case 40u: goto L_004085FC;
    case 41u: goto L_0040863C;
    case 42u: goto L_0040864C;
    case 43u: goto L_00408698;
    case 44u: goto L_004086B0;
    case 45u: goto L_004086BC;
    case 46u: goto L_004086E8;
    case 47u: goto L_00408744;
    case 48u: goto L_00408750;
    case 49u: goto L_0040875C;
    case 50u: goto L_00408764;
    case 51u: goto L_00408790;
    case 52u: goto L_00408844;
    case 53u: goto L_00408884;
    case 54u: goto L_004088A4;
    case 55u: goto L_004088CC;
    case 56u: goto L_0040890C;
    case 57u: goto L_0040892C;
    case 58u: goto L_004089B8;
    case 59u: goto L_00408A18;
    case 60u: goto L_00408A44;
    case 61u: goto L_00408A78;
    case 62u: goto L_00408AC4;
    case 63u: goto L_00408AE0;
    case 64u: goto L_00408B28;
    case 65u: goto L_00408B60;
    case 66u: goto L_00408B98;
    case 67u: goto L_00408BB8;
    case 68u: goto L_00408BE0;
    case 69u: goto L_00408C60;
    case 70u: goto L_00408CA4;
    case 71u: goto L_00408CB8;
    case 72u: goto L_00408CCC;
    case 73u: goto L_00408CD8;
    case 74u: goto L_00408CEC;
    case 75u: goto L_00408D00;
    case 76u: goto L_00408D38;
    case 77u: goto L_00408D50;
    case 78u: goto L_00408D70;
    case 79u: goto L_00408D98;
    case 80u: goto L_00408DE0;
    case 81u: goto L_00408E10;
    case 82u: goto L_00408EC4;
    case 83u: goto L_00408EE8;
    case 84u: goto L_00408F18;
    case 85u: goto L_00408F48;
    case 86u: goto L_00408F78;
    case 87u: goto L_00408FB0;
    case 88u: goto L_00408FC4;
    case 89u: goto L_00408FF4;
    case 90u: goto L_00409048;
    case 91u: goto L_00409078;
    case 92u: goto L_00409090;
    case 93u: goto L_004090A8;
    case 94u: goto L_004090B0;
    case 95u: goto L_004090F0;
    case 96u: goto L_00409100;
    case 97u: goto L_00409148;
    case 98u: goto L_004091C4;
    case 99u: goto L_004091E0;
    case 100u: goto L_00409204;
    case 101u: goto L_00409280;
    case 102u: goto L_004092A8;
    case 103u: goto L_004092B0;
    case 104u: goto L_004092E0;
    case 105u: goto L_004092EC;
    case 106u: goto L_00409314;
    case 107u: goto L_0040933C;
    case 108u: goto L_00409360;
    case 109u: goto L_00409390;
    case 110u: goto L_004093C8;
    case 111u: goto L_004093EC;
    case 112u: goto L_00409410;
    case 113u: goto L_0040942C;
    case 114u: goto L_00409450;
    case 115u: goto L_00409480;
    case 116u: goto L_004094A0;
    case 117u: goto L_004094B0;
    case 118u: goto L_004094D8;
    case 119u: goto L_004094F0;
    case 120u: goto L_004094F8;
    case 121u: goto L_00409520;
    case 122u: goto L_00409538;
    case 123u: goto L_0040954C;
    case 124u: goto L_00409560;
    case 125u: goto L_00409580;
    case 126u: goto L_00409588;
    case 127u: goto L_00409590;
    case 128u: goto L_004095A8;
    case 129u: goto L_004095E4;
    case 130u: goto L_004095FC;
    case 131u: goto L_00409608;
    case 132u: goto L_00409658;
    case 133u: goto L_00409680;
    case 134u: goto L_00409690;
    case 135u: goto L_004096D8;
    case 136u: goto L_004096F8;
    case 137u: goto L_0040970C;
    case 138u: goto L_00409748;
    case 139u: goto L_00409750;
    case 140u: goto L_004097CC;
    case 141u: goto L_004097E4;
    case 142u: goto L_00409804;
    case 143u: goto L_00409818;
    case 144u: goto L_00409870;
    case 145u: goto L_004098FC;
    case 146u: goto L_00409918;
    case 147u: goto L_00409954;
    case 148u: goto L_00409974;
    case 149u: goto L_00409988;
    case 150u: goto L_004099F0;
    case 151u: goto L_00409A20;
    case 152u: goto L_00409A60;
    case 153u: goto L_00409A94;
    case 154u: goto L_00409AC4;
    case 155u: goto L_00409AD8;
    case 156u: goto L_00409AF8;
    case 157u: goto L_00409BF8;
    case 158u: goto L_00409C90;
    case 159u: goto L_00409D38;
    case 160u: goto L_00409D70;
    case 161u: goto L_00409DC8;
    case 162u: goto L_00409E20;
    case 163u: goto L_00409E2C;
    case 164u: goto L_00409EB8;
    case 165u: goto L_00409F00;
    case 166u: goto L_00409FE8;
    case 167u: goto L_0040A028;
    case 168u: goto L_0040A040;
    case 169u: goto L_0040A080;
    case 170u: goto L_0040A0C0;
    case 171u: goto L_0040A0D8;
    case 172u: goto L_0040A110;
    case 173u: goto L_0040A128;
    case 174u: goto L_0040A160;
    case 175u: goto L_0040A198;
    case 176u: goto L_0040A1A8;
    case 177u: goto L_0040A1E0;
    case 178u: goto L_0040A3A8;
    case 179u: goto L_0040A3B0;
    case 180u: goto L_0040A3F0;
    case 181u: goto L_0040A420;
    case 182u: goto L_0040A43C;
    case 183u: goto L_0040A458;
    case 184u: goto L_0040A460;
    case 185u: goto L_0040A474;
    case 186u: goto L_0040A480;
    case 187u: goto L_0040A550;
    case 188u: goto L_0040A558;
    case 189u: goto L_0040A570;
    case 190u: goto L_0040A5F8;
    case 191u: goto L_0040A620;
    case 192u: goto L_0040A638;
    case 193u: goto L_0040A670;
    case 194u: goto L_0040A678;
    case 195u: goto L_0040A680;
    case 196u: goto L_0040A6B0;
    case 197u: goto L_0040A700;
    case 198u: goto L_0040A728;
    case 199u: goto L_0040A768;
    case 200u: goto L_0040A778;
    case 201u: goto L_0040A788;
    case 202u: goto L_0040A7A8;
    case 203u: goto L_0040A7F8;
    case 204u: goto L_0040A810;
    case 205u: goto L_0040A838;
    case 206u: goto L_0040A84C;
    case 207u: goto L_0040A858;
    case 208u: goto L_0040A860;
    case 209u: goto L_0040A8BC;
    case 210u: goto L_0040A8C8;
    case 211u: goto L_0040A92C;
    case 212u: goto L_0040A938;
    case 213u: goto L_0040A980;
    case 214u: goto L_0040A9AC;
    case 215u: goto L_0040A9B8;
    case 216u: goto L_0040AA38;
    case 217u: goto L_0040AA60;
    case 218u: goto L_0040AA7C;
    case 219u: goto L_0040AA94;
    case 220u: goto L_0040AAEC;
    case 221u: goto L_0040AAFC;
    case 222u: goto L_0040AB18;
    case 223u: goto L_0040AB48;
    case 224u: goto L_0040AB64;
    case 225u: goto L_0040AB80;
    case 226u: goto L_0040AB90;
    case 227u: goto L_0040ABC4;
    case 228u: goto L_0040ABE4;
    case 229u: goto L_0040ABF4;
    case 230u: goto L_0040AC10;
    case 231u: goto L_0040AC20;
    case 232u: goto L_0040AC48;
    case 233u: goto L_0040AC6C;
    case 234u: goto L_0040AC84;
    case 235u: goto L_0040ACBC;
    case 236u: goto L_0040ACE8;
    case 237u: goto L_0040AD14;
    case 238u: goto L_0040AD38;
    case 239u: goto L_0040AD48;
    case 240u: goto L_0040AD64;
    case 241u: goto L_0040AD74;
    case 242u: goto L_0040AD90;
    case 243u: goto L_0040ADC8;
    case 244u: goto L_0040ADE0;
    case 245u: goto L_0040ADF0;
    case 246u: goto L_0040AE28;
    case 247u: goto L_0040AE34;
    case 248u: goto L_0040AE40;
    case 249u: goto L_0040AE50;
    case 250u: goto L_0040AE68;
    case 251u: goto L_0040AE78;
    case 252u: goto L_0040AEBC;
    case 253u: goto L_0040AEC8;
    case 254u: goto L_0040AEE0;
    case 255u: goto L_0040AEF0;
    case 256u: goto L_0040AF00;
    case 257u: goto L_0040AF34;
    case 258u: goto L_0040AF40;
    case 259u: goto L_0040AF64;
    case 260u: goto L_0040AF80;
    case 261u: goto L_0040AF90;
    case 262u: goto L_0040AFA0;
    case 263u: goto L_0040AFB0;
    case 264u: goto L_0040AFC0;
    case 265u: goto L_0040AFD0;
    case 266u: goto L_0040AFF4;
    case 267u: goto L_0040B000;
    case 268u: goto L_0040B038;
    case 269u: goto L_0040B048;
    case 270u: goto L_0040B06C;
    case 271u: goto L_0040B078;
    case 272u: goto L_0040B094;
    case 273u: goto L_0040B0A4;
    case 274u: goto L_0040B0AC;
    case 275u: goto L_0040B0B8;
    case 276u: goto L_0040B0C4;
    case 277u: goto L_0040B0D4;
    case 278u: goto L_0040B0DC;
    case 279u: goto L_0040B0E8;
    case 280u: goto L_0040B0F4;
    case 281u: goto L_0040B124;
    case 282u: goto L_0040B134;
    case 283u: goto L_0040B13C;
    case 284u: goto L_0040B148;
    case 285u: goto L_0040B154;
    case 286u: goto L_0040B164;
    case 287u: goto L_0040B16C;
    case 288u: goto L_0040B178;
    case 289u: goto L_0040B184;
    case 290u: goto L_0040B194;
    case 291u: goto L_0040B1C0;
    case 292u: goto L_0040B1D0;
    case 293u: goto L_0040B1F4;
    case 294u: goto L_0040B200;
    case 295u: goto L_0040B224;
    case 296u: goto L_0040B234;
    case 297u: goto L_0040B250;
    case 298u: goto L_0040B260;
    case 299u: goto L_0040B298;
    case 300u: goto L_0040B2E4;
    case 301u: goto L_0040B2F0;
    case 302u: goto L_0040B328;
    case 303u: goto L_0040B334;
    case 304u: goto L_0040B350;
    case 305u: goto L_0040B380;
    case 306u: goto L_0040B420;
    case 307u: goto L_0040B458;
    case 308u: goto L_0040B4EC;
    case 309u: goto L_0040B518;
    case 310u: goto L_0040B5A0;
    case 311u: goto L_0040B840;
    case 312u: goto L_0040B8A0;
    case 313u: goto L_0040B9D0;
    case 314u: goto L_0040BA08;
    case 315u: goto L_0040BA30;
    case 316u: goto L_0040BA68;
    case 317u: goto L_0040BB10;
    case 318u: goto L_0040BB3C;
    case 319u: goto L_0040BB74;
    case 320u: goto L_0040BC6C;
    case 321u: goto L_0040BCA8;
    case 322u: goto L_0040BCBC;
    case 323u: goto L_0040BCF8;
    case 324u: goto L_0040BE74;
    case 325u: goto L_0040BE84;
    case 326u: goto L_0040BF50;
    default: bad_entry(c, 0x00408000u); return;
    }
L_00408000:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  goto L_00408064; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_00408060; } }
    c.budget -= 1;
L_00408018:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 4u);  if (t) { goto L_00408054; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_00408054; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 2;
L_00408038:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408038u | kUnwind; return; } goto L_00408038; } }
L_00408054:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408018u | kUnwind; return; } goto L_00408018; } }
L_00408060:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_00408064:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0040810C; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_00408108; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 4;
L_00408088:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[30].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_00408100; }
    set32(c.r[18], c.r[23].w[0] - 20104u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 684u)));
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 684u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080B8u); set32(c.r[4], ld32((c.r[19].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 219u, depth + 1u); else { c.pc = 0x003EE730u; return; } if (c.pc != 0x004080B8u) [[unlikely]] return; }
L_004080B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x004080C4u) [[unlikely]] return; }
L_004080C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080CCu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x004080CCu) [[unlikely]] return; }
L_004080CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 4u);  goto L_004080FC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] - 20296u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080ECu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x004080ECu) [[unlikely]] return; }
L_004080EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 688u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 688u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 4;
L_004080FC:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00408100:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408088u | kUnwind; return; } goto L_00408088; } }
L_00408108:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0040810C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00408140:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040816Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x0040816Cu) [[unlikely]] return; }
L_0040816C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408190; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0040828C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0040828C; } }
L_00408190:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[5].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004081AC; } }
L_004081A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00408338; } }
L_004081AC:
    set32(c.r[2], ld32((c.r[5].w[0] + 2392u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 2392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_004081F0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_004081EC; } }
L_004081D0:
    set32(c.r[2], ld32((c.r[5].w[0] + 2392u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004081D0u | kUnwind; return; } goto L_004081D0; } }
L_004081EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_004081F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408230; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_00408230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 20328u)));
    c.budget -= 3;
L_00408210:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_00408228; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004081A4u | kUnwind; return; } goto L_004081A4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00408228:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408210u | kUnwind; return; } goto L_00408210; } }
L_00408230:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 22720u);  goto L_00408290; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] - 22720u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408260u); set32(c.r[5], c.r[5].w[0] + 13128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x00408260u) [[unlikely]] return; }
L_00408260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13208u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040827Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x0040827Cu) [[unlikely]] return; }
L_0040827C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040828Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x0040828Cu) [[unlikely]] return; }
L_0040828C:
    set32(c.r[16], c.r[16].w[0] - 22720u);
    c.budget -= 1;
L_00408290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408298u); set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x00408298u) [[unlikely]] return; }
L_00408298:
    set32(c.r[3], ld32((c.r[16].w[0] + 2392u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 2392u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082BCu); st32((c.r[19].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C2(c, 131u, depth + 1u); else { c.pc = 0x00409608u; return; } if (c.pc != 0x004082BCu) [[unlikely]] return; }
L_004082BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 416u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082DCu); set32(c.r[5], ld32((c.r[19].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BA(c, 192u, depth + 1u); else { c.pc = 0x003E9E98u; return; } if (c.pc != 0x004082DCu) [[unlikely]] return; }
L_004082DC:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x004082ECu) [[unlikely]] return; }
L_004082EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082F4u); set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BB(c, 268u, depth + 1u); else { c.pc = 0x003EEEA8u; return; } if (c.pc != 0x004082F4u) [[unlikely]] return; }
L_004082F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408304u); set32(c.r[6], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00C1(c, 27u, depth + 1u); else { c.pc = 0x00404598u; return; } if (c.pc != 0x00408304u) [[unlikely]] return; }
L_00408304:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_00408324; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408324u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 33u, depth + 1u); else { c.pc = 0x004084D0u; return; } if (c.pc != 0x00408324u) [[unlikely]] return; }
L_00408324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040832Cu); c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x0040832Cu) [[unlikely]] return; }
L_0040832C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408334u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x00408334u) [[unlikely]] return; }
L_00408334:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00408338:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00408358:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408384u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 241u, depth + 1u); else { c.pc = 0x003EEAC0u; return; } if (c.pc != 0x00408384u) [[unlikely]] return; }
L_00408384:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408394u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 214u, depth + 1u); else { c.pc = 0x003EE620u; return; } if (c.pc != 0x00408394u) [[unlikely]] return; }
L_00408394:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040847C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 8u);  if (t) { goto L_0040847C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[6], c.r[2].w[0] - 20104u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.budget -= 5;
L_004083C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 20u)));  goto L_00408450; }
    set32(c.r[2], ld32((c.r[6].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408440; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00408440; } }
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_00408400:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_00408440; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_00408424; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0040842C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408400u | kUnwind; return; } goto L_00408400; } }
L_00408424:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00408400u | kUnwind; return; } goto L_00408400; }
L_0040842C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00408400u | kUnwind; return; } goto L_00408400; }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_00408440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 134u, depth + 1u); else { c.pc = 0x003E9698u; return; } if (c.pc != 0x00408448u) [[unlikely]] return; }
L_00408448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_004084B4; } }
L_00408450:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_0040847C; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004083C0u | kUnwind; return; } goto L_004083C0; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040847C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408488u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 179u, depth + 1u); else { c.pc = 0x003EDE98u; return; } if (c.pc != 0x00408488u) [[unlikely]] return; }
L_00408488:
    set32(c.r[2], c.r[19].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00408494; }
L_00408494:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  goto L_004084B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 5;
L_004084B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004084D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00408550; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 2244u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[21], 0u + 1u);  goto L_00408554; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00408554; } }
L_00408550:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_00408554:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408584; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[6].w[0] + 8u);  if (t) { goto L_00408584; } }
L_00408568:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408574u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 26u, depth + 1u); else { c.pc = 0x00408358u; return; } if (c.pc != 0x00408574u) [[unlikely]] return; }
L_00408574:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408568u | kUnwind; return; } goto L_00408568; } }
L_00408584:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] - 20104u);  if (t) { goto L_00408644; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[3].w[0] + 692u), c.r[2].w[0]);  if (t) { goto L_004085C8; } }
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + 13224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085C8u); c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x004085C8u) [[unlikely]] return; }
L_004085C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_00408614; }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_00408610; } }
L_004085E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x004059C0u; return; } if (c.pc != 0x004085E8u) [[unlikely]] return; }
L_004085E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 219u, depth + 1u); else { c.pc = 0x003EE730u; return; } if (c.pc != 0x004085F4u) [[unlikely]] return; }
L_004085F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 350u, depth + 1u); else { c.pc = 0x00407F90u; return; } if (c.pc != 0x004085FCu) [[unlikely]] return; }
L_004085FC:
    set32(c.r[3], c.r[17].w[0] - 4u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004085E0u | kUnwind; return; } goto L_004085E0; } }
L_00408610:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_00408614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_00408768; } }
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040863Cu); set32(c.r[4], c.r[4].w[0] - 20296u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x0040863Cu) [[unlikely]] return; }
L_0040863C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_00408768; } }
L_00408644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040864Cu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x0040864Cu) [[unlikely]] return; }
L_0040864C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[20].w[0] - 20104u);  if (t) { goto L_004086F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 700u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[3].w[0] + 700u), c.r[2].w[0]);  if (t) { goto L_00408698; } }
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[8], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 13280u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408698u); c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x00408698u) [[unlikely]] return; }
L_00408698:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_004086CC; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_004086CC; } }
L_004086B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 219u, depth + 1u); else { c.pc = 0x003EE730u; return; } if (c.pc != 0x004086BCu) [[unlikely]] return; }
L_004086BC:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004086B0u | kUnwind; return; } goto L_004086B0; } }
L_004086CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], c.r[19].w[0] - 20296u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086E8u); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x004086E8u) [[unlikely]] return; }
L_004086E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);  if (t) { goto L_00408768; } }
L_004086F0:
    set32(c.r[2], ld32((c.r[3].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[3].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_00408710; } }
    set32(c.r[2], c.r[22].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 32u)));  goto L_00408748; }
L_00408710:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[8], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 13336u);
    set32(c.r[9], ld32((c.r[23].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408744u); c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x00408744u) [[unlikely]] return; }
L_00408744:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_00408748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408750u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 219u, depth + 1u); else { c.pc = 0x003EE730u; return; } if (c.pc != 0x00408750u) [[unlikely]] return; }
L_00408750:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040875Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 204u, depth + 1u); else { c.pc = 0x003EE420u; return; } if (c.pc != 0x0040875Cu) [[unlikely]] return; }
L_0040875C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408764u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 350u, depth + 1u); else { c.pc = 0x00407F90u; return; } if (c.pc != 0x00408764u) [[unlikely]] return; }
L_00408764:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.budget -= 1;
L_00408768:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00408790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13404u));
    set32(c.r[2], ld32((c.r[6].w[0] + 416u)));
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.f[0]);  if (t) { goto L_00408800; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00408A48; } }
L_00408800:
    set32(c.r[16], c.r[21].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00408820; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_00408820:
    c.f[1] = ld32((c.r[16].w[0] + 1596u));
    c.f[0] = ld32((c.r[2].w[0] + 13408u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[23].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408890; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408844u); set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 62u, depth + 1u); else { c.pc = 0x003F5398u; return; } if (c.pc != 0x00408844u) [[unlikely]] return; }
L_00408844:
    c.f[1] = ld32((c.r[16].w[0] + 1596u));
    set32(c.r[3], c.r[23].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0040888C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408884u); st32((c.r[3].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 492u, depth + 1u); else { c.pc = 0x00403DC0u; return; } if (c.pc != 0x00408884u) [[unlikely]] return; }
L_00408884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00408A48; } }
L_0040888C:
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_00408890:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[23].w[0] - 20104u);  if (t) { goto L_004088AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x004088A4u) [[unlikely]] return; }
L_004088A4:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[23].w[0] - 20104u);
    c.budget -= 2;
L_004088AC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[20], c.r[21].w[0] - 22720u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088CCu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x004088CCu) [[unlikely]] return; }
L_004088CC:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 1592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[22], 0u + 1u);  goto L_00408968; }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], 0u + 1u);  goto L_004088F8; }
L_004088F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 68u)));  goto L_00408914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040890Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x0040890Cu) [[unlikely]] return; }
L_0040890C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_00408914:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 8ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040892Cu); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x0040892Cu) [[unlikely]] return; }
L_0040892C:
    c.f[0] = ld32((c.r[20].w[0] + 1592u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040894C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_00408968; } }
L_0040894C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00408968; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], 0u + 1u);  goto L_00408968; }
L_00408968:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00408998; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_00408990; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408998; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408998; } }
L_00408990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00408A48; } }
L_00408998:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] - 22720u);  if (t) { goto L_004089CC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004089CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089B8u); set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 62u, depth + 1u); else { c.pc = 0x003F5398u; return; } if (c.pc != 0x004089B8u) [[unlikely]] return; }
L_004089B8:
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[3], c.r[23].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_004089CC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[5], c.r[23].w[0] - 20104u);  if (t) { goto L_00408A20; } }
    set32(c.r[3], c.r[21].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[5].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00408A04; } }
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 6;
L_00408A04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A18u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 492u, depth + 1u); else { c.pc = 0x00403DC0u; return; } if (c.pc != 0x00408A18u) [[unlikely]] return; }
L_00408A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00408A48; } }
L_00408A20:
    set32(c.r[3], c.r[23].w[0] - 20104u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A44u); st32((c.r[3].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 492u, depth + 1u); else { c.pc = 0x00403DC0u; return; } if (c.pc != 0x00408A44u) [[unlikely]] return; }
L_00408A44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00408A48:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00408A78:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00408AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AC4u);  if (depth < kMaxDepth) unit_00BA(c, 116u, depth + 1u); else { c.pc = 0x003E93B0u; return; } if (c.pc != 0x00408AC4u) [[unlikely]] return; }
L_00408AC4:
    set32(c.r[17], ld32((c.r[16].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_00408B04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 16385u);  if (t) { goto L_00408B00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_00408AE0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_00408B04; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00408AE0u | kUnwind; return; } goto L_00408AE0; }
L_00408B00:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_00408B04:
    set32(c.r[17], ld32((c.r[3].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408C1C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00408C18; } }
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
L_00408B28:
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 2392u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[23].w[0] + 2392u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  goto L_00408B80; }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_00408B7C; } }
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 2;
L_00408B60:
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408B60u | kUnwind; return; } goto L_00408B60; } }
L_00408B7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00408B80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_00408C04; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_00408C00; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_00408B98:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[18].w[0] + 4u);  if (t) { goto L_00408BF4; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_00408BF4; } }
    set32(c.r[20], c.r[22].w[0] - 22720u);
    c.budget -= 2;
L_00408BB8:
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_00408BEC; }
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 2392u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_00408BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 51u, depth + 1u); else { c.pc = 0x00408790u; return; } if (c.pc != 0x00408BE0u) [[unlikely]] return; }
L_00408BE0:
    set32(c.r[3], c.r[21].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00408BEC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408BB8u | kUnwind; return; } goto L_00408BB8; } }
L_00408BF4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408B98u | kUnwind; return; } goto L_00408B98; } }
L_00408C00:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00408C04:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408C1C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00408B28u | kUnwind; return; } goto L_00408B28; }
L_00408C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_00408C1C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] - 20104u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[4].w[0] + 768u)));
    c.r[2].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 768u), c.r[3].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00408C60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 780u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CA4u); st32((c.r[3].w[0] + 2476u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 81u, depth + 1u); else { c.pc = 0x00410B58u; return; } if (c.pc != 0x00408CA4u) [[unlikely]] return; }
L_00408CA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_00408CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CB8u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00408CB8u) [[unlikely]] return; }
L_00408CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00408CD0; } }
L_00408CC0:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CCCu); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00408CCCu) [[unlikely]] return; }
L_00408CCC:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_00408CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CD8u);  if (depth < kMaxDepth) unit_00C4(c, 83u, depth + 1u); else { c.pc = 0x00410B90u; return; } if (c.pc != 0x00408CD8u) [[unlikely]] return; }
L_00408CD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_00408CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CECu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00408CECu) [[unlikely]] return; }
L_00408CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408D04; } }
L_00408CF4:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D00u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00408D00u) [[unlikely]] return; }
L_00408D00:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_00408D04:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[2], c.r[17].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 780u)));
    set32(c.r[19], c.r[19].w[0] + 13416u);
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[16], c.r[16].w[0] - 22720u);
    set32(c.r[18], c.r[18].w[0] - c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D38u); set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x00408D38u) [[unlikely]] return; }
L_00408D38:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 2264u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2232u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2424u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D50u); set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x00408D50u) [[unlikely]] return; }
L_00408D50:
    set32(c.r[9], ld32((c.r[16].w[0] + 2268u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D70u); set32(c.r[9], c.r[9].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x00408D70u) [[unlikely]] return; }
L_00408D70:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00408D98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00408E00; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_00408DFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 3;
L_00408DE0:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408DE0u | kUnwind; return; } goto L_00408DE0; } }
L_00408DFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00408E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  goto L_00408F08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E10u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x00408E10u) [[unlikely]] return; }
L_00408E10:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00408E60; } }
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00408EA0; } }
    c.r[2].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 872u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 872u), c.r[2].w[0]);  if (t) { goto L_00408EA0; } }
L_00408E60:
    set32(c.r[4], c.r[2].w[0] - 22720u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[2], c.r[3].w[0] + 5u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00408EA4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408E90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 2368u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_00408EA4; }
L_00408E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
L_00408EA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00408EA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  goto L_00408F08; }
    set32(c.r[2], c.r[8].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EC4u); set32(c.r[5], ld32((c.r[2].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x00408EC4u) [[unlikely]] return; }
L_00408EC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00408F04; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_00408F04; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.budget -= 3;
L_00408EE8:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408EE8u | kUnwind; return; } goto L_00408EE8; } }
L_00408F04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_00408F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00408F18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F48u); set32(c.r[4], ld32((c.r[17].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x00408F48u) [[unlikely]] return; }
L_00408F48:
    set32(c.r[3], ld32((c.r[17].w[0] + 2392u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 2392u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] - 22720u);  if (t) { goto L_00408FD4; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_00408F98; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00408F78:
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408F78u | kUnwind; return; } goto L_00408F78; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_00408F98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] - 22720u);  goto L_00408FD4; }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_00408FD0; } }
    c.budget -= 1;
L_00408FB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00408FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FC4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 131u, depth + 1u); else { c.pc = 0x00409608u; return; } if (c.pc != 0x00408FC4u) [[unlikely]] return; }
L_00408FC4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408FB0u | kUnwind; return; } goto L_00408FB0; } }
L_00408FD0:
    set32(c.r[3], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_00408FD4:
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408FEC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_0040902C; } }
L_00408FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FF4u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x00408FF4u) [[unlikely]] return; }
L_00408FF4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[2].w[0] - 20104u);
    set32(c.r[3], ld32((c.r[5].w[0] + 836u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 840u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 844u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 836u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0] + 840u), c.r[2].w[0]);  if (t) { goto L_00409028; } }
    st32((c.r[5].w[0] + 844u), c.r[6].w[0]);
    c.budget -= 1;
L_00409028:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0040902C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409048:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u - 1u);  if (t) { goto L_0040906C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0040906C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00409078:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_00409090:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_004090A8:
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_004090B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 22216u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090F0u); set32(c.r[6], c.r[6].w[0] - 1u);  if (depth < kMaxDepth) unit_00B8(c, 182u, depth + 1u); else { c.pc = 0x003E2108u; return; } if (c.pc != 0x004090F0u) [[unlikely]] return; }
L_004090F0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00409108; } }
    c.budget -= 1;
L_00409100:
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[18].d[0];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 2;
L_00409108:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[17].w[0]);  if (t) { goto L_0040912C; } }
L_00409124:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409100u | kUnwind; return; } goto L_00409100; }
L_0040912C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409148:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[2].w[0] - 20104u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 388u)));
    set32(c.r[6], ld32((c.r[3].w[0] - 22216u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091C4u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 182u, depth + 1u); else { c.pc = 0x003E2108u; return; } if (c.pc != 0x004091C4u) [[unlikely]] return; }
L_004091C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[23].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0040923C; } }
L_004091E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00409214; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409204u); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 227u, depth + 1u); else { c.pc = 0x003EE868u; return; } if (c.pc != 0x00409204u) [[unlikely]] return; }
L_00409204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040921C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_00409250; } }
L_00409214:
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0040921C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] ^ c.r[22].d[0];
    if (c.r[3].d[0] == 0) c.r[17].d[0] = 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004091E0u | kUnwind; return; } goto L_004091E0; } }
L_0040923C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_00409248; }
L_00409248:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 2;
L_00409250:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00409280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x004092A8u) [[unlikely]] return; }
L_004092A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x004092B0u) [[unlikely]] return; }
L_004092B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], 0u - 8193u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 10;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_00409304; }
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_004092E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 135u, depth + 1u); else { c.pc = 0x004096D8u; return; } if (c.pc != 0x004092ECu) [[unlikely]] return; }
L_004092EC:
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[19].d[0];
    c.r[17].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[16].d[0];
    c.budget -= 5;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004092E0u | kUnwind; return; } goto L_004092E0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_00409304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_00409344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409314u); set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x00409314u) [[unlikely]] return; }
L_00409314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_00409344; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040933Cu); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x0040933Cu) [[unlikely]] return; }
L_0040933C:
    st32((c.r[18].w[0] + 20u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 2;
L_00409344:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004093F8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_004093F8; } }
L_00409390:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_004093AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_004093F0; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_004093AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { goto L_004093E4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 8u);  if (t) { goto L_004093E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.budget -= 2;
L_004093C8:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004093C8u | kUnwind; return; } goto L_004093C8; } }
L_004093E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004093ECu);  if (depth < kMaxDepth) unit_00BA(c, 134u, depth + 1u); else { c.pc = 0x003E9698u; return; } if (c.pc != 0x004093ECu) [[unlikely]] return; }
L_004093EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004093F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409390u | kUnwind; return; } goto L_00409390; } }
L_004093F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_0040943C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_00409438; } }
L_00409410:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { st32((c.r[4].w[0] + 8u), c.r[18].w[0]);  goto L_00409420; }
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00409420:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040942Cu); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x0040942Cu) [[unlikely]] return; }
L_0040942C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409410u | kUnwind; return; } goto L_00409410; } }
L_00409438:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 1;
L_0040943C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409480u); set32(c.r[4], ld32((c.r[6].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 219u, depth + 1u); else { c.pc = 0x003EE730u; return; } if (c.pc != 0x00409480u) [[unlikely]] return; }
L_00409480:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] - 20296u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094A0u); st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x004094A0u) [[unlikely]] return; }
L_004094A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004094B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00409504; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 8u);  if (t) { goto L_00409504; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_004094D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_004094FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 293u, depth + 1u); else { c.pc = 0x003E3798u; return; } if (c.pc != 0x004094F0u) [[unlikely]] return; }
L_004094F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 274u, depth + 1u); else { c.pc = 0x003E3250u; return; } if (c.pc != 0x004094F8u) [[unlikely]] return; }
L_004094F8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004094FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004094D8u | kUnwind; return; } goto L_004094D8; } }
L_00409504:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409538u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 328u, depth + 1u); else { c.pc = 0x00407BF0u; return; } if (c.pc != 0x00409538u) [[unlikely]] return; }
L_00409538:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00409590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040954Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 84u, depth + 1u); else { c.pc = 0x00408F18u; return; } if (c.pc != 0x0040954Cu) [[unlikely]] return; }
L_0040954C:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 27u, depth + 1u); else { c.pc = 0x00404598u; return; } if (c.pc != 0x00409560u) [[unlikely]] return; }
L_00409560:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_00409580; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409580u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 33u, depth + 1u); else { c.pc = 0x004084D0u; return; } if (c.pc != 0x00409580u) [[unlikely]] return; }
L_00409580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409588u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x00409588u) [[unlikely]] return; }
L_00409588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409590u); c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x00409590u) [[unlikely]] return; }
L_00409590:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004095A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_004095D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00409600; } }
L_004095D8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095E4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 63u, depth + 1u); else { c.pc = 0x003E4A38u; return; } if (c.pc != 0x004095E4u) [[unlikely]] return; }
L_004095E4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_004095FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x004095FCu) [[unlikely]] return; }
L_004095FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00409600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409608:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0040969C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0040969C; } }
    set32(c.r[22], c.r[21].w[0] - 22720u);
    c.budget -= 2;
L_00409658:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_00409664; }
L_00409664:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 2392u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[17].w[0])));  goto L_00409694; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409680u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 238u, depth + 1u); else { c.pc = 0x003EEA80u; return; } if (c.pc != 0x00409680u) [[unlikely]] return; }
L_00409680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00409690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409690u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x00409690u) [[unlikely]] return; }
L_00409690:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00409694:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409658u | kUnwind; return; } goto L_00409658; } }
L_0040969C:
    set32(c.r[3], c.r[21].w[0] - 22720u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004096D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096F8u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x004096F8u) [[unlikely]] return; }
L_004096F8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 20492u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040970Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 177u, depth + 1u); else { c.pc = 0x003E9CE8u; return; } if (c.pc != 0x0040970Cu) [[unlikely]] return; }
L_0040970C:
    set32(c.r[16], c.r[16].w[0] - 2228u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 2232u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409748:
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_00409750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00409788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0040984C; } }
L_00409788:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_00409804; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[7], ld32((c.r[19].w[0] + 8208u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004097CCu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004097CCu) [[unlikely]] return; }
L_004097CC:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004097E4u); set32(c.r[6], c.r[6].w[0] << 4);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x004097E4u) [[unlikely]] return; }
L_004097E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 8208u)));  if (t) { goto L_00409804; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409804u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409804u) [[unlikely]] return; }
L_00409804:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_00409848; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00409818:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409818u | kUnwind; return; } goto L_00409818; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00409848:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_0040984C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004098AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004099CC; } }
L_004098AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 1);  if (t) { goto L_00409974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[6], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004098FCu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004098FCu) [[unlikely]] return; }
L_004098FC:
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_00409934; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
L_00409918:
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409918u | kUnwind; return; } goto L_00409918; } }
L_00409934:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], 0u + 12u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409954u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x00409954u) [[unlikely]] return; }
L_00409954:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[6], ld32((c.r[21].w[0] + 8208u)));  if (t) { goto L_00409974; } }
    set32(c.r[5], c.r[18].w[0] - 16u);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409974u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409974u) [[unlikely]] return; }
L_00409974:
    c.budget -= 2;
    if (c.r[19].sd[0] <= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_004099C8; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_00409988:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ldl(c.r[4], (c.r[5].w[0] + 7u));
    ldr(c.r[4], (c.r[5].w[0]));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409988u | kUnwind; return; } goto L_00409988; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_004099C8:
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_004099CC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004099F0:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_00409A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00409A60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A60u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409A60u) [[unlikely]] return; }
L_00409A60:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 1ull;  if (t) { goto L_00409A98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00409A98; } }
    set32(c.r[5], c.r[5].w[0] - 16u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A94u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409A94u) [[unlikely]] return; }
L_00409A94:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 1;
L_00409A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00409AC4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AC4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409AC4u) [[unlikely]] return; }
L_00409AC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409AD8:
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
L_00409AF8:
    c.f[5] = c.f[12] & fp::kAbs;
    c.f[4] = c.f[13] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00409B5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBDF70000u);
    c.r[1].d[0] = c.r[1].d[0] | 63556ull;
    c.f[1] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBDBF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 35044ull;
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 4u, c.f[5], c.f[4]);
    c.f[2] = c.f[4];
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.f[4] = fp::add(c.f[4], c.f[0]);  if (t) { goto L_00409BB4; } }
L_00409B5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBDF70000u);
    c.r[1].d[0] = c.r[1].d[0] | 63556ull;
    c.f[2] = c.r[1].w[0];
    c.f[5] = fp::add(c.f[5], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBDBF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 35044ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    fpu_div(c, 4u, c.f[4], c.f[5]);
    c.f[1] = c.f[4];
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.f[4] = fp::sub(c.f[3], c.f[4]);
    c.budget -= 22;
L_00409BB4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00409BE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::sub(c.f[0], c.f[4]);
    c.budget -= 5;
L_00409BE0:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = c.f[4] ^ fp::kSign;  goto L_00409BF0; }
L_00409BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[4];  c.pc = t; return; }
L_00409BF8:
    set32(c.r[2], c.f[12]);
    set32(c.r[4], 0u + 23u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[5].w[0] >> 23);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] - 127u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 31));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 31));
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.r[9].d[0] = ~(0ull | c.r[8].d[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[9].d[0] & 23ull;
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 31));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[2].d[0] = ~(0ull | c.r[7].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 31));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409C90:
    set32(c.r[3], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], 0u + 23u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] >> 23);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 127u);
    set32(c.r[2], c.r[5].w[0] - 24u);
    set32(c.r[7], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 31));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 31));
    c.r[7].d[0] = c.r[7].d[0] & c.r[9].d[0];
    if (c.r[2].d[0] != 0) c.r[6].d[0] = 0ull;
    c.r[4].d[0] = c.r[9].d[0] & 23ull;
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[8].d[0] = ~(0ull | c.r[9].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 31));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 31));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 23u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[7].w[0] & 31u)));
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] << (c.r[5].w[0] & 31u));  c.pc = t; return; }
L_00409D38:
    c.f[4] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[5]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[3]);  c.pc = t; return; }
L_00409D70:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[1]);  c.pc = t; return; }
L_00409DC8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[18].d[0] ^ 2ull;
    set32(c.r[17], c.r[18].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[2].d[0] = c.r[17].d[0] ^ 2ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.f[20] = c.f[12];
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E20u); st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00409E20u) [[unlikely]] return; }
L_00409E20:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E2Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00409E2Cu) [[unlikely]] return; }
L_00409E2C:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    st32((c.r[6].w[0]), c.f[1]);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.r[4]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[19].w[0] + 16u) & ~15u, c.r[3]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[5].w[0]), c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 35;
L_00409EB8:
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[31].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[31].w[1]);
    vu::maddbc(c.vu0, 15u, 31u, 30u, c.vu0.vf[31].w[2]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409EB8u | kUnwind; return; } goto L_00409EB8; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00409F00:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.f[12]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.vu0.vf[3] = c.r[2];
    vu::addbc(c.vu0, 15u, 3u, 0u, c.vu0.vf[3].w[0]);
    vu::abs(c.vu0, 15u, 2u, 1u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 3u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);  if (t) { goto L_00409FD8; } }
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::abs(c.vu0, 15u, 2u, 1u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 3u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);  if (t) { goto L_00409FD8; } }
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::abs(c.vu0, 15u, 2u, 1u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 3u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 16;
L_00409FD8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409FE8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A028u); st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_00C2(c, 159u, depth + 1u); else { c.pc = 0x00409D38u; return; } if (c.pc != 0x0040A028u) [[unlikely]] return; }
L_0040A028:
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
L_0040A040:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[31].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[31].w[1]);
    vu::maddbc(c.vu0, 15u, 31u, 30u, c.vu0.vf[31].w[2]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A040u | kUnwind; return; } goto L_0040A040; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
L_0040A080:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[31].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[31].w[1]);
    vu::maddbc(c.vu0, 15u, 31u, 30u, c.vu0.vf[31].w[2]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A080u | kUnwind; return; } goto L_0040A080; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040A0C0:
    set32(c.r[2], 0u + 1u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    c.budget -= 6;
L_0040A0D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A110u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_00C2(c, 159u, depth + 1u); else { c.pc = 0x00409D38u; return; } if (c.pc != 0x0040A110u) [[unlikely]] return; }
L_0040A110:
    c.r[2].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
L_0040A128:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[31].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[31].w[1]);
    vu::maddbc(c.vu0, 15u, 31u, 30u, c.vu0.vf[31].w[2]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A128u | kUnwind; return; } goto L_0040A128; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040A160:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 3u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);  c.pc = t; return; }
L_0040A198:
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_0040A1A8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[3].w[0]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[1].w[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[1].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);  c.pc = t; return; }
L_0040A1E0:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[9].w[0]));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[2] = ld32((c.r[9].w[0] + 20u));
    c.f[4] = ld32((c.r[9].w[0] + 40u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[12].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040A274; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[9].w[0] + 24u));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[9].w[0] + 36u));
    fpu_div(c, 3u, c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[12].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[12].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 16u));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[12].w[0] + 12u), c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 8u), c.f[0]);  if (t) { goto L_0040A3A0; } }
L_0040A274:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] + 13520u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040A2A4; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0040A2A4:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], 0u + 2u);  goto L_0040A2C8; }
L_0040A2C8:
    set32(c.r[8], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[3], c.r[29].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], c.r[4].w[0] << 2);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[11], c.r[12].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[10], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    set32(c.r[6], c.r[12].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[12].w[0] + c.r[5].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    st32((c.r[11].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[12].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 54;
L_0040A3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A3A8:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_0040A3B0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_0040A3E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0040A3E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 17184u);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 9;
L_0040A3E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[20] = fp::mul(c.f[12], c.f[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A420u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0040A420u) [[unlikely]] return; }
L_0040A420:
    set32(c.r[2], c.f[0]);
    c.f[12] = c.f[20];
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A43Cu); st128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0040A43Cu) [[unlikely]] return; }
L_0040A43C:
    st32((c.r[17].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040A458:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_0040A460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A474u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00C2(c, 179u, depth + 1u); else { c.pc = 0x0040A3B0u; return; } if (c.pc != 0x0040A474u) [[unlikely]] return; }
L_0040A474:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A480:
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = fp::add(c.f[4], c.f[4]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = fp::add(c.f[2], c.f[2]);
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.f[10] = fp::add(c.f[1], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[8] = fp::mul(c.f[1], c.f[3]);
    c.f[7] = fp::mul(c.f[1], c.f[10]);
    c.f[0] = fp::add(c.f[12], c.f[2]);
    c.f[11] = fp::mul(c.f[6], c.f[3]);
    c.f[13] = fp::mul(c.f[6], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[9], c.f[0]);
    c.f[6] = fp::mul(c.f[6], c.f[10]);
    c.f[3] = fp::add(c.f[1], c.f[11]);
    c.f[5] = fp::sub(c.f[8], c.f[13]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[7], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.f[0] = fp::add(c.f[4], c.f[6]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[11]);
    c.f[2] = fp::sub(c.f[9], c.f[2]);
    c.f[7] = fp::add(c.f[7], c.f[12]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[8] = fp::add(c.f[8], c.f[13]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[6]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[9] = fp::sub(c.f[9], c.f[7]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0]), c.f[8]);
    st32((c.r[29].w[0] + 4u), c.f[4]);
    st32((c.r[29].w[0] + 8u), c.f[9]);
    st32((c.r[29].w[0] + 12u), 0u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A550:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0040A558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
L_0040A570:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mul(c.vu0, 14u, 12u, 29u, 31u);
    vu::mul(c.vu0, 14u, 13u, 30u, 31u);
    vu::mul(c.vu0, 14u, 31u, 28u, 31u);
    vu::addbc(c.vu0, 4u, 12u, 12u, c.vu0.vf[12].w[0]);
    vu::addbc(c.vu0, 2u, 13u, 13u, c.vu0.vf[13].w[1]);
    vu::addbc(c.vu0, 8u, 31u, 31u, c.vu0.vf[31].w[1]);
    vu::addbc(c.vu0, 8u, 31u, 31u, c.vu0.vf[31].w[2]);
    vu::addbc(c.vu0, 4u, 31u, 12u, c.vu0.vf[12].w[2]);
    vu::addbc(c.vu0, 2u, 31u, 13u, c.vu0.vf[13].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A570u | kUnwind; return; } goto L_0040A570; } }
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 6u, 3u, 5u);
    vu::mul(c.vu0, 14u, 8u, 2u, 5u);
    vu::mul(c.vu0, 14u, 7u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 4u, 8u, 8u, c.vu0.vf[8].w[0]);
    vu::addbc(c.vu0, 2u, 7u, 7u, c.vu0.vf[7].w[1]);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[2]);
    vu::addbc(c.vu0, 4u, 6u, 8u, c.vu0.vf[8].w[2]);
    vu::addbc(c.vu0, 2u, 6u, 7u, c.vu0.vf[7].w[0]);
    vu::sub(c.vu0, 15u, 4u, 4u, 6u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A5F8:
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 144u);
    st32((c.r[5].w[0] - 4u), c.f[0]);
    st32((c.r[4].w[0] - 4u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 10;
L_0040A620:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[28]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
L_0040A638:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[31]);
    vu::mulabc(c.vu0, 15u, 28u, c.vu0.vf[31].w[0]);
    vu::maddabc(c.vu0, 15u, 29u, c.vu0.vf[31].w[1]);
    vu::maddbc(c.vu0, 15u, 31u, 30u, c.vu0.vf[31].w[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[31]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A638u | kUnwind; return; } goto L_0040A638; } }
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_0040A670:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0040A678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A680:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);  c.pc = t; return; }
L_0040A6B0:
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    vu::sub(c.vu0, 15u, 4u, 4u, 1u);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 5u, 2u, 4u);
    vu::mul(c.vu0, 14u, 7u, 1u, 4u);
    vu::mul(c.vu0, 14u, 6u, 3u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::addbc(c.vu0, 4u, 5u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 5u, 6u, c.vu0.vf[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A700:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 14u, 3u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);  c.pc = t; return; }
L_0040A728:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 2u, 4u);
    vu::mul(c.vu0, 14u, 7u, 1u, 4u);
    vu::mul(c.vu0, 14u, 6u, 3u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::addbc(c.vu0, 4u, 5u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 5u, 6u, c.vu0.vf[6].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_0040A768:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_0040A778:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_0040A788:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0040A7F8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A788u | kUnwind; return; } goto L_0040A788; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0040A7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040A800; } }
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[3] = c.vu0.vf[2];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040A804; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0040A7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A7A8u | kUnwind; return; } goto L_0040A7A8; } }
L_0040A800:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040A804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A810:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 14u, 3u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);  c.pc = t; return; }
L_0040A838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A84Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00C2(c, 194u, depth + 1u); else { c.pc = 0x0040A678u; return; } if (c.pc != 0x0040A84Cu) [[unlikely]] return; }
L_0040A84C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A858:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0040A860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[17], c.r[3].w[0] - 1023u);
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 52ll ? 1ull : 0ull;  if (t) { goto L_0040A964; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0040A908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8BCu); c.r[5].d[0] = ld64((c.r[2].w[0] + 13560u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040A8BCu) [[unlikely]] return; }
L_0040A8BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040A8C8u) [[unlikely]] return; }
L_0040A8C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_0040AA08; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0040A8E8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040AA00; } }
    c.budget -= 1;
L_0040A8E8:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_0040AA08; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040AA00; } }
L_0040A908:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[3].d[0] = c.r[16].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040AA14; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A92Cu); c.r[5].d[0] = ld64((c.r[2].w[0] + 13560u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040A92Cu) [[unlikely]] return; }
L_0040A92C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040A938u) [[unlikely]] return; }
L_0040A938:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_0040AA08; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[19].d[0]);  if (t) { goto L_0040A958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[19].d[0]);
    c.budget -= 4;
L_0040A958:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];  if (t) { goto L_0040AA00; } }
L_0040A964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] - 1043u);  if (t) { goto L_0040A988; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040AA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A980u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040A980u) [[unlikely]] return; }
L_0040A980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0040AA1C; } }
L_0040A988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[19], c.r[2].w[0] >> (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[19].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040AA14; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A9ACu); c.r[5].d[0] = ld64((c.r[2].w[0] + 13560u));  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040A9ACu) [[unlikely]] return; }
L_0040A9AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A9B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040A9B8u) [[unlikely]] return; }
L_0040A9B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_0040AA08; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[19].d[0]);  if (t) { goto L_0040A9FC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 52u);  if (t) { goto L_0040A9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0040A9F8; } }
L_0040A9DC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
L_0040A9F8:
    c.r[2].d[0] = ~(0ull | c.r[19].d[0]);
    c.budget -= 1;
L_0040A9FC:
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0040AA00:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 2;
L_0040AA08:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[20].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_0040AA14:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0040AA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0040AA1C:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040AA38:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA60u); st64((c.r[29].w[0] + 96u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_00C2(c, 299u, depth + 1u); else { c.pc = 0x0040B298u; return; } if (c.pc != 0x0040AA60u) [[unlikely]] return; }
L_0040AA60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[20].w[0] + 18052u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040AB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 70u, depth + 1u); else { c.pc = 0x00209D50u; return; } if (c.pc != 0x0040AA7Cu) [[unlikely]] return; }
L_0040AA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040AB24; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA94u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040AA94u) [[unlikely]] return; }
L_0040AA94:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040AB24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13568u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0040AAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[19].d[0]);  if (t) { goto L_0040AAD4; } }
L_0040AAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 13576u));
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 3;
L_0040AAD4:
    set32(c.r[3], ld32((c.r[20].w[0] + 18052u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040AAF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AAECu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040AAECu) [[unlikely]] return; }
L_0040AAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040AB08; } }
L_0040AAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AAFCu);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AAFCu) [[unlikely]] return; }
L_0040AAFC:
    set32(c.r[3], 0u + 33u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
L_0040AB08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[29].w[0] + 24u));  goto L_0040AB24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB18u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AB18u) [[unlikely]] return; }
L_0040AB18:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
L_0040AB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0040AB48:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB64u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00C2(c, 310u, depth + 1u); else { c.pc = 0x0040B5A0u; return; } if (c.pc != 0x0040AB64u) [[unlikely]] return; }
L_0040AB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 18052u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.f[21] = c.f[0];  if (t) { goto L_0040AC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB80u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 80u, depth + 1u); else { c.pc = 0x0020A160u; return; } if (c.pc != 0x0040AB80u) [[unlikely]] return; }
L_0040AB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040AC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB90u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x0020A058u; return; } if (c.pc != 0x0040AB90u) [[unlikely]] return; }
L_0040AB90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040AC28; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13584u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABC4u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040ABC4u) [[unlikely]] return; }
L_0040ABC4:
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0040ABEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABE4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040ABE4u) [[unlikely]] return; }
L_0040ABE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040AC00; } }
L_0040ABEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABF4u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040ABF4u) [[unlikely]] return; }
L_0040ABF4:
    set32(c.r[3], 0u + 33u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
L_0040AC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040AC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC10u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AC10u) [[unlikely]] return; }
L_0040AC10:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0040AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC20u); c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0040AC20u) [[unlikely]] return; }
L_0040AC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0040AC30; } }
L_0040AC28:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_0040AC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040AC30:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040AC48:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC6Cu); c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040B9D0u; return; } if (c.pc != 0x0040AC6Cu) [[unlikely]] return; }
L_0040AC6C:
    set32(c.r[16], ld32((c.r[17].w[0] + 18052u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.f[21] = c.f[0];  if (t) { goto L_0040ACA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC84u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 80u, depth + 1u); else { c.pc = 0x0020A160u; return; } if (c.pc != 0x0040AC84u) [[unlikely]] return; }
L_0040AC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040AD74; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040ACA8; } }
L_0040ACA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040AD74; } }
L_0040ACA8:
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[2], c.r[2].w[0] + 13592u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACBCu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040ACBCu) [[unlikely]] return; }
L_0040ACBC:
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0040ACD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 13600u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0040ACEC; } }
L_0040ACD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACE8u); c.r[5].d[0] = ld64((c.r[2].w[0] + 13824u));  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040ACE8u) [[unlikely]] return; }
L_0040ACE8:
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 1;
L_0040ACEC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_0040AD1C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 18052u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_0040AD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD14u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AD14u) [[unlikely]] return; }
L_0040AD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_0040AD4C; } }
L_0040AD1C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 18052u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_0040AD40; } }
L_0040AD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD38u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040AD38u) [[unlikely]] return; }
L_0040AD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040AD54; } }
L_0040AD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD48u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AD48u) [[unlikely]] return; }
L_0040AD48:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
L_0040AD4C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 2;
L_0040AD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040AD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD64u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AD64u) [[unlikely]] return; }
L_0040AD64:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0040AD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD74u); c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0040AD74u) [[unlikely]] return; }
L_0040AD74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040AD90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st32((c.r[29].w[0] + 152u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.f[23] = c.f[12];
    c.f[20] = c.f[13];
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADC8u); st32((c.r[29].w[0] + 144u), c.f[22]);  if (depth < kMaxDepth) unit_00C2(c, 323u, depth + 1u); else { c.pc = 0x0040BCF8u; return; } if (c.pc != 0x0040ADC8u) [[unlikely]] return; }
L_0040ADC8:
    set32(c.r[16], ld32((c.r[19].w[0] + 18052u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.f[21] = c.f[0];  if (t) { goto L_0040B268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 80u, depth + 1u); else { c.pc = 0x0020A160u; return; } if (c.pc != 0x0040ADE0u) [[unlikely]] return; }
L_0040ADE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040B26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADF0u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0042(c, 80u, depth + 1u); else { c.pc = 0x0020A160u; return; } if (c.pc != 0x0040ADF0u) [[unlikely]] return; }
L_0040ADF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040AE80; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040B268; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE28u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AE28u) [[unlikely]] return; }
L_0040AE28:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE34u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AE34u) [[unlikely]] return; }
L_0040AE34:
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE40u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AE40u) [[unlikely]] return; }
L_0040AE40:
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0040AE60; } }
L_0040AE50:
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0040B23C; } }
L_0040AE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE68u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040AE68u) [[unlikely]] return; }
L_0040AE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040B240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE78u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AE78u) [[unlikely]] return; }
L_0040AE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_0040B238; } }
L_0040AE80:
    c.f[22] = 0u;
    fpu_compare(c, fp::key(c.f[23]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040AF98; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040AEF8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AEBCu); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AEBCu) [[unlikely]] return; }
L_0040AEBC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AEC8u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AEC8u) [[unlikely]] return; }
L_0040AEC8:
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AE50u | kUnwind; return; } goto L_0040AE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AEE0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040AEE0u) [[unlikely]] return; }
L_0040AEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040B240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AEF0u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AEF0u) [[unlikely]] return; }
L_0040AEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_0040B238; } }
L_0040AEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF00u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040AF00u) [[unlikely]] return; }
L_0040AF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040B26C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040B26C; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF34u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AF34u) [[unlikely]] return; }
L_0040AF34:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF40u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AF40u) [[unlikely]] return; }
L_0040AF40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0040AF54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[4].d[0]);  if (t) { goto L_0040AF68; } }
L_0040AF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF64u); c.r[5].d[0] = ld64((c.r[2].w[0] + 13824u));  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040AF64u) [[unlikely]] return; }
L_0040AF64:
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 1;
L_0040AF68:
    set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040AF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF80u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040AF80u) [[unlikely]] return; }
L_0040AF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040B240; } }
L_0040AF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF90u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040AF90u) [[unlikely]] return; }
L_0040AF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_0040B238; } }
L_0040AF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFA0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040AFA0u) [[unlikely]] return; }
L_0040AFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040B1A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFB0u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040AFB0u) [[unlikely]] return; }
L_0040AFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B1A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFC0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040AFC0u) [[unlikely]] return; }
L_0040AFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B1A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFD0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0042(c, 80u, depth + 1u); else { c.pc = 0x0020A160u; return; } if (c.pc != 0x0040AFD0u) [[unlikely]] return; }
L_0040AFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040B050; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFF4u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040AFF4u) [[unlikely]] return; }
L_0040AFF4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B000u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B000u) [[unlikely]] return; }
L_0040B000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0040B014; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0040B020; } }
L_0040B014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 13616u));
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 3;
L_0040B020:
    set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B038u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040B038u) [[unlikely]] return; }
L_0040B038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040B240; } }
L_0040B040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B048u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040B048u) [[unlikely]] return; }
L_0040B048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_0040B238; } }
L_0040B050:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B06Cu); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B06Cu) [[unlikely]] return; }
L_0040B06C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B078u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B078u) [[unlikely]] return; }
L_0040B078:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0040B10C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 13624u));
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B094u); st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B094u) [[unlikely]] return; }
L_0040B094:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0040B0A4u) [[unlikely]] return; }
L_0040B0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0040B0ACu) [[unlikely]] return; }
L_0040B0AC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0B8u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B0B8u) [[unlikely]] return; }
L_0040B0B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B0C4u) [[unlikely]] return; }
L_0040B0C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));  if (t) { goto L_0040B19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0D4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B0D4u) [[unlikely]] return; }
L_0040B0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 6u, depth + 1u); else { c.pc = 0x0040C588u; return; } if (c.pc != 0x0040B0DCu) [[unlikely]] return; }
L_0040B0DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B0E8u) [[unlikely]] return; }
L_0040B0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B0F4u) [[unlikely]] return; }
L_0040B0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));  if (t) { goto L_0040B19C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 13632u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0040B19C; } }
L_0040B10C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.f[20];
    c.r[17].d[0] = ld64((c.r[2].w[0] + 13824u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B124u); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B124u) [[unlikely]] return; }
L_0040B124:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B134u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0040B134u) [[unlikely]] return; }
L_0040B134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B13Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0040B13Cu) [[unlikely]] return; }
L_0040B13C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B148u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B148u) [[unlikely]] return; }
L_0040B148:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B154u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B154u) [[unlikely]] return; }
L_0040B154:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));  if (t) { goto L_0040B19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B164u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B164u) [[unlikely]] return; }
L_0040B164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B16Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 6u, depth + 1u); else { c.pc = 0x0040C588u; return; } if (c.pc != 0x0040B16Cu) [[unlikely]] return; }
L_0040B16C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B178u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B178u) [[unlikely]] return; }
L_0040B178:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B184u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B184u) [[unlikely]] return; }
L_0040B184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040B198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B194u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040B194u) [[unlikely]] return; }
L_0040B194:
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 1;
L_0040B198:
    set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));
    c.budget -= 1;
L_0040B19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0040B214; } }
L_0040B1A4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[21];  if (t) { goto L_0040B26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1C0u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040B1C0u) [[unlikely]] return; }
L_0040B1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[21];  if (t) { goto L_0040B26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1D0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C788u; return; } if (c.pc != 0x0040B1D0u) [[unlikely]] return; }
L_0040B1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040B268; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 13608u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1F4u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B1F4u) [[unlikely]] return; }
L_0040B1F4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B200u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040B200u) [[unlikely]] return; }
L_0040B200:
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 18052u)));
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.budget -= 5;
L_0040B214:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B224u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 71u, depth + 1u); else { c.pc = 0x00209D88u; return; } if (c.pc != 0x0040B224u) [[unlikely]] return; }
L_0040B224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0040B240; } }
L_0040B22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B234u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040B234u) [[unlikely]] return; }
L_0040B234:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
L_0040B238:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0040B23C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_0040B240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B250u);  if (depth < kMaxDepth) unit_00DD(c, 35u, depth + 1u); else { c.pc = 0x004745C8u; return; } if (c.pc != 0x0040B250u) [[unlikely]] return; }
L_0040B250:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0040B258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B260u); c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0040B260u) [[unlikely]] return; }
L_0040B260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0040B270; } }
L_0040B268:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_0040B26C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0040B270:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 152u));
    c.f[22] = ld32((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040B298:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (t) { goto L_0040B2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0040B2E4u) [[unlikely]] return; }
L_0040B2E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040B2F0u) [[unlikely]] return; }
L_0040B2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0040B57C; } }
L_0040B2F8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 20));  if (t) { goto L_0040B33C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040B578; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040B33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B328u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040B328u) [[unlikely]] return; }
L_0040B328:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B334u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 226u, depth + 1u); else { c.pc = 0x002028F8u; return; } if (c.pc != 0x0040B334u) [[unlikely]] return; }
L_0040B334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0040B57C; } }
L_0040B33C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0040B3C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0040B370; } }
    c.budget -= 1;
L_0040B350:
    set32(c.r[2], c.r[7].w[0] >> 11);
    set32(c.r[5], c.r[5].w[0] - 21u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << 21);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B350u | kUnwind; return; } goto L_0040B350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0040B370:
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0040B3A4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0040B380:
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B380u | kUnwind; return; } goto L_0040B380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[4].w[0]);  if (t) { goto L_0040B3AC; } }
L_0040B3A4:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 2;
L_0040B3AC:
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[7].w[0] >> (c.r[2].w[0] & 31u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 5;
L_0040B3C0:
    set32(c.r[5], c.r[5].w[0] - 1023u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0040B3F0; } }
    c.r[2].d[0] = c.r[7].d[0] & c.r[19].d[0];
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0040B3F0:
    c.r[2].d[0] = c.r[7].d[0] & c.r[19].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[21], c.r[5].w[0] << 20);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 12;
L_0040B420:
    set32(c.r[4], c.r[10].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].d[0] & c.r[19].d[0];  if (t) { goto L_0040B43C; } }
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0040B43C:
    set32(c.r[9], c.r[9].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B420u | kUnwind; return; } goto L_0040B420; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_0040B458:
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[11].w[0] + c.r[9].w[0]);  if (t) { goto L_0040B484; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[2].d[0] = c.r[7].d[0] & c.r[19].d[0];  if (t) { goto L_0040B4B4; } }
    c.r[8].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[9], c.r[9].w[0] >> 1);  goto L_0040B4B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[5].w[0] + c.r[9].w[0]);  if (t) { goto L_0040B48C; } }
L_0040B484:
    c.r[8].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[5].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0040B48C:
    c.r[2].d[0] = c.r[5].d[0] & c.r[19].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_0040B4A4; } }
    c.r[3].d[0] = c.r[11].d[0] & c.r[19].d[0];
    set32(c.r[2], c.r[10].w[0] + 1u);
    if (c.r[3].d[0] == 0) c.r[10].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_0040B4A4:
    set32(c.r[7], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[19].d[0];
    c.budget -= 4;
L_0040B4B4:
    set32(c.r[9], c.r[9].w[0] >> 1);
    c.budget -= 1;
L_0040B4B8:
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B458u | kUnwind; return; } goto L_0040B458; } }
    c.r[2].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[17].w[0] >> 1);  if (t) { goto L_0040B544; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B4ECu) [[unlikely]] return; }
L_0040B4EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[7], c.r[17].w[0] >> 1);  if (t) { goto L_0040B544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040B510; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0040B540; } }
L_0040B510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B518u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x0040B518u) [[unlikely]] return; }
L_0040B518:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_0040B538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_0040B540; } }
L_0040B538:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0040B540:
    set32(c.r[7], c.r[17].w[0] >> 1);
    c.budget -= 1;
L_0040B544:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[7].d[0] | c.r[19].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[21].w[0]);
    if (c.r[5].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[20].d[0] = c.r[6].d[0] << 32;
    c.r[16].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_0040B578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0040B57C:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040B5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[11] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.f[22]);
    st32((c.r[29].w[0] + 24u), c.f[21]);
    set32(c.r[2], c.f[11]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[29].w[0] + 16u), c.f[20]);  if (t) { goto L_0040B5F8; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040B9BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_0040B9C0; } }
    c.budget -= 1;
L_0040B5F8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040B61C; } }
    c.f[0] = fp::sub(c.f[11], c.f[11]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_0040B9C0; } }
L_0040B61C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x23000000u);  if (t) { goto L_0040B754; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[21] = fp::mul(c.f[11], c.f[11]);  goto L_0040B650; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040B9BC; } }
L_0040B650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[9] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[9]);
    c.f[22] = fp::add(c.f[2], c.f[5]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[20] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.f[1] = fp::mul(c.f[11], c.f[12]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[11], c.f[0]);
    c.budget -= 65;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[10], c.f[0]);  if (t) { goto L_0040B9B8; } }
L_0040B754:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0040B880; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[11], c.f[10]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[8] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[5] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[6] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[22] = fp::add(c.f[1], c.f[10]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B840u); c.f[20] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0042(c, 30u, depth + 1u); else { c.pc = 0x00208DD0u; return; } if (c.pc != 0x0040B840u) [[unlikely]] return; }
L_0040B840:
    c.f[10] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[1] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[12], c.f[10]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0040B9B8; } }
L_0040B880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[11]);
    c.f[21] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8A0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0042(c, 30u, depth + 1u); else { c.pc = 0x00208DD0u; return; } if (c.pc != 0x0040B8A0u) [[unlikely]] return; }
L_0040B8A0:
    set32(c.r[3], c.f[0]);
    c.f[10] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[9] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[5] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[8] = c.r[1].w[0];
    c.f[6] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[7] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[10], c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[22] = fp::add(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.f[0] = fp::mul(c.f[12], c.f[10]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 70;
L_0040B9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040B9BC:
    c.f[22] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040B9C0:
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B9D0:
    set32(c.r[4], c.f[12]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0040BA48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040BA08; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 13684u));  c.pc = t; return; }
L_0040BA08:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[8], 0u - 25u);  if (t) { goto L_0040BA30; } }
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[0]);
    c.f[0] = 0u;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040BA30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_0040BA48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0040BA68; } }
    c.f[2] = c.r[4].w[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.f[2], c.f[2]);  c.pc = t; return; }
L_0040BA68:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 23));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 64288ull;
    set32(c.r[2], c.r[8].w[0] - 127u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[8], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[7].w[0] + 15u);
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0040BB74; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::mul(c.f[12], c.f[12]);  goto L_0040BB10; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0040BCEC; } }
    c.f[9] = c.r[8].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.f[1], c.f[0]);  c.pc = t; return; }
L_0040BB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; c.f[2] = fp::mul(c.f[2], c.f[1]);  if (t) { goto L_0040BB3C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[12], c.f[2]);  c.pc = t; return; }
L_0040BB3C:
    c.f[9] = c.r[8].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_0040BB74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFCF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E170000u);
    c.r[1].d[0] = c.r[1].d[0] | 34967ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E3A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 13093ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E1C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 53327ull;
    c.f[2] = c.r[1].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 23600ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E630000u);
    c.r[1].d[0] = c.r[1].d[0] | 36393ull;
    c.f[4] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 49800ull;
    fpu_div(c, 10u, c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.r[1].d[0] = c.r[1].d[0] | 18725ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[6] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[7] = c.r[1].w[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[9] = c.r[8].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[3] = fp::mul(c.f[10], c.f[10]);
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 52;
    { const bool t = c.r[3].sd[0] <= 0; c.f[2] = fp::add(c.f[3], c.f[0]);  if (t) { goto L_0040BCA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.f[4] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_0040BC6C; } }
    c.f[0] = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::mul(c.f[10], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[12], c.f[0]);  c.pc = t; return; }
L_0040BC6C:
    c.f[0] = fp::add(c.f[4], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[10], c.f[0]);
    c.f[2] = fp::mul(c.f[9], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[2], c.f[0]);  c.pc = t; return; }
L_0040BCA8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.f[0] = fp::sub(c.f[12], c.f[2]);  if (t) { goto L_0040BCBC; } }
    c.f[0] = fp::mul(c.f[10], c.f[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[12], c.f[0]);  c.pc = t; return; }
L_0040BCBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37170000u);
    c.r[1].d[0] = c.r[1].d[0] | 63441ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29056ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[10], c.f[0]);
    c.f[2] = fp::mul(c.f[9], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 12;
L_0040BCEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040BCF8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.f[20]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.f[21]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[17].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[19].d[0] & c.r[2].d[0];  if (t) { goto L_0040BD58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BD58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[0] = fp::add(c.f[20], c.f[21]);  [[clang::musttail]] return unit_00C3(c, 4u, depth); }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BD7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[20], c.f[21]);  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BD7C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040BDD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);  if (t) { goto L_0040BDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_0040BDD4; } }
L_0040BDA0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 23));  if (t) { goto L_0040BDD4; } }
    set32(c.r[2], 0u + 150u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x7F800000u);  if (t) { goto L_0040BDD8; } }
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[20], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_0040BDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.budget -= 1;
L_0040BDD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040BE20; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0040BDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[21], c.f[21]);  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BE0C; } }
    c.f[0] = 0u;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.f[0] = c.f[21];  [[clang::musttail]] return unit_00C3(c, 4u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BE0C:
    c.f[0] = 0u;
    c.budget -= 3;
    if (c.r[18].sd[0] < 0) { c.f[0] = c.f[21] ^ fp::kSign;  [[clang::musttail]] return unit_00C3(c, 4u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BE20:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0040BE4C; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.f[0] = c.f[20];  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BE4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0040BE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[20], c.f[20]);  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BE5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0040BE7C; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_0040BE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE74u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 30u, depth + 1u); else { c.pc = 0x00208DD0u; return; } if (c.pc != 0x0040BE74u) [[unlikely]] return; }
L_0040BE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE84u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x0020A058u; return; } if (c.pc != 0x0040BE84u) [[unlikely]] return; }
L_0040BE84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.f[12] = c.f[0];  if (t) { goto L_0040BEA4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040BEA4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[6].d[0]; set32(c.r[10], c.r[19].w[0] >> 31);  if (t) { goto L_0040BF04; } }
L_0040BEA4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.f[13] = c.f[12];  if (t) { goto L_0040BEC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 13u, c.f[0], c.f[13]);
    c.budget -= 5;
L_0040BEC0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.f[0] = c.f[13];  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040BEF4; } }
    c.f[0] = fp::sub(c.f[13], c.f[13]);
    fpu_div(c, 13u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[13];  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BEF4:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[2].d[0]) { c.f[13] = c.f[13] ^ fp::kSign;  goto L_0040BEFC; }
L_0040BEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[13];  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BF04:
    set32(c.r[2], c.r[10].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D000000u);  if (t) { goto L_0040BF2C; } }
    c.f[0] = fp::sub(c.f[20], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BF2C:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);  if (t) { [[clang::musttail]] return unit_00C3(c, 2u, depth); } }
    c.r[2].d[0] = c.r[2].d[0] | 65527ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040BF58; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0040BF70; } }
L_0040BF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 13820u));  if (t) { [[clang::musttail]] return unit_00C3(c, 4u, depth); } }
L_0040BF58:
    c.r[2].d[0] = c.r[2].d[0] | 7ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BF7C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BF50u | kUnwind; return; } goto L_0040BF50; } }
L_0040BF70:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C3(c, 5u, depth); } }
L_0040BF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x36EC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 42352ull;
    c.f[4] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB80000u);
    c.r[1].d[0] = c.r[1].d[0] | 43579ull;
    c.f[1] = c.r[1].w[0];
    c.f[6] = fp::mul(c.f[12], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB80000u);
    c.r[1].d[0] = c.r[1].d[0] | 43520ull;
    c.f[5] = c.r[1].w[0];
    c.f[4] = fp::mul(c.f[12], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[15] = fp::mul(c.f[12], c.f[5]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[9] = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::mul(c.f[9], c.f[1]);
    c.f[14] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[15], c.f[14]);
    set32(c.r[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 33;
    [[clang::musttail]] return unit_00C3(c, 1u, depth);
}

}
