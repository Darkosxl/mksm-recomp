#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0096[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0096(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00358000;
    case 2u: goto L_0035805C;
    case 3u: goto L_00358090;
    case 4u: goto L_003580AC;
    case 5u: goto L_00358134;
    case 6u: goto L_0035816C;
    case 7u: goto L_00358180;
    case 8u: goto L_003581B0;
    case 9u: goto L_003581D0;
    case 10u: goto L_00358244;
    case 11u: goto L_00358274;
    case 12u: goto L_003582EC;
    case 13u: goto L_0035832C;
    case 14u: goto L_00358348;
    case 15u: goto L_00358358;
    case 16u: goto L_00358374;
    case 17u: goto L_003583AC;
    case 18u: goto L_003583C8;
    case 19u: goto L_00358484;
    case 20u: goto L_003584D0;
    case 21u: goto L_003585E0;
    case 22u: goto L_003585F8;
    case 23u: goto L_00358638;
    case 24u: goto L_003586B8;
    case 25u: goto L_00358700;
    case 26u: goto L_00358730;
    case 27u: goto L_00358740;
    case 28u: goto L_003587C0;
    case 29u: goto L_0035884C;
    case 30u: goto L_003588B4;
    case 31u: goto L_003588C8;
    case 32u: goto L_003588E8;
    case 33u: goto L_00358954;
    case 34u: goto L_00358988;
    case 35u: goto L_00358990;
    case 36u: goto L_0035899C;
    case 37u: goto L_003589B8;
    case 38u: goto L_003589D4;
    case 39u: goto L_00358A48;
    case 40u: goto L_00358A68;
    case 41u: goto L_00358A7C;
    case 42u: goto L_00358A98;
    case 43u: goto L_00358AB0;
    case 44u: goto L_00358B30;
    case 45u: goto L_00358B9C;
    case 46u: goto L_00358BB0;
    case 47u: goto L_00358C0C;
    case 48u: goto L_00358C2C;
    case 49u: goto L_00358C34;
    case 50u: goto L_00358C68;
    case 51u: goto L_00358CA0;
    case 52u: goto L_00358CB4;
    case 53u: goto L_00358CC0;
    case 54u: goto L_00358D24;
    case 55u: goto L_00358D34;
    case 56u: goto L_00358D50;
    case 57u: goto L_00358D80;
    case 58u: goto L_00358DD0;
    case 59u: goto L_00358DF4;
    case 60u: goto L_00358E54;
    case 61u: goto L_00358E90;
    case 62u: goto L_00358EB4;
    case 63u: goto L_00358ED8;
    case 64u: goto L_00358F10;
    case 65u: goto L_00358F50;
    case 66u: goto L_00358F68;
    case 67u: goto L_00358F84;
    case 68u: goto L_00358FA0;
    case 69u: goto L_00359008;
    case 70u: goto L_00359048;
    case 71u: goto L_003590C8;
    case 72u: goto L_00359170;
    case 73u: goto L_003591D4;
    case 74u: goto L_00359200;
    case 75u: goto L_00359220;
    case 76u: goto L_00359248;
    case 77u: goto L_00359288;
    case 78u: goto L_00359358;
    case 79u: goto L_0035938C;
    case 80u: goto L_003593A4;
    case 81u: goto L_003593E0;
    case 82u: goto L_00359414;
    case 83u: goto L_00359444;
    case 84u: goto L_003594C0;
    case 85u: goto L_00359548;
    case 86u: goto L_00359570;
    case 87u: goto L_003595A0;
    case 88u: goto L_003595D4;
    case 89u: goto L_003595E8;
    case 90u: goto L_00359610;
    case 91u: goto L_00359670;
    case 92u: goto L_003596A0;
    case 93u: goto L_003596E0;
    case 94u: goto L_00359760;
    case 95u: goto L_00359798;
    case 96u: goto L_003597D0;
    case 97u: goto L_00359878;
    case 98u: goto L_003598A8;
    case 99u: goto L_003598E8;
    case 100u: goto L_003598F8;
    case 101u: goto L_003599E4;
    case 102u: goto L_00359A2C;
    case 103u: goto L_00359A58;
    case 104u: goto L_00359AA8;
    case 105u: goto L_00359AB8;
    case 106u: goto L_00359AE4;
    case 107u: goto L_00359B18;
    case 108u: goto L_00359B40;
    case 109u: goto L_00359B50;
    case 110u: goto L_00359B60;
    case 111u: goto L_00359B78;
    case 112u: goto L_00359BB8;
    case 113u: goto L_00359BFC;
    case 114u: goto L_00359C60;
    case 115u: goto L_00359CE8;
    case 116u: goto L_00359D00;
    case 117u: goto L_00359DA0;
    case 118u: goto L_00359E94;
    case 119u: goto L_00359EF0;
    case 120u: goto L_00359F24;
    case 121u: goto L_00359F4C;
    case 122u: goto L_00359F5C;
    case 123u: goto L_00359FB8;
    case 124u: goto L_00359FD8;
    case 125u: goto L_00359FE4;
    case 126u: goto L_0035A050;
    case 127u: goto L_0035A068;
    case 128u: goto L_0035A088;
    case 129u: goto L_0035A098;
    case 130u: goto L_0035A0A8;
    case 131u: goto L_0035A0B8;
    case 132u: goto L_0035A0C8;
    case 133u: goto L_0035A0D8;
    case 134u: goto L_0035A0E0;
    case 135u: goto L_0035A0F8;
    case 136u: goto L_0035A118;
    case 137u: goto L_0035A138;
    case 138u: goto L_0035A150;
    case 139u: goto L_0035A160;
    case 140u: goto L_0035A178;
    case 141u: goto L_0035A188;
    case 142u: goto L_0035A1B0;
    case 143u: goto L_0035A1D0;
    case 144u: goto L_0035A1F8;
    case 145u: goto L_0035A224;
    case 146u: goto L_0035A250;
    case 147u: goto L_0035A268;
    case 148u: goto L_0035A280;
    case 149u: goto L_0035A298;
    case 150u: goto L_0035A2AC;
    case 151u: goto L_0035A2F0;
    case 152u: goto L_0035A300;
    case 153u: goto L_0035A310;
    case 154u: goto L_0035A328;
    case 155u: goto L_0035A33C;
    case 156u: goto L_0035A350;
    case 157u: goto L_0035A364;
    case 158u: goto L_0035A378;
    case 159u: goto L_0035A390;
    case 160u: goto L_0035A3A0;
    case 161u: goto L_0035A3C0;
    case 162u: goto L_0035A3D4;
    case 163u: goto L_0035A3E8;
    case 164u: goto L_0035A410;
    case 165u: goto L_0035A42C;
    case 166u: goto L_0035A440;
    case 167u: goto L_0035A46C;
    case 168u: goto L_0035A47C;
    case 169u: goto L_0035A498;
    case 170u: goto L_0035A4BC;
    case 171u: goto L_0035A4D4;
    case 172u: goto L_0035A530;
    case 173u: goto L_0035A548;
    case 174u: goto L_0035A574;
    case 175u: goto L_0035A5D0;
    case 176u: goto L_0035A5E4;
    case 177u: goto L_0035A5F8;
    case 178u: goto L_0035A610;
    case 179u: goto L_0035A63C;
    case 180u: goto L_0035A698;
    case 181u: goto L_0035A6B0;
    case 182u: goto L_0035A6DC;
    case 183u: goto L_0035A728;
    case 184u: goto L_0035A740;
    case 185u: goto L_0035A770;
    case 186u: goto L_0035A7B0;
    case 187u: goto L_0035A7C8;
    case 188u: goto L_0035A7E4;
    case 189u: goto L_0035A818;
    case 190u: goto L_0035A868;
    case 191u: goto L_0035A878;
    case 192u: goto L_0035A898;
    case 193u: goto L_0035A8A8;
    case 194u: goto L_0035A8D0;
    case 195u: goto L_0035A8EC;
    case 196u: goto L_0035A920;
    case 197u: goto L_0035A930;
    case 198u: goto L_0035A9A8;
    case 199u: goto L_0035A9DC;
    case 200u: goto L_0035A9E8;
    case 201u: goto L_0035AA1C;
    case 202u: goto L_0035AA28;
    case 203u: goto L_0035AAC0;
    case 204u: goto L_0035AAD0;
    case 205u: goto L_0035AB04;
    case 206u: goto L_0035AB10;
    case 207u: goto L_0035AB44;
    case 208u: goto L_0035AB54;
    case 209u: goto L_0035AB74;
    case 210u: goto L_0035AB94;
    case 211u: goto L_0035ABA8;
    case 212u: goto L_0035ABB8;
    case 213u: goto L_0035ABC8;
    case 214u: goto L_0035ABD8;
    case 215u: goto L_0035AC04;
    case 216u: goto L_0035AC28;
    case 217u: goto L_0035AC50;
    case 218u: goto L_0035AC80;
    case 219u: goto L_0035ACA4;
    case 220u: goto L_0035AD04;
    case 221u: goto L_0035AD40;
    case 222u: goto L_0035AD68;
    case 223u: goto L_0035ADD8;
    case 224u: goto L_0035AE28;
    case 225u: goto L_0035AE54;
    case 226u: goto L_0035AE78;
    case 227u: goto L_0035AEB8;
    case 228u: goto L_0035AEE0;
    case 229u: goto L_0035AF20;
    case 230u: goto L_0035AFA0;
    case 231u: goto L_0035AFC0;
    case 232u: goto L_0035AFF0;
    case 233u: goto L_0035B010;
    case 234u: goto L_0035B03C;
    case 235u: goto L_0035B058;
    case 236u: goto L_0035B098;
    case 237u: goto L_0035B0C0;
    case 238u: goto L_0035B0CC;
    case 239u: goto L_0035B0E0;
    case 240u: goto L_0035B104;
    case 241u: goto L_0035B118;
    case 242u: goto L_0035B130;
    case 243u: goto L_0035B148;
    case 244u: goto L_0035B160;
    case 245u: goto L_0035B1A8;
    case 246u: goto L_0035B1C8;
    case 247u: goto L_0035B1F0;
    case 248u: goto L_0035B1F8;
    case 249u: goto L_0035B210;
    case 250u: goto L_0035B238;
    case 251u: goto L_0035B258;
    case 252u: goto L_0035B284;
    case 253u: goto L_0035B298;
    case 254u: goto L_0035B2A8;
    case 255u: goto L_0035B2B0;
    case 256u: goto L_0035B2C8;
    case 257u: goto L_0035B2E8;
    case 258u: goto L_0035B314;
    case 259u: goto L_0035B328;
    case 260u: goto L_0035B348;
    case 261u: goto L_0035B378;
    case 262u: goto L_0035B3B8;
    case 263u: goto L_0035B3CC;
    case 264u: goto L_0035B404;
    case 265u: goto L_0035B418;
    case 266u: goto L_0035B438;
    case 267u: goto L_0035B468;
    case 268u: goto L_0035B4A8;
    case 269u: goto L_0035B4BC;
    case 270u: goto L_0035B4F4;
    case 271u: goto L_0035B508;
    case 272u: goto L_0035B528;
    case 273u: goto L_0035B548;
    case 274u: goto L_0035B558;
    case 275u: goto L_0035B578;
    case 276u: goto L_0035B5D8;
    case 277u: goto L_0035B640;
    case 278u: goto L_0035B688;
    case 279u: goto L_0035B698;
    case 280u: goto L_0035B6B0;
    case 281u: goto L_0035B6E0;
    case 282u: goto L_0035B710;
    case 283u: goto L_0035B770;
    case 284u: goto L_0035B788;
    case 285u: goto L_0035B7B8;
    case 286u: goto L_0035B814;
    case 287u: goto L_0035B830;
    case 288u: goto L_0035B870;
    case 289u: goto L_0035B884;
    case 290u: goto L_0035B8B8;
    case 291u: goto L_0035B8E0;
    case 292u: goto L_0035B8F0;
    case 293u: goto L_0035B918;
    case 294u: goto L_0035B9A4;
    case 295u: goto L_0035B9DC;
    case 296u: goto L_0035BA68;
    case 297u: goto L_0035BA84;
    case 298u: goto L_0035BAFC;
    case 299u: goto L_0035BB08;
    case 300u: goto L_0035BB2C;
    case 301u: goto L_0035BB58;
    case 302u: goto L_0035BB7C;
    case 303u: goto L_0035BB94;
    case 304u: goto L_0035BBC8;
    case 305u: goto L_0035BBF0;
    case 306u: goto L_0035BC68;
    case 307u: goto L_0035BCA4;
    case 308u: goto L_0035BCC8;
    case 309u: goto L_0035BD78;
    case 310u: goto L_0035BE24;
    case 311u: goto L_0035BE68;
    case 312u: goto L_0035BE9C;
    case 313u: goto L_0035BEB8;
    case 314u: goto L_0035BF08;
    case 315u: goto L_0035BF28;
    case 316u: goto L_0035BF64;
    case 317u: goto L_0035BFC4;
    case 318u: goto L_0035BFCC;
    default: bad_entry(c, 0x00358000u); return;
    }
