#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC008;
    case 3u: goto L_001BC034;
    case 4u: goto L_001BC080;
    case 5u: goto L_001BC09C;
    case 6u: goto L_001BC0B8;
    case 7u: goto L_001BC0E4;
    case 8u: goto L_001BC0F4;
    case 9u: goto L_001BC108;
    case 10u: goto L_001BC130;
    case 11u: goto L_001BC148;
    case 12u: goto L_001BC170;
    case 13u: goto L_001BC1A0;
    case 14u: goto L_001BC1A8;
    case 15u: goto L_001BC1D8;
    case 16u: goto L_001BC218;
    case 17u: goto L_001BC234;
    case 18u: goto L_001BC244;
    case 19u: goto L_001BC264;
    case 20u: goto L_001BC284;
    case 21u: goto L_001BC2A8;
    case 22u: goto L_001BC2D8;
    case 23u: goto L_001BC300;
    case 24u: goto L_001BC344;
    case 25u: goto L_001BC378;
    case 26u: goto L_001BC398;
    case 27u: goto L_001BC3C8;
    case 28u: goto L_001BC3E8;
    case 29u: goto L_001BC3F8;
    case 30u: goto L_001BC418;
    case 31u: goto L_001BC43C;
    case 32u: goto L_001BC454;
    case 33u: goto L_001BC468;
    case 34u: goto L_001BC47C;
    case 35u: goto L_001BC4A0;
    case 36u: goto L_001BC56C;
    case 37u: goto L_001BC590;
    case 38u: goto L_001BC5C0;
    case 39u: goto L_001BC5F4;
    case 40u: goto L_001BC624;
    case 41u: goto L_001BC644;
    case 42u: goto L_001BC66C;
    case 43u: goto L_001BC684;
    case 44u: goto L_001BC6A8;
    case 45u: goto L_001BC6F0;
    case 46u: goto L_001BC754;
    case 47u: goto L_001BC76C;
    case 48u: goto L_001BC798;
    case 49u: goto L_001BC7B8;
    case 50u: goto L_001BC7F0;
    case 51u: goto L_001BC80C;
    case 52u: goto L_001BC81C;
    case 53u: goto L_001BC83C;
    case 54u: goto L_001BC860;
    case 55u: goto L_001BC8AC;
    case 56u: goto L_001BC8D8;
    case 57u: goto L_001BC8F8;
    case 58u: goto L_001BC930;
    case 59u: goto L_001BC94C;
    case 60u: goto L_001BC95C;
    case 61u: goto L_001BC97C;
    case 62u: goto L_001BC998;
    case 63u: goto L_001BC9D4;
    case 64u: goto L_001BC9FC;
    case 65u: goto L_001BCA14;
    case 66u: goto L_001BCA38;
    case 67u: goto L_001BCA68;
    case 68u: goto L_001BCA90;
    case 69u: goto L_001BCAD0;
    case 70u: goto L_001BCAF0;
    case 71u: goto L_001BCB0C;
    case 72u: goto L_001BCB60;
    case 73u: goto L_001BCB74;
    case 74u: goto L_001BCB88;
    case 75u: goto L_001BCBA0;
    case 76u: goto L_001BCBF8;
    case 77u: goto L_001BCC08;
    case 78u: goto L_001BCC44;
    case 79u: goto L_001BCC70;
    case 80u: goto L_001BCC90;
    case 81u: goto L_001BCCC8;
    case 82u: goto L_001BCCE4;
    case 83u: goto L_001BCCF4;
    case 84u: goto L_001BCD14;
    case 85u: goto L_001BCD40;
    case 86u: goto L_001BCDA8;
    case 87u: goto L_001BCDC0;
    case 88u: goto L_001BCDE0;
    case 89u: goto L_001BCE64;
    case 90u: goto L_001BCE78;
    case 91u: goto L_001BCECC;
    case 92u: goto L_001BCEDC;
    case 93u: goto L_001BCEF4;
    case 94u: goto L_001BCF28;
    case 95u: goto L_001BCF4C;
    case 96u: goto L_001BCF68;
    case 97u: goto L_001BCFC0;
    case 98u: goto L_001BCFF4;
    case 99u: goto L_001BD020;
    case 100u: goto L_001BD030;
    case 101u: goto L_001BD064;
    case 102u: goto L_001BD090;
    case 103u: goto L_001BD0BC;
    case 104u: goto L_001BD0DC;
    case 105u: goto L_001BD114;
    case 106u: goto L_001BD130;
    case 107u: goto L_001BD140;
    case 108u: goto L_001BD160;
    case 109u: goto L_001BD180;
    case 110u: goto L_001BD1B0;
    case 111u: goto L_001BD1E0;
    case 112u: goto L_001BD1FC;
    case 113u: goto L_001BD234;
    case 114u: goto L_001BD250;
    case 115u: goto L_001BD284;
    case 116u: goto L_001BD2BC;
    case 117u: goto L_001BD2F0;
    case 118u: goto L_001BD2FC;
    case 119u: goto L_001BD334;
    case 120u: goto L_001BD37C;
    case 121u: goto L_001BD39C;
    case 122u: goto L_001BD3B0;
    case 123u: goto L_001BD3C8;
    case 124u: goto L_001BD3DC;
    case 125u: goto L_001BD3F8;
    case 126u: goto L_001BD420;
    case 127u: goto L_001BD444;
    case 128u: goto L_001BD45C;
    case 129u: goto L_001BD480;
    case 130u: goto L_001BD4A4;
    case 131u: goto L_001BD4C8;
    case 132u: goto L_001BD4E8;
    case 133u: goto L_001BD520;
    case 134u: goto L_001BD530;
    case 135u: goto L_001BD568;
    case 136u: goto L_001BD580;
    case 137u: goto L_001BD5A4;
    case 138u: goto L_001BD5D8;
    case 139u: goto L_001BD610;
    case 140u: goto L_001BD648;
    case 141u: goto L_001BD670;
    case 142u: goto L_001BD688;
    case 143u: goto L_001BD6AC;
    case 144u: goto L_001BD6C0;
    case 145u: goto L_001BD6DC;
    case 146u: goto L_001BD6F4;
    case 147u: goto L_001BD748;
    case 148u: goto L_001BD758;
    case 149u: goto L_001BD790;
    case 150u: goto L_001BD7C8;
    case 151u: goto L_001BD7EC;
    case 152u: goto L_001BD808;
    case 153u: goto L_001BD858;
    case 154u: goto L_001BD8B0;
    case 155u: goto L_001BD8CC;
    case 156u: goto L_001BD988;
    case 157u: goto L_001BDB24;
    case 158u: goto L_001BDBB0;
    case 159u: goto L_001BDDD0;
    case 160u: goto L_001BDE0C;
    case 161u: goto L_001BDE34;
    case 162u: goto L_001BDE84;
    case 163u: goto L_001BDED4;
    case 164u: goto L_001BDF10;
    case 165u: goto L_001BDF60;
    case 166u: goto L_001BDFAC;
    case 167u: goto L_001BDFE4;
    case 168u: goto L_001BE02C;
    case 169u: goto L_001BE038;
    case 170u: goto L_001BE080;
    case 171u: goto L_001BE09C;
    case 172u: goto L_001BE0C0;
    case 173u: goto L_001BE0E0;
    case 174u: goto L_001BE100;
    case 175u: goto L_001BE11C;
    case 176u: goto L_001BE150;
    case 177u: goto L_001BE174;
    case 178u: goto L_001BE1A0;
    case 179u: goto L_001BE260;
    case 180u: goto L_001BE278;
    case 181u: goto L_001BE290;
    case 182u: goto L_001BE3A0;
    case 183u: goto L_001BE3E4;
    case 184u: goto L_001BE3F4;
    case 185u: goto L_001BE424;
    case 186u: goto L_001BE460;
    case 187u: goto L_001BE480;
    case 188u: goto L_001BE494;
    case 189u: goto L_001BE4A8;
    case 190u: goto L_001BE4D0;
    case 191u: goto L_001BE558;
    case 192u: goto L_001BE5C0;
    case 193u: goto L_001BE60C;
    case 194u: goto L_001BE624;
    case 195u: goto L_001BE668;
    case 196u: goto L_001BE6AC;
    case 197u: goto L_001BE6E8;
    case 198u: goto L_001BE700;
    case 199u: goto L_001BE718;
    case 200u: goto L_001BE76C;
    case 201u: goto L_001BE7A4;
    case 202u: goto L_001BE7DC;
    case 203u: goto L_001BE7F8;
    case 204u: goto L_001BE81C;
    case 205u: goto L_001BE838;
    case 206u: goto L_001BE868;
    case 207u: goto L_001BE8E4;
    case 208u: goto L_001BE900;
    case 209u: goto L_001BE978;
    case 210u: goto L_001BE9FC;
    case 211u: goto L_001BEA30;
    case 212u: goto L_001BEA6C;
    case 213u: goto L_001BEA84;
    case 214u: goto L_001BEAA0;
    case 215u: goto L_001BEAF4;
    case 216u: goto L_001BEB30;
    case 217u: goto L_001BEB5C;
    case 218u: goto L_001BEB80;
    case 219u: goto L_001BEBBC;
    case 220u: goto L_001BEBD4;
    case 221u: goto L_001BEBF0;
    case 222u: goto L_001BEC34;
    case 223u: goto L_001BECE0;
    case 224u: goto L_001BED50;
    case 225u: goto L_001BED60;
    case 226u: goto L_001BED70;
    case 227u: goto L_001BED8C;
    case 228u: goto L_001BED98;
    case 229u: goto L_001BEF38;
    case 230u: goto L_001BEF98;
    case 231u: goto L_001BF0F8;
    case 232u: goto L_001BF114;
    case 233u: goto L_001BF140;
    case 234u: goto L_001BF16C;
    case 235u: goto L_001BF1A8;
    case 236u: goto L_001BF1C8;
    case 237u: goto L_001BF1D8;
    case 238u: goto L_001BF250;
    case 239u: goto L_001BF288;
    case 240u: goto L_001BF3F8;
    case 241u: goto L_001BF48C;
    case 242u: goto L_001BF4B4;
    case 243u: goto L_001BF4D8;
    case 244u: goto L_001BF4E8;
    case 245u: goto L_001BF4FC;
    case 246u: goto L_001BF528;
    case 247u: goto L_001BF684;
    case 248u: goto L_001BF6A4;
    case 249u: goto L_001BF6C0;
    case 250u: goto L_001BF708;
    case 251u: goto L_001BF728;
    case 252u: goto L_001BF748;
    case 253u: goto L_001BF7D8;
    case 254u: goto L_001BF800;
    case 255u: goto L_001BF820;
    case 256u: goto L_001BF890;
    case 257u: goto L_001BF8B0;
    case 258u: goto L_001BF8D0;
    case 259u: goto L_001BF91C;
    case 260u: goto L_001BF948;
    case 261u: goto L_001BF95C;
    case 262u: goto L_001BF970;
    case 263u: goto L_001BF980;
    case 264u: goto L_001BF998;
    case 265u: goto L_001BF9B0;
    case 266u: goto L_001BF9DC;
    case 267u: goto L_001BFA14;
    case 268u: goto L_001BFA68;
    case 269u: goto L_001BFAB8;
    case 270u: goto L_001BFACC;
    case 271u: goto L_001BFAF4;
    case 272u: goto L_001BFB0C;
    case 273u: goto L_001BFB78;
    case 274u: goto L_001BFBA0;
    case 275u: goto L_001BFCA0;
    case 276u: goto L_001BFD04;
    case 277u: goto L_001BFDA0;
    case 278u: goto L_001BFE78;
    case 279u: goto L_001BFE88;
    case 280u: goto L_001BFEC0;
    case 281u: goto L_001BFED8;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    c.budget -= 1;
    c.pc = 0x001BC004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001BC008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC034u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC034u) [[unlikely]] return; }
