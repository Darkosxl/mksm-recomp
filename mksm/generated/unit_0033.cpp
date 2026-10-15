#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0033[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218,
    0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0,
    0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263,
    0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
};

void unit_0033(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001CC000;
    case 2u: goto L_001CC034;
    case 3u: goto L_001CC044;
    case 4u: goto L_001CC074;
    case 5u: goto L_001CC090;
    case 6u: goto L_001CC1B4;
    case 7u: goto L_001CC1E0;
    case 8u: goto L_001CC210;
    case 9u: goto L_001CC2B8;
    case 10u: goto L_001CC384;
    case 11u: goto L_001CC3A0;
    case 12u: goto L_001CC3D4;
    case 13u: goto L_001CC3F0;
    case 14u: goto L_001CC410;
    case 15u: goto L_001CC458;
    case 16u: goto L_001CC494;
    case 17u: goto L_001CC4C8;
    case 18u: goto L_001CC4F0;
    case 19u: goto L_001CC518;
    case 20u: goto L_001CC560;
    case 21u: goto L_001CC5B0;
    case 22u: goto L_001CC5CC;
    case 23u: goto L_001CC5DC;
    case 24u: goto L_001CC608;
    case 25u: goto L_001CC650;
    case 26u: goto L_001CC6C0;
    case 27u: goto L_001CC6F8;
    case 28u: goto L_001CC7A0;
    case 29u: goto L_001CC7B0;
    case 30u: goto L_001CC7B4;
    case 31u: goto L_001CC7BC;
    case 32u: goto L_001CC7C4;
    case 33u: goto L_001CC7E4;
    case 34u: goto L_001CC7FC;
    case 35u: goto L_001CC808;
    case 36u: goto L_001CC810;
    case 37u: goto L_001CC838;
    case 38u: goto L_001CC870;
    case 39u: goto L_001CC880;
    case 40u: goto L_001CC8A8;
    case 41u: goto L_001CC8C8;
    case 42u: goto L_001CC8F0;
    case 43u: goto L_001CC920;
    case 44u: goto L_001CC948;
    case 45u: goto L_001CC968;
    case 46u: goto L_001CC988;
    case 47u: goto L_001CC9C0;
    case 48u: goto L_001CC9D8;
    case 49u: goto L_001CC9F0;
    case 50u: goto L_001CCA20;
    case 51u: goto L_001CCA40;
    case 52u: goto L_001CCA50;
    case 53u: goto L_001CCA68;
    case 54u: goto L_001CCAA8;
    case 55u: goto L_001CCAD0;
    case 56u: goto L_001CCAF8;
    case 57u: goto L_001CCB28;
    case 58u: goto L_001CCB58;
    case 59u: goto L_001CCB70;
    case 60u: goto L_001CCB78;
    case 61u: goto L_001CCC00;
    case 62u: goto L_001CCC18;
    case 63u: goto L_001CCC28;
    case 64u: goto L_001CCC30;
    case 65u: goto L_001CCC40;
    case 66u: goto L_001CCC50;
    case 67u: goto L_001CCCA4;
    case 68u: goto L_001CCCC8;
    case 69u: goto L_001CCCEC;
    case 70u: goto L_001CCD1C;
    case 71u: goto L_001CCD50;
    case 72u: goto L_001CCD9C;
    case 73u: goto L_001CCDD0;
    case 74u: goto L_001CCE2C;
    case 75u: goto L_001CCE38;
    case 76u: goto L_001CCE6C;
    case 77u: goto L_001CCEC4;
    case 78u: goto L_001CCED4;
    case 79u: goto L_001CCEF8;
    case 80u: goto L_001CCF14;
    case 81u: goto L_001CCF28;
    case 82u: goto L_001CCF3C;
    case 83u: goto L_001CCF54;
    case 84u: goto L_001CCFC0;
    case 85u: goto L_001CCFE4;
    case 86u: goto L_001CD010;
    case 87u: goto L_001CD020;
    case 88u: goto L_001CD040;
    case 89u: goto L_001CD064;
    case 90u: goto L_001CD078;
    case 91u: goto L_001CD08C;
    case 92u: goto L_001CD0A4;
    case 93u: goto L_001CD0C8;
    case 94u: goto L_001CD0DC;
    case 95u: goto L_001CD154;
    case 96u: goto L_001CD178;
    case 97u: goto L_001CD1F8;
    case 98u: goto L_001CD258;
    case 99u: goto L_001CD2B0;
    case 100u: goto L_001CD2BC;
    case 101u: goto L_001CD2F0;
    case 102u: goto L_001CD320;
    case 103u: goto L_001CD330;
    case 104u: goto L_001CD374;
    case 105u: goto L_001CD384;
    case 106u: goto L_001CD3D0;
    case 107u: goto L_001CD420;
    case 108u: goto L_001CD46C;
    case 109u: goto L_001CD47C;
    case 110u: goto L_001CD4F0;
    case 111u: goto L_001CD4F8;
    case 112u: goto L_001CD56C;
    case 113u: goto L_001CD578;
    case 114u: goto L_001CD5AC;
    case 115u: goto L_001CD5D0;
    case 116u: goto L_001CD5F8;
    case 117u: goto L_001CD608;
    case 118u: goto L_001CD654;
    case 119u: goto L_001CD660;
    case 120u: goto L_001CD678;
    case 121u: goto L_001CD860;
    case 122u: goto L_001CD878;
    case 123u: goto L_001CD888;
    case 124u: goto L_001CDA08;
    case 125u: goto L_001CDA6C;
    case 126u: goto L_001CDAD0;
    case 127u: goto L_001CDB34;
    case 128u: goto L_001CDB98;
    case 129u: goto L_001CDBFC;
    case 130u: goto L_001CDC60;
    case 131u: goto L_001CDCD0;
    case 132u: goto L_001CDD38;
    case 133u: goto L_001CDD60;
    case 134u: goto L_001CDD68;
    case 135u: goto L_001CDD80;
    case 136u: goto L_001CDDB0;
    case 137u: goto L_001CDDC8;
    case 138u: goto L_001CDE1C;
    case 139u: goto L_001CDE34;
    case 140u: goto L_001CDE88;
    case 141u: goto L_001CDEA0;
    case 142u: goto L_001CDEF8;
    case 143u: goto L_001CDF10;
    case 144u: goto L_001CDF88;
    case 145u: goto L_001CDFD8;
    case 146u: goto L_001CE004;
    case 147u: goto L_001CE010;
    case 148u: goto L_001CE028;
    case 149u: goto L_001CE068;
    case 150u: goto L_001CE07C;
    case 151u: goto L_001CE094;
    case 152u: goto L_001CE0E8;
    case 153u: goto L_001CE144;
    case 154u: goto L_001CE168;
    case 155u: goto L_001CE198;
    case 156u: goto L_001CE1B0;
    case 157u: goto L_001CE1C8;
    case 158u: goto L_001CE1D8;
    case 159u: goto L_001CE1F0;
    case 160u: goto L_001CE228;
    case 161u: goto L_001CE240;
    case 162u: goto L_001CE264;
    case 163u: goto L_001CE278;
    case 164u: goto L_001CE288;
    case 165u: goto L_001CE2A0;
    case 166u: goto L_001CE2D8;
    case 167u: goto L_001CE310;
    case 168u: goto L_001CE328;
    case 169u: goto L_001CE380;
    case 170u: goto L_001CE3B8;
    case 171u: goto L_001CE3C8;
    case 172u: goto L_001CE3E0;
    case 173u: goto L_001CE3F4;
    case 174u: goto L_001CE40C;
    case 175u: goto L_001CE428;
    case 176u: goto L_001CE464;
    case 177u: goto L_001CE484;
    case 178u: goto L_001CE4A8;
    case 179u: goto L_001CE4C4;
    case 180u: goto L_001CE4F4;
    case 181u: goto L_001CE520;
    case 182u: goto L_001CE53C;
    case 183u: goto L_001CE564;
    case 184u: goto L_001CE578;
    case 185u: goto L_001CE5B8;
    case 186u: goto L_001CE64C;
    case 187u: goto L_001CE680;
    case 188u: goto L_001CE6B4;
    case 189u: goto L_001CE6E8;
    case 190u: goto L_001CE770;
    case 191u: goto L_001CE78C;
    case 192u: goto L_001CE90C;
    case 193u: goto L_001CE9CC;
    case 194u: goto L_001CEA44;
    case 195u: goto L_001CEA78;
    case 196u: goto L_001CEAAC;
    case 197u: goto L_001CEAF8;
    case 198u: goto L_001CEB34;
    case 199u: goto L_001CEB90;
    case 200u: goto L_001CEBE8;
    case 201u: goto L_001CEC00;
    case 202u: goto L_001CEC1C;
    case 203u: goto L_001CEC48;
    case 204u: goto L_001CECA4;
    case 205u: goto L_001CECC8;
    case 206u: goto L_001CED44;
    case 207u: goto L_001CED74;
    case 208u: goto L_001CEDA4;
    case 209u: goto L_001CEDD4;
    case 210u: goto L_001CEE00;
    case 211u: goto L_001CEE4C;
    case 212u: goto L_001CEE74;
    case 213u: goto L_001CEE80;
    case 214u: goto L_001CEE98;
    case 215u: goto L_001CEEB0;
    case 216u: goto L_001CEEC4;
    case 217u: goto L_001CEEE8;
    case 218u: goto L_001CEEFC;
    case 219u: goto L_001CEF08;
    case 220u: goto L_001CEF20;
    case 221u: goto L_001CEF30;
    case 222u: goto L_001CEF44;
    case 223u: goto L_001CEF68;
    case 224u: goto L_001CEF78;
    case 225u: goto L_001CEF80;
    case 226u: goto L_001CEF8C;
    case 227u: goto L_001CEFB0;
    case 228u: goto L_001CEFD0;
    case 229u: goto L_001CEFE4;
    case 230u: goto L_001CEFEC;
    case 231u: goto L_001CEFF8;
    case 232u: goto L_001CF004;
    case 233u: goto L_001CF00C;
    case 234u: goto L_001CF014;
    case 235u: goto L_001CF020;
    case 236u: goto L_001CF044;
    case 237u: goto L_001CF050;
    case 238u: goto L_001CF05C;
    case 239u: goto L_001CF064;
    case 240u: goto L_001CF06C;
    case 241u: goto L_001CF078;
    case 242u: goto L_001CF0C8;
    case 243u: goto L_001CF104;
    case 244u: goto L_001CF150;
    case 245u: goto L_001CF168;
    case 246u: goto L_001CF1D4;
    case 247u: goto L_001CF1F0;
    case 248u: goto L_001CF23C;
    case 249u: goto L_001CF2D8;
    case 250u: goto L_001CF2F4;
    case 251u: goto L_001CF334;
    case 252u: goto L_001CF3DC;
    case 253u: goto L_001CF428;
    case 254u: goto L_001CF474;
    case 255u: goto L_001CF4C0;
    case 256u: goto L_001CF4E0;
    case 257u: goto L_001CF518;
    case 258u: goto L_001CF5C8;
    case 259u: goto L_001CF5D8;
    case 260u: goto L_001CF5F0;
    case 261u: goto L_001CF62C;
    case 262u: goto L_001CF66C;
    case 263u: goto L_001CF67C;
    case 264u: goto L_001CF684;
    case 265u: goto L_001CF69C;
    case 266u: goto L_001CF6C0;
    case 267u: goto L_001CF770;
    case 268u: goto L_001CF788;
    case 269u: goto L_001CF798;
    case 270u: goto L_001CF7B0;
    case 271u: goto L_001CF7EC;
    case 272u: goto L_001CF82C;
    case 273u: goto L_001CF83C;
    case 274u: goto L_001CF844;
    case 275u: goto L_001CF85C;
    case 276u: goto L_001CF874;
    case 277u: goto L_001CF890;
    case 278u: goto L_001CF8B8;
    case 279u: goto L_001CF8D0;
    case 280u: goto L_001CF908;
    case 281u: goto L_001CF984;
    case 282u: goto L_001CF9C8;
    case 283u: goto L_001CFA0C;
    case 284u: goto L_001CFA50;
    case 285u: goto L_001CFA78;
    case 286u: goto L_001CFAAC;
    case 287u: goto L_001CFAD4;
    case 288u: goto L_001CFADC;
    case 289u: goto L_001CFAE4;
    case 290u: goto L_001CFAF8;
    case 291u: goto L_001CFB7C;
    case 292u: goto L_001CFBA4;
    case 293u: goto L_001CFBC0;
    case 294u: goto L_001CFBD8;
    case 295u: goto L_001CFC0C;
    case 296u: goto L_001CFC34;
    case 297u: goto L_001CFC60;
    case 298u: goto L_001CFC90;
    case 299u: goto L_001CFCC8;
    case 300u: goto L_001CFD50;
    case 301u: goto L_001CFD68;
    case 302u: goto L_001CFD80;
    case 303u: goto L_001CFDA8;
    case 304u: goto L_001CFDDC;
    case 305u: goto L_001CFE08;
    case 306u: goto L_001CFE40;
    case 307u: goto L_001CFE78;
    case 308u: goto L_001CFE90;
    case 309u: goto L_001CFEB8;
    case 310u: goto L_001CFEE0;
    case 311u: goto L_001CFF14;
    case 312u: goto L_001CFF50;
    case 313u: goto L_001CFF8C;
    case 314u: goto L_001CFFE8;
    default: bad_entry(c, 0x001CC000u); return;
    }
