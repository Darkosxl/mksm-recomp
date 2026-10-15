#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0073[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4,
    0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 85, 0, 0,
    0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0,
    0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
};

void unit_0073(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002CC000;
    case 2u: goto L_002CC048;
    case 3u: goto L_002CC068;
    case 4u: goto L_002CC07C;
    case 5u: goto L_002CC084;
    case 6u: goto L_002CC09C;
    case 7u: goto L_002CC0C4;
    case 8u: goto L_002CC0DC;
    case 9u: goto L_002CC110;
    case 10u: goto L_002CC19C;
    case 11u: goto L_002CC1CC;
    case 12u: goto L_002CC208;
    case 13u: goto L_002CC21C;
    case 14u: goto L_002CC304;
    case 15u: goto L_002CC318;
    case 16u: goto L_002CC320;
    case 17u: goto L_002CC338;
    case 18u: goto L_002CC380;
    case 19u: goto L_002CC3F4;
    case 20u: goto L_002CC43C;
    case 21u: goto L_002CC488;
    case 22u: goto L_002CC49C;
    case 23u: goto L_002CC4E8;
    case 24u: goto L_002CC59C;
    case 25u: goto L_002CC5AC;
    case 26u: goto L_002CC5E4;
    case 27u: goto L_002CC620;
    case 28u: goto L_002CC65C;
    case 29u: goto L_002CC694;
    case 30u: goto L_002CC70C;
    case 31u: goto L_002CC750;
    case 32u: goto L_002CC774;
    case 33u: goto L_002CC798;
    case 34u: goto L_002CC818;
    case 35u: goto L_002CC878;
    case 36u: goto L_002CC884;
    case 37u: goto L_002CC8A0;
    case 38u: goto L_002CC8D4;
    case 39u: goto L_002CC944;
    case 40u: goto L_002CCAFC;
    case 41u: goto L_002CCB84;
    case 42u: goto L_002CCB98;
    case 43u: goto L_002CCBB0;
    case 44u: goto L_002CCBC4;
    case 45u: goto L_002CCCEC;
    case 46u: goto L_002CCD98;
    case 47u: goto L_002CCEA4;
    case 48u: goto L_002CCF04;
    case 49u: goto L_002CCFE4;
    case 50u: goto L_002CCFF8;
    case 51u: goto L_002CD030;
    case 52u: goto L_002CD0D0;
    case 53u: goto L_002CD134;
    case 54u: goto L_002CD164;
    case 55u: goto L_002CD1B4;
    case 56u: goto L_002CD208;
    case 57u: goto L_002CD250;
    case 58u: goto L_002CD308;
    case 59u: goto L_002CD320;
    case 60u: goto L_002CD350;
    case 61u: goto L_002CD414;
    case 62u: goto L_002CD4A0;
    case 63u: goto L_002CD4E0;
    case 64u: goto L_002CD4FC;
    case 65u: goto L_002CD558;
    case 66u: goto L_002CD588;
    case 67u: goto L_002CD5A0;
    case 68u: goto L_002CD5B0;
    case 69u: goto L_002CD5D0;
    case 70u: goto L_002CD5D8;
    case 71u: goto L_002CD62C;
    case 72u: goto L_002CD634;
    case 73u: goto L_002CD668;
    case 74u: goto L_002CD6C0;
    case 75u: goto L_002CD700;
    case 76u: goto L_002CD744;
    case 77u: goto L_002CD7EC;
    case 78u: goto L_002CD830;
    case 79u: goto L_002CD884;
    case 80u: goto L_002CD96C;
    case 81u: goto L_002CD9D8;
    case 82u: goto L_002CDA28;
    case 83u: goto L_002CDA64;
    case 84u: goto L_002CDA68;
    case 85u: goto L_002CDA74;
    case 86u: goto L_002CDA84;
    case 87u: goto L_002CDA8C;
    case 88u: goto L_002CDA94;
    case 89u: goto L_002CDB50;
    case 90u: goto L_002CDB64;
    case 91u: goto L_002CDB74;
    case 92u: goto L_002CDB98;
    case 93u: goto L_002CDBAC;
    case 94u: goto L_002CDBBC;
    case 95u: goto L_002CDBC4;
    case 96u: goto L_002CDBE8;
    case 97u: goto L_002CDC18;
    case 98u: goto L_002CDC28;
    case 99u: goto L_002CDC44;
    case 100u: goto L_002CDC4C;
    case 101u: goto L_002CDC68;
    case 102u: goto L_002CDC70;
    case 103u: goto L_002CDC8C;
    case 104u: goto L_002CDC94;
    case 105u: goto L_002CDCB0;
    case 106u: goto L_002CDCB8;
    case 107u: goto L_002CDCD4;
    case 108u: goto L_002CDCDC;
    case 109u: goto L_002CDCF8;
    case 110u: goto L_002CDD08;
    case 111u: goto L_002CDD28;
    case 112u: goto L_002CDD38;
    case 113u: goto L_002CDD48;
    case 114u: goto L_002CDD60;
    case 115u: goto L_002CDD70;
    case 116u: goto L_002CDD98;
    case 117u: goto L_002CDDA8;
    case 118u: goto L_002CDDB8;
    case 119u: goto L_002CDE2C;
    case 120u: goto L_002CDE5C;
    case 121u: goto L_002CDE70;
    case 122u: goto L_002CDEA0;
    case 123u: goto L_002CDEB8;
    case 124u: goto L_002CDF18;
    case 125u: goto L_002CDF50;
    case 126u: goto L_002CDF58;
    case 127u: goto L_002CDFD0;
    case 128u: goto L_002CDFDC;
    case 129u: goto L_002CE008;
    case 130u: goto L_002CE050;
    case 131u: goto L_002CE0B0;
    case 132u: goto L_002CE108;
    case 133u: goto L_002CE15C;
    case 134u: goto L_002CE188;
    case 135u: goto L_002CE1E0;
    case 136u: goto L_002CE240;
    case 137u: goto L_002CE260;
    case 138u: goto L_002CE298;
    case 139u: goto L_002CE2DC;
    case 140u: goto L_002CE2F8;
    case 141u: goto L_002CE318;
    case 142u: goto L_002CE36C;
    case 143u: goto L_002CE384;
    case 144u: goto L_002CE474;
    case 145u: goto L_002CE488;
    case 146u: goto L_002CE490;
    case 147u: goto L_002CE4A8;
    case 148u: goto L_002CE4F8;
    case 149u: goto L_002CE518;
    case 150u: goto L_002CE53C;
    case 151u: goto L_002CE568;
    case 152u: goto L_002CE620;
    case 153u: goto L_002CE638;
    case 154u: goto L_002CE650;
    case 155u: goto L_002CE660;
    case 156u: goto L_002CE680;
    case 157u: goto L_002CE690;
    case 158u: goto L_002CE6A0;
    case 159u: goto L_002CE728;
    case 160u: goto L_002CE73C;
    case 161u: goto L_002CE758;
    case 162u: goto L_002CE798;
    case 163u: goto L_002CE7D0;
    case 164u: goto L_002CE7E4;
    case 165u: goto L_002CE800;
    case 166u: goto L_002CE820;
    case 167u: goto L_002CE864;
    case 168u: goto L_002CE880;
    case 169u: goto L_002CE8C4;
    case 170u: goto L_002CE8E0;
    case 171u: goto L_002CE930;
    case 172u: goto L_002CE9A8;
    case 173u: goto L_002CE9D4;
    case 174u: goto L_002CE9E0;
    case 175u: goto L_002CE9F0;
    case 176u: goto L_002CEA08;
    case 177u: goto L_002CEA38;
    case 178u: goto L_002CEA68;
    case 179u: goto L_002CEA90;
    case 180u: goto L_002CEA9C;
    case 181u: goto L_002CEAD0;
    case 182u: goto L_002CEB38;
    case 183u: goto L_002CEBA8;
    case 184u: goto L_002CEBC4;
    case 185u: goto L_002CEBD8;
    case 186u: goto L_002CEBF4;
    case 187u: goto L_002CEC08;
    case 188u: goto L_002CEC68;
    case 189u: goto L_002CECE0;
    case 190u: goto L_002CED38;
    case 191u: goto L_002CED60;
    case 192u: goto L_002CEDA0;
    case 193u: goto L_002CEDB0;
    case 194u: goto L_002CEDC0;
    case 195u: goto L_002CEDD0;
    case 196u: goto L_002CEDF8;
    case 197u: goto L_002CEE28;
    case 198u: goto L_002CEE40;
    case 199u: goto L_002CEE78;
    case 200u: goto L_002CEEB4;
    case 201u: goto L_002CEEC8;
    case 202u: goto L_002CEED8;
    case 203u: goto L_002CEEF8;
    case 204u: goto L_002CEF1C;
    case 205u: goto L_002CEF34;
    case 206u: goto L_002CEF50;
    case 207u: goto L_002CEF70;
    case 208u: goto L_002CEF94;
    case 209u: goto L_002CEFAC;
    case 210u: goto L_002CEFC8;
    case 211u: goto L_002CEFE8;
    case 212u: goto L_002CF03C;
    case 213u: goto L_002CF050;
    case 214u: goto L_002CF070;
    case 215u: goto L_002CF080;
    case 216u: goto L_002CF0E4;
    case 217u: goto L_002CF120;
    case 218u: goto L_002CF190;
    case 219u: goto L_002CF1A4;
    case 220u: goto L_002CF1C4;
    case 221u: goto L_002CF1D4;
    case 222u: goto L_002CF22C;
    case 223u: goto L_002CF268;
    case 224u: goto L_002CF278;
    case 225u: goto L_002CF280;
    case 226u: goto L_002CF288;
    case 227u: goto L_002CF2B4;
    case 228u: goto L_002CF2D0;
    case 229u: goto L_002CF348;
    case 230u: goto L_002CF380;
    case 231u: goto L_002CF39C;
    case 232u: goto L_002CF3B8;
    case 233u: goto L_002CF3D0;
    case 234u: goto L_002CF408;
    case 235u: goto L_002CF480;
    case 236u: goto L_002CF4C8;
    case 237u: goto L_002CF518;
    case 238u: goto L_002CF55C;
    case 239u: goto L_002CF580;
    case 240u: goto L_002CF5B8;
    case 241u: goto L_002CF664;
    case 242u: goto L_002CF6A8;
    case 243u: goto L_002CF6EC;
    case 244u: goto L_002CF730;
    case 245u: goto L_002CF780;
    case 246u: goto L_002CF7D0;
    case 247u: goto L_002CF7EC;
    case 248u: goto L_002CF810;
    case 249u: goto L_002CF820;
    case 250u: goto L_002CF830;
    case 251u: goto L_002CF840;
    case 252u: goto L_002CF860;
    case 253u: goto L_002CF870;
    case 254u: goto L_002CF8C4;
    case 255u: goto L_002CF990;
    case 256u: goto L_002CFA6C;
    case 257u: goto L_002CFA80;
    case 258u: goto L_002CFA94;
    case 259u: goto L_002CFAC8;
    case 260u: goto L_002CFB38;
    case 261u: goto L_002CFB64;
    case 262u: goto L_002CFBA0;
    case 263u: goto L_002CFBB8;
    case 264u: goto L_002CFBD0;
    case 265u: goto L_002CFBE0;
    case 266u: goto L_002CFBF8;
    case 267u: goto L_002CFC08;
    case 268u: goto L_002CFC9C;
    case 269u: goto L_002CFCE4;
    case 270u: goto L_002CFD1C;
    case 271u: goto L_002CFD90;
    case 272u: goto L_002CFDD8;
    case 273u: goto L_002CFDF0;
    case 274u: goto L_002CFE00;
    case 275u: goto L_002CFE18;
    case 276u: goto L_002CFE3C;
    case 277u: goto L_002CFE58;
    case 278u: goto L_002CFEBC;
    case 279u: goto L_002CFED8;
    case 280u: goto L_002CFEEC;
    case 281u: goto L_002CFF08;
    case 282u: goto L_002CFF20;
    case 283u: goto L_002CFF84;
    case 284u: goto L_002CFFA0;
    case 285u: goto L_002CFFB4;
    case 286u: goto L_002CFFD0;
    case 287u: goto L_002CFFE8;
    default: bad_entry(c, 0x002CC000u); return;
    }