L_001BC034:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC09C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5CA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 32432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4E30000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC080u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BC080u) [[unlikely]] return; }
L_001BC080:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC09Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC09Cu) [[unlikely]] return; }
L_001BC09C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC0B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0E4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001BC0E4u) [[unlikely]] return; }
L_001BC0E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0F4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001BC0F4u) [[unlikely]] return; }
L_001BC0F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BC154; } }
    set32(c.r[17], 0u + 12u);
    c.budget -= 2;
L_001BC108:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC14C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BC14C; } }
    set32(c.r[5], 0u + 83u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC130u);  if (depth < kMaxDepth) unit_001B(c, 200u, depth + 1u); else { c.pc = 0x0016EAF8u; return; } if (c.pc != 0x001BC130u) [[unlikely]] return; }
L_001BC130:
    set32(c.r[2], ld32((c.r[16].w[0] + 840u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 9872u);
    st32((c.r[2].w[0] + 7700u), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC148u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001BC148u) [[unlikely]] return; }
L_001BC148:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001BC14C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC108u | kUnwind; return; } goto L_001BC108; } }
L_001BC154:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22480u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1A0u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC1A0u) [[unlikely]] return; }
L_001BC1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC1B4; } }
L_001BC1A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC288; } }
L_001BC1B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1D8u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BC1D8u) [[unlikely]] return; }
L_001BC1D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001BC274; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 25932u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001BC284; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC218u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BC218u) [[unlikely]] return; }
L_001BC218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC284; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC234u);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BC234u) [[unlikely]] return; }
L_001BC234:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC244u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC244u) [[unlikely]] return; }
L_001BC244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC1A8u | kUnwind; return; } goto L_001BC1A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC1A8u | kUnwind; return; } goto L_001BC1A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC264u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BC264u) [[unlikely]] return; }
L_001BC264:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC1A8u | kUnwind; return; } goto L_001BC1A8; } }
L_001BC274:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC284u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC284u) [[unlikely]] return; }
L_001BC284:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BC288:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC2A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2D8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001BC2D8u) [[unlikely]] return; }
L_001BC2D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BC47C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC47C; } }
    st32((c.r[17].w[0] + 612u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC300u);  if (depth < kMaxDepth) unit_0061(c, 246u, depth + 1u); else { c.pc = 0x002866C0u; return; } if (c.pc != 0x001BC300u) [[unlikely]] return; }
L_001BC300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC470; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC428; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] - 22480u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC344u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC344u) [[unlikely]] return; }
L_001BC344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC448; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001BC3AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[17].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC378u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BC378u) [[unlikely]] return; }
L_001BC378:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BC3A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC398u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC398u) [[unlikely]] return; }
L_001BC398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC448; } }
L_001BC3A0:
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] - 13248u);
    c.budget -= 3;
L_001BC3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BC448; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3C8u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BC3C8u) [[unlikely]] return; }
L_001BC3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC448; } }
    set32(c.r[16], c.r[19].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3E8u);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BC3E8u) [[unlikely]] return; }