L_001CC000:
    set32(c.r[2], c.r[2].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC01C; } }
    set32(c.r[17], 0u + 500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC034; } }
L_001CC01C:
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC034; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    set32(c.r[2], 0u + 500u);
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_001CC034:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC044u);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x001CC044u) [[unlikely]] return; }
L_001CC044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC05C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CC05C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001CC068; } }
L_001CC05C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC1B8; } }
L_001CC068:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC074u);  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B92C8u; return; } if (c.pc != 0x001CC074u) [[unlikely]] return; }
L_001CC074:
    set32(c.r[3], ld32((c.r[18].w[0] + 840u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC0B0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 10196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC090u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F70E8u; return; } if (c.pc != 0x001CC090u) [[unlikely]] return; }
L_001CC090:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 972u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC0BC; } }
L_001CC0B0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC11C; } }
L_001CC0BC:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[17].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 24;
L_001CC11C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 960u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 456u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_001CC19C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 962u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 458u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 966u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 460u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001CC19C; } }
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_001CC19C:
    st32((c.r[18].w[0] + 1328u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1B4u);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x001CC1B4u) [[unlikely]] return; }
L_001CC1B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CC1B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 840u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC298; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 10196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC210u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F70E8u; return; } if (c.pc != 0x001CC210u) [[unlikely]] return; }
L_001CC210:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 972u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 468u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC298; } }
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.r[16].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC29C; } }
L_001CC298:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CC29C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC2B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 10120u)));
    set32(c.r[6], c.r[6].w[0] - 26128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 15u);
    st32((c.r[5].w[0] - 5016u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[8].w[0] - 5004u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[9].w[0] - 21448u), 0u);
    set32(c.r[3], c.r[3].w[0] + 19264u);
    st32((c.r[10].w[0] - 17312u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[11].w[0] + 10124u), 0u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[12].w[0] - 5012u), 0u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[13].w[0] + 10156u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 76u), 0u);
    set32(c.r[4], c.r[4].w[0] + 14664u);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[16], 0u + 12u);
    st32((c.r[14].w[0] - 21444u), 0u);
    st32((c.r[15].w[0] - 5008u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[3].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 49;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CC384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC384u);  if (depth < kMaxDepth) unit_003D(c, 210u, depth + 1u); else { c.pc = 0x001F73C8u; return; } if (c.pc != 0x001CC384u) [[unlikely]] return; }
L_001CC384:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC3A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3D4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001CC3D4u) [[unlikely]] return; }
L_001CC3D4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001CC4D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3F0u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CC3F0u) [[unlikely]] return; }
L_001CC3F0:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] - 6088u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[8].w[0] + 8u);
    set32(c.r[5], c.r[8].w[0] + 12u);
    c.budget -= 8;
L_001CC410:
    set32(c.r[3], ld32((c.r[5].w[0] - 4u)));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_001CC42C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CC4A8; } }
L_001CC42C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[4].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC410u | kUnwind; return; } goto L_001CC410; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], c.r[8].w[0] + 12u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001CC458:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_001CC474; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC4A8; } }
L_001CC474:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[3].w[0] + 20u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC458u | kUnwind; return; } goto L_001CC458; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC494:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC4B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC6A4; } }
L_001CC4A8:
    set32(c.r[2], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC494u | kUnwind; return; } goto L_001CC494; } }
L_001CC4B8:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[11].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC6A0; } }
L_001CC4C8:
    set32(c.r[2], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC598; } }
L_001CC4D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001CC5C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4F0u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CC4F0u) [[unlikely]] return; }
L_001CC4F0:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6088u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + 408u);
    set32(c.r[9], c.r[2].w[0] + 416u);
    set32(c.r[4], c.r[2].w[0] + 420u);
    c.budget -= 10;
L_001CC518:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_001CC530; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC4C8u | kUnwind; return; } goto L_001CC4C8; } }
L_001CC530:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC518u | kUnwind; return; } goto L_001CC518; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001CC560:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001CC578; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC4C8u | kUnwind; return; } goto L_001CC4C8; } }
L_001CC578:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC560u | kUnwind; return; } goto L_001CC560; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC598:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC6A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC698; } }
L_001CC5B0:
    set32(c.r[2], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC688; } }
L_001CC5C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC5CCu);  if (depth < kMaxDepth) unit_0083(c, 21u, depth + 1u); else { c.pc = 0x0030C210u; return; } if (c.pc != 0x001CC5CCu) [[unlikely]] return; }
L_001CC5CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC5DCu);  if (depth < kMaxDepth) unit_0083(c, 28u, depth + 1u); else { c.pc = 0x0030C2F8u; return; } if (c.pc != 0x001CC5DCu) [[unlikely]] return; }
L_001CC5DC:
    set32(c.r[3], 0u + 408u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 5272u);
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[6].w[0] + 8u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_001CC608:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_001CC620; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC5B0u | kUnwind; return; } goto L_001CC5B0; } }
L_001CC620:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC608u | kUnwind; return; } goto L_001CC608; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + 12u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001CC650:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_001CC668; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC5B0u | kUnwind; return; } goto L_001CC5B0; } }
L_001CC668:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC650u | kUnwind; return; } goto L_001CC650; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC688:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC6A4; } }
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_001CC698:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[10].w[0]);
    c.budget -= 2;