L_00358000:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28392u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 240u), c.f[22]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035877C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035805Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0035805Cu) [[unlikely]] return; }
L_0035805C:
    set32(c.r[3], c.r[19].w[0] + 44u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003584C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[22] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 7;
L_00358090:
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580ACu);  if (depth < kMaxDepth) unit_0097(c, 73u, depth + 1u); else { c.pc = 0x0035CA08u; return; } if (c.pc != 0x003580ACu) [[unlikely]] return; }
L_003580AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358140; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ~(0ull | c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] >> 31);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003580F8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003580F8; } }
    set32(c.r[2], 0u + 92u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 8u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_003580F8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00358114; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358118; } }
L_00358114:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00358118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 30408u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358134u);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x00358134u) [[unlikely]] return; }
L_00358134:
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
L_00358140:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003581B0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003581B0; } }
    set32(c.r[16], c.r[17].w[0] + 204u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035816Cu);  if (depth < kMaxDepth) unit_0097(c, 77u, depth + 1u); else { c.pc = 0x0035CA90u; return; } if (c.pc != 0x0035816Cu) [[unlikely]] return; }
L_0035816C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358188; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358180u);  if (depth < kMaxDepth) unit_0097(c, 80u, depth + 1u); else { c.pc = 0x0035CAD0u; return; } if (c.pc != 0x00358180u) [[unlikely]] return; }
L_00358180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003581B0; } }
L_00358188:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003581B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 17496u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581B0u);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0035C958u; return; } if (c.pc != 0x003581B0u) [[unlikely]] return; }
L_003581B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00358244; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581D0u);  if (depth < kMaxDepth) unit_0096(c, 126u, depth + 1u); else { c.pc = 0x0035A050u; return; } if (c.pc != 0x003581D0u) [[unlikely]] return; }
L_003581D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003581F4; } }
    c.f[0] = ld32((c.r[17].w[0] + 180u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.f[1] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003581FC; } }