L_001BC3E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3F8u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC3F8u) [[unlikely]] return; }
L_001BC3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC448; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC448; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC418u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BC418u) [[unlikely]] return; }
L_001BC418:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC448; } }
L_001BC428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC43Cu);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC43Cu) [[unlikely]] return; }
L_001BC43C:
    set32(c.r[2], ld32((c.r[16].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC45C; } }
L_001BC448:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC454u);  if (depth < kMaxDepth) unit_0070(c, 17u, depth + 1u); else { c.pc = 0x002C03C0u; return; } if (c.pc != 0x001BC454u) [[unlikely]] return; }
L_001BC454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC47C; } }
L_001BC45C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC468u);  if (depth < kMaxDepth) unit_0070(c, 16u, depth + 1u); else { c.pc = 0x002C0398u; return; } if (c.pc != 0x001BC468u) [[unlikely]] return; }
L_001BC468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC47C; } }
L_001BC470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC47Cu);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0378u; return; } if (c.pc != 0x001BC47Cu) [[unlikely]] return; }
L_001BC47C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC4A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    set32(c.r[19], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 202u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 206u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 207u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC56Cu);  if (depth < kMaxDepth) unit_001B(c, 306u, depth + 1u); else { c.pc = 0x0016FE70u; return; } if (c.pc != 0x001BC56Cu) [[unlikely]] return; }
L_001BC56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001BC6C8; } }
L_001BC574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22480u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC590u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC590u) [[unlikely]] return; }
L_001BC590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC6BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC5AC; } }
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001BC5AC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5C0u);  if (depth < kMaxDepth) unit_007C(c, 69u, depth + 1u); else { c.pc = 0x002F1010u; return; } if (c.pc != 0x001BC5C0u) [[unlikely]] return; }
L_001BC5C0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC62C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13084u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC630; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC630; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5F4u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BC5F4u) [[unlikely]] return; }
L_001BC5F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001BC630; } }
    set32(c.r[2], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 14208u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC624u);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BC624u) [[unlikely]] return; }
L_001BC624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC630; } }
L_001BC62C:
    st32((c.r[16].w[0] + 13084u), 0u);
    c.budget -= 1;
L_001BC630:
    set32(c.r[17], c.r[20].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC644u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC644u) [[unlikely]] return; }
L_001BC644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC6C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC6C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC66Cu);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001BC66Cu) [[unlikely]] return; }
L_001BC66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC6C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC684u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BC684u) [[unlikely]] return; }
L_001BC684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC698; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC6A8; } }
L_001BC698:
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6A8u);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x001BC6A8u) [[unlikely]] return; }
L_001BC6A8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 13144u), c.f[0]);
    st32((c.r[16].w[0] + 13128u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC6C8; } }
L_001BC6BC:
    set32(c.r[2], 0u + 20u);
    st32((c.r[16].w[0] + 13084u), 0u);
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001BC6C8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC6F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 13096u)));
    set32(c.r[20], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC84C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22480u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC754u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC754u) [[unlikely]] return; }
L_001BC754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC76Cu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC76Cu) [[unlikely]] return; }
L_001BC76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC798u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BC798u) [[unlikely]] return; }
L_001BC798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001BC7C0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7B8u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC7B8u) [[unlikely]] return; }
L_001BC7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC860; } }
L_001BC7C0:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 25932u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7F0u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BC7F0u) [[unlikely]] return; }
L_001BC7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC80Cu);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BC80Cu) [[unlikely]] return; }
L_001BC80C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC81Cu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC81Cu) [[unlikely]] return; }
L_001BC81C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC860; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC860; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC83Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BC83Cu) [[unlikely]] return; }
L_001BC83C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC860; } }
L_001BC84C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC860u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC860u) [[unlikely]] return; }
L_001BC860:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCA6C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCA6C; } }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCA4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] - 22480u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8ACu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC8ACu) [[unlikely]] return; }
L_001BC8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC984; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8D8u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BC8D8u) [[unlikely]] return; }
L_001BC8D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001BC900; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8F8u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BC8F8u) [[unlikely]] return; }
L_001BC8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC984; } }
L_001BC900:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 25932u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001BC984; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC930u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BC930u) [[unlikely]] return; }
L_001BC930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC984; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC94Cu);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BC94Cu) [[unlikely]] return; }
L_001BC94C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC95Cu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC95Cu) [[unlikely]] return; }
L_001BC95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC984; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC984; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC97Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BC97Cu) [[unlikely]] return; }
L_001BC97C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001BC984:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC998u);  if (depth < kMaxDepth) unit_007C(c, 69u, depth + 1u); else { c.pc = 0x002F1010u; return; } if (c.pc != 0x001BC998u) [[unlikely]] return; }
L_001BC998:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BC9E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13084u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC9E8; } }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC9C8; } }
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC9E8; } }
L_001BC9C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9D4u);  if (depth < kMaxDepth) unit_002F(c, 12u, depth + 1u); else { c.pc = 0x001BC170u; return; } if (c.pc != 0x001BC9D4u) [[unlikely]] return; }
L_001BC9D4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 13084u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC9E8; } }
L_001BC9E4:
    st32((c.r[16].w[0] + 13084u), 0u);
    c.budget -= 1;
L_001BC9E8:
    set32(c.r[17], c.r[19].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9FCu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BC9FCu) [[unlikely]] return; }
L_001BC9FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCA6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA14u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BCA14u) [[unlikely]] return; }
L_001BCA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCA28; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCA38; } }
L_001BCA28:
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA38u);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x001BCA38u) [[unlikely]] return; }
L_001BCA38:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 13144u), c.f[0]);
    st32((c.r[16].w[0] + 13128u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCA6C; } }
L_001BCA4C:
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA68u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BCA68u) [[unlikely]] return; }
L_001BCA68:
    st32((c.r[16].w[0] + 13084u), 0u);
    c.budget -= 1;
L_001BCA6C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BCA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001BCDC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAD0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001BCAD0u) [[unlikely]] return; }
L_001BCAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCAF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAF0u);  if (depth < kMaxDepth) unit_002F(c, 21u, depth + 1u); else { c.pc = 0x001BC2A8u; return; } if (c.pc != 0x001BCAF0u) [[unlikely]] return; }
L_001BCAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCDC0; } }
L_001BCAF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB0Cu);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BCB0Cu) [[unlikely]] return; }
L_001BCB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCB20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCB30; } }
L_001BCB20:
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
L_001BCB30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BCD24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCD24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB60u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BCB60u) [[unlikely]] return; }
L_001BCB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB74u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BCB74u) [[unlikely]] return; }
L_001BCB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB88u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BCB88u) [[unlikely]] return; }
L_001BCB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCC14; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBA0u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001BCBA0u) [[unlikely]] return; }
L_001BCBA0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001BCC24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 169u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC14; } }
    set32(c.r[2], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC14; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC14; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC14; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC14; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBF8u);  if (depth < kMaxDepth) unit_0019(c, 291u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x001BCBF8u) [[unlikely]] return; }
L_001BCBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001BCC20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC08u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001BCC08u) [[unlikely]] return; }
L_001BCC08:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BCC20; } }
L_001BCC14:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCC24; } }
L_001BCC20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BCC24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BCDC0; } }
    set32(c.r[18], c.r[18].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC44u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BCC44u) [[unlikely]] return; }
L_001BCC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC70u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BCC70u) [[unlikely]] return; }
L_001BCC70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001BCC98; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC90u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BCC90u) [[unlikely]] return; }
L_001BCC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCDC0; } }
L_001BCC98:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 25932u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCC8u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BCCC8u) [[unlikely]] return; }
L_001BCCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCE4u);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BCCE4u) [[unlikely]] return; }
L_001BCCE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCF4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BCCF4u) [[unlikely]] return; }
L_001BCCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCDC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCDC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD14u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BCD14u) [[unlikely]] return; }
L_001BCD14:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCDC0; } }
L_001BCD24:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BCD5C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD40u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BCD40u) [[unlikely]] return; }
L_001BCD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCD5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 13076u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCDC0; } }
L_001BCD5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 13076u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] - 13076u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001BCD84; } }
    st32((c.r[3].w[0] - 13076u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCD88; } }
