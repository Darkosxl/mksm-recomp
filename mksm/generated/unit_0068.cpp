#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0068[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0,
    0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0068(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A0000;
    case 2u: goto L_002A000C;
    case 3u: goto L_002A0030;
    case 4u: goto L_002A0050;
    case 5u: goto L_002A0090;
    case 6u: goto L_002A00E8;
    case 7u: goto L_002A0110;
    case 8u: goto L_002A0114;
    case 9u: goto L_002A0150;
    case 10u: goto L_002A0178;
    case 11u: goto L_002A01B0;
    case 12u: goto L_002A0224;
    case 13u: goto L_002A0250;
    case 14u: goto L_002A0280;
    case 15u: goto L_002A02B8;
    case 16u: goto L_002A032C;
    case 17u: goto L_002A0358;
    case 18u: goto L_002A03C0;
    case 19u: goto L_002A03D0;
    case 20u: goto L_002A0414;
    case 21u: goto L_002A0440;
    case 22u: goto L_002A0468;
    case 23u: goto L_002A048C;
    case 24u: goto L_002A04D0;
    case 25u: goto L_002A04E8;
    case 26u: goto L_002A0504;
    case 27u: goto L_002A0518;
    case 28u: goto L_002A0550;
    case 29u: goto L_002A05D0;
    case 30u: goto L_002A062C;
    case 31u: goto L_002A064C;
    case 32u: goto L_002A0664;
    case 33u: goto L_002A067C;
    case 34u: goto L_002A06D0;
    case 35u: goto L_002A06E8;
    case 36u: goto L_002A0700;
    case 37u: goto L_002A07DC;
    case 38u: goto L_002A0870;
    case 39u: goto L_002A08BC;
    case 40u: goto L_002A08D4;
    case 41u: goto L_002A091C;
    case 42u: goto L_002A0934;
    case 43u: goto L_002A0954;
    case 44u: goto L_002A0A98;
    case 45u: goto L_002A0AC0;
    case 46u: goto L_002A0AD0;
    case 47u: goto L_002A0B28;
    case 48u: goto L_002A0B44;
    case 49u: goto L_002A0B6C;
    case 50u: goto L_002A0D30;
    case 51u: goto L_002A0D78;
    case 52u: goto L_002A0E20;
    case 53u: goto L_002A0E40;
    case 54u: goto L_002A0EC8;
    case 55u: goto L_002A0FC0;
    case 56u: goto L_002A105C;
    case 57u: goto L_002A1080;
    case 58u: goto L_002A111C;
    case 59u: goto L_002A1128;
    case 60u: goto L_002A11E0;
    case 61u: goto L_002A1240;
    case 62u: goto L_002A13A8;
    case 63u: goto L_002A1458;
    case 64u: goto L_002A148C;
    case 65u: goto L_002A1588;
    case 66u: goto L_002A15DC;
    case 67u: goto L_002A160C;
    case 68u: goto L_002A1788;
    case 69u: goto L_002A1888;
    case 70u: goto L_002A18A4;
    case 71u: goto L_002A18D8;
    case 72u: goto L_002A1938;
    case 73u: goto L_002A1950;
    case 74u: goto L_002A1970;
    case 75u: goto L_002A1988;
    case 76u: goto L_002A19A8;
    case 77u: goto L_002A19C0;
    case 78u: goto L_002A1A30;
    case 79u: goto L_002A1A48;
    case 80u: goto L_002A1A7C;
    case 81u: goto L_002A1AB8;
    case 82u: goto L_002A1B30;
    case 83u: goto L_002A1BB0;
    case 84u: goto L_002A1BE0;
    case 85u: goto L_002A1C04;
    case 86u: goto L_002A1C18;
    case 87u: goto L_002A1C30;
    case 88u: goto L_002A1C7C;
    case 89u: goto L_002A1C94;
    case 90u: goto L_002A1CB0;
    case 91u: goto L_002A1CF0;
    case 92u: goto L_002A1D38;
    case 93u: goto L_002A1D70;
    case 94u: goto L_002A1D80;
    case 95u: goto L_002A1DA4;
    case 96u: goto L_002A1DF0;
    case 97u: goto L_002A1E08;
    case 98u: goto L_002A1E38;
    case 99u: goto L_002A1E50;
    case 100u: goto L_002A1E80;
    case 101u: goto L_002A1EA0;
    case 102u: goto L_002A1EC8;
    case 103u: goto L_002A1EE0;
    case 104u: goto L_002A1F04;
    case 105u: goto L_002A1F54;
    case 106u: goto L_002A1F70;
    case 107u: goto L_002A1FB4;
    case 108u: goto L_002A1FC8;
    case 109u: goto L_002A1FE0;
    case 110u: goto L_002A2020;
    case 111u: goto L_002A2058;
    case 112u: goto L_002A2088;
    case 113u: goto L_002A20C8;
    case 114u: goto L_002A20D8;
    case 115u: goto L_002A2128;
    case 116u: goto L_002A2190;
    case 117u: goto L_002A2260;
    case 118u: goto L_002A22E8;
    case 119u: goto L_002A2300;
    case 120u: goto L_002A2350;
    case 121u: goto L_002A23AC;
    case 122u: goto L_002A23C8;
    case 123u: goto L_002A23D8;
    case 124u: goto L_002A23E8;
    case 125u: goto L_002A23F0;
    case 126u: goto L_002A23F8;
    case 127u: goto L_002A2428;
    case 128u: goto L_002A2490;
    case 129u: goto L_002A24A0;
    case 130u: goto L_002A24E8;
    case 131u: goto L_002A2508;
    case 132u: goto L_002A252C;
    case 133u: goto L_002A2588;
    case 134u: goto L_002A25C0;
    case 135u: goto L_002A25E8;
    case 136u: goto L_002A2660;
    case 137u: goto L_002A2678;
    case 138u: goto L_002A2688;
    case 139u: goto L_002A26A0;
    case 140u: goto L_002A26B0;
    case 141u: goto L_002A2708;
    case 142u: goto L_002A2714;
    case 143u: goto L_002A2738;
    case 144u: goto L_002A2770;
    case 145u: goto L_002A27A0;
    case 146u: goto L_002A27B4;
    case 147u: goto L_002A27C0;
    case 148u: goto L_002A27DC;
    case 149u: goto L_002A27F0;
    case 150u: goto L_002A2810;
    case 151u: goto L_002A281C;
    case 152u: goto L_002A282C;
    case 153u: goto L_002A2838;
    case 154u: goto L_002A2854;
    case 155u: goto L_002A2864;
    case 156u: goto L_002A2878;
    case 157u: goto L_002A288C;
    case 158u: goto L_002A2898;
    case 159u: goto L_002A28B4;
    case 160u: goto L_002A28C8;
    case 161u: goto L_002A28D4;
    case 162u: goto L_002A28E4;
    case 163u: goto L_002A28F0;
    case 164u: goto L_002A28FC;
    case 165u: goto L_002A2918;
    case 166u: goto L_002A2928;
    case 167u: goto L_002A2934;
    case 168u: goto L_002A2948;
    case 169u: goto L_002A2980;
    case 170u: goto L_002A2990;
    case 171u: goto L_002A29E8;
    case 172u: goto L_002A2A10;
    case 173u: goto L_002A2A24;
    case 174u: goto L_002A2A30;
    case 175u: goto L_002A2A4C;
    case 176u: goto L_002A2A60;
    case 177u: goto L_002A2A80;
    case 178u: goto L_002A2A90;
    case 179u: goto L_002A2ABC;
    case 180u: goto L_002A2ACC;
    case 181u: goto L_002A2AE4;
    case 182u: goto L_002A2AF4;
    case 183u: goto L_002A2B00;
    case 184u: goto L_002A2B1C;
    case 185u: goto L_002A2B2C;
    case 186u: goto L_002A2B60;
    case 187u: goto L_002A2BA0;
    case 188u: goto L_002A2BB8;
    case 189u: goto L_002A2BD4;
    case 190u: goto L_002A2BE8;
    case 191u: goto L_002A2BF4;
    case 192u: goto L_002A2C08;
    case 193u: goto L_002A2C14;
    case 194u: goto L_002A2C24;
    case 195u: goto L_002A2C58;
    case 196u: goto L_002A2C78;
    case 197u: goto L_002A2CA0;
    case 198u: goto L_002A2CB0;
    case 199u: goto L_002A2CD4;
    case 200u: goto L_002A2CE4;
    case 201u: goto L_002A2D04;
    case 202u: goto L_002A2D14;
    case 203u: goto L_002A2D50;
    case 204u: goto L_002A2D70;
    case 205u: goto L_002A2D88;
    case 206u: goto L_002A2D98;
    case 207u: goto L_002A2DB0;
    case 208u: goto L_002A2DC0;
    case 209u: goto L_002A2DD0;
    case 210u: goto L_002A2DEC;
    case 211u: goto L_002A2DFC;
    case 212u: goto L_002A2E0C;
    case 213u: goto L_002A2E24;
    case 214u: goto L_002A2E34;
    case 215u: goto L_002A2E44;
    case 216u: goto L_002A2E70;
    case 217u: goto L_002A2EE0;
    case 218u: goto L_002A2F00;
    case 219u: goto L_002A2F20;
    case 220u: goto L_002A2F2C;
    case 221u: goto L_002A2F4C;
    case 222u: goto L_002A2F5C;
    case 223u: goto L_002A2F84;
    case 224u: goto L_002A2F98;
    case 225u: goto L_002A2FAC;
    case 226u: goto L_002A2FEC;
    case 227u: goto L_002A3018;
    case 228u: goto L_002A306C;
    case 229u: goto L_002A30B8;
    case 230u: goto L_002A3114;
    case 231u: goto L_002A3138;
    case 232u: goto L_002A3150;
    case 233u: goto L_002A315C;
    case 234u: goto L_002A317C;
    case 235u: goto L_002A318C;
    case 236u: goto L_002A319C;
    case 237u: goto L_002A31D0;
    case 238u: goto L_002A31F0;
    case 239u: goto L_002A320C;
    case 240u: goto L_002A3264;
    case 241u: goto L_002A3284;
    case 242u: goto L_002A32AC;
    case 243u: goto L_002A32F0;
    case 244u: goto L_002A331C;
    case 245u: goto L_002A3338;
    case 246u: goto L_002A3374;
    case 247u: goto L_002A33F8;
    case 248u: goto L_002A3434;
    case 249u: goto L_002A3478;
    case 250u: goto L_002A34B4;
    case 251u: goto L_002A34F8;
    case 252u: goto L_002A3534;
    case 253u: goto L_002A3590;
    case 254u: goto L_002A35B8;
    case 255u: goto L_002A35CC;
    case 256u: goto L_002A35D8;
    case 257u: goto L_002A35F4;
    case 258u: goto L_002A3608;
    case 259u: goto L_002A3628;
    case 260u: goto L_002A3634;
    case 261u: goto L_002A3644;
    case 262u: goto L_002A3650;
    case 263u: goto L_002A366C;
    case 264u: goto L_002A367C;
    case 265u: goto L_002A3698;
    case 266u: goto L_002A36F0;
    case 267u: goto L_002A3710;
    case 268u: goto L_002A3728;
    case 269u: goto L_002A3760;
    case 270u: goto L_002A3784;
    case 271u: goto L_002A37A0;
    case 272u: goto L_002A37CC;
    case 273u: goto L_002A37E0;
    case 274u: goto L_002A37FC;
    case 275u: goto L_002A3828;
    case 276u: goto L_002A3840;
    case 277u: goto L_002A3854;
    case 278u: goto L_002A3870;
    case 279u: goto L_002A3880;
    case 280u: goto L_002A388C;
    case 281u: goto L_002A3898;
    case 282u: goto L_002A38A8;
    case 283u: goto L_002A38B0;
    case 284u: goto L_002A38C8;
    case 285u: goto L_002A38E0;
    case 286u: goto L_002A38F0;
    case 287u: goto L_002A3908;
    case 288u: goto L_002A3918;
    case 289u: goto L_002A3920;
    case 290u: goto L_002A3978;
    case 291u: goto L_002A39D8;
    case 292u: goto L_002A39F4;
    case 293u: goto L_002A3A04;
    case 294u: goto L_002A3A68;
    case 295u: goto L_002A3A8C;
    case 296u: goto L_002A3AA8;
    case 297u: goto L_002A3B00;
    case 298u: goto L_002A3B08;
    case 299u: goto L_002A3B18;
    case 300u: goto L_002A3B58;
    case 301u: goto L_002A3BC8;
    case 302u: goto L_002A3C00;
    case 303u: goto L_002A3C78;
    case 304u: goto L_002A3D00;
    case 305u: goto L_002A3D88;
    case 306u: goto L_002A3D98;
    case 307u: goto L_002A3DA8;
    case 308u: goto L_002A3E10;
    case 309u: goto L_002A3E38;
    case 310u: goto L_002A3E68;
    case 311u: goto L_002A3E98;
    case 312u: goto L_002A3EBC;
    case 313u: goto L_002A3EE8;
    case 314u: goto L_002A3F24;
    case 315u: goto L_002A3F44;
    case 316u: goto L_002A3F54;
    case 317u: goto L_002A3F88;
    case 318u: goto L_002A3FB0;
    default: bad_entry(c, 0x002A0000u); return;
    }