L_001CC6A0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001CC6A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 504u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6F8u);  if (depth < kMaxDepth) unit_0033(c, 11u, depth + 1u); else { c.pc = 0x001CC3A0u; return; } if (c.pc != 0x001CC6F8u) [[unlikely]] return; }
L_001CC6F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001CC744; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6088u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC7C4; } }
L_001CC744:
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[7], 0u + 408u);
    st32((c.r[16].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[4], 0u + 1328u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[8], c.r[3].w[0] + 4u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7A0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001CC7A0u) [[unlikely]] return; }
L_001CC7A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7B0u);  if (depth < kMaxDepth) unit_009A(c, 90u, depth + 1u); else { c.pc = 0x00369640u; return; } if (c.pc != 0x001CC7B0u) [[unlikely]] return; }
L_001CC7B0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_001CC7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC7C4; } }
L_001CC7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001CC7C4u) [[unlikely]] return; }
L_001CC7C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 504u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CC818; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7E4u);  if (depth < kMaxDepth) unit_0099(c, 243u, depth + 1u); else { c.pc = 0x00366D30u; return; } if (c.pc != 0x001CC7E4u) [[unlikely]] return; }
L_001CC7E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] + 15320u);
    set32(c.r[6], 0u + 91u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7FCu);  if (depth < kMaxDepth) unit_009A(c, 136u, depth + 1u); else { c.pc = 0x0036A0B0u; return; } if (c.pc != 0x001CC7FCu) [[unlikely]] return; }
L_001CC7FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC808u);  if (depth < kMaxDepth) unit_009A(c, 138u, depth + 1u); else { c.pc = 0x0036A0E8u; return; } if (c.pc != 0x001CC808u) [[unlikely]] return; }
L_001CC808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC818; } }
L_001CC810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC7BCu | kUnwind; return; } goto L_001CC7BC; } }
L_001CC818:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC838:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CC88C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CC88C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 5u);
    set32(c.r[16], c.r[2].w[0] - 6088u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 4;
L_001CC870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC880u);  if (depth < kMaxDepth) unit_0033(c, 40u, depth + 1u); else { c.pc = 0x001CC8A8u; return; } if (c.pc != 0x001CC880u) [[unlikely]] return; }
L_001CC880:
    set32(c.r[16], c.r[16].w[0] + 408u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC870u | kUnwind; return; } goto L_001CC870; } }
L_001CC88C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC8A8:
    set32(c.r[2], 0u + 20u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 24u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
L_001CC8C8:
    st32((c.r[2].w[0] - 16u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] - 12u), 0u);
    st32((c.r[2].w[0] - 8u), c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8C8u | kUnwind; return; } goto L_001CC8C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC8F0:
    set32(c.r[3], 0u + 408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6088u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + 24u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
L_001CC920:
    st32((c.r[2].w[0] - 16u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[2].w[0] - 12u), 0u);
    st32((c.r[2].w[0] - 8u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC920u | kUnwind; return; } goto L_001CC920; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[2].w[0] - 6088u);
    set32(c.r[9], 0u + 408u);
    set32(c.r[8], 0u + 20u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 8;
L_001CC968:
    mmi::mult(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[10].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], 0u + 19u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + 24u);
    c.budget -= 8;
L_001CC988:
    st32((c.r[3].w[0] - 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] - 12u), 0u);
    st32((c.r[3].w[0] - 8u), c.r[6].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC988u | kUnwind; return; } goto L_001CC988; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC968u | kUnwind; return; } goto L_001CC968; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] - 6088u);
    set32(c.r[7], 0u + 408u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_001CC9D8:
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], c.r[2].w[0] + 388u);
    c.budget -= 6;
L_001CC9F0:
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 20u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC9F0u | kUnwind; return; } goto L_001CC9F0; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC9D8u | kUnwind; return; } goto L_001CC9D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6088u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[2].w[0] + 16u);
    set32(c.r[10], c.r[2].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_001CCA40:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_001CCA50:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001CCA68; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCA68:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.r[2].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCA50u | kUnwind; return; } goto L_001CCA50; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 408u);
    set32(c.r[7], c.r[7].w[0] + 408u);
    c.r[2].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCA40u | kUnwind; return; } goto L_001CCA40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCAA8:
    set32(c.r[2], 0u + 408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCAD0:
    set32(c.r[2], 0u + 408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCAF8:
    set32(c.r[2], 0u + 408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCB28:
    set32(c.r[2], 0u + 408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCB58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] - 6088u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[2].w[0] + 8u);
    c.budget -= 6;
L_001CCB70:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_001CCB78:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001CCB90; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCBBC; } }
L_001CCB90:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCB78u | kUnwind; return; } goto L_001CCB78; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 408u);
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCB70u | kUnwind; return; } goto L_001CCB70; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CCBBC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001CCBF8; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], 0u + 408u);
    set32(c.r[3], c.r[3].w[0] - 6088u);
    set32(c.r[6], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 13;
L_001CCBF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC18u);  if (depth < kMaxDepth) unit_0033(c, 37u, depth + 1u); else { c.pc = 0x001CC838u; return; } if (c.pc != 0x001CCC18u) [[unlikely]] return; }
L_001CCC18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCC28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC40u);  if (depth < kMaxDepth) unit_0028(c, 187u, depth + 1u); else { c.pc = 0x001A2868u; return; } if (c.pc != 0x001CCC40u) [[unlikely]] return; }
L_001CCC40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCC50:
    set32(c.r[29], c.r[29].w[0] - 912u);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 720u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 896u), c.f[22]);
    st32((c.r[29].w[0] + 888u), c.f[21]);
    st32((c.r[29].w[0] + 880u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CCCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCA4u);  if (depth < kMaxDepth) unit_0033(c, 117u, depth + 1u); else { c.pc = 0x001CD608u; return; } if (c.pc != 0x001CCCA4u) [[unlikely]] return; }
L_001CCCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD1B8; } }
L_001CCCAC:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 11912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CCCC8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCC8u);  if (depth < kMaxDepth) unit_0033(c, 117u, depth + 1u); else { c.pc = 0x001CD608u; return; } if (c.pc != 0x001CCCC8u) [[unlikely]] return; }
L_001CCCC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xACDC0000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 11916u)));
    c.r[2].d[0] = c.r[2].d[0] | 44252ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CCCEC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 7700u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCECu);  if (depth < kMaxDepth) unit_0033(c, 115u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x001CCCECu) [[unlikely]] return; }
L_001CCCEC:
    c.f[20] = 0u;
    set32(c.r[2], c.r[19].w[0] + 11920u);
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[29].w[0] + 708u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD1Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CCD1Cu) [[unlikely]] return; }
L_001CCD1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 11920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD1B8; } }
    set32(c.r[3], c.r[29].w[0] + 704u);
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[23], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 712u), c.r[3].w[0]);
    set32(c.r[21], c.r[29].w[0] + 640u);
    st32((c.r[29].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 656u);
    set32(c.r[16], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 10;
L_001CCD50:
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[6], 0u + 268u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD9Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001CCD9Cu) [[unlikely]] return; }
L_001CCD9C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CCDC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CCDE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE5C; } }
L_001CCDC0:
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDD0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001CCDD0u) [[unlikely]] return; }
L_001CCDD0:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 704u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE7C; } }
L_001CCDE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 11824u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CCE08; } }
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[19].w[0] + 11856u);
    set32(c.r[6], c.r[19].w[0] + 11872u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE24; } }
L_001CCE08:
    set32(c.r[2], ld32((c.r[19].w[0] + 11744u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CCE44; } }
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[19].w[0] + 11776u);
    set32(c.r[6], c.r[19].w[0] + 11792u);
    c.budget -= 3;
L_001CCE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE2Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001CCE2Cu) [[unlikely]] return; }
L_001CCE2C:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE38u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001CCE38u) [[unlikely]] return; }
L_001CCE38:
    st32((c.r[29].w[0] + 704u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE7C; } }
L_001CCE44:
    st32((c.r[29].w[0] + 704u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCE7C; } }
L_001CCE5C:
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE6Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001CCE6Cu) [[unlikely]] return; }
L_001CCE6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001CCE7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CCEA0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CCFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD194; } }
L_001CCEA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 212u));
    c.f[12] = ld32((c.r[29].w[0] + 208u));
    c.f[15] = c.f[21];
    c.f[14] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEC4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CCEC4u) [[unlikely]] return; }
L_001CCEC4:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCED4u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001CCED4u) [[unlikely]] return; }
L_001CCED4:
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[13] = fp::mul(c.f[13], c.f[22]);
    c.f[15] = c.f[21];
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEF8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CCEF8u) [[unlikely]] return; }
L_001CCEF8:
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF14u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CCF14u) [[unlikely]] return; }
L_001CCF14:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF28u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001CCF28u) [[unlikely]] return; }
L_001CCF28:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF3Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001CCF3Cu) [[unlikely]] return; }
L_001CCF3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], ld32((c.r[29].w[0] + 716u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF54u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x001CCF54u) [[unlikely]] return; }
L_001CCF54:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD184; } }
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[29].w[0] + 660u));
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 23424u));
    st32((c.r[16].w[0] + 16u), c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 28u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFC0u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x001CCFC0u) [[unlikely]] return; }