L_001BCD84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BCD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 22480u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDA8u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BCDA8u) [[unlikely]] return; }
L_001BCDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCDC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDC0u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BCDC0u) [[unlikely]] return; }
L_001BCDC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BCDE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 13192u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD180; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4984u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001BD180; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 10196u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD180; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD180; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD180; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE64u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BCE64u) [[unlikely]] return; }
L_001BCE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCEE8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE78u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001BCE78u) [[unlikely]] return; }
L_001BCE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001BCEE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 169u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCEE8; } }
    set32(c.r[2], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCEE8; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCEE8; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCEE8; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BCEE8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCECCu);  if (depth < kMaxDepth) unit_0019(c, 291u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x001BCECCu) [[unlikely]] return; }
L_001BCECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001BCF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEDCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001BCEDCu) [[unlikely]] return; }
L_001BCEDC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BCF00; } }
L_001BCEE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCF04; } }
L_001BCEF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCF84; } }
L_001BCF00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BCF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[20], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], 0u + 13248u);
    c.budget -= 7;
L_001BCF28:
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[18], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001BCF70; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF4Cu);  if (depth < kMaxDepth) unit_0030(c, 9u, depth + 1u); else { c.pc = 0x001C0168u; return; } if (c.pc != 0x001BCF4Cu) [[unlikely]] return; }
L_001BCF4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCF70; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF68u);  if (depth < kMaxDepth) unit_0030(c, 16u, depth + 1u); else { c.pc = 0x001C0288u; return; } if (c.pc != 0x001BCF68u) [[unlikely]] return; }
L_001BCF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCEF4u | kUnwind; return; } goto L_001BCEF4; } }
L_001BCF70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCF28u | kUnwind; return; } goto L_001BCF28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BCF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD020; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD020; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD000; } }
    set32(c.r[4], c.r[22].w[0] - 19792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFC0u);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BCFC0u) [[unlikely]] return; }
L_001BCFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCFD4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCFDC; } }
L_001BCFD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_001BCFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD000; } }
    set32(c.r[4], c.r[21].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFF4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BCFF4u) [[unlikely]] return; }
L_001BCFF4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD004; } }
L_001BD000:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BD004:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BD020; } }
    set32(c.r[4], c.r[21].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD020u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BD020u) [[unlikely]] return; }
L_001BD020:
    set32(c.r[4], c.r[22].w[0] - 19792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD030u);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BD030u) [[unlikely]] return; }
L_001BD030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD044; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD04C; } }
L_001BD044:
    set32(c.r[2], ld32((c.r[17].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_001BD04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD170; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD064u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001BD064u) [[unlikely]] return; }
L_001BD064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BD170; } }
    set32(c.r[18], c.r[21].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD090u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BD090u) [[unlikely]] return; }
L_001BD090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD180; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 11280u)));
    set32(c.r[3], 0u - 513u);
    st16((c.r[17].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0BCu);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BD0BCu) [[unlikely]] return; }
L_001BD0BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001BD0E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0DCu);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BD0DCu) [[unlikely]] return; }
L_001BD0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD180; } }
L_001BD0E4:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 25932u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001BD180; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD114u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001BD114u) [[unlikely]] return; }
L_001BD114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD180; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD130u);  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031FF98u; return; } if (c.pc != 0x001BD130u) [[unlikely]] return; }
L_001BD130:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD140u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BD140u) [[unlikely]] return; }
L_001BD140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD180; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD180; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD160u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x001BD160u) [[unlikely]] return; }
L_001BD160:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD180; } }
L_001BD170:
    set32(c.r[4], c.r[21].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD180u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BD180u) [[unlikely]] return; }
L_001BD180:
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
L_001BD1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1E0u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BD1E0u) [[unlikely]] return; }
L_001BD1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD3E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1FCu);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BD1FCu) [[unlikely]] return; }
L_001BD1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD210; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD218; } }
L_001BD210:
    set32(c.r[2], ld32((c.r[17].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_001BD218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD3E4; } }
    set32(c.r[16], c.r[18].w[0] - 22480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD234u);  if (depth < kMaxDepth) unit_0088(c, 3u, depth + 1u); else { c.pc = 0x00320040u; return; } if (c.pc != 0x001BD234u) [[unlikely]] return; }
L_001BD234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD28C; } }
    st32((c.r[17].w[0] + 9900u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD250u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BD250u) [[unlikely]] return; }
L_001BD250:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BD2F0; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[8].w[0] - 17200u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 17208u)));
    set32(c.r[6], ld32((c.r[3].w[0] - 17204u)));
    set32(c.r[8], ld32((c.r[9].w[0] - 17196u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD284u);  if (depth < kMaxDepth) unit_0073(c, 182u, depth + 1u); else { c.pc = 0x002CEB38u; return; } if (c.pc != 0x001BD284u) [[unlikely]] return; }
L_001BD284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD2F0; } }
L_001BD28C:
    c.f[0] = ld32((c.r[17].w[0] + 9872u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BD2F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 9900u), c.f[1]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2BCu);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BD2BCu) [[unlikely]] return; }
L_001BD2BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BD2F0; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[8].w[0] - 17200u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 17208u)));
    set32(c.r[6], ld32((c.r[3].w[0] - 17204u)));
    set32(c.r[8], ld32((c.r[9].w[0] - 17196u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2F0u);  if (depth < kMaxDepth) unit_0073(c, 182u, depth + 1u); else { c.pc = 0x002CEB38u; return; } if (c.pc != 0x001BD2F0u) [[unlikely]] return; }
L_001BD2F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2FCu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BD2FCu) [[unlikely]] return; }
L_001BD2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD384; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD400; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD400; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 10196u)));
    st32((c.r[17].w[0] + 7704u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD334u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001BD334u) [[unlikely]] return; }
L_001BD334:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 31496u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001BD400; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001BD400; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD37Cu);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x001BD37Cu) [[unlikely]] return; }
L_001BD37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD400; } }
L_001BD384:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 7704u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 22480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD39Cu);  if (depth < kMaxDepth) unit_006E(c, 28u, depth + 1u); else { c.pc = 0x002B8520u; return; } if (c.pc != 0x001BD39Cu) [[unlikely]] return; }
L_001BD39C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3B0u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BD3B0u) [[unlikely]] return; }
L_001BD3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001BD400; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3C8u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001BD3C8u) [[unlikely]] return; }
L_001BD3C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 10196u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3DCu);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001BD3DCu) [[unlikely]] return; }
L_001BD3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD400; } }
L_001BD3E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 10196u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3F8u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001BD3F8u) [[unlikely]] return; }
L_001BD3F8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 7704u), c.r[2].w[0]);
    c.budget -= 2;
L_001BD400:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD444u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BD444u) [[unlikely]] return; }
L_001BD444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD464; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD45Cu);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x001BD45Cu) [[unlikely]] return; }
L_001BD45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD468; } }
L_001BD464:
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 1;
L_001BD468:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4A4u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BD4A4u) [[unlikely]] return; }
L_001BD4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD4B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD4C8; } }
L_001BD4B8:
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4C8u);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x001BD4C8u) [[unlikely]] return; }
L_001BD4C8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 13144u), c.f[0]);
    st32((c.r[16].w[0] + 13128u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD4E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD520; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001BD520; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD520u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x001BD520u) [[unlikely]] return; }