L_003581F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 2;
L_003581FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - 23664u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    if (c.r[6].d[0] == 0) c.r[6].d[0] = c.r[8].d[0];
    c.r[2].d[0] = c.r[6].d[0] ^ 128ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358244u);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x00358244u) [[unlikely]] return; }
L_00358244:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035828C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0035828C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358274u);  if (depth < kMaxDepth) unit_0095(c, 460u, depth + 1u); else { c.pc = 0x00357C30u; return; } if (c.pc != 0x00358274u) [[unlikely]] return; }
L_00358274:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035828C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_0035828C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003582C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003582C8; } }
L_003582C4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003582C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003582F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003582ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003582ECu) [[unlikely]] return; }
L_003582EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003582F8; } }
L_003582F4:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003582F8:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[18].w[0]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[6].w[0] + 100u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035838C; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[6].w[0] + 108u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035832Cu);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0035832Cu) [[unlikely]] return; }
L_0035832C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035838C; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[22], 0u - 1u);
    c.budget -= 3;
L_00358348:
    set32(c.r[4], ld32((c.r[23].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358358u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x00358358u) [[unlikely]] return; }
L_00358358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_00358374; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358374u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x00358374u) [[unlikely]] return; }
L_00358374:
    set32(c.r[2], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358348u | kUnwind; return; } goto L_00358348; } }
L_0035838C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00358458; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583ACu);  if (depth < kMaxDepth) unit_008C(c, 21u, depth + 1u); else { c.pc = 0x00330890u; return; } if (c.pc != 0x003583ACu) [[unlikely]] return; }
L_003583AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003584B0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583C8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x003583C8u) [[unlikely]] return; }
L_003583C8:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358424; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003584AC; } }
L_00358424:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035844C; } }
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003584B0; } }
L_0035844C:
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003584AC; } }
L_00358458:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358484u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00358484u) [[unlikely]] return; }
L_00358484:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.f[0] = ld32((c.r[5].w[0] + 128u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 136u));
    st32((c.r[17].w[0] + 12u), c.f[21]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 132u));
    c.budget -= 10;
L_003584AC:
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 1;
L_003584B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358090u | kUnwind; return; } goto L_00358090; } }
L_003584C4:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[19].w[0] + 16u);
    c.budget -= 3;
L_003584D0:
    set32(c.r[2], 0u + 36u);
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358688; } }
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035853C; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], c.r[30].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[19].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00358688; } }
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358688; } }
L_0035853C:
    set32(c.r[5], c.r[30].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00358570; } }
    set32(c.r[3], c.r[19].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00358570; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00358570:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[23], 0u - 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.lo.d[0] = c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], 0u + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[20] = c.r[1].w[0];
    mmi::madd(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[22], c.r[19].w[0] + 24u);
    set32(c.r[21], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 26;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00358678; } }
    c.r[20].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003585E0:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003585F8u);  if (depth < kMaxDepth) unit_0095(c, 449u, depth + 1u); else { c.pc = 0x00357960u; return; } if (c.pc != 0x003585F8u) [[unlikely]] return; }
L_003585F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358660; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358660; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00358638u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00358638u) [[unlikely]] return; }
L_00358638:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358660; } }
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00358660; } }
    c.f[20] = c.f[0];
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00358660:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 592u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003585E0u | kUnwind; return; } goto L_003585E0; } }
L_00358678:
    set32(c.r[3], 0u + 36u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[22].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 4;
L_00358688:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003584D0u | kUnwind; return; } goto L_003584D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035877C; } }
    set32(c.r[30], 0u + 592u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[22], 0u + 6u);
    c.budget -= 4;
L_003586B8:
    mmi::mult(c, 0, c.r[5].w[0], c.r[30].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[21].w[0] - 21468u)));
    set32(c.r[20], c.r[5].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00358768; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[23].w[0] - 23688u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358700u);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x00358700u) [[unlikely]] return; }
L_00358700:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00358768; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00358768; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 4;
L_00358730:
    set32(c.r[4], ld32((c.r[18].w[0] + 9488u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358740u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x00358740u) [[unlikely]] return; }
L_00358740:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00358758; } }
    set32(c.r[2], ld32((c.r[21].w[0] - 21468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00358758:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358730u | kUnwind; return; } goto L_00358730; } }
L_00358768:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003586B8u | kUnwind; return; } goto L_003586B8; } }
L_0035877C:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 240u));
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003587C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23216u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358824; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358828; } }
L_00358824:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00358828:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00358854; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035884Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035884Cu) [[unlikely]] return; }
L_0035884C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358858; } }
L_00358854:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00358858:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00358D50; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], 0u - 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00358894; } }
    set32(c.r[3], 0u + 36u);
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358D50; } }
L_00358894:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003588F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588B4u);  if (depth < kMaxDepth) unit_009C(c, 203u, depth + 1u); else { c.pc = 0x00372700u; return; } if (c.pc != 0x003588B4u) [[unlikely]] return; }
L_003588B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003588F4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588C8u);  if (depth < kMaxDepth) unit_009C(c, 204u, depth + 1u); else { c.pc = 0x00372728u; return; } if (c.pc != 0x003588C8u) [[unlikely]] return; }
L_003588C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003588DC; } }
    set32(c.r[20], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003588F4; } }
L_003588DC:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588E8u);  if (depth < kMaxDepth) unit_009C(c, 204u, depth + 1u); else { c.pc = 0x00372728u; return; } if (c.pc != 0x003588E8u) [[unlikely]] return; }
L_003588E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], 0u + 5u);
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003588F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], 0u + 36u);
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358928; } }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[20].d[0] ^ 6ull;
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_00358928:
    set32(c.r[3], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358C34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358954:
    set32(c.r[2], ld32((c.r[19].w[0] + 584u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], ld32((c.r[5].w[0] + 108u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[19].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[22].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358988u);  if (depth < kMaxDepth) unit_0095(c, 474u, depth + 1u); else { c.pc = 0x00357E78u; return; } if (c.pc != 0x00358988u) [[unlikely]] return; }
L_00358988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358C38; } }
L_00358990:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358B0C; } }
L_0035899C:
    set32(c.r[17], ld32((c.r[21].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00358A7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358A34; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003589B8:
    set32(c.r[16], ld32((c.r[17].w[0] + 428u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003589EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003589D4u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x003589D4u) [[unlikely]] return; }
L_003589D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003589EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003589F0; } }
L_003589EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_003589F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358A1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358A1C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = 0ull;
    c.budget -= 4;
L_00358A1C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00358A34; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 428u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003589B8u | kUnwind; return; } goto L_003589B8; } }
L_00358A34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00358A7C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A48u);  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x00358A48u) [[unlikely]] return; }
L_00358A48:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00358A7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A68u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x00358A68u) [[unlikely]] return; }
L_00358A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A7Cu);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x00358A7Cu) [[unlikely]] return; }
L_00358A7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358B0C; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], 0u + 1u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
L_00358A98:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00358AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358AB0u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x00358AB0u) [[unlikely]] return; }
L_00358AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358AC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358ACC; } }
L_00358AC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_00358ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358AF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358AF8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 4;
L_00358AF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358990u | kUnwind; return; } goto L_00358990; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358A98u | kUnwind; return; } goto L_00358A98; } }
L_00358B0C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00358C40; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358C38; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358C38; } }
L_00358B30:
    set32(c.r[3], 0u + 36u);
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358B5C; } }
    st32((c.r[19].w[0] + 200u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358B70; } }