L_001CCFC0:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD194; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFE4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001CCFE4u) [[unlikely]] return; }
L_001CCFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD184; } }
L_001CCFEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 216u));
    c.f[12] = ld32((c.r[29].w[0] + 208u));
    c.f[15] = c.f[21];
    c.f[13] = ld32((c.r[29].w[0] + 212u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD010u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CD010u) [[unlikely]] return; }
L_001CD010:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD020u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001CD020u) [[unlikely]] return; }
L_001CD020:
    c.f[14] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = fp::mul(c.f[14], c.f[22]);
    c.f[15] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD040u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CD040u) [[unlikely]] return; }
L_001CD040:
    c.f[14] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[17], c.r[29].w[0] + 656u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[15] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD064u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CD064u) [[unlikely]] return; }
L_001CD064:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD078u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001CD078u) [[unlikely]] return; }
L_001CD078:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD08Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001CD08Cu) [[unlikely]] return; }
L_001CD08C:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], ld32((c.r[29].w[0] + 716u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0A4u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x001CD0A4u) [[unlikely]] return; }
L_001CD0A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD184; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0C8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001CD0C8u) [[unlikely]] return; }
L_001CD0C8:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0DCu);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x001CD0DCu) [[unlikely]] return; }
L_001CD0DC:
    c.f[1] = ld32((c.r[29].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[5] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] + 24u));
    c.f[6] = ld32((c.r[3].w[0] + 23424u));
    c.f[1] = fp::sub(c.f[2], c.f[5]);
    st32((c.r[16].w[0] + 28u), c.f[21]);
    c.f[0] = fp::sub(c.f[3], c.f[4]);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[29].w[0]), c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 4u), c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.f[5] = fp::add(c.f[5], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[5]);
    st32((c.r[16].w[0] + 24u), c.f[4]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD154u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x001CD154u) [[unlikely]] return; }
L_001CD154:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD194; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD178u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001CD178u) [[unlikely]] return; }
L_001CD178:
    st32((c.r[16].w[0] + 20u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD194; } }
L_001CD184:
    st32((c.r[16].w[0] + 28u), c.f[21]);
    st32((c.r[16].w[0] + 16u), c.f[20]);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 24u), c.f[20]);
    c.budget -= 4;
L_001CD194:
    set32(c.r[3], ld32((c.r[29].w[0] + 708u)));
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[2], c.r[3].w[0] + 896u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD1B8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCD50u | kUnwind; return; } goto L_001CCD50; } }
L_001CD1B8:
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 848u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 720u));
    c.f[22] = ld32((c.r[29].w[0] + 896u));
    c.f[21] = ld32((c.r[29].w[0] + 888u));
    c.f[20] = ld32((c.r[29].w[0] + 880u));
    set32(c.r[29], c.r[29].w[0] + 912u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD1F8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD3A0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001CD248; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD258; } }
L_001CD248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD258u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x001CD258u) [[unlikely]] return; }
L_001CD258:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD3A0; } }
    set32(c.r[4], c.r[19].w[0] + 11920u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD3A0; } }
    set32(c.r[2], 0u + 112u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD3A0; } }
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[20], c.r[2].w[0] + 23936u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[21], c.r[19].w[0] + 12816u);
    c.budget -= 9;
L_001CD2B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2BCu);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x001CD2BCu) [[unlikely]] return; }
L_001CD2BC:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] + 2928u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2F0u);  if (depth < kMaxDepth) unit_004F(c, 39u, depth + 1u); else { c.pc = 0x0023C790u; return; } if (c.pc != 0x001CD2F0u) [[unlikely]] return; }
L_001CD2F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD320u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001CD320u) [[unlikely]] return; }
L_001CD320:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD330u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001CD330u) [[unlikely]] return; }
L_001CD330:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 12u), c.f[20]);
    set32(c.r[17], c.r[17].w[0] + 112u);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD374u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001CD374u) [[unlikely]] return; }
L_001CD374:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD384u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001CD384u) [[unlikely]] return; }
L_001CD384:
    set32(c.r[18], c.r[18].w[0] + 112u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD3A0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD2B0u | kUnwind; return; } goto L_001CD2B0; } }
L_001CD3A0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD3D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[4].w[0] + 11920u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD498; } }
    c.f[20] = 0u;
    set32(c.r[19], c.r[4].w[0] + 11936u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[4].w[0] + 11968u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
L_001CD420:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = c.f[20];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 112u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD46Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CD46Cu) [[unlikely]] return; }
L_001CD46C:
    set32(c.r[17], c.r[17].w[0] + 112u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD47Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001CD47Cu) [[unlikely]] return; }
L_001CD47C:
    set32(c.r[18], c.r[18].w[0] + 112u);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD4C4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD420u | kUnwind; return; } goto L_001CD420; } }
L_001CD498:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD4C4; } }
    set32(c.r[2], 0u + 112u);
    set32(c.r[3], 0u + 6u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
L_001CD4C4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD4F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001CD59C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CD59C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 11824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001CD54C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 11872u);
    set32(c.r[5], c.r[3].w[0] + 11856u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD564; } }
L_001CD54C:
    set32(c.r[2], ld32((c.r[3].w[0] + 11744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001CD584; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 11792u);
    set32(c.r[5], c.r[3].w[0] + 11776u);
    c.budget -= 3;
L_001CD564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD56Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001CD56Cu) [[unlikely]] return; }
L_001CD56C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD578u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001CD578u) [[unlikely]] return; }
L_001CD578:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD5B8; } }
L_001CD584:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD5B8; } }
L_001CD59C:
    st32((c.r[16].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD5ACu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001CD5ACu) [[unlikely]] return; }
L_001CD5AC:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
L_001CD5B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xACDC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 44252ull;
    st32((c.r[4].w[0] + 11912u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[4].w[0] + 11916u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 23968u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD5F8u);  if (depth < kMaxDepth) unit_0033(c, 106u, depth + 1u); else { c.pc = 0x001CD3D0u; return; } if (c.pc != 0x001CD5F8u) [[unlikely]] return; }
L_001CD5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD608:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 11920u);
    st32((c.r[16].w[0] + 11916u), 0u);
    st32((c.r[16].w[0] + 11920u), 0u);
    set32(c.r[4], c.r[16].w[0] + 11936u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD654u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001CD654u) [[unlikely]] return; }
L_001CD654:
    set32(c.r[4], c.r[16].w[0] + 11968u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD660u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001CD660u) [[unlikely]] return; }
L_001CD660:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD678:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[18]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CD844; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[5].w[0] - 3640u), 0u);
    set32(c.r[2], c.r[5].w[0] - 3640u);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[7].w[0] - 3600u), 0u);
    set32(c.r[3], c.r[7].w[0] - 3600u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] + 32u), c.f[2]);
    set32(c.r[4], c.r[9].w[0] - 3560u);
    set32(c.r[6], c.r[6].w[0] + 23872u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[9].w[0] - 3560u), 0u);
    set32(c.r[8], c.r[14].w[0] - 3520u);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    set32(c.r[11], c.r[11].w[0] + 23888u);
    st32((c.r[8].w[0] + 28u), c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[10], c.r[10].w[0] - 8136u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[14].w[0] - 3520u), 0u);
    set32(c.r[5], c.r[15].w[0] - 3480u);
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[6], c.r[16].w[0] - 3440u);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    set32(c.r[7], c.r[17].w[0] - 3400u);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    set32(c.r[12], c.r[12].w[0] + 23904u);
    st32((c.r[2].w[0] + 24u), c.r[10].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[3].w[0] + 28u), c.r[11].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[9], c.r[18].w[0] - 3360u);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    set32(c.r[13], c.r[13].w[0] + 23920u);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), c.f[1]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    st32((c.r[8].w[0] + 16u), c.f[1]);
    st32((c.r[8].w[0] + 20u), c.f[0]);
    st32((c.r[8].w[0] + 32u), c.f[2]);
    st32((c.r[15].w[0] - 3480u), 0u);
    st32((c.r[5].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] - 3440u), 0u);
    st32((c.r[6].w[0] + 32u), c.f[2]);
    st32((c.r[7].w[0] + 28u), c.r[12].w[0]);
    st32((c.r[17].w[0] - 3400u), 0u);
    st32((c.r[7].w[0] + 32u), c.f[2]);
    st32((c.r[9].w[0] + 28u), c.r[13].w[0]);
    st32((c.r[18].w[0] - 3360u), 0u);
    st32((c.r[8].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[12].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 28u), c.r[13].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0] + 16u), c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    st32((c.r[6].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    st32((c.r[7].w[0] + 16u), c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    st32((c.r[7].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[9].w[0] + 8u), c.f[1]);
    st32((c.r[9].w[0] + 12u), c.f[0]);
    st32((c.r[9].w[0] + 32u), c.f[2]);
    st32((c.r[9].w[0] + 16u), c.f[1]);
    st32((c.r[9].w[0] + 20u), c.f[0]);
    st32((c.r[9].w[0] + 24u), c.r[10].w[0]);
    c.budget -= 106;
L_001CD844:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD878u);  if (depth < kMaxDepth) unit_0033(c, 120u, depth + 1u); else { c.pc = 0x001CD678u; return; } if (c.pc != 0x001CD878u) [[unlikely]] return; }
L_001CD878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[3].w[0] + 29820u)));
    set32(c.r[24], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st128((c.r[29].w[0]) & ~15u, c.r[23]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[24].d[0];  if (t) { goto L_001CD928; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[23], 0u + 21u);
    set32(c.r[2], c.r[3].w[0] - 2488u);
    set32(c.r[4], 0u + 15u);
    st32((c.r[2].w[0] + 28u), c.r[24].w[0]);
    set32(c.r[5], 0u + 17u);
    st32((c.r[3].w[0] - 2488u), 0u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[8], 0u + 7u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[10], 0u + 4u);
    set32(c.r[11], 0u + 8u);
    set32(c.r[12], 0u + 9u);
    set32(c.r[13], 0u + 14u);
    set32(c.r[14], 0u + 18u);
    set32(c.r[15], 0u + 19u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[17], 0u + 13u);
    set32(c.r[18], 0u + 23u);
    set32(c.r[19], 0u + 24u);
    set32(c.r[20], 0u + 25u);
    set32(c.r[21], 0u + 26u);
    set32(c.r[22], 0u + 27u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD988; } }
L_001CD928:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[23], 0u + 21u);
    set32(c.r[2], c.r[3].w[0] - 2488u);
    set32(c.r[4], 0u + 15u);
    st32((c.r[2].w[0] + 28u), c.r[24].w[0]);
    set32(c.r[5], 0u + 17u);
    st32((c.r[3].w[0] - 2488u), 0u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[8], 0u + 7u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[10], 0u + 4u);
    set32(c.r[11], 0u + 8u);
    set32(c.r[12], 0u + 9u);
    set32(c.r[13], 0u + 14u);
    set32(c.r[14], 0u + 18u);
    set32(c.r[15], 0u + 19u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[17], 0u + 13u);
    set32(c.r[18], 0u + 38u);
    set32(c.r[19], 0u + 39u);
    set32(c.r[20], 0u + 40u);
    set32(c.r[21], 0u + 41u);
    set32(c.r[22], 0u + 42u);
    c.budget -= 24;