L_002A0000:
    st32((c.r[2].w[0] + 13284u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0110; } }
L_002A000C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A00B8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[22], c.r[20].w[0] << 5);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
L_002A0030:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002A0068; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[5]);
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0050u);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A0050u) [[unlikely]] return; }
L_002A0050:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002A009C; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0114; } }
L_002A0068:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A009C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[6], ld32((c.r[21].w[0])));
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[5]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0090u);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A0090u) [[unlikely]] return; }
L_002A0090:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_002A00DC; } }
L_002A009C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0030u | kUnwind; return; } goto L_002A0030; } }
L_002A00B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002A0110; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A00E8; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0110; } }
L_002A00DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0114; } }
L_002A00E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0110; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A00E8u | kUnwind; return; } goto L_002A00E8; } }
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002A0110:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_002A0114:
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    c.f[21] = ld32((c.r[29].w[0] + 712u));
    c.f[20] = ld32((c.r[29].w[0] + 704u));
    set32(c.r[29], c.r[29].w[0] + 720u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0150:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0244; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[12], c.r[10].w[0] + 13016u);
    c.budget -= 4;
L_002A0178:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0224; } }
    set32(c.r[2], c.r[10].w[0] + 13016u);
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[10].w[0] + 13016u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A01D0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A01B0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002A01D4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A01B0u | kUnwind; return; } goto L_002A01B0; } }
L_002A01D0:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_002A01D4:
    set32(c.r[2], ld32((c.r[12].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0200; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A0200; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 13016u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0204; } }
L_002A0200:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A0204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0224; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0224; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0224:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0178u | kUnwind; return; } goto L_002A0178; } }
L_002A0244:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0250:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002A034C; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[12], c.r[10].w[0] + 13016u);
    c.budget -= 3;
L_002A0280:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A032C; } }
    set32(c.r[2], c.r[10].w[0] + 13016u);
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[10].w[0] + 13016u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A02D8; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A02B8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002A02DC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A02B8u | kUnwind; return; } goto L_002A02B8; } }
L_002A02D8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_002A02DC:
    set32(c.r[2], ld32((c.r[12].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0308; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A0308; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 13016u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A030C; } }
L_002A0308:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A030C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A032C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A032C; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A032C:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0280u | kUnwind; return; } goto L_002A0280; } }
L_002A034C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0358:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 280u), c.f[21]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[21], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 23;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002A03F8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_002A03C0:
    set32(c.r[4], ld32((c.r[22].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03D0u);  if (depth < kMaxDepth) unit_007B(c, 67u, depth + 1u); else { c.pc = 0x002ECA40u; return; } if (c.pc != 0x002A03D0u) [[unlikely]] return; }
L_002A03D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A03E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_002A03E8:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A03C0u | kUnwind; return; } goto L_002A03C0; } }
L_002A03F8:
    st32((c.r[20].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A082C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0414u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x002A0414u) [[unlikely]] return; }
L_002A0414:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + 31088u);
    set32(c.r[8], c.r[8].w[0] + 31216u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 1518u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0440u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002A0440u) [[unlikely]] return; }
L_002A0440:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A082C; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A0820; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 2;
L_002A0468:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A048Cu);  if (depth < kMaxDepth) unit_007B(c, 67u, depth + 1u); else { c.pc = 0x002ECA40u; return; } if (c.pc != 0x002A048Cu) [[unlikely]] return; }
L_002A048C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0808; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0808; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04D0u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x002A04D0u) [[unlikely]] return; }
L_002A04D0:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 24880u);
    set32(c.r[22], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04E8u);  if (depth < kMaxDepth) unit_0090(c, 176u, depth + 1u); else { c.pc = 0x00341988u; return; } if (c.pc != 0x002A04E8u) [[unlikely]] return; }
L_002A04E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 24880u);
    set32(c.r[5], c.r[3].w[0] + 31240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0504u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002A0504u) [[unlikely]] return; }
L_002A0504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A051C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0518u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002A0518u) [[unlikely]] return; }
L_002A0518:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002A051C:
    set32(c.r[23], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[21].w[0] + 32u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] << (c.r[23].w[0] & 31u));
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A0570; } }
    c.budget -= 1;
L_002A0550:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0570; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0550u | kUnwind; return; } goto L_002A0550; } }
L_002A0570:
    set32(c.r[3], ld32((c.r[22].w[0] + 32u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[19].d[0] ^ 32ull;
    c.f[1] = ld32((c.r[3].w[0]));
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[4].d[0];
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.f[1]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[3], c.f[2]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::pextlw(c.r[8], c.r[2], c.r[5]);
    mmi::pextlw(c.r[9], c.r[18], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05D0u);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A05D0u) [[unlikely]] return; }
L_002A05D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002A0784; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0] + 32u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] - 16u);
    c.f[2] = ld32((c.r[2].w[0] - 16u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[5], c.f[1]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[18], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[5] = c.vu0.vf[1];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A062Cu);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A062Cu) [[unlikely]] return; }