L_002CC000:
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC044; } }
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC044; } }
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[21].w[0] + 192u), c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC04C; } }
L_002CC044:
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 1;
L_002CC048:
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 1;
L_002CC04C:
    st32((c.r[29].w[0] + 212u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[18].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC068u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002CC068u) [[unlikely]] return; }
L_002CC068:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[18].w[0] + 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC07Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002CC07Cu) [[unlikely]] return; }
L_002CC07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC084u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CC084u) [[unlikely]] return; }
L_002CC084:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC09Cu);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CC09Cu) [[unlikely]] return; }
L_002CC09C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002CC0C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC0C4; } }
    c.f[0] = c.r[20].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 236u), c.f[0]);
    c.budget -= 4;
L_002CC0C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 304u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 10u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBF40u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 283u, depth); } }
L_002CC0DC:
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.f[20] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[29], c.r[29].w[0] + 464u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC110:
    set32(c.r[29], c.r[29].w[0] - 384u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 6;
    c.r[3].d[0] = c.r[3].d[0] | 63ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[16].w[0] + 176u), c.r[2].d[0]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0] + 72u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 388u)));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC1B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC19Cu);  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CBD68u; return; } if (c.pc != 0x002CC19Cu) [[unlikely]] return; }
L_002CC19C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 18;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC1CC; } }
L_002CC1B8:
    st32((c.r[16].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1CCu);  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CBD68u; return; } if (c.pc != 0x002CC1CCu) [[unlikely]] return; }
L_002CC1CC:
    set32(c.r[17], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002CC360; } }
    c.f[12] = 0u;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    set32(c.r[19], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC208u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002CC208u) [[unlikely]] return; }
L_002CC208:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC21Cu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CC21Cu) [[unlikely]] return; }
L_002CC21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC360; } }
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[1] = c.f[1] & fp::kAbs;
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC290; } }
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC290; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[18].w[0] + 188u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC2E4; } }
L_002CC290:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC2E0; } }
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC2E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC2E8; } }
L_002CC2E0:
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 1;
L_002CC2E4:
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 1;
L_002CC2E8:
    st32((c.r[29].w[0] + 212u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC304u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002CC304u) [[unlikely]] return; }
L_002CC304:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC318u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002CC318u) [[unlikely]] return; }
L_002CC318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC320u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CC320u) [[unlikely]] return; }
L_002CC320:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC338u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CC338u) [[unlikely]] return; }
L_002CC338:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CC360; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC360; } }
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 236u), c.f[0]);
    c.budget -= 4;
L_002CC360:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC380:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC4A4; } }
    set32(c.r[19], c.r[4].w[0] + 13248u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC4A4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[6], ld32((c.r[17].w[0] - 14152u)));
    set32(c.r[17], c.r[17].w[0] - 14152u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3F4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CC3F4u) [[unlikely]] return; }
L_002CC3F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 268u)));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), c.f[20]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC43Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CC43Cu) [[unlikely]] return; }
L_002CC43C:
    c.f[3] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[20]);
    st32((c.r[29].w[0] + 28u), c.f[20]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC488u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002CC488u) [[unlikely]] return; }
L_002CC488:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC49Cu);  if (depth < kMaxDepth) unit_0045(c, 8u, depth + 1u); else { c.pc = 0x00214128u; return; } if (c.pc != 0x002CC49Cu) [[unlikely]] return; }
L_002CC49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC4C4; } }
L_002CC4A4:
    st32((c.r[18].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 27588u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 8;
L_002CC4C4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC4E8:
    set32(c.r[29], c.r[29].w[0] - 848u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 656u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 832u), c.f[22]);
    st32((c.r[29].w[0] + 824u), c.f[21]);
    st32((c.r[29].w[0] + 816u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 208u)));
    st32((c.r[29].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    st32((c.r[29].w[0] + 604u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 632u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 220u)));
    st32((c.r[29].w[0] + 608u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 636u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    st32((c.r[29].w[0] + 624u), c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 128u)));
    st32((c.r[29].w[0] + 612u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 216u)));
    st32((c.r[29].w[0] + 616u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 620u), c.r[8].w[0]);
    c.budget -= 37;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002CC588; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0xADA60000u);
    c.r[9].d[0] = c.r[9].d[0] | 57592ull;
    st32((c.r[29].w[0] + 620u), c.r[9].w[0]);
    c.budget -= 3;
L_002CC588:
    set32(c.r[10], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002CC5D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC59Cu);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002CC59Cu) [[unlikely]] return; }
L_002CC59C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5ACu);  if (depth < kMaxDepth) unit_0072(c, 48u, depth + 1u); else { c.pc = 0x002C86E0u; return; } if (c.pc != 0x002CC5ACu) [[unlikely]] return; }
L_002CC5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC5D4; } }
    st32((c.r[18].w[0] + 220u), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 204u), 0u);
    st32((c.r[18].w[0] + 208u), 0u);
    st32((c.r[18].w[0] + 212u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 216u), c.r[17].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD1C4; } }