L_001CD988:
    st32((c.r[2].w[0] + 4u), c.r[23].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[15].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[21].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[22].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0]) & ~15u, c.r[23]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CDA08:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CDAA8; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA6Cu);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDA6Cu) [[unlikely]] return; }
L_001CDA6C:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDAA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001CDB0C; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAD0u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDAD0u) [[unlikely]] return; }
L_001CDAD0:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDB0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001CDB70; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB34u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDB34u) [[unlikely]] return; }
L_001CDB34:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDB70:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001CDBD4; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB98u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDB98u) [[unlikely]] return; }
L_001CDB98:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDBD4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_001CDC38; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDBFCu);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDBFCu) [[unlikely]] return; }
L_001CDBFC:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDC38:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001CDC9C; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC60u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDC60u) [[unlikely]] return; }
L_001CDC60:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CDC9C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CDCD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[19], 0u + 21u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD38u);  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD888u; return; } if (c.pc != 0x001CDD38u) [[unlikely]] return; }
L_001CDD38:
    set32(c.r[2], 0u + 268u);
    set32(c.r[16], c.r[16].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 268u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD60u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001CDD60u) [[unlikely]] return; }
L_001CDD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[3].w[0] - 2488u);
    c.budget -= 2;
L_001CDD68:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD80u);  if (depth < kMaxDepth) unit_006C(c, 326u, depth + 1u); else { c.pc = 0x002B3668u; return; } if (c.pc != 0x001CDD80u) [[unlikely]] return; }
L_001CDD80:
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDD68u | kUnwind; return; } goto L_001CDD68; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001CDDD8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDB0u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001CDDB0u) [[unlikely]] return; }
L_001CDDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDDD8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDC8u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDDC8u) [[unlikely]] return; }
L_001CDDC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CDDF4; } }
L_001CDDD8:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 88u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDE08; } }
L_001CDDF4:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 5;
L_001CDE08:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_001CDE44; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE1Cu);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001CDE1Cu) [[unlikely]] return; }
L_001CDE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDE44; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE34u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDE34u) [[unlikely]] return; }
L_001CDE34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CDE60; } }
L_001CDE44:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 92u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDE74; } }
L_001CDE60:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 5;
L_001CDE74:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001CDEB0; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE88u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001CDE88u) [[unlikely]] return; }
L_001CDE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDEB0; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEA0u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDEA0u) [[unlikely]] return; }
L_001CDEA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CDECC; } }
L_001CDEB0:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 96u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDEE0; } }
L_001CDECC:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[5].w[0]);
    c.budget -= 5;
L_001CDEE0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDF20; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEF8u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001CDEF8u) [[unlikely]] return; }
L_001CDEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDF20; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF10u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CDF10u) [[unlikely]] return; }
L_001CDF10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CDF3C; } }
L_001CDF20:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 100u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDF50; } }
L_001CDF3C:
    set32(c.r[2], 0u + 268u);
    set32(c.r[3], c.r[21].w[0] - 14152u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 5;
L_001CDF50:
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
L_001CDF88:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 21u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFD8u);  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD888u; return; } if (c.pc != 0x001CDFD8u) [[unlikely]] return; }
L_001CDFD8:
    set32(c.r[2], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 268u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE004u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001CE004u) [[unlikely]] return; }
L_001CE004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[3].w[0] - 2488u);
    c.budget -= 3;
L_001CE010:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE028u);  if (depth < kMaxDepth) unit_006C(c, 326u, depth + 1u); else { c.pc = 0x002B3668u; return; } if (c.pc != 0x001CE028u) [[unlikely]] return; }
L_001CE028:
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE010u | kUnwind; return; } goto L_001CE010; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_001CE0BC; } }
    set32(c.r[3], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[20], 0u - 1u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
L_001CE068:
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE07Cu);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001CE07Cu) [[unlikely]] return; }
L_001CE07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE09C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE094u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CE094u) [[unlikely]] return; }
L_001CE094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001CE0A8; } }
L_001CE09C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE0AC; } }
L_001CE0A8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CE0AC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE068u | kUnwind; return; } goto L_001CE068; } }
L_001CE0BC:
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
L_001CE0E8:
    set32(c.r[29], c.r[29].w[0] - 1616u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1600u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 1552u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1536u) & ~15u, c.r[20]);
    set32(c.r[8], 0u + 4732u);
    st128((c.r[29].w[0] + 1520u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1504u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 1488u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 1472u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 1584u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 1568u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    st64((c.r[29].w[0] + 1456u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6936u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE144u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001CE144u) [[unlikely]] return; }
L_001CE144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 10768u);
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 400u), 0u);
    set32(c.r[21], c.r[29].w[0] + 1440u);
    set32(c.r[20], c.r[29].w[0] + 1444u);
    set32(c.r[2], c.r[2].w[0] + 540u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
L_001CE168:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 40u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE168u | kUnwind; return; } goto L_001CE168; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE198u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x001CE198u) [[unlikely]] return; }
L_001CE198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 1440u)));
    set32(c.r[5], c.r[5].w[0] - 6912u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1B0u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x001CE1B0u) [[unlikely]] return; }
L_001CE1B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE21C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1C8u);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x001CE1C8u) [[unlikely]] return; }
L_001CE1C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001CE2C4; } }
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_001CE1D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1F0u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x001CE1F0u) [[unlikely]] return; }
L_001CE1F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1444u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE1D8u | kUnwind; return; } goto L_001CE1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE2C4; } }
L_001CE21C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE228u);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x001CE228u) [[unlikely]] return; }
L_001CE228:
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE240u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001CE240u) [[unlikely]] return; }
L_001CE240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE24C; } }
L_001CE248:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CE24C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE264u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x001CE264u) [[unlikely]] return; }
L_001CE264:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 1440u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE278u);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x001CE278u) [[unlikely]] return; }
L_001CE278:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001CE2C4; } }
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_001CE288:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2A0u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x001CE2A0u) [[unlikely]] return; }
L_001CE2A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1444u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE288u | kUnwind; return; } goto L_001CE288; } }
L_001CE2C4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001CE348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 10768u);
    c.budget -= 3;
L_001CE2D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[30].w[0] - 7112u);
    st32((c.r[29].w[0] + 1440u), c.r[2].w[0]);
    set32(c.r[8], c.r[23].w[0] - 6936u);
    set32(c.r[9], 0u + 4800u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 1444u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE310u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CE310u) [[unlikely]] return; }