L_002A062C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_002A07E0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A064Cu);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A064Cu) [[unlikely]] return; }
L_002A064C:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0664u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0664u) [[unlikely]] return; }
L_002A0664:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A067Cu);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A067Cu) [[unlikely]] return; }
L_002A067C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[20] = c.r[3].w[0];
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.f[0] = c.r[3].w[0];
    c.vu0.vf[1] = c.r[2];
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[1]);
    fpu_div(c, 20u, c.f[20], c.f[21]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06D0u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A06D0u) [[unlikely]] return; }
L_002A06D0:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06E8u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A06E8u) [[unlikely]] return; }
L_002A06E8:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0700u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0700u) [[unlikely]] return; }
L_002A0700:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.f[0] = c.r[3].w[0];
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.f[1] = c.r[3].w[0];
    c.vu0.vf[1] = c.r[2];
    c.r[3] = c.vu0.vf[1];
    mmi::prot3w(c.r[3], c.r[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[2] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[1];
    mmi::prot3w(c.r[2], c.r[2]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[20] = c.f[20] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A07E0; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[30], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A07E0; } }
L_002A0784:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0] + 32u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[30], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] - 16u);
    c.f[2] = ld32((c.r[2].w[0] - 16u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[5], c.f[1]);
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[18], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07DCu);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A07DCu) [[unlikely]] return; }
L_002A07DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A07E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[23].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[30].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    set32(c.r[21], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 10;
L_002A0808:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[19], ld32((c.r[29].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0468u | kUnwind; return; } goto L_002A0468; } }
L_002A0820:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0830; } }
L_002A082C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A0830:
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
L_002A0870:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[5]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[23]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 256u);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08BCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002A08BCu) [[unlikely]] return; }
L_002A08BC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08D4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002A08D4u) [[unlikely]] return; }
L_002A08D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.r[3].d[0] = ~(0ull | c.r[16].d[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_002A0908; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0A90; } }
L_002A0908:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A091Cu);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A091Cu) [[unlikely]] return; }
L_002A091C:
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0934u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0934u) [[unlikely]] return; }
L_002A0934:
    ld128((c.r[29].w[0] + 528u) & ~15u, c.vu0.vf[2]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.vu0.vf[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0954u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0954u) [[unlikely]] return; }
L_002A0954:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.vu0.vf[2]);
    c.r[5].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 544u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.vu0.vf[5]);
    c.vu0.vf[3] = c.r[2];
    vu::sub(c.vu0, 15u, 2u, 5u, 2u);
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.r[3] = c.vu0.vf[2];
    c.f[3] = c.r[2].w[0];
    vu::move(c.vu0, 15u, 4u, 3u);
    c.f[1] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.r[3] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[4] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A09C0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A09C0:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 2u, 4u, 1u);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.vu0.vf[4]);
    c.r[3] = c.vu0.vf[2];
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    vu::sub(c.vu0, 15u, 1u, 4u, 1u);
    c.f[3] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[1];
    c.r[3] = c.vu0.vf[2];
    c.f[2] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = 0ull + 0ull;
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0A1C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A0A1C:
    ld128((c.r[29].w[0] + 528u) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = 0ull + 0ull;
    vu::sub(c.vu0, 15u, 2u, 1u, 3u);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.vu0.vf[4]);
    vu::sub(c.vu0, 15u, 1u, 4u, 3u);
    c.r[2] = c.vu0.vf[1];
    c.f[2] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[3] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0A7C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002A0A7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A0A90; } }
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002A0A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0AA4; } }
L_002A0A98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0CFC; } }
L_002A0AA4:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[20].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[30], 0u + 12u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 7;
L_002A0AC0:
    set32(c.r[3], c.r[29].w[0] + c.r[20].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    mmi::mult(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 4;
L_002A0AD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002A0CD8; } }
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002A0B14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0CAC; } }
L_002A0B14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B28u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0B28u) [[unlikely]] return; }
L_002A0B28:
    c.vu0.vf[6] = c.r[2];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.vu0.vf[6]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B44u);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0B44u) [[unlikely]] return; }
L_002A0B44:
    ld128((c.r[29].w[0] + 624u) & ~15u, c.vu0.vf[6]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.vu0.vf[3] = c.r[2];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], 0u + 2u);
    vu::move(c.vu0, 15u, 1u, 6u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.vu0.vf[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B6Cu);  if (depth < kMaxDepth) unit_0068(c, 115u, depth + 1u); else { c.pc = 0x002A2128u; return; } if (c.pc != 0x002A0B6Cu) [[unlikely]] return; }
L_002A0B6C:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.vu0.vf[3]);
    c.r[5].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 576u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 15u, 2u, 3u);
    c.f[4] = 0u;
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.vu0.vf[4] = c.r[2];
    vu::sub(c.vu0, 15u, 1u, 7u, 1u);
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.r[3] = c.vu0.vf[1];
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.r[3] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    vu::move(c.vu0, 15u, 5u, 4u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.vu0.vf[6]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0BE0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A0BE0:
    vu::sub(c.vu0, 15u, 2u, 5u, 3u);
    c.r[4].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 560u) & ~15u, c.vu0.vf[5]);
    c.r[3] = c.vu0.vf[2];
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    vu::sub(c.vu0, 15u, 1u, 5u, 3u);
    c.f[3] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[1];
    c.r[3] = c.vu0.vf[2];
    c.f[2] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0C38; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002A0C38:
    ld128((c.r[29].w[0] + 512u) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 2u, 6u, 4u);
    vu::sub(c.vu0, 15u, 1u, 3u, 4u);
    c.r[3] = c.vu0.vf[2];
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    c.r[2] = c.vu0.vf[1];
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[3] = c.vu0.vf[2];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0C90; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A0C90:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002A0CA8; } }
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 3;
L_002A0CA8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002A0CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0A98u | kUnwind; return; } goto L_002A0A98; } }
    set32(c.r[3], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002A0CD8; } }
    set32(c.r[2], c.r[29].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
L_002A0CD8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0AD0u | kUnwind; return; } goto L_002A0AD0; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0AC0u | kUnwind; return; } goto L_002A0AC0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002A0CFC:
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    set32(c.r[29], c.r[29].w[0] + 800u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0D30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 12u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[29].w[0] + 4u);
    set32(c.r[24], c.r[29].w[0] + 32u);
    set32(c.r[25], c.r[29].w[0] + 36u);
    set32(c.r[12], ld32((c.r[15].w[0] + 4u)));
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[24].d[0] + 0ull;
    c.r[17].d[0] = c.r[25].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 18;
L_002A0D78:
    set32(c.r[2], ld32((c.r[12].w[0] + 68u)));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[6], c.r[11].w[0] << 3);
    set32(c.r[7], c.r[11].w[0] + 1u);
    set32(c.r[2], c.r[13].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[29].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[19].w[0] + c.r[6].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = 0ull;
    set32(c.r[4], ld32((c.r[15].w[0] + 4u)));
    set32(c.r[8], c.r[18].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[12].w[0] + 68u)));
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[13].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 36;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0D78u | kUnwind; return; } goto L_002A0D78; } }
    c.r[15].d[0] = c.r[24].d[0] + 0ull;
    c.r[14].d[0] = c.r[16].d[0] + 0ull;
    c.r[13].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[12], 0u - 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002A0E20:
    set32(c.r[3], c.r[10].w[0] << 3);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[14].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[11], c.r[10].w[0] + 1u);
    c.r[5].d[0] = c.r[13].d[0] + 0ull;
    c.r[6].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 8;