L_00358B5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358B7C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 2;
L_00358B70:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358C38; } }
L_00358B7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23024u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B9Cu);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00358B9Cu) [[unlikely]] return; }
L_00358B9C:
    set32(c.r[22], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BB0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00358BB0u) [[unlikely]] return; }
L_00358BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u + 3u);
    c.f[2] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[21].w[0] + 128u);
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[29].w[0]), c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[4]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C0Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00358C0Cu) [[unlikely]] return; }
L_00358C0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30832u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C2Cu);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00358C2Cu) [[unlikely]] return; }
L_00358C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358C38; } }
L_00358C34:
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_00358C38:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00358D50; } }
L_00358C40:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358C5C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358D50; } }
L_00358C5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C68u);  if (depth < kMaxDepth) unit_0096(c, 249u, depth + 1u); else { c.pc = 0x0035B210u; return; } if (c.pc != 0x00358C68u) [[unlikely]] return; }
L_00358C68:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358C88; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_00358C88:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00358D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CA0u);  if (depth < kMaxDepth) unit_009C(c, 203u, depth + 1u); else { c.pc = 0x00372700u; return; } if (c.pc != 0x00358CA0u) [[unlikely]] return; }
L_00358CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358D50; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CB4u);  if (depth < kMaxDepth) unit_009C(c, 205u, depth + 1u); else { c.pc = 0x00372748u; return; } if (c.pc != 0x00358CB4u) [[unlikely]] return; }
L_00358CB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CC0u);  if (depth < kMaxDepth) unit_009C(c, 206u, depth + 1u); else { c.pc = 0x00372768u; return; } if (c.pc != 0x00358CC0u) [[unlikely]] return; }
L_00358CC0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00358D50; } }
    c.f[0] = ld32((c.r[21].w[0] + 80u));
    c.f[1] = ld32((c.r[21].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.f[0] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 88u));
    c.f[1] = ld32((c.r[21].w[0] + 72u));
    st32((c.r[29].w[0] + 12u), c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D24u);  if (depth < kMaxDepth) unit_009C(c, 206u, depth + 1u); else { c.pc = 0x00372768u; return; } if (c.pc != 0x00358D24u) [[unlikely]] return; }
L_00358D24:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D34u);  if (depth < kMaxDepth) unit_009C(c, 210u, depth + 1u); else { c.pc = 0x003727E8u; return; } if (c.pc != 0x00358D34u) [[unlikely]] return; }
L_00358D34:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D50u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x00358D50u) [[unlikely]] return; }
L_00358D50:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00358D80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00360000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 28912u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00358DF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00358DD0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_00358E34; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358DD0u | kUnwind; return; } goto L_00358DD0; } }
L_00358DF0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00358DF4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00358E74; } }
    set32(c.r[16], c.r[17].w[0] + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00358E54; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00358E40; } }
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358E44; } }
L_00358E34:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358DF4u | kUnwind; return; } goto L_00358DF4; } }
L_00358E40:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00358E44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E54u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x00358E54u) [[unlikely]] return; }
L_00358E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_00358E74:
    set32(c.r[3], c.r[19].w[0] - 11856u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4272u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00358EEC; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00358E90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[20].d[0];  if (t) { goto L_00358EBC; } }
    set32(c.r[4], c.r[19].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EB4u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x00358EB4u) [[unlikely]] return; }
L_00358EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358ED8; } }
L_00358EBC:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358ED8u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x00358ED8u) [[unlikely]] return; }
L_00358ED8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4272u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358E90u | kUnwind; return; } goto L_00358E90; } }
L_00358EEC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00358F10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F50u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x00358F50u) [[unlikely]] return; }
L_00358F50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00358F6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F68u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x00358F68u) [[unlikely]] return; }
L_00358F68:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00358F6C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035909C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F84u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x00358F84u) [[unlikely]] return; }
L_00358F84:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358FA0u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x00359878u; return; } if (c.pc != 0x00358FA0u) [[unlikely]] return; }
L_00358FA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035909C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00358FCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_00358FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359008; } }
L_00358FCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00359008; } }
L_00358FD8:
    set32(c.r[10], ld32((c.r[16].w[0] + 14192u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[10].w[0] + 520u)));
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359008u) [[unlikely]] return; }
L_00359008:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035909C; } }
    set32(c.r[3], c.r[20].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[2], c.r[2].w[0] - 28912u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00359068; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00359048:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0035906C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359048u | kUnwind; return; } goto L_00359048; } }
L_00359068:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0035906C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0035909C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_0035909C:
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
L_003590C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 36u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[6].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_00359260; } }
    set32(c.r[2], 0u + 592u);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00359260; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    st32((c.r[17].w[0] + 28u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 184u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359170u);  if (depth < kMaxDepth) unit_0083(c, 141u, depth + 1u); else { c.pc = 0x0030DCE0u; return; } if (c.pc != 0x00359170u) [[unlikely]] return; }
L_00359170:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23216u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003591AC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003591B0; } }
L_003591AC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003591B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003591DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003591D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003591D4u) [[unlikely]] return; }
L_003591D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003591E0; } }
L_003591DC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003591E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00359260; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359200u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00359200u) [[unlikely]] return; }
L_00359200:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 29312u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359220u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00359220u) [[unlikely]] return; }
L_00359220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 14192u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 520u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359248u) [[unlikely]] return; }
L_00359248:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359264; } }
L_00359260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359264:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359288:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 36u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003592D0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003592E0; } }
L_003592D0:
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003592E0:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[20], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003593B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359334; } }
L_00359330:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359334:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00359360; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359358u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359358u) [[unlikely]] return; }
L_00359358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359364; } }
L_00359360:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003593B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20768u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035938Cu);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035938Cu) [[unlikely]] return; }
L_0035938C:
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593A4u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x003593A4u) [[unlikely]] return; }
L_003593A4:
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_003593B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003593E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359414u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00359414u) [[unlikely]] return; }
L_00359414:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359444u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00359444u) [[unlikely]] return; }
L_00359444:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 580u), 0u);
    st32((c.r[17].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[4], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 196u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003594C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003594C0u);  if (depth < kMaxDepth) unit_0095(c, 474u, depth + 1u); else { c.pc = 0x00357E78u; return; } if (c.pc != 0x003594C0u) [[unlikely]] return; }