L_001BD520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[0] = 0u;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], 0u + 512u);
    if (c.r[5].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD568u);  if (depth < kMaxDepth) unit_002F(c, 240u, depth + 1u); else { c.pc = 0x001BF3F8u; return; } if (c.pc != 0x001BD568u) [[unlikely]] return; }
L_001BD568:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5A4u);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BD5A4u) [[unlikely]] return; }
L_001BD5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD5B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD5C0; } }
L_001BD5B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_001BD5C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD5D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD610u);  if (depth < kMaxDepth) unit_0009(c, 43u, depth + 1u); else { c.pc = 0x00125490u; return; } if (c.pc != 0x001BD610u) [[unlikely]] return; }
L_001BD610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD624; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD62C; } }
L_001BD624:
    set32(c.r[2], ld32((c.r[16].w[0] + 13168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_001BD62C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD648u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BD648u) [[unlikely]] return; }
L_001BD648:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BD65C; } }
L_001BD658:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BD65C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 13076u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 13076u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] - 13076u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BD6AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD6AC:
    st32((c.r[3].w[0] - 13076u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6DCu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BD6DCu) [[unlikely]] return; }
L_001BD6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD764; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6F4u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001BD6F4u) [[unlikely]] return; }
L_001BD6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001BD764; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 169u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD764; } }
    set32(c.r[2], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD764; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD764; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD764; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD764; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD748u);  if (depth < kMaxDepth) unit_0019(c, 291u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x001BD748u) [[unlikely]] return; }
L_001BD748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001BD770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD758u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001BD758u) [[unlikely]] return; }
L_001BD758:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BD770; } }
L_001BD764:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD774; } }
L_001BD770:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BD774:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD790:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[20], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[19], 0u + 13248u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 14;
L_001BD7C8:
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[17], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001BD81C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7ECu);  if (depth < kMaxDepth) unit_0030(c, 9u, depth + 1u); else { c.pc = 0x001C0168u; return; } if (c.pc != 0x001BD7ECu) [[unlikely]] return; }
L_001BD7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD81C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD808u);  if (depth < kMaxDepth) unit_0030(c, 16u, depth + 1u); else { c.pc = 0x001C0288u; return; } if (c.pc != 0x001BD808u) [[unlikely]] return; }
L_001BD808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD81C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD830; } }
L_001BD81C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD7C8u | kUnwind; return; } goto L_001BD7C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BD830:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD858:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[22] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 22;
L_001BD8B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD948; } }
    set32(c.r[4], c.r[18].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8CCu);  if (depth < kMaxDepth) unit_0088(c, 9u, depth + 1u); else { c.pc = 0x00320128u; return; } if (c.pc != 0x001BD8CCu) [[unlikely]] return; }
L_001BD8CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD948; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001BD92C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10248u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BD92C; } }
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = ld32((c.r[16].w[0] + 10244u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BD914; } }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD928; } }
L_001BD914:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BD92C; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 1;
L_001BD928:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_001BD92C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 10248u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 10248u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001BD948; } }
    st16((c.r[16].w[0] + 10248u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001BD948:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD8B0u | kUnwind; return; } goto L_001BD8B0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], ld32((c.r[2].w[0] - 12224u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[2], 0u + 512u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001BD9BC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13160u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD9C4; } }
L_001BD9BC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13162u));
    c.budget -= 2;
L_001BD9C4:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDABC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDABC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDABC; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDABC; } }
    c.f[0] = ld32((c.r[4].w[0] + 8944u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDA8C; } }
    c.f[0] = ld32((c.r[4].w[0] + 8948u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BDA90; } }
L_001BDA8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BDA90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BDAB0; } }
    c.f[0] = ld32((c.r[4].w[0] + 8948u));
    st32((c.r[7].w[0]), c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDAD8; } }
L_001BDAB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDAD8; } }
L_001BDABC:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001BDAD4; } }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 8944u), c.f[2]);
    st32((c.r[4].w[0] + 8948u), c.f[0]);
    c.budget -= 3;
L_001BDAD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDAD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDB08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDB98; } }
L_001BDB08:
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.f[13] = fp::sub(c.f[0], c.f[13]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB24u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x001BDB24u) [[unlikely]] return; }
L_001BDB24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 17692u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDB74; } }
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDB98; } }
L_001BDB74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDB98; } }
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.budget -= 1;
L_001BDB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = c.f[1];
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BDDC4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 13132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDC08; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 48ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001BDDC4; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDDC4; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDDC4; } }
L_001BDC08:
    set32(c.r[3], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BDC28; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDDC4; } }
L_001BDC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BDDC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[4] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDC64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_001BDC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[3] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDC90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 4;
L_001BDC90:
    c.f[2] = ld32((c.r[6].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[2]);
    c.f[0] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDCC4; } }
    c.f[0] = fp::add(c.f[2], c.f[12]);
    st8((c.r[6].w[0] + 9288u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 13128u), 0u);
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001BDCC4:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDCE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 4;
L_001BDCE4:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDD04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 4;
L_001BDD04:
    set32(c.r[3], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BDD44; } }
    c.r[2].d[0] = c.r[5].sd[0] < 1400ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDD44; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7696u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDD44; } }
    c.f[0] = ld32((c.r[6].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDD5C; } }
L_001BDD44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 148u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 148u), c.f[1]);
    c.budget -= 6;
L_001BDD5C:
    c.f[1] = ld32((c.r[6].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDD90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_001BDD90:
    c.f[1] = ld32((c.r[6].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDDC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_001BDDC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.f[20] = ld32((c.r[16].w[0] + 148u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE0Cu);  if (depth < kMaxDepth) unit_0088(c, 5u, depth + 1u); else { c.pc = 0x00320070u; return; } if (c.pc != 0x001BDE0Cu) [[unlikely]] return; }
L_001BDE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDE40; } }
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.f[13] = fp::sub(c.f[13], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE34u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001BDE34u) [[unlikely]] return; }
L_001BDE34:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 3;
L_001BDE40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BDE5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001BDF24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDF3C; } }
L_001BDE5C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001BDE70; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDE88; } }
L_001BDE70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE84u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001BDE84u) [[unlikely]] return; }
L_001BDE84:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001BDE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BDF40; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDF3C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDF3C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDF3C; } }
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDED4u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x001BDED4u) [[unlikely]] return; }
L_001BDED4:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDF3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDF10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF10u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x001BDF10u) [[unlikely]] return; }
L_001BDF10:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 10150u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDF40; } }
L_001BDF24:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10150u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDF38; } }
    st32((c.r[16].w[0] + 9948u), c.f[20]);
    st32((c.r[16].w[0] + 148u), c.f[20]);
    c.budget -= 2;
L_001BDF38:
    st16((c.r[16].w[0] + 10150u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001BDF3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BDF40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDF60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[8], 0u + 512u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.f[21]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFACu);  if (depth < kMaxDepth) unit_002F(c, 240u, depth + 1u); else { c.pc = 0x001BF3F8u; return; } if (c.pc != 0x001BDFACu) [[unlikely]] return; }