L_002A0E40:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_002A0E5C; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0E74; } }
L_002A0E5C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002A0E80; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002A0E80; } }
L_002A0E74:
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0E98; } }
L_002A0E80:
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0E40u | kUnwind; return; } goto L_002A0E40; } }
L_002A0E98:
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    c.r[2].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0E20u | kUnwind; return; } goto L_002A0E20; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[12].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0EC8:
    set32(c.r[2], 0u + 12u);
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[7] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 64u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[7], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[2]);
    set32(c.r[10], c.f[5]);
    mmi::pextlw(c.r[8], c.r[6], c.r[2]);
    mmi::pextlw(c.r[9], c.r[10], c.r[7]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.f[6] = ld32((c.r[3].w[0] + 12u));
    c.f[4] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[2], c.f[4]);
    set32(c.r[7], c.f[6]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    set32(c.r[10], c.f[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], c.f[3]);
    mmi::pextlw(c.r[8], c.r[2], c.r[10]);
    mmi::pextlw(c.r[9], c.r[4], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[8], c.f[7]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A0FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.vu0.vf[1] = c.r[7];
    st128((c.r[29].w[0]) & ~15u, c.r[6]);
    c.vu0.vf[2] = c.r[6];
    vu::sub(c.vu0, 15u, 2u, 1u, 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.vu0.vf[3] = c.r[6];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    vu::sub(c.vu0, 15u, 1u, 3u, 1u);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[1] = c.r[8].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A105C; } }
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A105C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A105Cu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x002A105Cu) [[unlikely]] return; }
L_002A105C:
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::add(c.vu0, 15u, 1u, 2u, 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1080:
    c.vu0.vf[1] = c.r[8];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[12] = c.r[1].w[0];
    c.r[3] = c.vu0.vf[1];
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    c.vu0.vf[2] = c.r[6];
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[7] = c.r[3].w[0];
    c.r[3] = c.vu0.vf[1];
    c.f[10] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    c.vu0.vf[4] = c.r[9];
    c.f[4] = c.r[3].w[0];
    c.vu0.vf[3] = c.r[7];
    c.r[3] = c.vu0.vf[4];
    mmi::pcpyud(c.r[3], c.r[3], c.r[0]);
    c.f[9] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[3];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[3] = c.vu0.vf[4];
    c.f[11] = fp::sub(c.f[0], c.f[7]);
    c.r[2] = c.vu0.vf[3];
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[9]);
    c.f[5] = fp::sub(c.f[2], c.f[10]);
    c.f[8] = fp::sub(c.f[0], c.f[4]);
    c.f[2] = fp::mul(c.f[11], c.f[6]);
    c.f[0] = fp::mul(c.f[8], c.f[5]);
    c.f[3] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1128; } }
L_002A111C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1128:
    c.f[7] = fp::sub(c.f[10], c.f[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.f[4] = fp::sub(c.f[9], c.f[4]);
    c.f[0] = fp::mul(c.f[8], c.f[7]);
    c.f[1] = fp::mul(c.f[11], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 2u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A111Cu | kUnwind; return; } goto L_002A111C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A111Cu | kUnwind; return; } goto L_002A111C; } }
    c.f[0] = fp::mul(c.f[6], c.f[7]);
    c.f[1] = fp::mul(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A111Cu | kUnwind; return; } goto L_002A111C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A111Cu | kUnwind; return; } goto L_002A111C; } }
    c.f[0] = fp::mul(c.f[2], c.f[6]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[1] = fp::mul(c.f[2], c.f[5]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[9], c.f[0]);
    c.f[1] = fp::add(c.f[10], c.f[1]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[2] = c.r[3];
    vu::move(c.vu0, 8u, 1u, 2u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.f[1]);
    c.vu0.vf[2] = c.r[3];
    vu::mr32(c.vu0, 15u, 2u, 2u);
    vu::mr32(c.vu0, 2u, 1u, 2u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A11E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[24].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[14].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    c.vu0.vf[3] = c.r[5];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[5] = c.r[1].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], 0u + 12u);
    set32(c.r[13], ld32((c.r[24].w[0])));
    set32(c.r[25], 0u + 2u);
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[14].w[0])));
    mmi::mult(c, 0, c.r[13].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[15], ld32((c.r[10].w[0] + 68u)));
    set32(c.r[11], ld32((c.r[10].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 24;
L_002A1240:
    mmi::mult(c, 0, c.r[7].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[9].w[0] + 1u);
    set32(c.r[4], c.r[9].w[0] << 1);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[6].d[0];
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.f[1]);
    set32(c.r[17], c.f[0]);
    set32(c.r[2], c.f[3]);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[4], c.f[2]);
    c.f[3] = ld32((c.r[3].w[0]));
    mmi::pextlw(c.r[8], c.r[5], c.r[4]);
    mmi::pextlw(c.r[9], c.r[2], c.r[17]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    set32(c.r[4], c.f[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 3u);
    set32(c.r[3], c.f[3]);
    set32(c.r[5], c.f[0]);
    set32(c.r[17], c.f[4]);
    mmi::pextlw(c.r[8], c.r[4], c.r[3]);
    mmi::pextlw(c.r[9], c.r[17], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[2] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 52;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A133C; } }
    vu::sub(c.vu0, 15u, 1u, 2u, 3u);
    vu::mul(c.vu0, 14u, 5u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[8] = c.vu0.vf[5];
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1340; } }
L_002A133C:
    set32(c.r[12], 0u + 1u);
    c.budget -= 1;
L_002A1340:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002A1378; } }
    set32(c.r[4], ld32((c.r[14].w[0])));
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002A1388; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[10].w[0] + 72u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1388; } }
L_002A1378:
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1240u | kUnwind; return; } goto L_002A1240; } }
L_002A1388:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[17]);
    st32((c.r[24].w[0]), c.r[13].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A13A8:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    mmi::por(c.r[17], c.r[0], c.r[7]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    mmi::por(c.r[21], c.r[0], c.r[6]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0])));
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A140C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A141C; } }
L_002A140C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st128((c.r[2].w[0]) & ~15u, c.r[17]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A18A4; } }
L_002A141C:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002A1440; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1440; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st128((c.r[3].w[0]) & ~15u, c.r[17]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A18A4; } }
L_002A1440:
    mmi::por(c.r[5], c.r[0], c.r[21]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1458u);  if (depth < kMaxDepth) unit_0068(c, 60u, depth + 1u); else { c.pc = 0x002A11E0u; return; } if (c.pc != 0x002A1458u) [[unlikely]] return; }
L_002A1458:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A147C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    st128((c.r[4].w[0]) & ~15u, c.r[17]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A18A4; } }
L_002A147C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A148Cu);  if (depth < kMaxDepth) unit_0068(c, 50u, depth + 1u); else { c.pc = 0x002A0D30u; return; } if (c.pc != 0x002A148Cu) [[unlikely]] return; }
L_002A148C:
    set32(c.r[6], ld32((c.r[23].w[0])));
    set32(c.r[3], 0u + 12u);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[30].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[8], ld32((c.r[7].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    set32(c.r[5], c.r[30].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[12].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[7].w[0] + 64u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[7].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[2], c.f[0]);
    set32(c.r[5], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[4], c.f[4]);
    c.f[5] = ld32((c.r[3].w[0] + 12u));
    mmi::pextlw(c.r[8], c.r[6], c.r[5]);
    mmi::pextlw(c.r[9], c.r[4], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], c.f[5]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], c.f[3]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[0]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.budget -= 60;
    { const bool t = c.r[16].d[0] != c.r[10].d[0];  if (t) { goto L_002A1588; } }
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A15C0; } }
L_002A1588:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[11].sd[0] > 0;  if (t) { goto L_002A15C8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1588u | kUnwind; return; } goto L_002A1588; } }
    st128((c.r[12].w[0]) & ~15u, c.r[17]);
    c.budget -= 1;