L_001CE310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1440u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 1444u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE328u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CE328u) [[unlikely]] return; }
L_001CE328:
    set32(c.r[3], ld32((c.r[19].w[0] + 400u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    st32((c.r[19].w[0] + 400u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE2D8u | kUnwind; return; } goto L_001CE2D8; } }
L_001CE348:
    ld128((c.r[29].w[0] + 1600u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 1584u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1568u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1552u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1536u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1520u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1504u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1488u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 1472u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1456u));
    set32(c.r[29], c.r[29].w[0] + 1616u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3B8u);  if (depth < kMaxDepth) unit_0060(c, 257u, depth + 1u); else { c.pc = 0x00283BE8u; return; } if (c.pc != 0x001CE3B8u) [[unlikely]] return; }
L_001CE3B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3C8u);  if (depth < kMaxDepth) unit_0060(c, 261u, depth + 1u); else { c.pc = 0x00283C28u; return; } if (c.pc != 0x001CE3C8u) [[unlikely]] return; }
L_001CE3C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3E0u);  if (depth < kMaxDepth) unit_0081(c, 187u, depth + 1u); else { c.pc = 0x00306500u; return; } if (c.pc != 0x001CE3E0u) [[unlikely]] return; }
L_001CE3E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3F4u);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x001CE3F4u) [[unlikely]] return; }
L_001CE3F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] - 3028u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE40Cu);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x001CE40Cu) [[unlikely]] return; }
L_001CE40C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20664u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE428u);  if (depth < kMaxDepth) unit_0049(c, 211u, depth + 1u); else { c.pc = 0x00226AF8u; return; } if (c.pc != 0x001CE428u) [[unlikely]] return; }
L_001CE428:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE484; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CE46C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 94ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE464u);  if (depth < kMaxDepth) unit_0032(c, 404u, depth + 1u); else { c.pc = 0x001CBEC8u; return; } if (c.pc != 0x001CE464u) [[unlikely]] return; }
L_001CE464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE484; } }
L_001CE46C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE484; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE484u);  if (depth < kMaxDepth) unit_0032(c, 396u, depth + 1u); else { c.pc = 0x001CBD48u; return; } if (c.pc != 0x001CE484u) [[unlikely]] return; }
L_001CE484:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[7], c.r[7].w[0] - 6872u);
    set32(c.r[8], 0u + 5200u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4A8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001CE4A8u) [[unlikely]] return; }
L_001CE4A8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4C4u);  if (depth < kMaxDepth) unit_0057(c, 36u, depth + 1u); else { c.pc = 0x0025CA68u; return; } if (c.pc != 0x001CE4C4u) [[unlikely]] return; }
L_001CE4C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001CE53C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE4FC; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4F4u);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001CE4F4u) [[unlikely]] return; }
L_001CE4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE53C; } }
L_001CE4FC:
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE528; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE520u);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001CE520u) [[unlikely]] return; }
L_001CE520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE53C; } }
L_001CE528:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE53Cu);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001CE53Cu) [[unlikely]] return; }
L_001CE53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CE578; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE564u);  if (depth < kMaxDepth) unit_0032(c, 393u, depth + 1u); else { c.pc = 0x001CBCF8u; return; } if (c.pc != 0x001CE564u) [[unlikely]] return; }
L_001CE564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 22504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE578u);  if (depth < kMaxDepth) unit_0088(c, 199u, depth + 1u); else { c.pc = 0x00322080u; return; } if (c.pc != 0x001CE578u) [[unlikely]] return; }
L_001CE578:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CE590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] + 31388u), 0u);
    c.budget -= 2;
L_001CE590:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE5B8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[2], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[21], 0u + 24u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[8], c.r[8].w[0] + 3720u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 3304u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], c.r[10].w[0] << 5);
    st32((c.r[6].w[0] + 16u), c.r[10].w[0]);
    set32(c.r[16], c.r[16].w[0] + 24104u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[18].d[0] | 1024ull;
    set32(c.r[4], ld32((c.r[11].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE64Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CE64Cu) [[unlikely]] return; }
L_001CE64C:
    set32(c.r[7], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 3928u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE680u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CE680u) [[unlikely]] return; }
L_001CE680:
    set32(c.r[7], ld32((c.r[20].w[0] - 3308u)));
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 4200u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE6B4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CE6B4u) [[unlikely]] return; }
L_001CE6B4:
    set32(c.r[2], ld32((c.r[20].w[0] - 3308u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st32((c.r[20].w[0] - 3308u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE6E8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 36u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + 27016u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 30;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CE770; } }
    set32(c.r[5], c.r[22].w[0] + 3u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE770u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4790u; return; } if (c.pc != 0x001CE770u) [[unlikely]] return; }
L_001CE770:
    set32(c.r[5], c.r[23].w[0] - 1u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE78Cu);  if (depth < kMaxDepth) unit_0008(c, 34u, depth + 1u); else { c.pc = 0x00120430u; return; } if (c.pc != 0x001CE78Cu) [[unlikely]] return; }
L_001CE78C:
    c.r[2].d[0] = c.r[23].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE81C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_001CE7B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE7F0; } }
L_001CE7B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_001CE81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE7FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE7F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 30386u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[22].d[0];  if (t) { goto L_001CE81C; } }
L_001CE7F0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE81C; } }
L_001CE7FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE81C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 30386u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[22].d[0];
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_001CE81C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CE864; } }
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], 0u + 48u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[17].w[0] + 27016u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CE864; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE890; } }
L_001CE864:
    set32(c.r[3], 0u + 36u);
    set32(c.r[4], 0u + 48u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + 27016u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 11;
L_001CE890:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], 0u + 48u);
    set32(c.r[5], ld32((c.r[18].w[0] + 31384u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 20u);
    c.r[6].d[0] = c.r[21].d[0] | 1024ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[17], c.r[17].w[0] + 27016u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 2096u);
    set32(c.r[19], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[9], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[23].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1672u);
    st32((c.r[4].w[0] + 16u), c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE90Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CE90Cu) [[unlikely]] return; }
L_001CE90C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 652u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] - 648u);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[23].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 31384u)));
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] - 3u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 24u), c.r[22].w[0]);
    st32((c.r[18].w[0] + 31384u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE99C; } }
L_001CE994:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    if (c.r[23].d[0] != 0) c.r[6].d[0] = c.r[6].d[0];
    c.budget -= 2;
L_001CE99C:
    set32(c.r[7], ld32((c.r[30].w[0] - 652u)));
    set32(c.r[2], c.r[8].w[0] - 648u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] - 7296u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9CCu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CE9CCu) [[unlikely]] return; }
L_001CE9CC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 3308u)));
    set32(c.r[18], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[19], c.r[22].w[0] << 5);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[3].w[0] + 24104u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[16].w[0] - 3304u);
    set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[30].w[0] - 652u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 3824u);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] - 652u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[21].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA44u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CEA44u) [[unlikely]] return; }
L_001CEA44:
    set32(c.r[7], ld32((c.r[17].w[0] - 3308u)));
    set32(c.r[2], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 3984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA78u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CEA78u) [[unlikely]] return; }
L_001CEA78:
    set32(c.r[7], ld32((c.r[17].w[0] - 3308u)));
    set32(c.r[2], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 4600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAACu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CEAACu) [[unlikely]] return; }
L_001CEAAC:
    set32(c.r[2], ld32((c.r[17].w[0] - 3308u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] - 3308u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[23].d[0] != c.r[3].d[0];  if (t) { goto L_001CEB00; } }
    set32(c.r[5], c.r[20].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAF8u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CEAF8u) [[unlikely]] return; }
L_001CEAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB34; } }
L_001CEB00:
    set32(c.r[5], c.r[20].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB34u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CEB34u) [[unlikely]] return; }
L_001CEB34:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[6].w[0] - 10u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001CEB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 31848u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[22].w[0]);
    c.budget -= 5;
L_001CEB58:
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
L_001CEB90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 131u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CEBD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 2800u);
    st32((c.r[3].w[0] - 26384u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEBDC; } }
L_001CEBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[2].w[0] - 26384u), 0u);
    c.budget -= 2;
L_001CEBDC:
    set32(c.r[18], ld32((c.r[2].w[0] - 26384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEBE8u);  if (depth < kMaxDepth) unit_006B(c, 193u, depth + 1u); else { c.pc = 0x002AF790u; return; } if (c.pc != 0x001CEBE8u) [[unlikely]] return; }
L_001CEBE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC00u);  if (depth < kMaxDepth) unit_006B(c, 96u, depth + 1u); else { c.pc = 0x002AE290u; return; } if (c.pc != 0x001CEC00u) [[unlikely]] return; }
L_001CEC00:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC1Cu);  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x001CEC1Cu) [[unlikely]] return; }
L_001CEC1C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEC60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 30168u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 6;
L_001CEC48:
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEC48u | kUnwind; return; } goto L_001CEC48; } }
L_001CEC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10156u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CECA4; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 7112u);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] - 6680u);
    set32(c.r[8], 0u + 7312u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CECA4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001CECA4u) [[unlikely]] return; }
L_001CECA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CECC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[10], 0u + 92u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    set32(c.r[19], 0u + 24u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[16], c.r[16].w[0] - 3304u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 5864u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 128u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 16u), c.r[10].w[0]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[9].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED44u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CED44u) [[unlikely]] return; }
L_001CED44:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5912u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 129u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED74u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CED74u) [[unlikely]] return; }
L_001CED74:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5960u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 130u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDA4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CEDA4u) [[unlikely]] return; }
L_001CEDA4:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5232u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 131u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDD4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CEDD4u) [[unlikely]] return; }
L_001CEDD4:
    set32(c.r[2], ld32((c.r[18].w[0] - 3308u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st32((c.r[18].w[0] - 3308u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEE00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE4Cu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CEE4Cu) [[unlikely]] return; }
L_001CEE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] - 20128u), 0u);
    st32((c.r[20].w[0] + 1592u), 0u);
    st32((c.r[21].w[0] + 31384u), 0u);
    st32((c.r[22].w[0] - 652u), 0u);
    st32((c.r[23].w[0] - 29288u), 0u);
    st32((c.r[2].w[0] - 3308u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE74u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CEE74u) [[unlikely]] return; }