L_001BDFAC:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[17].w[0] + 13144u), c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    st32((c.r[17].w[0] + 9836u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BE040; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDFF4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFE4u);  if (depth < kMaxDepth) unit_002F(c, 134u, depth + 1u); else { c.pc = 0x001BD530u; return; } if (c.pc != 0x001BDFE4u) [[unlikely]] return; }
L_001BDFE4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BDFF8; } }
L_001BDFF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BDFF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BE040; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE02Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001BE02Cu) [[unlikely]] return; }
L_001BE02C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE038u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001BE038u) [[unlikely]] return; }
L_001BE038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE04C; } }
L_001BE040:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE374; } }
L_001BE04C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE080u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE080u) [[unlikely]] return; }
L_001BE080:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE09Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BE09Cu) [[unlikely]] return; }
L_001BE09C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0C0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE0C0u) [[unlikely]] return; }
L_001BE0C0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BE0E0u) [[unlikely]] return; }
L_001BE0E0:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.f[15] = ld32((c.r[29].w[0] + 16u));
    c.f[16] = ld32((c.r[29].w[0] + 20u));
    c.f[17] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE100u);  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x002E9F78u; return; } if (c.pc != 0x001BE100u) [[unlikely]] return; }
L_001BE100:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[20] = c.f[0] & fp::kAbs;
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[14] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE11Cu);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BE11Cu) [[unlikely]] return; }
L_001BE11C:
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[2], ld32((c.r[17].w[0] + 9840u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE144; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 9844u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE150; } }
L_001BE144:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE150u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C0608u; return; } if (c.pc != 0x001BE150u) [[unlikely]] return; }
L_001BE150:
    c.f[0] = ld32((c.r[17].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE188; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE174u);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C0258u; return; } if (c.pc != 0x001BE174u) [[unlikely]] return; }
L_001BE174:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 9836u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE374; } }
L_001BE188:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1A0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001BE1A0u) [[unlikely]] return; }
L_001BE1A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE1DC; } }
    c.f[20] = c.f[21];
    c.budget -= 1;
L_001BE1DC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8940u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[7] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 17));
    c.f[4] = ld32((c.r[18].w[0] + 208u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[5] = ld32((c.r[18].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[4] = fp::mul(c.f[4], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[6] = ld32((c.r[29].w[0] + 20u));
    c.f[5] = fp::mul(c.f[5], c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[6] = fp::add(c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[6]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE260u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001BE260u) [[unlikely]] return; }
L_001BE260:
    fpu_div(c, 12u, c.f[21], c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE278u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x001BE278u) [[unlikely]] return; }
L_001BE278:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[14] = ld32((c.r[29].w[0] + 48u));
    c.f[15] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE290u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BE290u) [[unlikely]] return; }
L_001BE290:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 12232u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE2BC; } }
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE2CC; } }
L_001BE2BC:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 216u), c.f[1]);
    c.budget -= 4;
L_001BE2CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BE360; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE310; } }
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE310; } }
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE360; } }
L_001BE310:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BE360; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE360; } }
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] - 12228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE360; } }
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.budget -= 1;
L_001BE360:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 10074u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001BE374:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE3A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3E4u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BE3E4u) [[unlikely]] return; }
L_001BE3E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3F4u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001BE3F4u) [[unlikely]] return; }
L_001BE3F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[20] = c.f[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE424u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE424u) [[unlikely]] return; }
L_001BE424:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE460u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE460u) [[unlikely]] return; }
L_001BE460:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = fp::sub(c.f[0], c.f[13]);
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE480u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x001BE480u) [[unlikely]] return; }
L_001BE480:
    c.f[12] = c.f[20];
    c.f[13] = c.f[0];
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE494u);  if (depth < kMaxDepth) unit_006E(c, 186u, depth + 1u); else { c.pc = 0x002BA968u; return; } if (c.pc != 0x001BE494u) [[unlikely]] return; }
L_001BE494:
    c.f[20] = c.f[0] & fp::kAbs;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0]), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4A8u);  if (depth < kMaxDepth) unit_002F(c, 136u, depth + 1u); else { c.pc = 0x001BD580u; return; } if (c.pc != 0x001BE4A8u) [[unlikely]] return; }
L_001BE4A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BE4C4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE504; } }
L_001BE4C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4D0u);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001BE4D0u) [[unlikely]] return; }
L_001BE4D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BE504; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 12240u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE52C; } }
L_001BE504:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE530; } }
L_001BE510:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] - 12236u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE530; } }
L_001BE52C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BE530:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE558:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[19], c.r[2].w[0] - 6080u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[20].w[0] + 4u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 26;
L_001BE5C0:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[30].w[0] + 27456u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[21], c.r[7].w[0] + 1u);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_001BE924; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE924; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE924; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE60Cu);  if (depth < kMaxDepth) unit_0088(c, 17u, depth + 1u); else { c.pc = 0x00320290u; return; } if (c.pc != 0x001BE60Cu) [[unlikely]] return; }
L_001BE60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE624u);  if (depth < kMaxDepth) unit_0034(c, 321u, depth + 1u); else { c.pc = 0x001D3038u; return; } if (c.pc != 0x001BE624u) [[unlikely]] return; }
L_001BE624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE670; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE670; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 168u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE670; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE668u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001BE668u) [[unlikely]] return; }
L_001BE668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001BE67C; } }
L_001BE670:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE680; } }
L_001BE67C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BE680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6ACu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE6ACu) [[unlikely]] return; }
L_001BE6AC:
    c.f[1] = ld32((c.r[19].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 136u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6E8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE6E8u) [[unlikely]] return; }
L_001BE6E8:
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.f[13] = ld32((c.r[19].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE700u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BE700u) [[unlikely]] return; }
L_001BE700:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE718u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BE718u) [[unlikely]] return; }
L_001BE718:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE740; } }
    c.f[0] = ld32((c.r[17].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE780; } }
L_001BE740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE774; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE76Cu);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001BE76Cu) [[unlikely]] return; }
L_001BE76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001BE780; } }
L_001BE774:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE784; } }
L_001BE780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BE784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7A4u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BE7A4u) [[unlikely]] return; }
L_001BE7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE7B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
L_001BE7B8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7DCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE7DCu) [[unlikely]] return; }
L_001BE7DC:
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[19].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BE7F8u) [[unlikely]] return; }
L_001BE7F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE81Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BE81Cu) [[unlikely]] return; }
L_001BE81C:
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[13] = ld32((c.r[19].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[19].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE838u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BE838u) [[unlikely]] return; }
L_001BE838:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 11264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE908; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BE870; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001BE870; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE868u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001BE868u) [[unlikely]] return; }
L_001BE868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
L_001BE870:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10072u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10072u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE908; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BE8C4; } }
    c.f[2] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE8C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE924; } }
L_001BE8C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8E4u);  if (depth < kMaxDepth) unit_0088(c, 305u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x001BE8E4u) [[unlikely]] return; }
L_001BE8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE908; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE900u);  if (depth < kMaxDepth) unit_0089(c, 60u, depth + 1u); else { c.pc = 0x00324DC0u; return; } if (c.pc != 0x001BE900u) [[unlikely]] return; }
L_001BE900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE924; } }
L_001BE908:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_001BE924:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE5C0u | kUnwind; return; } goto L_001BE5C0; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE978:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.f[0] = 0u;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    set32(c.r[7], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[24]);
    st32((c.r[29].w[0] + 216u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9FCu);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BE9FCu) [[unlikely]] return; }
L_001BE9FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[21] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA30u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BEA30u) [[unlikely]] return; }
L_001BEA30:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA6Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BEA6Cu) [[unlikely]] return; }
L_001BEA6C:
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA84u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BEA84u) [[unlikely]] return; }
L_001BEA84:
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[22] = c.f[0] & fp::kAbs;
    c.f[13] = ld32((c.r[18].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAA0u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BEAA0u) [[unlikely]] return; }
L_001BEAA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10072u)));
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BEAC8; } }
    c.f[0] = ld32((c.r[18].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BEAF4; } }
L_001BEAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BEAF4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAF4u);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001BEAF4u) [[unlikely]] return; }
L_001BEAF4:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BEC94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[24] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[23] = c.r[1].w[0];
    set32(c.r[16], c.r[3].w[0] - 6080u);
    set32(c.r[30], 0u + 13248u);
    set32(c.r[19], c.r[22].w[0] + 4u);
    c.budget -= 11;