L_002A15C0:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] <= 0;  if (t) { goto L_002A15DC; } }
L_002A15C8:
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15DCu);  if (depth < kMaxDepth) unit_0068(c, 54u, depth + 1u); else { c.pc = 0x002A0EC8u; return; } if (c.pc != 0x002A15DCu) [[unlikely]] return; }
L_002A15DC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002A15F8; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1768; } }
L_002A15F8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A160Cu);  if (depth < kMaxDepth) unit_0068(c, 50u, depth + 1u); else { c.pc = 0x002A0D30u; return; } if (c.pc != 0x002A160Cu) [[unlikely]] return; }
L_002A160C:
    set32(c.r[5], 0u + 12u);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], ld32((c.r[7].w[0] + 68u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[9] = c.r[1].w[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[7].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[6], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[8] = ld32((c.r[3].w[0] + 12u));
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[4], c.f[2]);
    set32(c.r[5], c.f[1]);
    set32(c.r[10], c.f[4]);
    mmi::pextlw(c.r[8], c.r[5], c.r[4]);
    mmi::pextlw(c.r[9], c.r[10], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    set32(c.r[2], c.f[5]);
    set32(c.r[4], c.f[0]);
    c.r[11] = c.vu0.vf[2];
    set32(c.r[3], c.f[3]);
    c.r[12] = c.vu0.vf[2];
    mmi::pcpyud(c.r[12], c.r[12], c.r[0]);
    set32(c.r[5], c.f[8]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.f[6] = c.r[11].w[0];
    c.r[6] = c.vu0.vf[1];
    c.r[10] = c.vu0.vf[1];
    mmi::pcpyud(c.r[10], c.r[10], c.r[0]);
    c.f[0] = c.r[6].w[0];
    c.f[7] = c.r[12].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[10].w[0];
    c.f[4] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    set32(c.r[11], c.f[0]);
    c.vu0.vf[1] = c.r[11];
    vu::move(c.vu0, 8u, 3u, 1u);
    c.f[1] = fp::mul(c.f[1], c.f[9]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[3] = c.r[2];
    vu::mr32(c.vu0, 15u, 3u, 3u);
    vu::mr32(c.vu0, 2u, 1u, 3u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.f[4]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    c.vu0.vf[1] = c.r[2];
    vu::mr32(c.vu0, 15u, 1u, 1u);
    vu::mr32(c.vu0, 15u, 1u, 1u);
    vu::mr32(c.vu0, 4u, 3u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.f[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[3] = c.r[2];
    vu::mr32(c.vu0, 1u, 1u, 3u);
    vu::add(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.budget -= 87;
L_002A1768:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[8]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    mmi::por(c.r[6], c.r[0], c.r[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1788u);  if (depth < kMaxDepth) unit_0068(c, 57u, depth + 1u); else { c.pc = 0x002A1080u; return; } if (c.pc != 0x002A1788u) [[unlikely]] return; }
L_002A1788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A17A4; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A18A4; } }
L_002A17A4:
    set32(c.r[5], c.r[30].w[0] + 1u);
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 12u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], ld32((c.r[7].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::por(c.r[6], c.r[0], c.r[21]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 64u)));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], c.f[0]);
    c.f[6] = ld32((c.r[10].w[0] + 12u));
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    c.f[4] = ld32((c.r[10].w[0]));
    set32(c.r[11], c.f[3]);
    set32(c.r[12], c.f[2]);
    set32(c.r[3], c.f[5]);
    mmi::pextlw(c.r[8], c.r[12], c.r[11]);
    mmi::pextlw(c.r[9], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[2] = c.r[8];
    set32(c.r[10], c.f[4]);
    set32(c.r[11], c.f[1]);
    set32(c.r[12], c.f[0]);
    set32(c.r[2], c.f[6]);
    mmi::pextlw(c.r[8], c.r[11], c.r[10]);
    mmi::pextlw(c.r[9], c.r[2], c.r[12]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[8] = c.vu0.vf[2];
    c.r[9] = c.vu0.vf[1];
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1888u);  if (depth < kMaxDepth) unit_0068(c, 57u, depth + 1u); else { c.pc = 0x002A1080u; return; } if (c.pc != 0x002A1888u) [[unlikely]] return; }
L_002A1888:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[6]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[7]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18A4u);  if (depth < kMaxDepth) unit_0068(c, 55u, depth + 1u); else { c.pc = 0x002A0FC0u; return; } if (c.pc != 0x002A18A4u) [[unlikely]] return; }
L_002A18A4:
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
L_002A18D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002A1A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A19F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::pextlw(c.r[8], c.r[2], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    set32(c.r[4], c.r[4].w[0] + 12928u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[3].w[0] + 31352u);
    set32(c.r[16], c.r[16].w[0] + 12944u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1938u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002A1938u) [[unlikely]] return; }
L_002A1938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31040u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1950u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002A1950u) [[unlikely]] return; }
L_002A1950:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12960u);
    set32(c.r[2], c.r[2].w[0] + 31304u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1970u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002A1970u) [[unlikely]] return; }
L_002A1970:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31056u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1988u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002A1988u) [[unlikely]] return; }
L_002A1988:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12976u);
    set32(c.r[2], c.r[2].w[0] + 31256u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19A8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002A19A8u) [[unlikely]] return; }
L_002A19A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31072u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19C0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002A19C0u) [[unlikely]] return; }
L_002A19C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 12992u);
    set32(c.r[3], c.r[4].w[0] + 13016u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 13016u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1A30; } }
L_002A19F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[2].w[0] + 12992u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1A30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[6], c.r[6].w[0] + 31088u);
    set32(c.r[7], c.r[7].w[0] + 31136u);
    set32(c.r[8], 0u + 592u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A30u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002A1A30u) [[unlikely]] return; }
L_002A1A30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1A48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    mmi::por(c.r[17], c.r[0], c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 13016u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::por(c.r[6], c.r[0], c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A7Cu);  if (depth < kMaxDepth) unit_0067(c, 314u, depth + 1u); else { c.pc = 0x0029FC20u; return; } if (c.pc != 0x002A1A7Cu) [[unlikely]] return; }
L_002A1A7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A1AA0; } }
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
L_002A1AA0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1AB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 13016u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[2], c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.f[0]);
    set32(c.r[5], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B90; } }
    set32(c.r[5], c.r[16].w[0] + 44u);
    c.r[6] = c.vu0.vf[1];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B30u);  if (depth < kMaxDepth) unit_0067(c, 314u, depth + 1u); else { c.pc = 0x0029FC20u; return; } if (c.pc != 0x002A1B30u) [[unlikely]] return; }
L_002A1B30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B60; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A1B60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 13016u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B64; } }
L_002A1B60:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1B64:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 13016u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B94; } }
L_002A1B90:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_002A1B94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1BB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1BE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A1C04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1C04:
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1C18:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1C7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 31088u);
    set32(c.r[7], c.r[7].w[0] + 31136u);
    set32(c.r[8], 0u + 592u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C7Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002A1C7Cu) [[unlikely]] return; }
L_002A1C7C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1C94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C94u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002A1C94u) [[unlikely]] return; }
L_002A1C94:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1CB0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A1D2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1CF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A1CF0; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1CF0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1D2C; } }
    set32(c.r[7], c.r[8].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1CF0u | kUnwind; return; } goto L_002A1CF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1CF0u | kUnwind; return; } goto L_002A1CF0; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A1D2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1D38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_002A1DC4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.budget -= 1;
L_002A1D70:
    set32(c.r[4], ld32((c.r[19].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D80u);  if (depth < kMaxDepth) unit_007B(c, 73u, depth + 1u); else { c.pc = 0x002ECC68u; return; } if (c.pc != 0x002A1D80u) [[unlikely]] return; }
L_002A1D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1DB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002A1DB0; } }
    set32(c.r[4], ld32((c.r[19].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DA4u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x002A1DA4u) [[unlikely]] return; }
L_002A1DA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1DC8; } }
L_002A1DB0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002A1DB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1D70u | kUnwind; return; } goto L_002A1D70; } }
L_002A1DC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1DC8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1DF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1E2C; } }
    c.budget -= 1;
L_002A1E08:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002A1E18; } }
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 1;
L_002A1E18:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1E08u | kUnwind; return; } goto L_002A1E08; } }
L_002A1E2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1E38:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1E74; } }
    c.budget -= 1;
L_002A1E50:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A1E60; } }
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 1;
L_002A1E60:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1E50u | kUnwind; return; } goto L_002A1E50; } }
L_002A1E74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1E80:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A1EB8; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
L_002A1EA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1EA0u | kUnwind; return; } goto L_002A1EA0; } }
L_002A1EB8:
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1EC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A1F00; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A1EE0:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002A1F30; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 32u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1EE0u | kUnwind; return; } goto L_002A1EE0; } }
L_002A1F00:
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_002A1F04:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1F3C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002A1F3C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1F40; } }
L_002A1F30:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1F04u | kUnwind; return; } goto L_002A1F04; } }
L_002A1F3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1F54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1F54:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[3] = ld32((c.r[6].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.f[2]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[10], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[10], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FB4u);  if (depth < kMaxDepth) unit_0067(c, 314u, depth + 1u); else { c.pc = 0x0029FC20u; return; } if (c.pc != 0x002A1FB4u) [[unlikely]] return; }
L_002A1FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1FC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FE0u);  if (depth < kMaxDepth) unit_0067(c, 314u, depth + 1u); else { c.pc = 0x0029FC20u; return; } if (c.pc != 0x002A1FE0u) [[unlikely]] return; }
L_002A1FE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002A2004; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2008; } }
L_002A2004:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2008:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::por(c.r[5], c.r[0], c.r[6]);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_002A206C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2058u);  if (depth < kMaxDepth) unit_0068(c, 38u, depth + 1u); else { c.pc = 0x002A0870u; return; } if (c.pc != 0x002A2058u) [[unlikely]] return; }
L_002A2058:
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2070; } }
L_002A206C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2070:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2088:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 14;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002A2100; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.budget -= 2;
L_002A20C8:
    set32(c.r[4], ld32((c.r[20].w[0] - 17248u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A20D8u);  if (depth < kMaxDepth) unit_007B(c, 67u, depth + 1u); else { c.pc = 0x002ECA40u; return; } if (c.pc != 0x002A20D8u) [[unlikely]] return; }
L_002A20D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A20F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_002A20F0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A20C8u | kUnwind; return; } goto L_002A20C8; } }
L_002A2100:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2128:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.f[2]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    set32(c.r[6], c.f[3]);
    mmi::pextlw(c.r[8], c.r[4], c.r[3]);
    mmi::pextlw(c.r[9], c.r[6], c.r[5]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[2] = c.vu0.vf[1];
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2190:
    set32(c.r[2], 0u + 12u);
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[9].w[0] + 68u)));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[9].w[0] + 64u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[8].d[0] != 0) c.r[7].d[0] = 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.f[2]);
    set32(c.r[11], c.f[0]);
    set32(c.r[12], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[12], c.r[11]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.f[2]);
    set32(c.r[4], c.f[0]);
    set32(c.r[5], c.f[3]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2260:
    c.vu0.vf[1] = c.r[6];
    c.r[2] = c.vu0.vf[1];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.vu0.vf[3] = c.r[5];
    c.f[4] = c.r[2].w[0];
    c.vu0.vf[2] = c.r[7];
    c.r[2] = c.vu0.vf[3];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[5] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    mmi::pcpyud(c.r[2], c.r[2], c.r[0]);
    c.f[1] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    c.f[3] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[3];
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[2] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[2];
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A22E8:
    c.f[12] = fp::mul(c.f[12], c.f[15]);
    c.f[0] = fp::mul(c.f[13], c.f[14]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[12].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[9].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002A2398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2380; } }
    c.budget -= 1;