L_003594C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    st32((c.r[17].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003594E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_003594E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359524; } }
L_00359520:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359524:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00359550; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359548u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359548u) [[unlikely]] return; }
L_00359548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359554; } }
L_00359550:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359554:
    set32(c.r[3], ld32((c.r[19].w[0] + 520u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359570u) [[unlikely]] return; }
L_00359570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003595A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003595A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23728u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595A0u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x003595A0u) [[unlikely]] return; }
L_003595A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x48CE0000u);
    c.r[1].d[0] = c.r[1].d[0] | 19584ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003595EC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003595EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595D4u);  if (depth < kMaxDepth) unit_009C(c, 203u, depth + 1u); else { c.pc = 0x00372700u; return; } if (c.pc != 0x003595D4u) [[unlikely]] return; }
L_003595D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003595EC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595E8u);  if (depth < kMaxDepth) unit_009C(c, 207u, depth + 1u); else { c.pc = 0x00372788u; return; } if (c.pc != 0x003595E8u) [[unlikely]] return; }
L_003595E8:
    st32((c.r[17].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 1;
L_003595EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359610:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00359844; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00359778; } }
    set32(c.r[21], 0u + 152u);
    set32(c.r[22], 0u - 1u);
    set32(c.r[30], 0u + 592u);
    set32(c.r[23], 0u + 152u);
    c.budget -= 4;
L_00359670:
    mmi::mult(c, 0, c.r[18].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u - 2u);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003596AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    set32(c.r[20], c.r[18].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003596A0u);  if (depth < kMaxDepth) unit_0094(c, 140u, depth + 1u); else { c.pc = 0x00351AA0u; return; } if (c.pc != 0x003596A0u) [[unlikely]] return; }
L_003596A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_00359760; } }
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003596AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359728; } }
    mmi::mult(c, 0, c.r[18].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0])));
    c.budget -= 6;
L_003596E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_00359714; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 124u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00359714; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359728; } }
L_00359714:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003596E0u | kUnwind; return; } goto L_003596E0; } }
L_00359728:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_00359744; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[30].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_00359744:
    mmi::mult(c, 0, c.r[18].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359760u);  if (depth < kMaxDepth) unit_0096(c, 81u, depth + 1u); else { c.pc = 0x003593E0u; return; } if (c.pc != 0x00359760u) [[unlikely]] return; }
L_00359760:
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359670u | kUnwind; return; } goto L_00359670; } }
L_00359778:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_00359844; } }
    set32(c.r[10], 0u + 592u);
    set32(c.r[9], 0u + 592u);
    c.budget -= 3;
L_00359798:
    mmi::mult(c, 0, c.r[18].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359830; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_00359830; } }
    mmi::mult(c, 0, c.r[18].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003597D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[6].d[0];  if (t) { goto L_00359814; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00359814; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359814; } }
    c.r[2].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[5].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 2;
L_00359814:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 592u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003597D0u | kUnwind; return; } goto L_003597D0; } }
L_00359830:
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359798u | kUnwind; return; } goto L_00359798; } }
L_00359844:
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
L_00359878:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003598A8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003598A8u) [[unlikely]] return; }
L_003598A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00359940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_003598F8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003598E8; } }
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359940; } }
L_003598E8:
    set32(c.r[2], 0u + 592u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003598F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359940; } }
    set32(c.r[3], 0u + 592u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003598F8u | kUnwind; return; } goto L_003598F8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003598E8u | kUnwind; return; } goto L_003598E8; } }
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 1;
L_00359940:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00359958; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359A3C; } }
L_00359958:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359980; } }
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359988; } }
L_00359980:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00359988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003599C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003599C4; } }
L_003599C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003599C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003599F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003599E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003599E4u) [[unlikely]] return; }
L_003599E4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003599F4; } }
L_003599F0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003599F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00359A08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359A3C; } }
L_00359A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A2Cu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x00359A2Cu) [[unlikely]] return; }
L_00359A2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.budget -= 4;
L_00359A3C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359A58:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359AA8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00359AA8u) [[unlikely]] return; }
L_00359AA8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_00359C2C; } }
L_00359AB8:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 8u));
    set32(c.r[21], c.r[3].w[0] + 1u);
    set32(c.r[22], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] & 12ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359C18; } }
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359AE4u);  if (depth < kMaxDepth) unit_0090(c, 176u, depth + 1u); else { c.pc = 0x00341988u; return; } if (c.pc != 0x00359AE4u) [[unlikely]] return; }
L_00359AE4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00359C18; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00359C18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359C18; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359B18:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00359C04; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B40u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00359B40u) [[unlikely]] return; }
L_00359B40:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B50u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x00359B50u) [[unlikely]] return; }
L_00359B50:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B60u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00359B60u) [[unlikely]] return; }
L_00359B60:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B78u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00359B78u) [[unlikely]] return; }
L_00359B78:
    c.r[5].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359BC0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359BB8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00359BB8u) [[unlikely]] return; }
L_00359BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359C18; } }
L_00359BC0:
    c.r[2].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359C18; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 112u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359BFCu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00359BFCu) [[unlikely]] return; }
L_00359BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359C18; } }
L_00359C04:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 592u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359B18u | kUnwind; return; } goto L_00359B18; } }
L_00359C18:
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359AB8u | kUnwind; return; } goto L_00359AB8; } }
L_00359C2C:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359C60:
    set32(c.r[3], 0u + 36u);
    set32(c.r[29], c.r[29].w[0] - 144u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[20] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 32;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00359D74; } }
    c.r[19].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00359CE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D00u);  if (depth < kMaxDepth) unit_0095(c, 449u, depth + 1u); else { c.pc = 0x00357960u; return; } if (c.pc != 0x00359D00u) [[unlikely]] return; }
L_00359D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359D5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359D5C; } }
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00359D5C; } }
    c.f[20] = c.f[1];
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00359D5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 592u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359CE8u | kUnwind; return; } goto L_00359CE8; } }
L_00359D74:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359DA0:
    set32(c.r[2], 0u + 36u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00359DE0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359DF0; } }
L_00359DE0:
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00359DF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035A034; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0035A00C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359E20; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00359E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A034; } }
L_00359E20:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0035A024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A034; } }
L_00359E34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359E70; } }
L_00359E6C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359E70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00359E9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00359E94u) [[unlikely]] return; }
L_00359E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359EA0; } }
L_00359E9C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359EA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035A034; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00359EF8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 584u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00359FD8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359EF0u);  if (depth < kMaxDepth) unit_0095(c, 474u, depth + 1u); else { c.pc = 0x00357E78u; return; } if (c.pc != 0x00359EF0u) [[unlikely]] return; }
L_00359EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359FD8; } }
L_00359EF8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00359F2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23224u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F24u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00359F24u) [[unlikely]] return; }
L_00359F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359FD8; } }
L_00359F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23024u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F4Cu);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00359F4Cu) [[unlikely]] return; }
L_00359F4C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00359F5Cu) [[unlikely]] return; }
L_00359F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[5], 0u + 3u);
    c.f[3] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[4]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FB8u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00359FB8u) [[unlikely]] return; }