L_001BEB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[7], c.r[29].w[0] + 20u);
    mmi::madd(c, 0, c.r[20].w[0], c.r[30].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB5Cu);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BEB5Cu) [[unlikely]] return; }
L_001BEB5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB80u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BEB80u) [[unlikely]] return; }
L_001BEB80:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBBCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BEBBCu) [[unlikely]] return; }
L_001BEBBC:
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBD4u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BEBD4u) [[unlikely]] return; }
L_001BEBD4:
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[20] = c.f[0] & fp::kAbs;
    c.f[13] = ld32((c.r[18].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBF0u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001BEBF0u) [[unlikely]] return; }
L_001BEBF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10072u)));
    c.f[1] = c.f[0] & fp::kAbs;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BEC18; } }
    c.f[0] = ld32((c.r[18].w[0] + 10068u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BEC34; } }
L_001BEC18:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BEC34; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC34u);  if (depth < kMaxDepth) unit_001A(c, 150u, depth + 1u); else { c.pc = 0x00169CA0u; return; } if (c.pc != 0x001BEC34u) [[unlikely]] return; }
L_001BEC34:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEC7C; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEC7C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEC7C; } }
    c.f[21] = c.f[0];
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001BEC7C:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEB30u | kUnwind; return; } goto L_001BEB30; } }
L_001BEC94:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[24] = ld32((c.r[29].w[0] + 224u));
    c.f[23] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BECE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[21]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.f[20] = ld32((c.r[16].w[0] + 148u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[21] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[21]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED50u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BED50u) [[unlikely]] return; }
L_001BED50:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED60u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001BED60u) [[unlikely]] return; }
L_001BED60:
    c.f[12] = c.f[20];
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED70u);  if (depth < kMaxDepth) unit_006E(c, 186u, depth + 1u); else { c.pc = 0x002BA968u; return; } if (c.pc != 0x001BED70u) [[unlikely]] return; }
L_001BED70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    c.f[21] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED8Cu);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BED8Cu) [[unlikely]] return; }
L_001BED8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED98u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001BED98u) [[unlikely]] return; }
L_001BED98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BEE98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEE00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEE00; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEE94; } }
L_001BEE00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEE58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEE58; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEE8C; } }
L_001BEE58:
    c.f[1] = c.f[21] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEE98; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 4;
L_001BEE8C:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 2;
L_001BEE94:
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_001BEE98:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEF0C; } }
L_001BEED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEF10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_001BEF0C:
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_001BEF10:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BEF38:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[16].w[0] - 19312u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF98u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BEF98u) [[unlikely]] return; }
L_001BEF98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[2].w[0] - 12224u)));
    set32(c.r[5], c.r[29].w[0] + 20u);
    set32(c.r[3], 0u + 512u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001BEFC4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13161u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13160u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEFCC; } }
L_001BEFC4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13163u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13162u));
    c.budget -= 2;
L_001BEFCC:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF0C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF0C4; } }
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF0C4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF0C4; } }
    c.f[0] = ld32((c.r[17].w[0] + 8944u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF094; } }
    c.f[0] = ld32((c.r[17].w[0] + 8948u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BF098; } }
L_001BF094:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BF098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF0B8; } }
    c.f[0] = ld32((c.r[17].w[0] + 8948u));
    st32((c.r[7].w[0]), c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF0E0; } }
L_001BF0B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF0E0; } }
L_001BF0C4:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001BF0DC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[17].w[0] + 8944u), c.f[2]);
    st32((c.r[17].w[0] + 8948u), c.f[0]);
    c.budget -= 3;
L_001BF0DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BF0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF20C; } }
    set32(c.r[4], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0F8u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BF0F8u) [[unlikely]] return; }
L_001BF0F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[20] = c.r[1].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF114u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001BF114u) [[unlikely]] return; }
L_001BF114:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[21] = c.f[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BF20C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[30], c.r[2].w[0] + 14208u);
    set32(c.r[16], c.r[3].w[0] - 6080u);
    set32(c.r[23], 0u + 13248u);
    set32(c.r[18], c.r[22].w[0] + 4u);
    c.budget -= 6;
L_001BF140:
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF16Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BF16Cu) [[unlikely]] return; }
L_001BF16C:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1A8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001BF1A8u) [[unlikely]] return; }
L_001BF1A8:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[13] = fp::sub(c.f[13], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1C8u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x001BF1C8u) [[unlikely]] return; }
L_001BF1C8:
    c.f[13] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1D8u);  if (depth < kMaxDepth) unit_006E(c, 186u, depth + 1u); else { c.pc = 0x002BA968u; return; } if (c.pc != 0x001BF1D8u) [[unlikely]] return; }
L_001BF1D8:
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF1F4; } }
    c.f[20] = c.f[0];
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001BF1F4:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF140u | kUnwind; return; } goto L_001BF140; } }
L_001BF20C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF3E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF288u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x001BF288u) [[unlikely]] return; }
L_001BF288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 12224u)));
    set32(c.r[4], c.r[29].w[0] + 4u);
    set32(c.r[3], 0u + 512u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001BF2B4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13161u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13160u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF2BC; } }
L_001BF2B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13163u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13162u));
    c.budget -= 2;
L_001BF2BC:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF3B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF3B8; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF3B8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF3B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8944u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF384; } }
    c.f[0] = ld32((c.r[16].w[0] + 8948u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BF388; } }
L_001BF384:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BF388:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF3AC; } }
    c.f[0] = ld32((c.r[16].w[0] + 8948u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0]), c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF3D4; } }
L_001BF3AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF3D4; } }
L_001BF3B8:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001BF3D0; } }
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 8944u), c.f[2]);
    st32((c.r[16].w[0] + 8948u), c.f[0]);
    c.budget -= 3;
L_001BF3D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BF3D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BF3E4; } }
L_001BF3E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BF3E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF3F8:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 288u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 280u), c.f[21]);
    set32(c.r[19], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[8].w[0]);
    set32(c.r[6], 0u + 60u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[21] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF48Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001BF48Cu) [[unlikely]] return; }
L_001BF48C:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 13192u)));
    st32((c.r[3].w[0] - 12224u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFA28; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4B4u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE558u; return; } if (c.pc != 0x001BF4B4u) [[unlikely]] return; }
L_001BF4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF518; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4D8u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BF4D8u) [[unlikely]] return; }
L_001BF4D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4E8u);  if (depth < kMaxDepth) unit_002F(c, 156u, depth + 1u); else { c.pc = 0x001BD988u; return; } if (c.pc != 0x001BF4E8u) [[unlikely]] return; }
L_001BF4E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.f[12] = c.f[0];
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4FCu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001BF4FCu) [[unlikely]] return; }
L_001BF4FC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFA28; } }
L_001BF518:
    set32(c.r[4], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF528u);  if (depth < kMaxDepth) unit_0089(c, 42u, depth + 1u); else { c.pc = 0x00324A28u; return; } if (c.pc != 0x001BF528u) [[unlikely]] return; }
L_001BF528:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[2], 0u + 512u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF550; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13161u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13160u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF558; } }
L_001BF550:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13163u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13162u));
    c.budget -= 2;
L_001BF558:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF650; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF650; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF650; } }
    c.f[0] = ld32((c.r[19].w[0] + 8944u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF620; } }
    c.f[0] = ld32((c.r[19].w[0] + 8948u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BF624; } }