L_002A2350:
    set32(c.r[4], ld32((c.r[12].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A2398; } }
L_002A2380:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2350u | kUnwind; return; } goto L_002A2350; } }
    st128((c.r[11].w[0]) & ~15u, c.r[7]);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A23AC; } }
L_002A2398:
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23ACu);  if (depth < kMaxDepth) unit_0068(c, 54u, depth + 1u); else { c.pc = 0x002A0EC8u; return; } if (c.pc != 0x002A23ACu) [[unlikely]] return; }
L_002A23AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A23C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A23D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A23E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A23F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A23F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[3].w[0] + 13016u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 13016u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002A2448; } }
    c.budget -= 1;
L_002A2428:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002A244C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2428u | kUnwind; return; } goto L_002A2428; } }
L_002A2448:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_002A244C:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2478; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002A2478; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A247C; } }
L_002A2478:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A247C:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2490u);  if (depth < kMaxDepth) unit_0067(c, 300u, depth + 1u); else { c.pc = 0x0029F720u; return; } if (c.pc != 0x002A2490u) [[unlikely]] return; }
L_002A2490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A24A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] + 13016u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002A259C; } }
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002A24E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 13016u)));
    set32(c.r[17], c.r[6].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A2528; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002A2508:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002A2558; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2508u | kUnwind; return; } goto L_002A2508; } }
L_002A2528:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_002A252C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2564; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A2564; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2568; } }
L_002A2558:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A252Cu | kUnwind; return; } goto L_002A252C; } }
L_002A2564:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2568:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A2588; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2588u);  if (depth < kMaxDepth) unit_0068(c, 98u, depth + 1u); else { c.pc = 0x002A1E38u; return; } if (c.pc != 0x002A2588u) [[unlikely]] return; }
L_002A2588:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24E8u | kUnwind; return; } goto L_002A24E8; } }
L_002A259C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A25C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], c.r[3].w[0] + 13016u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 13016u)));
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002A2608; } }
    c.budget -= 1;
L_002A25E8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002A260C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E8u | kUnwind; return; } goto L_002A25E8; } }
L_002A2608:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_002A260C:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2638; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002A2638; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A263C; } }
L_002A2638:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A263C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A2654; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_002A2654:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2678u);  if (depth < kMaxDepth) unit_0068(c, 71u, depth + 1u); else { c.pc = 0x002A18D8u; return; } if (c.pc != 0x002A2678u) [[unlikely]] return; }
L_002A2678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26A0u);  if (depth < kMaxDepth) unit_0068(c, 71u, depth + 1u); else { c.pc = 0x002A18D8u; return; } if (c.pc != 0x002A26A0u) [[unlikely]] return; }
L_002A26A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A26B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + 10368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A274C; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002A2708:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2714u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2714u) [[unlikely]] return; }
L_002A2714:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2738; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2738u);  if (depth < kMaxDepth) unit_0068(c, 186u, depth + 1u); else { c.pc = 0x002A2B60u; return; } if (c.pc != 0x002A2738u) [[unlikely]] return; }
L_002A2738:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2708u | kUnwind; return; } goto L_002A2708; } }
L_002A274C:
    set32(c.r[2], c.r[20].w[0] + 10368u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[19], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[22], c.r[2].w[0] + 14208u);
    set32(c.r[18], c.r[3].w[0] + 9872u);
    c.budget -= 4;
L_002A2770:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], 0u - 1u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002A2948; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002A286C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27A0u);  if (depth < kMaxDepth) unit_0062(c, 107u, depth + 1u); else { c.pc = 0x00289CC8u; return; } if (c.pc != 0x002A27A0u) [[unlikely]] return; }
L_002A27A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27B4u);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00287618u; return; } if (c.pc != 0x002A27B4u) [[unlikely]] return; }
L_002A27B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27C0u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A27C0u) [[unlikely]] return; }
L_002A27C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A27DCu) [[unlikely]] return; }
L_002A27DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27F0u);  if (depth < kMaxDepth) unit_0065(c, 232u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002A27F0u) [[unlikely]] return; }
L_002A27F0:
    st16((c.r[17].w[0] + 230u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2810u) [[unlikely]] return; }
L_002A2810:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A281Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A281Cu) [[unlikely]] return; }
L_002A281C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A282Cu);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x002A282Cu) [[unlikely]] return; }
L_002A282C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2838u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A2838u) [[unlikely]] return; }
L_002A2838:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2854u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2854u) [[unlikely]] return; }
L_002A2854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2864u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x002A2864u) [[unlikely]] return; }
L_002A2864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2948; } }
L_002A286C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2878u);  if (depth < kMaxDepth) unit_0062(c, 107u, depth + 1u); else { c.pc = 0x00289CC8u; return; } if (c.pc != 0x002A2878u) [[unlikely]] return; }
L_002A2878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A288Cu);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00287618u; return; } if (c.pc != 0x002A288Cu) [[unlikely]] return; }
L_002A288C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2898u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2898u) [[unlikely]] return; }
L_002A2898:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A28B4u) [[unlikely]] return; }
L_002A28B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28C8u);  if (depth < kMaxDepth) unit_0065(c, 232u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002A28C8u) [[unlikely]] return; }
L_002A28C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28D4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A28D4u) [[unlikely]] return; }
L_002A28D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28E4u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x002A28E4u) [[unlikely]] return; }
L_002A28E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28F0u);  if (depth < kMaxDepth) unit_0065(c, 340u, depth + 1u); else { c.pc = 0x002978D8u; return; } if (c.pc != 0x002A28F0u) [[unlikely]] return; }
L_002A28F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28FCu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A28FCu) [[unlikely]] return; }
L_002A28FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2918u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2918u) [[unlikely]] return; }
L_002A2918:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2928u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x002A2928u) [[unlikely]] return; }
L_002A2928:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2934u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2934u) [[unlikely]] return; }
L_002A2934:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 912u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2948u);  if (depth < kMaxDepth) unit_003E(c, 8u, depth + 1u); else { c.pc = 0x001F8718u; return; } if (c.pc != 0x002A2948u) [[unlikely]] return; }
L_002A2948:
    set32(c.r[3], c.r[20].w[0] + 10368u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2770u | kUnwind; return; } goto L_002A2770; } }
L_002A2964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].d[0] = c.r[2].d[0] | 2816ull;
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 13248u);
    c.budget -= 7;
L_002A2980:
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2990u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A2990u) [[unlikely]] return; }
L_002A2990:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A29A4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10924u)));
    st16((c.r[3].w[0] + 912u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A29A4:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2980u | kUnwind; return; } goto L_002A2980; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A29E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 9872u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A10u);  if (depth < kMaxDepth) unit_0062(c, 107u, depth + 1u); else { c.pc = 0x00289CC8u; return; } if (c.pc != 0x002A2A10u) [[unlikely]] return; }
L_002A2A10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A24u);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00287618u; return; } if (c.pc != 0x002A2A24u) [[unlikely]] return; }
L_002A2A24:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A30u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2A30u) [[unlikely]] return; }
L_002A2A30:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2A4Cu) [[unlikely]] return; }
L_002A2A4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A60u);  if (depth < kMaxDepth) unit_0065(c, 232u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002A2A60u) [[unlikely]] return; }
L_002A2A60:
    st16((c.r[17].w[0] + 230u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2A80u) [[unlikely]] return; }
L_002A2A80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A90u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x002A2A90u) [[unlikely]] return; }
L_002A2A90:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2ABCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2ABCu) [[unlikely]] return; }
L_002A2ABC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2ACCu);  if (depth < kMaxDepth) unit_0065(c, 343u, depth + 1u); else { c.pc = 0x00297930u; return; } if (c.pc != 0x002A2ACCu) [[unlikely]] return; }
L_002A2ACC:
    set32(c.r[2], ld32((c.r[17].w[0] + 840u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[16].w[0] + 484u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2AE4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A2AE4u) [[unlikely]] return; }
L_002A2AE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2AF4u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x002A2AF4u) [[unlikely]] return; }
L_002A2AF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B00u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A2B00u) [[unlikely]] return; }
L_002A2B00:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2B1Cu) [[unlikely]] return; }
L_002A2B1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B2Cu);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x002A2B2Cu) [[unlikely]] return; }
L_002A2B2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[17].w[0] + 948u), c.f[0]);
    st32((c.r[17].w[0] + 952u), c.f[1]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2B60:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 624u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BA0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A2BA0u) [[unlikely]] return; }