L_00359FB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30832u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FD8u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x00359FD8u) [[unlikely]] return; }
L_00359FD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FE4u);  if (depth < kMaxDepth) unit_0096(c, 249u, depth + 1u); else { c.pc = 0x0035B210u; return; } if (c.pc != 0x00359FE4u) [[unlikely]] return; }
L_00359FE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A034; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A034; } }
L_0035A00C:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A034; } }
L_0035A024:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 4;
L_0035A034:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A050:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    set32(c.r[2], c.r[2].w[0] >> 31);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A088u);  if (depth < kMaxDepth) unit_0095(c, 449u, depth + 1u); else { c.pc = 0x00357960u; return; } if (c.pc != 0x0035A088u) [[unlikely]] return; }
L_0035A088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A098:
    st32((c.r[4].w[0] + 516u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14192u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0E0:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A0F8:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A118:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A138:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A150:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A160:
    set32(c.r[3], 0u + 592u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A178:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A188:
    set32(c.r[2], 0u + 36u);
    set32(c.r[3], 0u + 120u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A1B0:
    set32(c.r[2], 0u + 36u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1D0u);  if (depth < kMaxDepth) unit_0096(c, 204u, depth + 1u); else { c.pc = 0x0035AAD0u; return; } if (c.pc != 0x0035A1D0u) [[unlikely]] return; }
L_0035A1D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A1E4; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A1F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 36u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A224u);  if (depth < kMaxDepth) unit_0096(c, 204u, depth + 1u); else { c.pc = 0x0035AAD0u; return; } if (c.pc != 0x0035A224u) [[unlikely]] return; }
L_0035A224:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A238; } }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A238:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A250:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A268:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A280:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2ACu);  if (depth < kMaxDepth) unit_0096(c, 204u, depth + 1u); else { c.pc = 0x0035AAD0u; return; } if (c.pc != 0x0035A2ACu) [[unlikely]] return; }
L_0035A2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A2D8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A2CC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A2DC; } }
L_0035A2CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A2DC; } }
L_0035A2D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0035A2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A2F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A300:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A310:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A33Cu);  if (depth < kMaxDepth) unit_008D(c, 300u, depth + 1u); else { c.pc = 0x003377E0u; return; } if (c.pc != 0x0035A33Cu) [[unlikely]] return; }
L_0035A33C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A364u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x0035A364u) [[unlikely]] return; }
L_0035A364:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A390:
    st32((c.r[4].w[0] + 192u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0035A3C8; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3C0u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x0035A3C0u) [[unlikely]] return; }
L_0035A3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A3D4; } }
L_0035A3C8:
    set32(c.r[5], 0u - 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3D4u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x0035A3D4u) [[unlikely]] return; }
L_0035A3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0035A418; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A410u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x0035A410u) [[unlikely]] return; }
L_0035A410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A42C; } }
L_0035A418:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A42Cu);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x0035A42Cu) [[unlikely]] return; }
L_0035A42C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11856u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A46Cu);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x0035A46Cu) [[unlikely]] return; }
L_0035A46C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A47Cu);  if (depth < kMaxDepth) unit_008E(c, 348u, depth + 1u); else { c.pc = 0x0033BCF8u; return; } if (c.pc != 0x0035A47Cu) [[unlikely]] return; }
L_0035A47C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A498:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A4BCu);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C380u; return; } if (c.pc != 0x0035A4BCu) [[unlikely]] return; }
L_0035A4BC:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A4D4u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0035A4D4u) [[unlikely]] return; }
L_0035A4D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 120u));
    st32((c.r[29].w[0] + 28u), c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A530u);  if (depth < kMaxDepth) unit_008E(c, 104u, depth + 1u); else { c.pc = 0x00339628u; return; } if (c.pc != 0x0035A530u) [[unlikely]] return; }
L_0035A530:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A548:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A574u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0035A574u) [[unlikely]] return; }
L_0035A574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A58C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A590; } }
L_0035A58C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0035A590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A5B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A5B8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0035A5B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0035A5D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5D0u);  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x0035A5D0u) [[unlikely]] return; }
L_0035A5D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5E4u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x0035A5E4u) [[unlikely]] return; }
L_0035A5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5F8u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x0035A5F8u) [[unlikely]] return; }
L_0035A5F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A63Cu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0035A63Cu) [[unlikely]] return; }
L_0035A63C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A654; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A658; } }
L_0035A654:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0035A658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A680; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A680; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0035A680:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0035A698; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A698u);  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x0035A698u) [[unlikely]] return; }
L_0035A698:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A6F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6DCu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0035A6DCu) [[unlikely]] return; }
L_0035A6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A6F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A6F8; } }
L_0035A6F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0035A6F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A710; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0035A710:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0035A728; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A728u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00339400u; return; } if (c.pc != 0x0035A728u) [[unlikely]] return; }
L_0035A728:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A770u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x0035A770u) [[unlikely]] return; }
L_0035A770:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A7F4; } }
    set32(c.r[5], 0u + 592u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 4768u);
    set32(c.r[8], c.r[8].w[0] + 4816u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 281u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A7B0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0035A7B0u) [[unlikely]] return; }
L_0035A7B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0035A7F4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035A7C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 204u);
    set32(c.r[18], c.r[18].w[0] + 592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A7E4u);  if (depth < kMaxDepth) unit_0097(c, 67u, depth + 1u); else { c.pc = 0x0035C8E0u; return; } if (c.pc != 0x0035A7E4u) [[unlikely]] return; }
L_0035A7E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A7C8u | kUnwind; return; } goto L_0035A7C8; } }
L_0035A7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[9], c.r[16].w[0] + 548u);
    set32(c.r[8], c.r[2].w[0] + 27456u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[16].w[0] + 44u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 9;
L_0035A818:
    st32((c.r[3].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 36u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 36u);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 36u);
    set32(c.r[8], c.r[8].w[0] + 13248u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A818u | kUnwind; return; } goto L_0035A818; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A868:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A878:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
L_0035A898:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A8A8u);  if (depth < kMaxDepth) unit_0096(c, 197u, depth + 1u); else { c.pc = 0x0035A930u; return; } if (c.pc != 0x0035A8A8u) [[unlikely]] return; }
L_0035A8A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A898u | kUnwind; return; } goto L_0035A898; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035A900; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035A8D0:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A8ECu);  if (depth < kMaxDepth) unit_0095(c, 460u, depth + 1u); else { c.pc = 0x00357C30u; return; } if (c.pc != 0x0035A8ECu) [[unlikely]] return; }
L_0035A8EC:
    set32(c.r[18], c.r[18].w[0] + 592u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A8D0u | kUnwind; return; } goto L_0035A8D0; } }
L_0035A900:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A920:
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A930:
    set32(c.r[2], 0u + 36u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[8], 0u - 1u);
    set32(c.r[5], c.r[6].w[0] + 12u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[8].d[0];  if (t) { goto L_0035A984; } }
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 6;
L_0035A984:
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 40u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A9A8:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A9DC; } }
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A9DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A9E8:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035AA1C; } }
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AA1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AA28:
    set32(c.r[3], 0u + 36u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035AAC0; } }
    set32(c.r[3], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 120u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 592u);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 184u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0035AAC0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    st32((c.r[6].w[0] + 184u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 30408u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AAC0u);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x0035AAC0u) [[unlikely]] return; }