L_001BF620:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BF624:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF644; } }
    c.f[0] = ld32((c.r[19].w[0] + 8948u));
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF670; } }
L_001BF644:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF670; } }
L_001BF650:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF66C; } }
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[19].w[0] + 8944u), c.f[2]);
    st32((c.r[19].w[0] + 8948u), c.f[0]);
    c.budget -= 3;
L_001BF66C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BF670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF798; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF684u);  if (depth < kMaxDepth) unit_002F(c, 138u, depth + 1u); else { c.pc = 0x001BD5D8u; return; } if (c.pc != 0x001BF684u) [[unlikely]] return; }
L_001BF684:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BF798; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6A4u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x001BF6A4u) [[unlikely]] return; }
L_001BF6A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[23], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BF94C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6C0u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BF6C0u) [[unlikely]] return; }
L_001BF6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF78C; } }
    set32(c.r[20], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 13248u);
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + 14208u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF708u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BF708u) [[unlikely]] return; }
L_001BF708:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 72u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF77C; } }
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 13248u);
    set32(c.r[17], c.r[29].w[0] + 8u);
    c.budget -= 3;
L_001BF728:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 76u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF748u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BF748u) [[unlikely]] return; }
L_001BF748:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF764; } }
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001BF764:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF728u | kUnwind; return; } goto L_001BF728; } }
L_001BF77C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF928; } }
L_001BF78C:
    set32(c.r[17], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF94C; } }
L_001BF798:
    set32(c.r[20], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 13248u);
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + 14208u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7D8u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BF7D8u) [[unlikely]] return; }
L_001BF7D8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[23], c.r[29].w[0] + 88u);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF854; } }
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], 0u + 13248u);
    set32(c.r[17], c.r[29].w[0] + 8u);
    c.budget -= 4;
L_001BF800:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 84u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF820u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BF820u) [[unlikely]] return; }
L_001BF820:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF83C; } }
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001BF83C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF800u | kUnwind; return; } goto L_001BF800; } }
L_001BF854:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10072u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF924; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[3].w[0] + 14208u);
    c.r[22].d[0] = c.r[29].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF890u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001BF890u) [[unlikely]] return; }
L_001BF890:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BF908; } }
    set32(c.r[30], 0u + 13248u);
    set32(c.r[18], c.r[29].w[0] + 4u);
    c.budget -= 3;
L_001BF8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[17].w[0], c.r[30].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8D0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001BF8D0u) [[unlikely]] return; }
L_001BF8D0:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF8F0; } }
    c.f[20] = c.f[0];
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001BF8F0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF8B0u | kUnwind; return; } goto L_001BF8B0; } }
L_001BF908:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF91Cu);  if (depth < kMaxDepth) unit_002F(c, 229u, depth + 1u); else { c.pc = 0x001BEF38u; return; } if (c.pc != 0x001BF91Cu) [[unlikely]] return; }
L_001BF91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF948; } }
L_001BF924:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_001BF928:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BF94C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF948u);  if (depth < kMaxDepth) unit_002F(c, 209u, depth + 1u); else { c.pc = 0x001BE978u; return; } if (c.pc != 0x001BF948u) [[unlikely]] return; }
L_001BF948:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001BF94C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF95Cu);  if (depth < kMaxDepth) unit_002F(c, 223u, depth + 1u); else { c.pc = 0x001BECE0u; return; } if (c.pc != 0x001BF95Cu) [[unlikely]] return; }
L_001BF95C:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF970u);  if (depth < kMaxDepth) unit_006E(c, 186u, depth + 1u); else { c.pc = 0x002BA968u; return; } if (c.pc != 0x001BF970u) [[unlikely]] return; }
L_001BF970:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF980u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x001BF980u) [[unlikely]] return; }
L_001BF980:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BFA00; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF998u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x001BF998u) [[unlikely]] return; }
L_001BF998:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BF9C8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9B0u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001BF9B0u) [[unlikely]] return; }
L_001BF9B0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFA00; } }
L_001BF9C8:
    set32(c.r[2], 0u + 4u);
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    st16((c.r[19].w[0] + 10248u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9DCu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001BF9DCu) [[unlikely]] return; }
L_001BF9DC:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 10244u), c.f[0]);
    c.budget -= 9;
L_001BFA00:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.f[12] = c.f[20];
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA14u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001BFA14u) [[unlikely]] return; }
L_001BFA14:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 5;
L_001BFA28:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 280u));
    c.f[20] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFA68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BFC7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BFAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAB8u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001BFAB8u) [[unlikely]] return; }
L_001BFAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BFAFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFACCu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001BFACCu) [[unlikely]] return; }
L_001BFACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BFAFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BFAFC; } }
    set32(c.r[4], c.r[19].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAF4u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BFAF4u) [[unlikely]] return; }
L_001BFAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFB14; } }
L_001BFAFC:
    set32(c.r[4], c.r[19].w[0] - 22480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB0Cu);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x001BFB0Cu) [[unlikely]] return; }
L_001BFB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFC68; } }
L_001BFB14:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFC7C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001BFB50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFB50; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001BFB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFB68; } }
L_001BFB50:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001BFB68; } }
L_001BFB5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFB78; } }
L_001BFB68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB78u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001BFB78u) [[unlikely]] return; }
L_001BFB78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBA0u);  if (depth < kMaxDepth) unit_002F(c, 275u, depth + 1u); else { c.pc = 0x001BFCA0u; return; } if (c.pc != 0x001BFBA0u) [[unlikely]] return; }
L_001BFBA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001BFBCC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001BFBC4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001BFBCC; } }
L_001BFBC4:
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 2;
L_001BFBCC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001BFC38; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001BFC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC08:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001BFC48; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001BFC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC28:
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC38:
    c.r[2].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC48:
    c.r[2].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC58:
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC7C; } }
L_001BFC68:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_001BFC7C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[2] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFDE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13161u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13160u));
    c.f[12] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[12] = fp::sub(c.f[2], c.f[12]);
    c.f[13] = fp::sub(c.f[2], c.f[13]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD04u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x001BFD04u) [[unlikely]] return; }
L_001BFD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 17692u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[13] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[13]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFD54; } }
    c.f[13] = fp::sub(c.f[13], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFD78; } }
L_001BFD54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFD78; } }
    c.f[13] = fp::add(c.f[13], c.f[4]);
    c.budget -= 1;
L_001BFD78:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDA0u);  if (depth < kMaxDepth) unit_006E(c, 186u, depth + 1u); else { c.pc = 0x002BA968u; return; } if (c.pc != 0x001BFDA0u) [[unlikely]] return; }
L_001BFDA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFDEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFDEC; } }
L_001BFDE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFE60; } }
L_001BFDEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFE38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFE38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFE60; } }
L_001BFE38:
    c.f[1] = c.f[2] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 3u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFE60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BFE60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFE78:
    set32(c.r[2], ld32((c.r[4].w[0] + 9840u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 9840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFEB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 9844u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFEB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFEC4; } }
L_001BFEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEC0u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C0608u; return; } if (c.pc != 0x001BFEC0u) [[unlikely]] return; }
L_001BFEC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BFEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFED8:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001BFF10; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFF34; } }
L_001BFF10:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13162u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.budget -= 9;
L_001BFF34:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0030(c, 3u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0030(c, 3u, depth); } }
    c.f[0] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0030(c, 3u, depth); } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0030(c, 3u, depth); } }
    c.f[0] = ld32((c.r[4].w[0] + 8944u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFFE0; } }
    c.f[0] = ld32((c.r[4].w[0] + 8948u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BFFE4; } }
L_001BFFE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BFFE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0030(c, 2u, depth); } }
    st32((c.r[7].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 8948u));
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