L_001CEE74:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE80u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001CEE80u) [[unlikely]] return; }
L_001CEE80:
    set32(c.r[4], ld32((c.r[2].w[0] + 204u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20628u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE98u);  if (depth < kMaxDepth) unit_007D(c, 186u, depth + 1u); else { c.pc = 0x002F6BA0u; return; } if (c.pc != 0x001CEE98u) [[unlikely]] return; }
L_001CEE98:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEB0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001CEEB0u) [[unlikely]] return; }
L_001CEEB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEC4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001CEEC4u) [[unlikely]] return; }
L_001CEEC4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEE8u);  if (depth < kMaxDepth) unit_0033(c, 189u, depth + 1u); else { c.pc = 0x001CE6E8u; return; } if (c.pc != 0x001CEEE8u) [[unlikely]] return; }
L_001CEEE8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 9289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEFCu);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CEEFCu) [[unlikely]] return; }
L_001CEEFC:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF08u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001CEF08u) [[unlikely]] return; }
L_001CEF08:
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20632u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF20u);  if (depth < kMaxDepth) unit_007D(c, 186u, depth + 1u); else { c.pc = 0x002F6BA0u; return; } if (c.pc != 0x001CEF20u) [[unlikely]] return; }
L_001CEF20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF30u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001CEF30u) [[unlikely]] return; }
L_001CEF30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF44u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001CEF44u) [[unlikely]] return; }
L_001CEF44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF68u);  if (depth < kMaxDepth) unit_0033(c, 189u, depth + 1u); else { c.pc = 0x001CE6E8u; return; } if (c.pc != 0x001CEF68u) [[unlikely]] return; }
L_001CEF68:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 9289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF78u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CEF78u) [[unlikely]] return; }
L_001CEF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF80u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CEF80u) [[unlikely]] return; }
L_001CEF80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF8Cu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CEF8Cu) [[unlikely]] return; }
L_001CEF8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[19].w[0] - 20128u), 0u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[20].w[0] + 1592u), 0u);
    st32((c.r[21].w[0] + 31384u), 0u);
    st32((c.r[22].w[0] - 652u), 0u);
    st32((c.r[23].w[0] - 29288u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFB0u);  if (depth < kMaxDepth) unit_006B(c, 51u, depth + 1u); else { c.pc = 0x002ADAC0u; return; } if (c.pc != 0x001CEFB0u) [[unlikely]] return; }
L_001CEFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20628u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 13248u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFD0u);  if (depth < kMaxDepth) unit_0049(c, 150u, depth + 1u); else { c.pc = 0x00226058u; return; } if (c.pc != 0x001CEFD0u) [[unlikely]] return; }
L_001CEFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20632u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFE4u);  if (depth < kMaxDepth) unit_0049(c, 150u, depth + 1u); else { c.pc = 0x00226058u; return; } if (c.pc != 0x001CEFE4u) [[unlikely]] return; }
L_001CEFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFECu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001CEFECu) [[unlikely]] return; }
L_001CEFEC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFF8u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CEFF8u) [[unlikely]] return; }
L_001CEFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF004u);  if (depth < kMaxDepth) unit_0097(c, 251u, depth + 1u); else { c.pc = 0x0035EA78u; return; } if (c.pc != 0x001CF004u) [[unlikely]] return; }
L_001CF004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF00Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CF00Cu) [[unlikely]] return; }
L_001CF00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF014u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CF014u) [[unlikely]] return; }
L_001CF014:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF020u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CF020u) [[unlikely]] return; }
L_001CF020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[19].w[0] - 20128u), 0u);
    st32((c.r[20].w[0] + 1592u), 0u);
    st32((c.r[21].w[0] + 31384u), 0u);
    st32((c.r[22].w[0] - 652u), 0u);
    st32((c.r[23].w[0] - 29288u), 0u);
    st32((c.r[2].w[0] - 3308u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF044u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001CF044u) [[unlikely]] return; }
L_001CF044:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF050u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x001CF050u) [[unlikely]] return; }
L_001CF050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF05Cu);  if (depth < kMaxDepth) unit_0097(c, 251u, depth + 1u); else { c.pc = 0x0035EA78u; return; } if (c.pc != 0x001CF05Cu) [[unlikely]] return; }
L_001CF05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF064u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CF064u) [[unlikely]] return; }
L_001CF064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF06Cu);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CF06Cu) [[unlikely]] return; }
L_001CF06C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF078u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CF078u) [[unlikely]] return; }
L_001CF078:
    st32((c.r[19].w[0] - 20128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[20].w[0] + 1592u), 0u);
    st32((c.r[21].w[0] + 31384u), 0u);
    st32((c.r[22].w[0] - 652u), 0u);
    st32((c.r[23].w[0] - 29288u), 0u);
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
    st32((c.r[2].w[0] - 3308u), 0u);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CF0C8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF104u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001CF104u) [[unlikely]] return; }
L_001CF104:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[20], c.r[3].w[0] + 27016u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20640u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CF150; } }
    set32(c.r[5], c.r[19].w[0] + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF150u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4790u; return; } if (c.pc != 0x001CF150u) [[unlikely]] return; }
L_001CF150:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF168u);  if (depth < kMaxDepth) unit_0008(c, 55u, depth + 1u); else { c.pc = 0x00120988u; return; } if (c.pc != 0x001CF168u) [[unlikely]] return; }
L_001CF168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[5], ld32((c.r[2].w[0] + 31384u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[8], 0u + 3u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2096u);
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[10], c.r[20].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[7].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[16], ld32((c.r[10].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1D4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CF1D4u) [[unlikely]] return; }
L_001CF1D4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF1FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1F0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001CF1F0u) [[unlikely]] return; }
L_001CF1F0:
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF200; } }
L_001CF1FC:
    c.r[6].d[0] = c.r[17].d[0] | 1024ull;
    c.budget -= 1;
L_001CF200:
    set32(c.r[7], ld32((c.r[22].w[0] + 31384u)));
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[23].w[0] - 2096u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1240u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF23Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CF23Cu) [[unlikely]] return; }
L_001CF23C:
    set32(c.r[5], 0u + 48u);
    set32(c.r[2], ld32((c.r[16].w[0] - 652u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[30].w[0] + 27016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[22].w[0] + 31384u)));
    set32(c.r[3], c.r[3].w[0] - 648u);
    set32(c.r[8], c.r[18].w[0] + 10u);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0])));
    set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[9].w[0]), c.r[15].w[0]);
    c.r[13].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[10].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[14], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[11].w[0] + 20u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[12].w[0] + 24u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[14].d[0] + 0ull;
    st32((c.r[13].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[14].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[22].w[0] + 31384u), c.r[7].w[0]);
    set32(c.r[6], 0u + 4u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[15].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2D8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CF2D8u) [[unlikely]] return; }
L_001CF2D8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF300; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2F4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001CF2F4u) [[unlikely]] return; }
L_001CF2F4:
    c.r[6].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF304; } }
L_001CF300:
    c.r[6].d[0] = c.r[17].d[0] | 1024ull;
    c.budget -= 1;
L_001CF304:
    set32(c.r[7], ld32((c.r[20].w[0] - 652u)));
    set32(c.r[2], c.r[23].w[0] - 648u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + 2280u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF334u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CF334u) [[unlikely]] return; }
L_001CF334:
    set32(c.r[2], ld32((c.r[20].w[0] - 652u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 31392u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] - 652u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001CF4C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CF3E4; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF378; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CF398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF4C0; } }
L_001CF378:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CF430; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CF47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF4C0; } }
L_001CF398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 10u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF3DCu);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF3DCu) [[unlikely]] return; }
L_001CF3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF4C0; } }
L_001CF3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF428u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF428u) [[unlikely]] return; }
L_001CF428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF4C0; } }
L_001CF430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF474u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF474u) [[unlikely]] return; }
L_001CF474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF4C0; } }
L_001CF47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4C0u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF4C0u) [[unlikely]] return; }
L_001CF4C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4E0u);  if (depth < kMaxDepth) unit_0033(c, 185u, depth + 1u); else { c.pc = 0x001CE5B8u; return; } if (c.pc != 0x001CF4E0u) [[unlikely]] return; }
L_001CF4E0:
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
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CF518:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF594; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF568; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5B0; } }
L_001CF568:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF5A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5B0; } }
L_001CF588:
    set32(c.r[17], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5B0; } }
L_001CF594:
    set32(c.r[17], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5B0; } }
L_001CF5A0:
    set32(c.r[17], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5B0; } }
L_001CF5AC:
    set32(c.r[17], 0u + 13u);
    c.budget -= 1;