L_002CC5D4:
    st32((c.r[20].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5E4u);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DD4F0u; return; } if (c.pc != 0x002CC5E4u) [[unlikely]] return; }
L_002CC5E4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002CD1C4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[22].w[0] + 8u), c.r[30].w[0]);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[22].w[0] + 12u), c.r[30].w[0]);
    st32((c.r[22].w[0] + 152u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002CC63C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 156u);
    set32(c.r[3], c.r[20].w[0] + 132u);
    c.budget -= 4;
L_002CC620:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC620u | kUnwind; return; } goto L_002CC620; } }
L_002CC63C:
    set32(c.r[19], ld32((c.r[22].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002CC964; } }
    c.f[12] = ld32((c.r[21].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 596u);
    set32(c.r[5], c.r[29].w[0] + 600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC65Cu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002CC65Cu) [[unlikely]] return; }
L_002CC65C:
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[29].w[0] + 600u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC694u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002CC694u) [[unlikely]] return; }
L_002CC694:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 113u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 612u)));
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC6C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002CC6C4:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    set32(c.r[3], c.r[10].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC70Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CC70Cu) [[unlikely]] return; }
L_002CC70C:
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[19].w[0] + 128u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC750u);  if (depth < kMaxDepth) unit_0077(c, 144u, depth + 1u); else { c.pc = 0x002DE0C8u; return; } if (c.pc != 0x002CC750u) [[unlikely]] return; }
L_002CC750:
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC890; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC774u);  if (depth < kMaxDepth) unit_0077(c, 59u, depth + 1u); else { c.pc = 0x002DCC10u; return; } if (c.pc != 0x002CC774u) [[unlikely]] return; }
L_002CC774:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC80C; } }
    st8((c.r[19].w[0] + 115u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC798u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002CC798u) [[unlikely]] return; }
L_002CC798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC7D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC808; } }
L_002CC7D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC808; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
L_002CC808:
    st32((c.r[19].w[0] + 148u), c.f[2]);
    c.budget -= 1;
L_002CC80C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC818u);  if (depth < kMaxDepth) unit_0073(c, 172u, depth + 1u); else { c.pc = 0x002CE9A8u; return; } if (c.pc != 0x002CC818u) [[unlikely]] return; }
L_002CC818:
    set32(c.r[4], 0u + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 20768u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CC8A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC8A4; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC878u);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x002CC878u) [[unlikely]] return; }
L_002CC878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC884u);  if (depth < kMaxDepth) unit_0049(c, 247u, depth + 1u); else { c.pc = 0x00226F30u; return; } if (c.pc != 0x002CC884u) [[unlikely]] return; }
L_002CC884:
    st32((c.r[19].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC8A4; } }
L_002CC890:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8A0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002CC8A0u) [[unlikely]] return; }
L_002CC8A0:
    st32((c.r[19].w[0] + 484u), 0u);
    c.budget -= 1;
L_002CC8A4:
    set32(c.r[3], c.r[18].w[0] + 136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 640u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[2].w[0] + 29888u)));
    set32(c.r[5], 0u + 1u);
    c.f[21] = ld32((c.r[3].w[0] + 8u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[22] = ld32((c.r[18].w[0] + 136u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8D4u);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x00310558u; return; } if (c.pc != 0x002CC8D4u) [[unlikely]] return; }
L_002CC8D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002CC8EC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC95C; } }
L_002CC8EC:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FD50000u);
    c.r[1].d[0] = c.r[1].d[0] | 24642ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[21], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E500000u);
    c.r[1].d[0] = c.r[1].d[0] | 58720ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 16u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC944u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002CC944u) [[unlikely]] return; }
L_002CC944:
    set32(c.r[2], 0u + 300u);
    st32((c.r[16].w[0] + 72u), c.f[20]);
    st32((c.r[16].w[0] + 160u), c.f[22]);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.f[20]);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    c.budget -= 6;
L_002CC95C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CC970; } }
L_002CC964:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD1C4; } }
L_002CC970:
    set32(c.r[8], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[16], ld32((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC990; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002CC990; } }
    st32((c.r[20].w[0] + 496u), c.r[17].w[0]);
    c.budget -= 1;
L_002CC990:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002CC9A8; } }
    st32((c.r[17].w[0] + 272u), c.r[22].w[0]);
    st32((c.r[22].w[0] + 148u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC9AC; } }
L_002CC9A8:
    st32((c.r[17].w[0] + 272u), 0u);
    c.budget -= 1;
L_002CC9AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10024u)));
    c.r[3].d[0] = 0ull | 63487ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] & 65ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10026u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10028u)));
    st32((c.r[17].w[0] + 176u), c.r[30].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    set32(c.r[9], ld32((c.r[29].w[0] + 616u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 300u), 0u);
    st32((c.r[17].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[17].w[0] + 156u), c.f[0]);
    st64((c.r[17].w[0] + 176u), c.r[5].d[0]);
    c.budget -= 32;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CCAD4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA4C; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 23;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA54; } }
L_002CCA4C:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 22;
    c.budget -= 2;
L_002CCA54:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCA74; } }
    st32((c.r[17].w[0] + 288u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA80; } }
L_002CCA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] - 17048u);
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
L_002CCA80:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCAA0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 5;
L_002CCAA0:
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCAD4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 63487ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 10;
L_002CCAD4:
    set32(c.r[10], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = c.r[10].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCDEC; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAFCu);  if (depth < kMaxDepth) unit_0072(c, 248u, depth + 1u); else { c.pc = 0x002CB500u; return; } if (c.pc != 0x002CCAFCu) [[unlikely]] return; }
L_002CCAFC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 268u), c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002CCDEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCB2C; } }
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 84u)));
    st32((c.r[2].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_002CCB2C:
    set32(c.r[5], ld32((c.r[29].w[0] + 604u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCC40; } }
    c.f[21] = ld32((c.r[21].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[3] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[21] = fp::mul(c.f[21], c.f[3]);
    st32((c.r[29].w[0] + 576u), c.f[1]);
    st32((c.r[29].w[0] + 584u), c.f[2]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    st32((c.r[29].w[0] + 588u), 0u);
    c.f[12] = c.f[21];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB84u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CCB84u) [[unlikely]] return; }
L_002CCB84:
    c.f[22] = ld32((c.r[29].w[0] + 584u));
    c.f[12] = c.f[21];
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB98u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CCB98u) [[unlikely]] return; }
L_002CCB98:
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    c.f[12] = c.f[21];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[22] = fp::add(c.f[22], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBB0u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CCBB0u) [[unlikely]] return; }
L_002CCBB0:
    c.f[20] = ld32((c.r[29].w[0] + 576u));
    c.f[12] = c.f[21];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBC4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CCBC4u) [[unlikely]] return; }
L_002CCBC4:
    c.f[1] = ld32((c.r[29].w[0] + 584u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 576u), c.f[22]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 584u), c.f[20]);
    set32(c.r[3], ld32((c.r[23].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    set32(c.r[4], ld32((c.r[23].w[0] + 84u)));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    set32(c.r[2], ld32((c.r[23].w[0] + 84u)));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    set32(c.r[3], ld32((c.r[23].w[0] + 84u)));
    st32((c.r[3].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[3]);
    c.budget -= 31;
L_002CCC40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CCC78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCCC8; } }
L_002CCC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CCCC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CCCC8; } }
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.budget -= 6;
L_002CCCC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCCECu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CCCECu) [[unlikely]] return; }
L_002CCCEC:
    c.f[1] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 20u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CCD38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CCD84; } }
L_002CCD38:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CCD64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CCD7C; } }
L_002CCD64:
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCD84; } }
L_002CCD7C:
    c.f[0] = fp::add(c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 2;
L_002CCD84:
    set32(c.r[4], ld32((c.r[23].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD98u);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002CCD98u) [[unlikely]] return; }
L_002CCD98:
    set32(c.r[6], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCDC4; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCDE4; } }
L_002CCDC4:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCDE8; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
L_002CCDE4:
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_002CCDE8:
    st32((c.r[23].w[0] + 24u), 0u);
    c.budget -= 1;
L_002CCDEC:
    set32(c.r[8], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCE44; } }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[4] = ld32((c.r[17].w[0] + 52u));
    c.f[5] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 64u), c.f[0]);
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    st32((c.r[17].w[0] + 68u), c.f[1]);
    st32((c.r[17].w[0] + 72u), c.f[2]);
    c.budget -= 17;