L_002A2BA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A2D30; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BB8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2BB8u) [[unlikely]] return; }
L_002A2BB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2BD4u) [[unlikely]] return; }
L_002A2BD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BE8u);  if (depth < kMaxDepth) unit_0065(c, 232u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002A2BE8u) [[unlikely]] return; }
L_002A2BE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BF4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2BF4u) [[unlikely]] return; }
L_002A2BF4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 912u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C08u);  if (depth < kMaxDepth) unit_003E(c, 8u, depth + 1u); else { c.pc = 0x001F8718u; return; } if (c.pc != 0x002A2C08u) [[unlikely]] return; }
L_002A2C08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C14u);  if (depth < kMaxDepth) unit_0065(c, 340u, depth + 1u); else { c.pc = 0x002978D8u; return; } if (c.pc != 0x002A2C14u) [[unlikely]] return; }
L_002A2C14:
    set32(c.r[16], ld32((c.r[18].w[0] + 840u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C24u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A2C24u) [[unlikely]] return; }
L_002A2C24:
    set32(c.r[3], ld32((c.r[2].w[0] + 852u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A2C80; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 840u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C58u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002A2C58u) [[unlikely]] return; }
L_002A2C58:
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.f[14] = ld32((c.r[29].w[0] + 152u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C78u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002A2C78u) [[unlikely]] return; }
L_002A2C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2CA0; } }
L_002A2C80:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002A2CA0u) [[unlikely]] return; }
L_002A2CA0:
    set32(c.r[5], 0u + 1024u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CB0u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x002A2CB0u) [[unlikely]] return; }
L_002A2CB0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CD4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A2CD4u) [[unlikely]] return; }
L_002A2CD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CE4u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x002A2CE4u) [[unlikely]] return; }
L_002A2CE4:
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2D04u) [[unlikely]] return; }
L_002A2D04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D14u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x002A2D14u) [[unlikely]] return; }
L_002A2D14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 520u), 0u);
    st32((c.r[18].w[0] + 952u), c.f[0]);
    st32((c.r[18].w[0] + 948u), c.f[1]);
    c.budget -= 7;
L_002A2D30:
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    set32(c.r[29], c.r[29].w[0] + 624u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2D50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D70u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2D70u) [[unlikely]] return; }
L_002A2D70:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 17200u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D88u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2D88u) [[unlikely]] return; }
L_002A2D88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D98u);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002A2D98u) [[unlikely]] return; }
L_002A2D98:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[29].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DB0u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2DB0u) [[unlikely]] return; }
L_002A2DB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DC0u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2DC0u) [[unlikely]] return; }
L_002A2DC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DD0u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002A2DD0u) [[unlikely]] return; }
L_002A2DD0:
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DECu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2DECu) [[unlikely]] return; }
L_002A2DEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DFCu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2DFCu) [[unlikely]] return; }
L_002A2DFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E0Cu);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002A2E0Cu) [[unlikely]] return; }
L_002A2E0C:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[29].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E24u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2E24u) [[unlikely]] return; }
L_002A2E24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E34u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A2E34u) [[unlikely]] return; }
L_002A2E34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E44u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002A2E44u) [[unlikely]] return; }
L_002A2E44:
    set32(c.r[16], c.r[16].w[0] << 2);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2E70:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2EE0u) [[unlikely]] return; }
L_002A2EE0:
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2F00u) [[unlikely]] return; }
L_002A2F00:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F20u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002A2F20u) [[unlikely]] return; }
L_002A2F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F2Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002A2F2Cu) [[unlikely]] return; }
L_002A2F2C:
    c.f[12] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F4Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002A2F4Cu) [[unlikely]] return; }
L_002A2F4C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F5Cu);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002A2F5Cu) [[unlikely]] return; }
L_002A2F5C:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F84u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A2F84u) [[unlikely]] return; }
L_002A2F84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A3078; } }
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_002A2F98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[21].d[0];  if (t) { goto L_002A3058; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FACu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002A2FACu) [[unlikely]] return; }
L_002A2FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3058; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 916u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3058; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 840u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002A3058; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2FECu) [[unlikely]] return; }
L_002A2FEC:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[12] = c.r[30].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3018u);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002A3018u) [[unlikely]] return; }
L_002A3018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3058; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002A3034; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A304C; } }
L_002A3034:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3058; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_002A3058; } }
L_002A304C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A307C; } }
L_002A3058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A306Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A306Cu) [[unlikely]] return; }
L_002A306C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F98u | kUnwind; return; } goto L_002A2F98; } }
L_002A3078:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A307C:
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
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A30B8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3114u) [[unlikely]] return; }
L_002A3114:
    set32(c.r[3], ld32((c.r[21].w[0] + 212u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3138u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3138u) [[unlikely]] return; }
L_002A3138:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3150u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002A3150u) [[unlikely]] return; }
L_002A3150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A315Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x002A315Cu) [[unlikely]] return; }
L_002A315C:
    c.f[12] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A317Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002A317Cu) [[unlikely]] return; }
L_002A317C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A318Cu);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002A318Cu) [[unlikely]] return; }
L_002A318C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A319Cu);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x002A319Cu) [[unlikely]] return; }
L_002A319C:
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31D0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A31D0u) [[unlikely]] return; }
L_002A31D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A32B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 13248u);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.budget -= 5;
L_002A31F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[22].d[0];  if (t) { goto L_002A3298; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[21].d[0];  if (t) { goto L_002A3298; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A320Cu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002A320Cu) [[unlikely]] return; }
L_002A320C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3298; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 916u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3298; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 840u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002A3298; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A3298; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3264u) [[unlikely]] return; }
L_002A3264:
    c.f[12] = c.r[23].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3284u);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002A3284u) [[unlikely]] return; }
L_002A3284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3298; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A32BC; } }
L_002A3298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32ACu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A32ACu) [[unlikely]] return; }
L_002A32AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A31F0u | kUnwind; return; } goto L_002A31F0; } }
L_002A32B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A32BC:
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
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A32F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3320; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A331Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A331Cu) [[unlikely]] return; }
L_002A331C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002A3320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3338:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3374u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A3374u) [[unlikely]] return; }
L_002A3374:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 230u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A33B4; } }
    set32(c.r[2], 0u + 8480u);
    set32(c.r[4], c.r[16].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[5].w[0] + 230u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 17504u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 640u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A33DC; } }
L_002A33B4:
    set32(c.r[2], 0u + 8480u);
    set32(c.r[4], c.r[16].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[5].w[0] + 230u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 17504u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 10;
L_002A33DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A33F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3434u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A3434u) [[unlikely]] return; }
L_002A3434:
    set32(c.r[3], 0u + 8480u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st16((c.r[2].w[0] + 230u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 17504u);
    st32((c.r[17].w[0] + 640u), 0u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3478:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 13248u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A34B4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A34B4u) [[unlikely]] return; }
L_002A34B4:
    set32(c.r[5], c.r[17].w[0] - 1u);
    set32(c.r[3], 0u + 8480u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st16((c.r[2].w[0] + 230u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17504u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0]), 0u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A34F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 13248u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3534u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A3534u) [[unlikely]] return; }
L_002A3534:
    set32(c.r[4], ld32((c.r[16].w[0] + 640u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3554; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A3574; } }
L_002A3554:
    set32(c.r[4], 0u + 8480u);
    set32(c.r[3], c.r[17].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 17504u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[16].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_002A3574:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 9872u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35B8u);  if (depth < kMaxDepth) unit_0062(c, 107u, depth + 1u); else { c.pc = 0x00289CC8u; return; } if (c.pc != 0x002A35B8u) [[unlikely]] return; }
L_002A35B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35CCu);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00287618u; return; } if (c.pc != 0x002A35CCu) [[unlikely]] return; }
L_002A35CC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35D8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A35D8u) [[unlikely]] return; }
L_002A35D8:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A35F4u) [[unlikely]] return; }
L_002A35F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3608u);  if (depth < kMaxDepth) unit_0065(c, 232u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002A3608u) [[unlikely]] return; }
L_002A3608:
    st16((c.r[17].w[0] + 230u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3628u) [[unlikely]] return; }
L_002A3628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3634u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A3634u) [[unlikely]] return; }
L_002A3634:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3644u);  if (depth < kMaxDepth) unit_0065(c, 233u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x002A3644u) [[unlikely]] return; }
L_002A3644:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3650u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A3650u) [[unlikely]] return; }
L_002A3650:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A366Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A366Cu) [[unlikely]] return; }
L_002A366C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A367Cu);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x002A367Cu) [[unlikely]] return; }
L_002A367C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 10464u)));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3738; } }
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[19], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 2816ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_002A36F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002A3728; } }
    set32(c.r[17], c.r[18].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3710u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002A3710u) [[unlikely]] return; }