L_001CF5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22920u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5C8u);  if (depth < kMaxDepth) unit_0086(c, 280u, depth + 1u); else { c.pc = 0x0031B7E0u; return; } if (c.pc != 0x001CF5C8u) [[unlikely]] return; }
L_001CF5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5D8u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001CF5D8u) [[unlikely]] return; }
L_001CF5D8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001CF620; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5F0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CF5F0u) [[unlikely]] return; }
L_001CF5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    c.budget -= 12;
L_001CF620:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF62Cu);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001CF62Cu) [[unlikely]] return; }
L_001CF62C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[20].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 24104u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF66Cu);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF66Cu) [[unlikely]] return; }
L_001CF66C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001CF69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF67Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CF67Cu) [[unlikely]] return; }
L_001CF67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF684u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CF684u) [[unlikely]] return; }
L_001CF684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF69C; } }
L_001CF68C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF69Cu);  if (depth < kMaxDepth) unit_0086(c, 281u, depth + 1u); else { c.pc = 0x0031B808u; return; } if (c.pc != 0x001CF69Cu) [[unlikely]] return; }
L_001CF69C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CF6C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF73C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF710; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF758; } }
L_001CF710:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF748; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CF754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF758; } }
L_001CF730:
    set32(c.r[17], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF758; } }
L_001CF73C:
    set32(c.r[17], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF758; } }
L_001CF748:
    set32(c.r[17], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF758; } }
L_001CF754:
    set32(c.r[17], 0u + 13u);
    c.budget -= 1;
L_001CF758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22920u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF770u);  if (depth < kMaxDepth) unit_0086(c, 299u, depth + 1u); else { c.pc = 0x0031BAF8u; return; } if (c.pc != 0x001CF770u) [[unlikely]] return; }
L_001CF770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF864; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF788u);  if (depth < kMaxDepth) unit_0086(c, 280u, depth + 1u); else { c.pc = 0x0031B7E0u; return; } if (c.pc != 0x001CF788u) [[unlikely]] return; }
L_001CF788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF84C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF798u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001CF798u) [[unlikely]] return; }
L_001CF798:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001CF7E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7B0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CF7B0u) [[unlikely]] return; }
L_001CF7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    c.budget -= 12;
L_001CF7E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7ECu);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001CF7ECu) [[unlikely]] return; }
L_001CF7EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[20].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 24104u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF82Cu);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001CF82Cu) [[unlikely]] return; }
L_001CF82C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001CF890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF83Cu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CF83Cu) [[unlikely]] return; }
L_001CF83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF844u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CF844u) [[unlikely]] return; }
L_001CF844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF890; } }
L_001CF84C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF85Cu);  if (depth < kMaxDepth) unit_0086(c, 281u, depth + 1u); else { c.pc = 0x0031B808u; return; } if (c.pc != 0x001CF85Cu) [[unlikely]] return; }
L_001CF85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF890; } }
L_001CF864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF874u);  if (depth < kMaxDepth) unit_0086(c, 271u, depth + 1u); else { c.pc = 0x0031B5E0u; return; } if (c.pc != 0x001CF874u) [[unlikely]] return; }
L_001CF874:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CF890; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF890u);  if (depth < kMaxDepth) unit_0086(c, 281u, depth + 1u); else { c.pc = 0x0031B808u; return; } if (c.pc != 0x001CF890u) [[unlikely]] return; }
L_001CF890:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CF8B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8D0u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001CF8D0u) [[unlikely]] return; }
L_001CF8D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] - 20128u), 0u);
    st32((c.r[2].w[0] - 3308u), 0u);
    st32((c.r[4].w[0] + 1592u), 0u);
    st32((c.r[5].w[0] + 31384u), 0u);
    st32((c.r[6].w[0] - 652u), 0u);
    st32((c.r[7].w[0] - 29288u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF908u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001CF908u) [[unlikely]] return; }
L_001CF908:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CF9E0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF938; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CF958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFA80; } }
L_001CF938:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CF99C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CFA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFA80; } }
L_001CF958:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 1288u);
    set32(c.r[4], 0u + 44u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF984u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CF984u) [[unlikely]] return; }
L_001CF984:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 824u);
    set32(c.r[4], 0u + 46u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFA60; } }
L_001CF99C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 1288u);
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9C8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CF9C8u) [[unlikely]] return; }
L_001CF9C8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 824u);
    set32(c.r[4], 0u + 47u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFA60; } }
L_001CF9E0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 1288u);
    set32(c.r[4], 0u + 41u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA0Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CFA0Cu) [[unlikely]] return; }
L_001CFA0C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 824u);
    set32(c.r[4], 0u + 48u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFA60; } }
L_001CFA24:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 1288u);
    set32(c.r[4], 0u + 42u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA50u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CFA50u) [[unlikely]] return; }
L_001CFA50:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 824u);
    set32(c.r[4], 0u + 49u);
    c.budget -= 4;
L_001CFA60:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA78u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CFA78u) [[unlikely]] return; }
L_001CFA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFAD4; } }
L_001CFA80:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 1288u);
    set32(c.r[4], 0u + 43u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAACu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CFAACu) [[unlikely]] return; }
L_001CFAAC:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] - 824u);
    set32(c.r[4], 0u + 45u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAD4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001CFAD4u) [[unlikely]] return; }
L_001CFAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFADCu);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001CFADCu) [[unlikely]] return; }
L_001CFADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAE4u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001CFAE4u) [[unlikely]] return; }
L_001CFAE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFAF8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 9668u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[16].w[0] - 7112u);
    set32(c.r[20], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] - 6624u);
    set32(c.r[4], ld32((c.r[19].w[0] + 18704u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[5], c.r[2].w[0] << 2);
    st32((c.r[18].w[0] + 31396u), c.r[2].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB7Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CFB7Cu) [[unlikely]] return; }
L_001CFB7C:
    set32(c.r[5], ld32((c.r[18].w[0] + 31396u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 18704u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[22].w[0] + 14184u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 9669u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBA4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CFBA4u) [[unlikely]] return; }
L_001CFBA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 31396u)));
    st32((c.r[3].w[0] + 14188u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001CFC74; } }
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001CFBC0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[17], c.r[18].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBD8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CFBD8u) [[unlikely]] return; }
L_001CFBD8:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 14188u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC0Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CFC0Cu) [[unlikely]] return; }
L_001CFC0C:
    set32(c.r[16], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18704u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[23].w[0] - 7112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[30].w[0] - 6624u);
    set32(c.r[9], 0u + 9682u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC34u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CFC34u) [[unlikely]] return; }
L_001CFC34:
    set32(c.r[3], ld32((c.r[19].w[0] + 14184u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 14184u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC60u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x001CFC60u) [[unlikely]] return; }
L_001CFC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 31396u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CFBC0u | kUnwind; return; } goto L_001CFBC0; } }
L_001CFC74:
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[6], c.r[23].w[0] - 7112u);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[7], c.r[30].w[0] - 6624u);
    set32(c.r[8], 0u + 9689u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC90u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001CFC90u) [[unlikely]] return; }
L_001CFC90:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
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
L_001CFCC8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] - 7112u);
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] - 6600u);
    set32(c.r[5], ld32((c.r[2].w[0] + 31396u)));
    set32(c.r[9], 0u + 9707u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 18704u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[16].w[0] + 31400u), c.r[2].w[0]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD50u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CFD50u) [[unlikely]] return; }
L_001CFD50:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 31400u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 14636u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001CFDEC; } }
L_001CFD68:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD80u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CFD80u) [[unlikely]] return; }
L_001CFD80:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[22].w[0] - 7112u);
    set32(c.r[4], ld32((c.r[30].w[0] + 18704u)));
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[21].w[0] - 6600u);
    set32(c.r[9], 0u + 9718u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDA8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CFDA8u) [[unlikely]] return; }
L_001CFDA8:
    set32(c.r[3], ld32((c.r[19].w[0] + 14636u)));
    set32(c.r[7], c.r[18].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 14636u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDDCu);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x001CFDDCu) [[unlikely]] return; }
L_001CFDDC:
    set32(c.r[3], ld32((c.r[23].w[0] + 31400u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CFD68u | kUnwind; return; } goto L_001CFD68; } }
L_001CFDEC:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], c.r[22].w[0] - 7112u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[21].w[0] - 6600u);
    set32(c.r[8], 0u + 9725u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE08u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x001CFE08u) [[unlikely]] return; }
L_001CFE08:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
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
L_001CFE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CFE9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CFE9C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] - 3320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE78u);  if (depth < kMaxDepth) unit_0061(c, 23u, depth + 1u); else { c.pc = 0x002843F0u; return; } if (c.pc != 0x001CFE78u) [[unlikely]] return; }
L_001CFE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[17].w[0] - 3312u);
    set32(c.r[3], c.r[3].w[0] - 6544u);
    st32((c.r[16].w[0] - 3320u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE90u);  if (depth < kMaxDepth) unit_007D(c, 6u, depth + 1u); else { c.pc = 0x002F4060u; return; } if (c.pc != 0x001CFE90u) [[unlikely]] return; }
L_001CFE90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 6576u);
    st32((c.r[17].w[0] - 3312u), c.r[3].w[0]);
    c.budget -= 3;
L_001CFE9C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFEB8:
    set32(c.r[2], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27016u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF14u);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CFF14u) [[unlikely]] return; }
L_001CFF14:
    set32(c.r[4], 0u + 268u);
    set32(c.r[16], c.r[16].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CFFC8; } }
    set32(c.r[16], 0u + 13248u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF8Cu);  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001CFF8Cu) [[unlikely]] return; }
L_001CFF8C:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] - 13248u);
    set32(c.r[5], 0u + 24u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 10400u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 13228u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
L_001CFFC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFFE8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.budget -= 6;
    [[clang::musttail]] return unit_0034(c, 1u, depth);
}

}