L_002CCE44:
    set32(c.r[9], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCE6C; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 5;
L_002CCE6C:
    st32((c.r[17].w[0] + 284u), 0u);
    set32(c.r[3], c.r[18].w[0] + 252u);
    set32(c.r[10], ld32((c.r[29].w[0] + 604u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    c.r[7].d[0] = c.r[10].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCF68; } }
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCEFC; } }
    set32(c.r[5], c.r[18].w[0] + 316u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 2;
L_002CCEA4:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[8], (c.r[3].w[0] + 15u));
    ldr(c.r[8], (c.r[3].w[0] + 8u));
    ldl(c.r[9], (c.r[3].w[0] + 23u));
    ldr(c.r[9], (c.r[3].w[0] + 16u));
    ldl(c.r[10], (c.r[3].w[0] + 31u));
    ldr(c.r[10], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[8], (c.r[4].w[0] + 15u));
    sdr(c.r[8], (c.r[4].w[0] + 8u));
    sdl(c.r[9], (c.r[4].w[0] + 23u));
    sdr(c.r[9], (c.r[4].w[0] + 16u));
    sdl(c.r[10], (c.r[4].w[0] + 31u));
    sdr(c.r[10], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCEA4u | kUnwind; return; } goto L_002CCEA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCF34; } }
L_002CCEFC:
    set32(c.r[5], c.r[18].w[0] + 316u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 2;
L_002CCF04:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[10].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCF04u | kUnwind; return; } goto L_002CCF04; } }
L_002CCF34:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - 16800u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 13;
L_002CCF68:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCFB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] - 16112u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    st32((c.r[17].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    st32((c.r[17].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[17].w[0] + 396u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[17].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 124u), 0u);
    st32((c.r[18].w[0] + 128u), 0u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCFC8; } }
L_002CCFB8:
    st32((c.r[17].w[0] + 388u), 0u);
    st32((c.r[17].w[0] + 392u), 0u);
    st32((c.r[17].w[0] + 396u), 0u);
    st32((c.r[17].w[0] + 400u), 0u);
    c.budget -= 4;
L_002CCFC8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002CCFF8; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002CCFEC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFE4u);  if (depth < kMaxDepth) unit_0073(c, 166u, depth + 1u); else { c.pc = 0x002CE820u; return; } if (c.pc != 0x002CCFE4u) [[unlikely]] return; }
L_002CCFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCFF8; } }
L_002CCFEC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFF8u);  if (depth < kMaxDepth) unit_0073(c, 168u, depth + 1u); else { c.pc = 0x002CE880u; return; } if (c.pc != 0x002CCFF8u) [[unlikely]] return; }
L_002CCFF8:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], 0u + 16386u);
    st32((c.r[17].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[16], ld32((c.r[10].w[0] + 4u)));
    st8((c.r[17].w[0] + 464u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] & 16386ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002CD048; } }
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[29].w[0] + 580u);
    set32(c.r[6], c.r[29].w[0] + 584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD030u);  if (depth < kMaxDepth) unit_0023(c, 44u, depth + 1u); else { c.pc = 0x0018CBD8u; return; } if (c.pc != 0x002CD030u) [[unlikely]] return; }
L_002CD030:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD048; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 468u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 464u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002CD048:
    c.r[2].d[0] = c.r[16].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD068; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 5;
L_002CD068:
    c.r[2].d[0] = c.r[16].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD088; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 47;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 5;
L_002CD088:
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD0AC; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 63;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD0BC; } }
L_002CD0AC:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 176u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_002CD0BC:
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0D0u);  if (depth < kMaxDepth) unit_0077(c, 178u, depth + 1u); else { c.pc = 0x002DE7F0u; return; } if (c.pc != 0x002CD0D0u) [[unlikely]] return; }
L_002CD0D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[17].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD0EC; } }
    st32((c.r[17].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 2;
L_002CD0EC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD120; } }
    st8((c.r[17].w[0] + 476u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 56u));
    st8((c.r[17].w[0] + 472u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 58u));
    st16((c.r[17].w[0] + 474u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 60u));
    st8((c.r[17].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD128; } }
L_002CD120:
    st8((c.r[17].w[0] + 476u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 472u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002CD128:
    st32((c.r[17].w[0] + 488u), c.r[21].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD134u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x002CD134u) [[unlikely]] return; }
L_002CD134:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 624u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 628u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 632u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 636u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD164u) [[unlikely]] return; }
L_002CD164:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 228u));
    set32(c.r[6], ld32((c.r[18].w[0] + 224u)));
    st32((c.r[18].w[0] + 220u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 204u), 0u);
    st32((c.r[18].w[0] + 208u), 0u);
    st32((c.r[18].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002CD1C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 592u));
    set32(c.r[4], c.r[4].w[0] - 20768u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[8], c.r[17].w[0] + 16u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1B4u);  if (depth < kMaxDepth) unit_0008(c, 76u, depth + 1u); else { c.pc = 0x00120DB8u; return; } if (c.pc != 0x002CD1B4u) [[unlikely]] return; }
L_002CD1B4:
    st32((c.r[17].w[0] + 492u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 228u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 224u), 0u);
    c.budget -= 3;
L_002CD1C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CD1C4:
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 656u));
    c.f[22] = ld32((c.r[29].w[0] + 832u));
    c.f[21] = ld32((c.r[29].w[0] + 824u));
    c.f[20] = ld32((c.r[29].w[0] + 816u));
    set32(c.r[29], c.r[29].w[0] + 848u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD208:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD258; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD23C; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD2A8; } }
L_002CD23C:
    set32(c.r[4], ld32((c.r[3].w[0] + 84u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD250u);  if (depth < kMaxDepth) unit_0075(c, 174u, depth + 1u); else { c.pc = 0x002D74C8u; return; } if (c.pc != 0x002CD250u) [[unlikely]] return; }
L_002CD250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD2BC; } }
L_002CD258:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD2A8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD2A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD2BC; } }
L_002CD2A4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002CD2A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD308; } }
L_002CD2BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[4], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[15] = 0u;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.r[7].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[16] = c.f[15];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD308u);  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0024C670u; return; } if (c.pc != 0x002CD308u) [[unlikely]] return; }
L_002CD308:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD320:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st32((c.r[29].w[0] + 152u), c.f[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 12;
L_002CD350:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[19].w[0] + 27456u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD51C; } }
    c.f[12] = ld32((c.r[17].w[0] + 9900u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CD4E8; } }
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[2] = fp::add(c.f[2], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 9868u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002CD4A8; } }
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    c.f[0] = ld32((c.r[17].w[0] + 9872u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[16], c.r[17].w[0] + 9888u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[12], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st32((c.r[29].w[0] + 20u), c.f[20]);
    st32((c.r[29].w[0] + 24u), c.f[20]);
    st32((c.r[29].w[0] + 28u), c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[21]);
    c.f[12] = fp::sub(c.f[12], c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD414u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CD414u) [[unlikely]] return; }
L_002CD414:
    c.f[8] = ld32((c.r[16].w[0] + 8u));
    c.f[15] = c.f[20];
    c.f[1] = ld32((c.r[17].w[0] + 9888u));
    set32(c.r[5], 0u + 1u);
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[5] = ld32((c.r[29].w[0] + 20u));
    c.f[8] = fp::sub(c.f[8], c.f[3]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[16] = c.r[1].w[0];
    c.f[6] = fp::mul(c.f[8], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[7] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[6]);
    st32((c.r[29].w[0] + 56u), c.f[8]);
    c.f[4] = fp::add(c.f[4], c.f[7]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.f[14] = c.f[3];
    st32((c.r[29].w[0] + 8u), c.f[3]);
    c.f[12] = c.f[4];
    st32((c.r[29].w[0]), c.f[4]);
    c.f[13] = c.f[5];
    st32((c.r[29].w[0] + 4u), c.f[5]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4A0u);  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C578u; return; } if (c.pc != 0x002CD4A0u) [[unlikely]] return; }
L_002CD4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD504; } }
L_002CD4A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[15] = c.f[20];
    c.f[12] = ld32((c.r[17].w[0] + 9888u));
    set32(c.r[5], 0u + 1u);
    c.f[13] = ld32((c.r[17].w[0] + 9892u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[14] = ld32((c.r[17].w[0] + 9896u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x50150000u);
    c.r[1].d[0] = c.r[1].d[0] | 761ull;
    c.f[16] = c.r[1].w[0];
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4E0u);  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C578u; return; } if (c.pc != 0x002CD4E0u) [[unlikely]] return; }
L_002CD4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD504; } }
L_002CD4E8:
    set32(c.r[4], c.r[17].w[0] + 9888u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4FCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002CD4FCu) [[unlikely]] return; }
L_002CD4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD51C; } }
L_002CD504:
    c.f[0] = ld32((c.r[17].w[0] + 9900u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 9900u), c.f[0]);
    c.budget -= 6;