L_0035AAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AAD0:
    set32(c.r[2], 0u + 36u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035AB04; } }
    set32(c.r[2], 0u + 592u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AB04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB44u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0035AB44u) [[unlikely]] return; }
L_0035AB44:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB54u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x0035AB54u) [[unlikely]] return; }
L_0035AB54:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0035AC28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB74u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x00359878u; return; } if (c.pc != 0x0035AB74u) [[unlikely]] return; }
L_0035AB74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035AC28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035AC0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB94u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0035AB94u) [[unlikely]] return; }
L_0035AB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035ABE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABA8u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0035ABA8u) [[unlikely]] return; }
L_0035ABA8:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABB8u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x0035ABB8u) [[unlikely]] return; }
L_0035ABB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABC8u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0035ABC8u) [[unlikely]] return; }
L_0035ABC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABD8u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x0035ABD8u) [[unlikely]] return; }
L_0035ABD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0035AC28; } }
L_0035ABE0:
    set32(c.r[4], c.r[17].w[0] + 204u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035AC28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC04u);  if (depth < kMaxDepth) unit_0097(c, 86u, depth + 1u); else { c.pc = 0x0035CBD8u; return; } if (c.pc != 0x0035AC04u) [[unlikely]] return; }
L_0035AC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AC28; } }
L_0035AC0C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0035AC28; } }
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC28u);  if (depth < kMaxDepth) unit_0097(c, 53u, depth + 1u); else { c.pc = 0x0035C600u; return; } if (c.pc != 0x0035AC28u) [[unlikely]] return; }
L_0035AC28:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035ACA0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0035AC80:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0035ACE4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AC80u | kUnwind; return; } goto L_0035AC80; } }
L_0035ACA0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0035ACA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0035AD24; } }
    set32(c.r[16], c.r[4].w[0] + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0035AD04; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035ACF0; } }
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035ACF4; } }
L_0035ACE4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACA4u | kUnwind; return; } goto L_0035ACA4; } }
L_0035ACF0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0035ACF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AD04u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0035AD04u) [[unlikely]] return; }
L_0035AD04:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0035AD24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AD40:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_0035AD94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0035AD68:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_0035AD80; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AD98; } }
L_0035AD80:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AD68u | kUnwind; return; } goto L_0035AD68; } }
L_0035AD94:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0035AD98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035ADCC; } }
    set32(c.r[3], c.r[4].w[0] + 40u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_0035ADCC:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035ADD8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4272u)));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0035AE8C; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
L_0035AE28:
    set32(c.r[2], c.r[20].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035AE5C; } }
    set32(c.r[4], c.r[18].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE54u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x0035AE54u) [[unlikely]] return; }
L_0035AE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AE78; } }
L_0035AE5C:
    set32(c.r[4], c.r[18].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE78u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x0035AE78u) [[unlikely]] return; }
L_0035AE78:
    set32(c.r[2], ld32((c.r[21].w[0] + 4272u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AE28u | kUnwind; return; } goto L_0035AE28; } }
L_0035AE8C:
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
L_0035AEB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + 40u);
    st32((c.r[16].w[0] + 4u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00360000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 28912u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0035AF4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0035AF20:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0035AF38; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AF50; } }
L_0035AF38:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AF20u | kUnwind; return; } goto L_0035AF20; } }
L_0035AF4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0035AF50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035AF84; } }
    set32(c.r[3], c.r[18].w[0] + 40u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_0035AF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4272u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035AFD0; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0035AFA0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AFC0u);  if (depth < kMaxDepth) unit_008E(c, 325u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x0035AFC0u) [[unlikely]] return; }
L_0035AFC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4272u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AFA0u | kUnwind; return; } goto L_0035AFA0; } }
L_0035AFD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035AFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B010u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x00359878u; return; } if (c.pc != 0x0035B010u) [[unlikely]] return; }
L_0035B010:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035B03C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035B03C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B03Cu);  if (depth < kMaxDepth) unit_0096(c, 235u, depth + 1u); else { c.pc = 0x0035B058u; return; } if (c.pc != 0x0035B03Cu) [[unlikely]] return; }
L_0035B03C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035B0CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 23576u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B098u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035B098u) [[unlikely]] return; }
L_0035B098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 14192u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 520u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B0C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035B0C0u) [[unlikely]] return; }
L_0035B0C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B0CCu);  if (depth < kMaxDepth) unit_0096(c, 253u, depth + 1u); else { c.pc = 0x0035B298u; return; } if (c.pc != 0x0035B0CCu) [[unlikely]] return; }
L_0035B0CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B0E0:
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0035B104; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0035B118; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B104:
    set32(c.r[2], 0u + 36u);
    mmi::madd(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B118:
    set32(c.r[2], 0u + 36u);
    mmi::madd(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B130:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 4856u);
    set32(c.r[5], 0u + 13u);
    st32((c.r[4].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
L_0035B160:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B160u | kUnwind; return; } goto L_0035B160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 14192u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 516u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B1A8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035B1E0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035B1E0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0035B1C8:
    set32(c.r[4], c.r[4].w[0] + 152u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B1C8u | kUnwind; return; } goto L_0035B1C8; } }
L_0035B1E0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B1F8:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0035B240; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B238u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035B238u) [[unlikely]] return; }
L_0035B238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B284; } }
L_0035B240:
    set32(c.r[2], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0035B260; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B258u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035B258u) [[unlikely]] return; }
L_0035B258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B284; } }
L_0035B260:
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0035B278; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B288; } }
L_0035B278:
    set32(c.r[5], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B284u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B2E8u; return; } if (c.pc != 0x0035B284u) [[unlikely]] return; }
L_0035B284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0035B288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B298:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B2A8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035B2B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0035B2C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B2C8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B2B0u | kUnwind; return; } goto L_0035B2B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B2E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[16].w[0] + 204u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B314u);  if (depth < kMaxDepth) unit_0097(c, 65u, depth + 1u); else { c.pc = 0x0035C8A0u; return; } if (c.pc != 0x0035B314u) [[unlikely]] return; }
L_0035B314:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B328u);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0035C958u; return; } if (c.pc != 0x0035B328u) [[unlikely]] return; }
L_0035B328:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B348:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B378u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0035B378u) [[unlikely]] return; }
L_0035B378:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3B8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0035B3B8u) [[unlikely]] return; }
L_0035B3B8:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3CCu);  if (depth < kMaxDepth) unit_008B(c, 142u, depth + 1u); else { c.pc = 0x0032D140u; return; } if (c.pc != 0x0035B3CCu) [[unlikely]] return; }
L_0035B3CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B404u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0035B404u) [[unlikely]] return; }
L_0035B404:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B418u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0035B418u) [[unlikely]] return; }
L_0035B418:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B438:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B468u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0035B468u) [[unlikely]] return; }
L_0035B468:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4A8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0035B4A8u) [[unlikely]] return; }
L_0035B4A8:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4BCu);  if (depth < kMaxDepth) unit_008B(c, 142u, depth + 1u); else { c.pc = 0x0032D140u; return; } if (c.pc != 0x0035B4BCu) [[unlikely]] return; }
L_0035B4BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4F4u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0035B4F4u) [[unlikely]] return; }
L_0035B4F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B508u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0035B508u) [[unlikely]] return; }
L_0035B508:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B528:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035B62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B548u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x0035B548u) [[unlikely]] return; }
L_0035B548:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B558u);  if (depth < kMaxDepth) unit_008F(c, 13u, depth + 1u); else { c.pc = 0x0033C240u; return; } if (c.pc != 0x0035B558u) [[unlikely]] return; }
L_0035B558:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0035B5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 14192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B578u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x00359878u; return; } if (c.pc != 0x0035B578u) [[unlikely]] return; }
L_0035B578:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035B5A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[2].d[0] = c.r[2].d[0] | 65503ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 5;
L_0035B5A8:
    set32(c.r[3], c.r[16].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[2], c.r[2].w[0] - 19160u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0035B5F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0035B5D8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0035B5FC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B5D8u | kUnwind; return; } goto L_0035B5D8; } }