L_002A3710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3728; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3728u);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x002A3728u) [[unlikely]] return; }
L_002A3728:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A36F0u | kUnwind; return; } goto L_002A36F0; } }
L_002A3738:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 9872u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3784u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002A3784u) [[unlikely]] return; }
L_002A3784:
    set32(c.r[4], ld32((c.r[2].w[0] + 840u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37A0u);  if (depth < kMaxDepth) unit_0049(c, 71u, depth + 1u); else { c.pc = 0x00225208u; return; } if (c.pc != 0x002A37A0u) [[unlikely]] return; }
L_002A37A0:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57A0000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002A37CCu) [[unlikely]] return; }
L_002A37CC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37E0u);  if (depth < kMaxDepth) unit_008A(c, 136u, depth + 1u); else { c.pc = 0x0032A0B8u; return; } if (c.pc != 0x002A37E0u) [[unlikely]] return; }
L_002A37E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37FCu);  if (depth < kMaxDepth) unit_0061(c, 359u, depth + 1u); else { c.pc = 0x00287B70u; return; } if (c.pc != 0x002A37FCu) [[unlikely]] return; }
L_002A37FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A3828; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 224u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3828u);  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00293600u; return; } if (c.pc != 0x002A3828u) [[unlikely]] return; }
L_002A3828:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3854u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002A3854u) [[unlikely]] return; }
L_002A3854:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 27280u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3870u);  if (depth < kMaxDepth) unit_0067(c, 253u, depth + 1u); else { c.pc = 0x0029E6B8u; return; } if (c.pc != 0x002A3870u) [[unlikely]] return; }
L_002A3870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3880u);  if (depth < kMaxDepth) unit_0062(c, 68u, depth + 1u); else { c.pc = 0x00289680u; return; } if (c.pc != 0x002A3880u) [[unlikely]] return; }
L_002A3880:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A388Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002A388Cu) [[unlikely]] return; }
L_002A388C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3898u);  if (depth < kMaxDepth) unit_0066(c, 115u, depth + 1u); else { c.pc = 0x00299048u; return; } if (c.pc != 0x002A3898u) [[unlikely]] return; }
L_002A3898:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A38A8u);  if (depth < kMaxDepth) unit_0089(c, 276u, depth + 1u); else { c.pc = 0x00327498u; return; } if (c.pc != 0x002A38A8u) [[unlikely]] return; }
L_002A38A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A38B0u);  if (depth < kMaxDepth) unit_0049(c, 2u, depth + 1u); else { c.pc = 0x002240C8u; return; } if (c.pc != 0x002A38B0u) [[unlikely]] return; }
L_002A38B0:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A38C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A38E0u);  if (depth < kMaxDepth) unit_0095(c, 131u, depth + 1u); else { c.pc = 0x00355150u; return; } if (c.pc != 0x002A38E0u) [[unlikely]] return; }
L_002A38E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A38F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3908u);  if (depth < kMaxDepth) unit_0095(c, 129u, depth + 1u); else { c.pc = 0x00355118u; return; } if (c.pc != 0x002A3908u) [[unlikely]] return; }
L_002A3908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3920:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 416u), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3978u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A3978u) [[unlikely]] return; }
L_002A3978:
    mmi::mult(c, 0, c.r[21].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002A39B0; } }
    set32(c.r[3], c.r[4].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A39B8; } }
L_002A39B0:
    set32(c.r[2], c.r[4].w[0] + 10368u);
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_002A39B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A3A74; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[19], c.r[29].w[0] + 224u);
    set32(c.r[17], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[30], 0u - 1u);
    set32(c.r[22], 0u + 13248u);
    c.budget -= 6;
L_002A39D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A39F4u) [[unlikely]] return; }
L_002A39F4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A04u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x002A3A04u) [[unlikely]] return; }
L_002A3A04:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[30].d[0];  if (t) { goto L_002A3A1C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3A54; } }
L_002A3A1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A3A54; } }
    st32((c.r[17].w[0] + 112u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == c.r[18].d[0];  if (t) { goto L_002A3A74; } }
L_002A3A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A68u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x002A3A68u) [[unlikely]] return; }
L_002A3A68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A39D8u | kUnwind; return; } goto L_002A39D8; } }
L_002A3A74:
    set32(c.r[16], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A8Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002A3A8Cu) [[unlikely]] return; }
L_002A3A8C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3AC0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002A3AA8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3AA8u | kUnwind; return; } goto L_002A3AA8; } }
L_002A3AC0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[20] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B08:
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B18:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3B58; } }
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 10160u);
    set32(c.r[6], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B58:
    c.r[2].d[0] = c.r[6].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3B84; } }
    set32(c.r[4], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 10160u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3BA8; } }
L_002A3B84:
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3BBC; } }
    set32(c.r[4], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 10160u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 6;
L_002A3BA8:
    set32(c.r[6], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002A3BBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3BC8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3C04; } }
    set32(c.r[2], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 10160u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3C64; } }
    goto L_002A3C04;
L_002A3C00:
    c.budget -= 1;
L_002A3C04:
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3C38; } }
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 10160u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3C64; } }
L_002A3C38:
    c.r[2].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3C68; } }
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 10160u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
L_002A3C64:
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 1;
L_002A3C68:
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3C78:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(240ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3CF8; } }
    set32(c.r[5], 0u + 8480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 23808u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17504u);
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 8376u), c.r[8].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 8384u), c.r[9].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8388u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 8380u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8360u), 0u);
    st32((c.r[3].w[0] + 8364u), 0u);
    st32((c.r[2].w[0] + 8368u), 0u);
    st32((c.r[3].w[0] + 8372u), 0u);
    st16((c.r[5].w[0] + 8454u), static_cast<std::uint16_t>(0u));
    c.budget -= 28;
L_002A3CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3D00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A3DC0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] - 26464u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002A3DC0; } }
    set32(c.r[4], c.r[21].w[0] + 17504u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002A3DC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8484u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A3DC0; } }
    st32((c.r[6].w[0] - 26464u), 0u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002A3D88:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3D98u);  if (depth < kMaxDepth) unit_0069(c, 54u, depth + 1u); else { c.pc = 0x002A4D10u; return; } if (c.pc != 0x002A3D98u) [[unlikely]] return; }
L_002A3D98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DA8u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4930u; return; } if (c.pc != 0x002A3DA8u) [[unlikely]] return; }
L_002A3DA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8480u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3D88u | kUnwind; return; } goto L_002A3D88; } }
L_002A3DC0:
    set32(c.r[2], 0u + 8480u);
    set32(c.r[19], c.r[21].w[0] + 17504u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    st16((c.r[17].w[0] + 8452u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8456u), 0u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 8464u), 0u);
    st32((c.r[3].w[0] + 8468u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A3E10; } }
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E10u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4930u; return; } if (c.pc != 0x002A3E10u) [[unlikely]] return; }
L_002A3E10:
    set32(c.r[2], c.r[19].w[0] + 8376u);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3E40; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E38u);  if (depth < kMaxDepth) unit_0069(c, 10u, depth + 1u); else { c.pc = 0x002A4158u; return; } if (c.pc != 0x002A3E38u) [[unlikely]] return; }
L_002A3E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3E68; } }
L_002A3E40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8454u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3E68; } }
    set32(c.r[5], c.r[19].w[0] + 8360u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E68u);  if (depth < kMaxDepth) unit_0069(c, 10u, depth + 1u); else { c.pc = 0x002A4158u; return; } if (c.pc != 0x002A3E68u) [[unlikely]] return; }
L_002A3E68:
    set32(c.r[3], 0u + 8480u);
    set32(c.r[17], c.r[21].w[0] + 17504u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3E98; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E98u);  if (depth < kMaxDepth) unit_0068(c, 313u, depth + 1u); else { c.pc = 0x002A3EE8u; return; } if (c.pc != 0x002A3E98u) [[unlikely]] return; }
L_002A3E98:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4028u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3EBC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EBCu);  if (depth < kMaxDepth) unit_0069(c, 19u, depth + 1u); else { c.pc = 0x002A4350u; return; } if (c.pc != 0x002A3EBCu) [[unlikely]] return; }
L_002A3EBC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3EE8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F24u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A3F24u) [[unlikely]] return; }
L_002A3F24:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 9u, depth); } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 17200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F44u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x002A3F44u) [[unlikely]] return; }
L_002A3F44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F54u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002A3F54u) [[unlikely]] return; }
L_002A3F54:
    set32(c.r[3], 0u + 8480u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + 17504u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4036u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3FD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F88u);  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002A4930u; return; } if (c.pc != 0x002A3F88u) [[unlikely]] return; }
L_002A3F88:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 60u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 4024u);
    set32(c.r[3], 0u + 999u);
    c.budget -= 10;
L_002A3FB0:
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3FB0u | kUnwind; return; } goto L_002A3FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3FF8; } }
L_002A3FD0:
    set32(c.r[2], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3FF8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 9u, depth); } }
L_002A3FF8:
    set32(c.r[3], 0u + 8480u);
    set32(c.r[20], c.r[19].w[0] + 17504u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0069(c, 1u, depth);
}

}