L_002CD51C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD350u | kUnwind; return; } goto L_002CD350; } }
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD6F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26240u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_0073[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CD588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 14056u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14056u);
    st32((c.r[2].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD658; } }
L_002CD5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 14040u), c.r[8].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD6F0; } }
L_002CD5B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14104u)));
    set32(c.r[4], c.r[3].w[0] - 14104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD6F0; } }
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5D0u);  if (depth < kMaxDepth) unit_0073(c, 75u, depth + 1u); else { c.pc = 0x002CD700u; return; } if (c.pc != 0x002CD5D0u) [[unlikely]] return; }
L_002CD5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD6F0; } }
L_002CD5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14104u)));
    set32(c.r[4], c.r[3].w[0] - 14104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD6F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD6F0; } }
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD61C; } }
    set32(c.r[2], 0u + 300u);
    set32(c.r[3], 0u + 360u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
L_002CD61C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD62Cu);  if (depth < kMaxDepth) unit_0073(c, 75u, depth + 1u); else { c.pc = 0x002CD700u; return; } if (c.pc != 0x002CD62Cu) [[unlikely]] return; }
L_002CD62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD6F0; } }
L_002CD634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] - 14104u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 68u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.budget -= 9;
L_002CD658:
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD6F0; } }
L_002CD668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], c.r[3].w[0] - 14104u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD69C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_002CD69C:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD6F0; } }
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD6F0; } }
L_002CD6C0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[7].w[0] - 14104u);
    set32(c.r[2], c.r[2].w[0] + 28272u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[7].w[0] - 14104u), 0u);
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 15836u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 12;
L_002CD6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] - 14104u);
    set32(c.r[2], ld32((c.r[17].w[0] - 14104u)));
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002CD814; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD798; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD744u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002CD744u) [[unlikely]] return; }
L_002CD744:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[16].w[0] + 68u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x002CD758u);  goto L_002CD75C; }
L_002CD75C:
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 15;
L_002CD798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 28272u);
    set32(c.r[8], ld32((c.r[3].w[0] + 23016u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[17].w[0] - 14104u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002CD80C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7ECu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002CD7ECu) [[unlikely]] return; }
L_002CD7EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002CD7F8u);  goto L_002CD7FC; }
L_002CD7FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
L_002CD80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 15836u), 0u);
    c.budget -= 2;
L_002CD814:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[2].w[0] - 14104u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14104u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD88C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CDA08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002CDA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD884u);  if (depth < kMaxDepth) unit_0073(c, 75u, depth + 1u); else { c.pc = 0x002CD700u; return; } if (c.pc != 0x002CD884u) [[unlikely]] return; }
L_002CD884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDA08; } }
L_002CD88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CD8BC; } }
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x002CD8B0u);  goto L_002CD8B4; }
L_002CD8B4:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002CD8BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CD8D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_002CD8D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD930; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD914; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[4].w[0] + 28272u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD9B8; } }
L_002CD914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[3].w[0] + 28272u);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD9B8; } }
L_002CD930:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD994; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 15836u), c.r[2].w[0]);
    st32((c.r[18].w[0] - 14104u), 0u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD994; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD96Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002CD96Cu) [[unlikely]] return; }
L_002CD96C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002CD980u);  goto L_002CD984; }
L_002CD984:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_002CD994:
    set32(c.r[2], c.r[18].w[0] - 14104u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] + 28272u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 15836u), 0u);
    c.budget -= 9;
L_002CD9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4984u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CD9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9D8u);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x002CD9D8u) [[unlikely]] return; }
L_002CD9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD9F0; } }
L_002CD9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD9F4; } }
L_002CD9F0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002CD9F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002CDA08; } }
    set32(c.r[2], c.r[18].w[0] + 28272u);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 2;
L_002CDA08:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDA28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002CDBC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CDB2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], 0u + 13u);
    set32(c.r[19], c.r[2].w[0] + 20768u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_002CDA64:
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_002CDA68:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA74u);  if (depth < kMaxDepth) unit_0008(c, 18u, depth + 1u); else { c.pc = 0x001202A0u; return; } if (c.pc != 0x002CDA74u) [[unlikely]] return; }
L_002CDA74:
    set32(c.r[17], c.r[17].w[0] + 84u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDA68u | kUnwind; return; } goto L_002CDA68; } }
L_002CDA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDA94; } }
L_002CDA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA94u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x002CDA94u) [[unlikely]] return; }
L_002CDA94:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[13], c.r[13].w[0] + 21944u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[7].w[0] - 25968u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[13].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[12], c.r[12].w[0] + 21960u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[6].w[0] - 26016u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[12].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[11], c.r[11].w[0] + 21976u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26064u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[11].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[10], c.r[10].w[0] + 21992u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 26112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[10].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 22008u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 26160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 22024u);
    set32(c.r[2], c.r[2].w[0] - 26208u);
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[13].w[0] + 4u), 0u);
    st32((c.r[12].w[0] + 4u), 0u);
    st32((c.r[11].w[0] + 4u), 0u);
    st32((c.r[10].w[0] + 4u), 0u);
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    c.budget -= 38;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDBC4; } }
L_002CDB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 20768u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CDBC4; } }
    set32(c.r[16], c.r[2].w[0] + 1176u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002CDBC4; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002CDB50:
    set32(c.r[16], c.r[16].w[0] - 84u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB64u);  if (depth < kMaxDepth) unit_0008(c, 19u, depth + 1u); else { c.pc = 0x001202C0u; return; } if (c.pc != 0x002CDB64u) [[unlikely]] return; }
L_002CDB64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDB50u | kUnwind; return; } goto L_002CDB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDBC4; } }
L_002CDB74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDA8Cu | kUnwind; return; } goto L_002CDA8C; } }
    set32(c.r[2], 0u + 13u);
    set32(c.r[3], 0u + 84u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDA8Cu | kUnwind; return; } goto L_002CDA8C; } }
L_002CDB98:
    set32(c.r[16], c.r[16].w[0] - 84u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBACu);  if (depth < kMaxDepth) unit_0008(c, 19u, depth + 1u); else { c.pc = 0x001202C0u; return; } if (c.pc != 0x002CDBACu) [[unlikely]] return; }
L_002CDBAC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDB98u | kUnwind; return; } goto L_002CDB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDA8Cu | kUnwind; return; } goto L_002CDA8C; } }
L_002CDBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBC4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x002CDBC4u) [[unlikely]] return; }
L_002CDBC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 23136u);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[12]);
    st32((c.r[2].w[0] + 20u), c.f[13]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDC18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC28u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDC28u) [[unlikely]] return; }
L_002CDC28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26536u);
    set32(c.r[6], c.r[6].w[0] + 21944u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC44u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDC44u) [[unlikely]] return; }
L_002CDC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC4Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDC4Cu) [[unlikely]] return; }
L_002CDC4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26528u);
    set32(c.r[6], c.r[6].w[0] + 22024u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC68u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDC68u) [[unlikely]] return; }
L_002CDC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC70u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDC70u) [[unlikely]] return; }
L_002CDC70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26512u);
    set32(c.r[6], c.r[6].w[0] + 21960u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC8Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDC8Cu) [[unlikely]] return; }
L_002CDC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC94u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDC94u) [[unlikely]] return; }
L_002CDC94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26496u);
    set32(c.r[6], c.r[6].w[0] + 21976u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCB0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDCB0u) [[unlikely]] return; }
L_002CDCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCB8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDCB8u) [[unlikely]] return; }
L_002CDCB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 26480u);
    set32(c.r[6], c.r[6].w[0] + 21992u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCD4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDCD4u) [[unlikely]] return; }
L_002CDCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCDCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002CDCDCu) [[unlikely]] return; }
L_002CDCDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26464u);
    set32(c.r[6], c.r[6].w[0] + 22008u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCF8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002CDCF8u) [[unlikely]] return; }
L_002CDCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDD08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20768u);
    set32(c.r[6], 0u + 1176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD28u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002CDD28u) [[unlikely]] return; }
L_002CDD28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDD38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 14108u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDD48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] - 14108u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14108u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 14108u), 0u);
    st32((c.r[3].w[0] + 22052u), 0u);
    st32((c.r[4].w[0] + 22056u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD98u);  if (depth < kMaxDepth) unit_0074(c, 142u, depth + 1u); else { c.pc = 0x002D1A40u; return; } if (c.pc != 0x002CDD98u) [[unlikely]] return; }