L_0035B5F8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0035B5FC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0035B62C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_0035B62C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 240u);
    st32((c.r[3].w[0] + 184u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21424u);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    set32(c.r[6], c.r[6].w[0] - 19160u);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[3].w[0] + 188u), 0u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B688u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035B688u) [[unlikely]] return; }
L_0035B688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] + 24328u);
    set32(c.r[3], c.r[3].w[0] + 24272u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 6;
L_0035B6B0:
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B6B0u | kUnwind; return; } goto L_0035B6B0; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 14196u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14196u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035B734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 24272u);
    set32(c.r[5], c.r[7].w[0] + 24328u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 6;
L_0035B710:
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B710u | kUnwind; return; } goto L_0035B710; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0] + 14196u), c.r[2].w[0]);
    c.budget -= 2;
L_0035B734:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + 24328u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0035B770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23016u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B770; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] + 24272u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14196u)));
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035B7DC; } }
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], c.r[10].w[0] + 24328u);
    set32(c.r[3], c.r[9].w[0] + 24272u);
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
L_0035B7B8:
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B7B8u | kUnwind; return; } goto L_0035B7B8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[11].w[0] + 14196u), c.r[2].w[0]);
    c.budget -= 2;
L_0035B7DC:
    set32(c.r[2], c.r[9].w[0] + 24272u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0035B814; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[10].w[0] + 24328u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B814:
    set32(c.r[2], c.r[10].w[0] + 24328u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0035B898; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035B898; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0035B870:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B884u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035B884u) [[unlikely]] return; }
L_0035B884:
    set32(c.r[18], c.r[18].w[0] + 592u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B870u | kUnwind; return; } goto L_0035B870; } }
L_0035B898:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B8B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035B8FC; } }
    set32(c.r[16], c.r[4].w[0] + 12u);
    set32(c.r[17], 0u + 13u);
    c.budget -= 2;
L_0035B8E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035B8F0u) [[unlikely]] return; }
L_0035B8F0:
    set32(c.r[16], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B8E0u | kUnwind; return; } goto L_0035B8E0; } }
L_0035B8FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B918:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035B97C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B980; } }
L_0035B97C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B980:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035B9AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035B9A4u) [[unlikely]] return; }
L_0035B9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B9B0; } }
L_0035B9AC:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B9B0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0035BBC8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0035BA28; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9DCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0035B9DCu) [[unlikely]] return; }
L_0035B9DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    st32((c.r[29].w[0] + 12u), c.f[4]);
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 19;
L_0035BA28:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035BA4C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035BB34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BBC8; } }
L_0035BA4C:
    set32(c.r[17], ld32((c.r[20].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035BBC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BAE4; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_0035BA68:
    set32(c.r[16], ld32((c.r[17].w[0] + 428u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035BA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA84u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0035BA84u) [[unlikely]] return; }
L_0035BA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BA9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BAA0; } }
L_0035BA9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0035BAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BACC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BACC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = 0ull;
    c.budget -= 4;
L_0035BACC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035BAE4; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 428u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035BA68u | kUnwind; return; } goto L_0035BA68; } }
L_0035BAE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035BBC8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BAFCu);  if (depth < kMaxDepth) unit_0096(c, 163u, depth + 1u); else { c.pc = 0x0035A3E8u; return; } if (c.pc != 0x0035BAFCu) [[unlikely]] return; }
L_0035BAFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB08u);  if (depth < kMaxDepth) unit_008E(c, 82u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x0035BB08u) [[unlikely]] return; }
L_0035BB08:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0035BBC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB2Cu);  if (depth < kMaxDepth) unit_0095(c, 442u, depth + 1u); else { c.pc = 0x00357870u; return; } if (c.pc != 0x0035BB2Cu) [[unlikely]] return; }
L_0035BB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BBC8; } }
L_0035BB34:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 23576u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB58u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035BB58u) [[unlikely]] return; }
L_0035BB58:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 23024u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB7Cu);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035BB7Cu) [[unlikely]] return; }
L_0035BB7C:
    set32(c.r[4], c.r[20].w[0] + 128u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB94u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0035BB94u) [[unlikely]] return; }
L_0035BB94:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0035BBC8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[5], c.r[5].w[0] + 30832u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBC8u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035BBC8u) [[unlikely]] return; }
L_0035BBC8:
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
L_0035BBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 23216u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035BC44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BC48; } }
L_0035BC44:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035BC48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035BC74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035BC68u) [[unlikely]] return; }
L_0035BC68:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BC78; } }
L_0035BC74:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035BC78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035BCC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 23024u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCA4u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035BCA4u) [[unlikely]] return; }
L_0035BCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 23576u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCC8u);  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00382418u; return; } if (c.pc != 0x0035BCC8u) [[unlikely]] return; }
L_0035BCC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65487ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0035BD30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035BD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BD5C; } }
L_0035BD30:
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    st32((c.r[5].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BD5C; } }
L_0035BD40:
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 7;
L_0035BD5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BD78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23216u)));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 360u)));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035BE00; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BE04; } }
L_0035BE00:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035BE04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035BE30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035BE24u) [[unlikely]] return; }
L_0035BE24:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BE34; } }
L_0035BE30:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035BE34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035BE9C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0035BE70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], c.r[5].w[0] - 23648u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE68u);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x0035BE68u) [[unlikely]] return; }
L_0035BE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BE9C; } }
L_0035BE70:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[18].d[0] ^ 128ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];
    set32(c.r[5], c.r[5].w[0] - 23664u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE9Cu);  if (depth < kMaxDepth) unit_00A0(c, 180u, depth + 1u); else { c.pc = 0x00382288u; return; } if (c.pc != 0x0035BE9Cu) [[unlikely]] return; }
L_0035BE9C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BEB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 52u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5296u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BF08:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 51u, depth); } }
L_0035BF28:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035BF50; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035BF54; } }
L_0035BF50:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_0035BF54:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 52u, depth); } }
L_0035BF64:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035BF90; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 8;
L_0035BF90:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035BFB8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_0035BFB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFC4u);  if (depth < kMaxDepth) unit_0096(c, 309u, depth + 1u); else { c.pc = 0x0035BD78u; return; } if (c.pc != 0x0035BFC4u) [[unlikely]] return; }
L_0035BFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 52u, depth); } }
L_0035BFCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035BFE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0035BFE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 52u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0097(c, 1u, depth);
}

}