L_002CDD98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDDA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 14108u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDDB8:
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CDDE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002CDDE0:
    c.r[2].d[0] = c.r[10].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CDDF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002CDDF4:
    c.r[2].d[0] = c.r[11].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CDE08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002CDE08:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CDE34; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE2Cu);  if (depth < kMaxDepth) unit_0008(c, 59u, depth + 1u); else { c.pc = 0x00120B18u; return; } if (c.pc != 0x002CDE2Cu) [[unlikely]] return; }
L_002CDE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDE5C; } }
L_002CDE34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002CDE5C; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE5Cu);  if (depth < kMaxDepth) unit_0073(c, 125u, depth + 1u); else { c.pc = 0x002CDF50u; return; } if (c.pc != 0x002CDE5Cu) [[unlikely]] return; }
L_002CDE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDE70:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 40;
    c.r[2].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEB8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x002CDEB8u) [[unlikely]] return; }
L_002CDEB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002CDED4; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CDEF4; } }
L_002CDED4:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8960u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDF3C; } }
L_002CDEF4:
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF18u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x002CDF18u) [[unlikely]] return; }
L_002CDF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CDF30; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDF3C; } }
L_002CDF30:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_002CDF3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CDF58:
    set32(c.r[3], 0u + 84u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 20768u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002CDFF0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CDFEC; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFD0u);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x002CDFD0u) [[unlikely]] return; }
L_002CDFD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFDCu);  if (depth < kMaxDepth) unit_0049(c, 247u, depth + 1u); else { c.pc = 0x00226F30u; return; } if (c.pc != 0x002CDFDCu) [[unlikely]] return; }
L_002CDFDC:
    st32((c.r[17].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDFF0; } }
L_002CDFEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CDFF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE008:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.f[22] = c.f[13];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE050u);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x00310558u; return; } if (c.pc != 0x002CE050u) [[unlikely]] return; }
L_002CE050:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CE0D4; } }
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FD50000u);
    c.r[1].d[0] = c.r[1].d[0] | 24642ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[20] = fp::mul(c.f[21], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E500000u);
    c.r[1].d[0] = c.r[1].d[0] | 58720ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    fpu_div(c, 20u, c.f[20], c.f[2]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0B0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002CE0B0u) [[unlikely]] return; }
L_002CE0B0:
    set32(c.r[3], 0u + 300u);
    st32((c.r[16].w[0] + 72u), c.f[20]);
    st32((c.r[16].w[0] + 160u), c.f[22]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.f[20]);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE0D8; } }
L_002CE0D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CE0D8:
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
L_002CE108:
    set32(c.r[29], c.r[29].w[0] - 560u);
    set32(c.r[7], 0u + 268u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[11], c.r[11].w[0] - 14152u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[10], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE15Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CE15Cu) [[unlikely]] return; }
L_002CE15C:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE188:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE1AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002CE1AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE1E0:
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002CE210:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], 0u + 268u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE240:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 176u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 22;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 23424u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CE2E8; } }
    c.r[10].d[0] = 0ull | 32768ull;
    c.r[10].d[0] = c.r[10].d[0] << 17;
    set32(c.r[9], 0u - 1u);
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 26;
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 18;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 44;
    c.budget -= 10;
L_002CE298:
    c.r[6].d[0] = ld64((c.r[5].w[0] + 176u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE2DC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 404u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CE2DC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_002CE2DC; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002CE2DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE2DC:
    set32(c.r[5], ld32((c.r[5].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE298u | kUnwind; return; } goto L_002CE298; } }
L_002CE2E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE2F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 268u)));
    set32(c.r[5], 0u + 200u);
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE318:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    st32((c.r[29].w[0] + 368u), c.f[20]);
    c.f[20] = 0u;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.f[12] = c.f[20];
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE36Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002CE36Cu) [[unlikely]] return; }
L_002CE36C:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE384u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CE384u) [[unlikely]] return; }
L_002CE384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE4D0; } }
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[1] = c.f[1] & fp::kAbs;
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE3FC; } }
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE3FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 196u), c.f[20]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE458; } }
L_002CE3FC:
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE44C; } }
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE44C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE454; } }
L_002CE44C:
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 2;
L_002CE454:
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 1;
L_002CE458:
    set32(c.r[16], c.r[29].w[0] + 272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE474u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002CE474u) [[unlikely]] return; }
L_002CE474:
    set32(c.r[6], c.r[18].w[0] + 112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE488u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002CE488u) [[unlikely]] return; }
L_002CE488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE490u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CE490u) [[unlikely]] return; }
L_002CE490:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4A8u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CE4A8u) [[unlikely]] return; }
L_002CE4A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CE4D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE4D0; } }
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 236u), c.f[0]);
    c.budget -= 4;
L_002CE4D0:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE4F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 268u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE518; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE518:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE53C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE558; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE53C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CE558; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CE55C; } }
L_002CE558:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CE55C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE568:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[5].d[0] = c.r[5].d[0] | 255ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 7;
    c.r[4].d[0] = c.r[4].d[0] | 127ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.r[3].d[0] = ld64((c.r[17].w[0] + 176u));
    set32(c.r[2], ld32((c.r[17].w[0] + 404u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[19], ld32((c.r[17].w[0] + 280u)));
    if (c.r[4].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 396u)));
    st64((c.r[17].w[0] + 176u), c.r[3].d[0]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[4]);
    st32((c.r[29].w[0] + 12u), c.f[4]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 44;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002CE650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE620u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CE620u) [[unlikely]] return; }
L_002CE620:
    set32(c.r[5], ld32((c.r[17].w[0] + 396u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE638u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CE638u) [[unlikely]] return; }
L_002CE638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE650u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CE650u) [[unlikely]] return; }
L_002CE650:
    st32((c.r[17].w[0] + 388u), 0u);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE660u);  if (depth < kMaxDepth) unit_0075(c, 182u, depth + 1u); else { c.pc = 0x002D75E0u; return; } if (c.pc != 0x002CE660u) [[unlikely]] return; }
L_002CE660:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE690u);  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CBD68u; return; } if (c.pc != 0x002CE690u) [[unlikely]] return; }
L_002CE690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 13248u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 132u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[3] = ld32((c.r[4].w[0] + 136u));
    st32((c.r[29].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 12u), c.f[20]);
    st32((c.r[29].w[0] + 28u), c.f[20]);
    st32((c.r[29].w[0] + 8u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE728u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002CE728u) [[unlikely]] return; }
L_002CE728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.f[20]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE73Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002CE73Cu) [[unlikely]] return; }
L_002CE73C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE758:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 592u), c.f[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | 48576ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE798u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002CE798u) [[unlikely]] return; }
L_002CE798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 540u), c.f[20]);
    st32((c.r[29].w[0] + 528u), c.f[2]);
    st32((c.r[29].w[0] + 532u), c.f[1]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE7D0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002CE7D0u) [[unlikely]] return; }
L_002CE7D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.f[20]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE7E4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002CE7E4u) [[unlikely]] return; }
L_002CE7E4:
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    c.f[20] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[29], c.r[29].w[0] + 608u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[2].w[0] + 22040u);
    st8((c.r[2].w[0] + 22040u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[3].w[0] + 22040u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE868; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE868; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE864u);  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x002F8B40u; return; } if (c.pc != 0x002CE864u) [[unlikely]] return; }
L_002CE864:
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_002CE868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[3].w[0] + 22040u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE8C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CE8C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8C4u);  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x002F8B40u; return; } if (c.pc != 0x002CE8C4u) [[unlikely]] return; }
L_002CE8C4:
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_002CE8C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE8E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE930u);  if (depth < kMaxDepth) unit_0074(c, 146u, depth + 1u); else { c.pc = 0x002D1AA8u; return; } if (c.pc != 0x002CE930u) [[unlikely]] return; }
L_002CE930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CE974; } }
    st32((c.r[4].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[21].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[20]);
    st32((c.r[4].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 14;
L_002CE974:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE9A8:
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002CE9E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 9056u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002CE9D4; } }
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE9D4:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE9E0:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 22064u);
    set32(c.r[5], 0u + 90u);
    set32(c.r[2], c.r[2].w[0] + 360u);
    c.budget -= 6;
L_002CEA08:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEA08u | kUnwind; return; } goto L_002CEA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[7], c.r[3].w[0] + 22064u);
    set32(c.r[6], c.r[2].w[0] + 13248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002CEA38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7694u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEA38u | kUnwind; return; } goto L_002CEA38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEA68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA90u);  if (depth < kMaxDepth) unit_0008(c, 52u, depth + 1u); else { c.pc = 0x001208A8u; return; } if (c.pc != 0x002CEA90u) [[unlikely]] return; }
L_002CEA90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA9Cu);  if (depth < kMaxDepth) unit_0008(c, 40u, depth + 1u); else { c.pc = 0x00120640u; return; } if (c.pc != 0x002CEA9Cu) [[unlikely]] return; }
L_002CEA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24436u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEAD0:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 9900u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CEB2C; } }
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    st32((c.r[4].w[0] + 9868u), 0u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[4].w[0] + 9888u), c.f[3]);
    st32((c.r[4].w[0] + 9892u), c.f[0]);
    st32((c.r[4].w[0] + 9896u), c.f[1]);
    st32((c.r[4].w[0] + 9900u), c.f[2]);
    c.budget -= 17;
L_002CEB2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEB38:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 9900u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CEB9C; } }
    c.f[3] = c.r[8].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[2], 0u + 1u);
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[4].w[0] + 9868u), c.r[2].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 9872u), c.f[3]);
    st32((c.r[4].w[0] + 9888u), c.f[2]);
    st32((c.r[4].w[0] + 9892u), c.f[0]);
    st32((c.r[4].w[0] + 9896u), c.f[1]);
    st32((c.r[4].w[0] + 9900u), c.f[3]);
    c.budget -= 19;
L_002CEB9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEBA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 9904u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBC4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002CEBC4u) [[unlikely]] return; }
L_002CEBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 9888u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBF4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002CEBF4u) [[unlikely]] return; }
L_002CEBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEC08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    fpu_div(c, 12u, c.f[12], c.f[13]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC68u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CEC68u) [[unlikely]] return; }
L_002CEC68:
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    c.f[7] = fp::mul(c.f[2], c.f[0]);
    c.f[6] = fp::add(c.f[6], c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 8u), c.f[4]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[18].w[0]), c.f[6]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CECE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    c.f[14] = fp::mul(c.f[14], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 24u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[1].w[0];
    c.f[21] = c.f[13];
    fpu_div(c, 14u, c.f[14], c.f[15]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = fp::mul(c.f[14], c.f[0]);
    fpu_div(c, 14u, c.f[14], c.f[1]);
    c.f[12] = fp::sub(c.f[14], c.f[12]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED38u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x002CED38u) [[unlikely]] return; }
L_002CED38:
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[21], c.f[20]);
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CED60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 15);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 30);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 45);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] & 32767ull;
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.r[17].d[0] = c.r[17].d[0] & 32767ull;
    c.r[18].d[0] = c.r[18].d[0] & 32767ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDA0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002CEDA0u) [[unlikely]] return; }
L_002CEDA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 9904u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDB0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002CEDB0u) [[unlikely]] return; }
L_002CEDB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 9908u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDC0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002CEDC0u) [[unlikely]] return; }
L_002CEDC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 9912u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDD0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x002CEDD0u) [[unlikely]] return; }
L_002CEDD0:
    st32((c.r[19].w[0] + 9916u), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEDF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20780u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], c.r[16].w[0] + 1176u);
    c.budget -= 12;
L_002CEE28:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CEE44; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE40u);  if (depth < kMaxDepth) unit_0077(c, 183u, depth + 1u); else { c.pc = 0x002DE940u; return; } if (c.pc != 0x002CEE40u) [[unlikely]] return; }
L_002CEE40:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002CEE44:
    set32(c.r[16], c.r[16].w[0] + 84u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEE28u | kUnwind; return; } goto L_002CEE28; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEE78:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEB4u);  if (depth < kMaxDepth) unit_0049(c, 71u, depth + 1u); else { c.pc = 0x00225208u; return; } if (c.pc != 0x002CEEB4u) [[unlikely]] return; }
L_002CEEB4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEC8u);  if (depth < kMaxDepth) unit_008A(c, 136u, depth + 1u); else { c.pc = 0x0032A0B8u; return; } if (c.pc != 0x002CEEC8u) [[unlikely]] return; }
L_002CEEC8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEED8u);  if (depth < kMaxDepth) unit_0073(c, 203u, depth + 1u); else { c.pc = 0x002CEEF8u; return; } if (c.pc != 0x002CEED8u) [[unlikely]] return; }
L_002CEED8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEEF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF1Cu);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CEF1Cu) [[unlikely]] return; }
L_002CEF1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF34u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CEF34u) [[unlikely]] return; }
L_002CEF34:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16016u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF50u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CEF50u) [[unlikely]] return; }
L_002CEF50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF94u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CEF94u) [[unlikely]] return; }
L_002CEF94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFACu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CEFACu) [[unlikely]] return; }
L_002CEFAC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16016u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFC8u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CEFC8u) [[unlikely]] return; }
L_002CEFC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CEFE8:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    c.r[21].d[0] = c.r[4].d[0] & 127ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 2u);
    st32((c.r[29].w[0] + 368u), c.f[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[4].d[0] == 0) c.r[18].d[0] = 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF03Cu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CF03Cu) [[unlikely]] return; }
L_002CF03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF0F0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF050u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002CF050u) [[unlikely]] return; }
L_002CF050:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CF0E4; } }
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF070u);  if (depth < kMaxDepth) unit_0075(c, 175u, depth + 1u); else { c.pc = 0x002D74E8u; return; } if (c.pc != 0x002CF070u) [[unlikely]] return; }
L_002CF070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF080u);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002CF080u) [[unlikely]] return; }
L_002CF080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CF0A8; } }
    st32((c.r[17].w[0] + 268u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF0B8; } }
L_002CF0A8:
    c.f[0] = ld32((c.r[17].w[0] + 236u));
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 268u), c.f[0]);
    c.budget -= 4;
L_002CF0B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002CF0E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20768u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0E4u);  if (depth < kMaxDepth) unit_0008(c, 71u, depth + 1u); else { c.pc = 0x00120CA8u; return; } if (c.pc != 0x002CF0E4u) [[unlikely]] return; }
L_002CF0E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF0F4; } }
L_002CF0F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CF0F4:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF120:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[20].d[0] = c.r[4].d[0] & 127ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 376u), c.f[21]);
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 368u), c.f[20]);
    if (c.r[4].d[0] == 0) c.r[18].d[0] = 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), c.f[21]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF190u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CF190u) [[unlikely]] return; }
L_002CF190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF238; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1A4u);  if (depth < kMaxDepth) unit_0075(c, 178u, depth + 1u); else { c.pc = 0x002D7530u; return; } if (c.pc != 0x002CF1A4u) [[unlikely]] return; }
L_002CF1A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CF22C; } }
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1C4u);  if (depth < kMaxDepth) unit_0075(c, 175u, depth + 1u); else { c.pc = 0x002D74E8u; return; } if (c.pc != 0x002CF1C4u) [[unlikely]] return; }
L_002CF1C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1D4u);  if (depth < kMaxDepth) unit_0075(c, 172u, depth + 1u); else { c.pc = 0x002D74A0u; return; } if (c.pc != 0x002CF1D4u) [[unlikely]] return; }
L_002CF1D4:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CF1F0; } }
    st32((c.r[17].w[0] + 268u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF200; } }
L_002CF1F0:
    c.f[0] = ld32((c.r[17].w[0] + 236u));
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 268u), c.f[0]);
    c.budget -= 4;
L_002CF200:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002CF22C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20768u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF22Cu);  if (depth < kMaxDepth) unit_0008(c, 71u, depth + 1u); else { c.pc = 0x00120CA8u; return; } if (c.pc != 0x002CF22Cu) [[unlikely]] return; }
L_002CF22C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF23C; } }
L_002CF238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CF23C:
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 376u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF268:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF288:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26552u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2B4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CF2B4u) [[unlikely]] return; }
L_002CF2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF2D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2D0u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CF2D0u) [[unlikely]] return; }
L_002CF2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF330; } }
L_002CF2D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 23136u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st8((c.r[5].w[0] + 9941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 22;
L_002CF330:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF348:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF380u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002CF380u) [[unlikely]] return; }
L_002CF380:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF39Cu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002CF39Cu) [[unlikely]] return; }
L_002CF39C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16016u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3B8u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x002CF3B8u) [[unlikely]] return; }
L_002CF3B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF3D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] - 26552u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF408u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CF408u) [[unlikely]] return; }
L_002CF408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF55C; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 40u));
    set32(c.r[6], 0u + 9u);
    c.r[10].d[0] = ld16((c.r[2].w[0] + 44u));
    set32(c.r[8], 0u - 1u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = ld16((c.r[2].w[0] + 48u));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[16].d[0] = ld8((c.r[17].w[0] + 113u));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] << 8;
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF480u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF480u) [[unlikely]] return; }
L_002CF480:
    set32(c.r[8], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 7u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[8].w[0] + 28u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[8].w[0] + 32u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[6].d[0] = ld16((c.r[8].w[0] + 36u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    set32(c.r[8], 0u - 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4C8u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF4C8u) [[unlikely]] return; }
L_002CF4C8:
    set32(c.r[10], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[10].w[0] + 12u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[10].w[0] + 16u));
    set32(c.r[8], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[3].d[0] = ld16((c.r[10].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[2].d[0] = ld16((c.r[10].w[0] + 24u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF518u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF518u) [[unlikely]] return; }
L_002CF518:
    set32(c.r[9], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[10], 0u + 11u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[9].w[0]));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[9].w[0] + 4u));
    set32(c.r[8], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF55Cu);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF55Cu) [[unlikely]] return; }
L_002CF55C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF580:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] - 26552u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5B8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CF5B8u) [[unlikely]] return; }
L_002CF5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF7EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], 0u + 13248u);
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[8].d[0] = ld16((c.r[2].w[0] + 16u));
    set32(c.r[5], 0u + 5u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[7].d[0] = ld16((c.r[2].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] << 8;
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[5].d[0] = ld16((c.r[2].w[0] + 24u));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 12u));
    c.r[16].d[0] = c.r[16].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 28u)));
    c.r[16].d[0] = c.r[16].d[0] | c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF664u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF664u) [[unlikely]] return; }
L_002CF664:
    set32(c.r[9], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[10], 0u + 6u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[9].w[0] + 32u));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[9].w[0] + 36u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6A8u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF6A8u) [[unlikely]] return; }
L_002CF6A8:
    set32(c.r[9], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[10], 0u + 21u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[9].w[0] + 40u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[9].w[0] + 44u));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[9].w[0] + 48u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6ECu);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF6ECu) [[unlikely]] return; }
L_002CF6EC:
    set32(c.r[9], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[10], 0u + 13u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[9].w[0] + 52u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[9].w[0] + 56u));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = ld16((c.r[9].w[0] + 60u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF730u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF730u) [[unlikely]] return; }
L_002CF730:
    set32(c.r[10], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 19u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[10].w[0] + 64u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[10].w[0] + 68u));
    set32(c.r[8], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[3].d[0] = ld16((c.r[10].w[0] + 72u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[2].d[0] = ld16((c.r[10].w[0] + 76u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF780u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF780u) [[unlikely]] return; }
L_002CF780:
    set32(c.r[10], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[10].w[0] + 80u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[10].w[0] + 84u));
    set32(c.r[8], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[3].d[0] = ld16((c.r[10].w[0] + 88u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[2].d[0] = ld16((c.r[10].w[0] + 92u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7D0u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF7D0u) [[unlikely]] return; }
L_002CF7D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7ECu);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002CF7ECu) [[unlikely]] return; }
L_002CF7EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF810:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF830u);  if (depth < kMaxDepth) unit_0075(c, 186u, depth + 1u); else { c.pc = 0x002D7660u; return; } if (c.pc != 0x002CF830u) [[unlikely]] return; }
L_002CF830:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF860u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF860u) [[unlikely]] return; }
L_002CF860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF870:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] - 26552u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF8C4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CF8C4u) [[unlikely]] return; }
L_002CF8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF8D0; } }
    set32(c.r[23], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002CF8D0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 6789u);
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[22], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = ld32((c.r[21].w[0] + 12u));
    set32(c.r[20], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0]), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[4].d[0];
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF9C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_002CF9C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 20942u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002CF990; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF9C4; } }
L_002CF990:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF9C4; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[5].w[0] + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF990u | kUnwind; return; } goto L_002CF990; } }
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002CF9C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF9E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 2;
L_002CF9E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[14]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CFA94; } }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFA48; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CFA94; } }
L_002CFA48:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFA94; } }
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = c.f[14];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA6Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002CFA6Cu) [[unlikely]] return; }
L_002CFA6C:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[30].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA80u);  if (depth < kMaxDepth) unit_0098(c, 257u, depth + 1u); else { c.pc = 0x00362F98u; return; } if (c.pc != 0x002CFA80u) [[unlikely]] return; }
L_002CFA80:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA94u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002CFA94u) [[unlikely]] return; }
L_002CFA94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].d[0] = c.r[22].d[0] ^ 3ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[2].w[0] - 13932u), c.r[18].w[0]);
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAC8u);  if (depth < kMaxDepth) unit_0072(c, 139u, depth + 1u); else { c.pc = 0x002C97E8u; return; } if (c.pc != 0x002CFAC8u) [[unlikely]] return; }
L_002CFAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 13936u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 13932u), 0u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CFB04; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CFB04; } }
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CFB04; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    st32((c.r[3].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 2;
L_002CFB04:
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
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFB38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26552u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB64u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x002CFB64u) [[unlikely]] return; }
L_002CFB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CFBA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 13248u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBA0u);  if (depth < kMaxDepth) unit_0073(c, 181u, depth + 1u); else { c.pc = 0x002CEAD0u; return; } if (c.pc != 0x002CFBA0u) [[unlikely]] return; }
L_002CFBA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFBB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBD0u);  if (depth < kMaxDepth) unit_0073(c, 82u, depth + 1u); else { c.pc = 0x002CDA28u; return; } if (c.pc != 0x002CFBD0u) [[unlikely]] return; }
L_002CFBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBF8u);  if (depth < kMaxDepth) unit_0073(c, 82u, depth + 1u); else { c.pc = 0x002CDA28u; return; } if (c.pc != 0x002CFBF8u) [[unlikely]] return; }
L_002CFBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFC08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[21] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 32u), c.f[2]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CFC6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 5;
L_002CFC6C:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[20] = ld32((c.r[16].w[0] + 4u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[12], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC9Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x002CFC9Cu) [[unlikely]] return; }
L_002CFC9C:
    c.f[0] = fp::add(c.f[0], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[4] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[20]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFCE4u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x002CFCE4u) [[unlikely]] return; }
L_002CFCE4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 100u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002CFD00; } }
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002CFD00:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFD48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD1Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x002CFD1Cu) [[unlikely]] return; }
L_002CFD1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = 0ull | 65535ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002CFD34u);  goto L_002CFD38; }
L_002CFD38:
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_002CFD48:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CFD6C; } }
    st32((c.r[16].w[0] + 28u), c.f[22]);
    c.budget -= 1;
L_002CFD6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFD90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDD8u);  if (depth < kMaxDepth) unit_0044(c, 34u, depth + 1u); else { c.pc = 0x00210EF0u; return; } if (c.pc != 0x002CFDD8u) [[unlikely]] return; }
L_002CFDD8:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDF0u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002CFDF0u) [[unlikely]] return; }
L_002CFDF0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0074(c, 16u, depth); } }
    set32(c.r[22], 0u + 36u);
    c.budget -= 1;
L_002CFE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 25920u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE18u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002CFE18u) [[unlikely]] return; }
L_002CFE18:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002CFED8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE3Cu);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x002CFE3Cu) [[unlikely]] return; }
L_002CFE3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002CFE84; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 2;
L_002CFE58:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002CFE70; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CFEB0; } }
L_002CFE70:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE58u | kUnwind; return; } goto L_002CFE58; } }
L_002CFE84:
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
L_002CFEB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFEBCu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002CFEBCu) [[unlikely]] return; }
L_002CFEBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFED8u);  if (depth < kMaxDepth) unit_0049(c, 257u, depth + 1u); else { c.pc = 0x00227088u; return; } if (c.pc != 0x002CFED8u) [[unlikely]] return; }
L_002CFED8:
    set32(c.r[5], c.r[23].w[0] - 25904u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFEECu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002CFEECu) [[unlikely]] return; }
L_002CFEEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002CFFA0; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF08u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x002CFF08u) [[unlikely]] return; }
L_002CFF08:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002CFF4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_002CFF20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002CFF38; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CFF78; } }
L_002CFF38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFF20u | kUnwind; return; } goto L_002CFF20; } }
L_002CFF4C:
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
L_002CFF78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF84u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002CFF84u) [[unlikely]] return; }
L_002CFF84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFA0u);  if (depth < kMaxDepth) unit_0049(c, 257u, depth + 1u); else { c.pc = 0x00227088u; return; } if (c.pc != 0x002CFFA0u) [[unlikely]] return; }
L_002CFFA0:
    set32(c.r[5], c.r[30].w[0] - 25888u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFB4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002CFFB4u) [[unlikely]] return; }
L_002CFFB4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0074(c, 5u, depth); } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFD0u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x002CFFD0u) [[unlikely]] return; }
L_002CFFD0:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0074(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_002CFFE8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { [[clang::musttail]] return unit_0074(c, 1u, depth); } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0074(c, 3u, depth); } }
    [[clang::musttail]] return unit_0074(c, 1u, depth);
}

}
