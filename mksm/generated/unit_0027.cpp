#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0027[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0,
    0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300,
    0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
};

void unit_0027(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0019C000;
    case 2u: goto L_0019C004;
    case 3u: goto L_0019C018;
    case 4u: goto L_0019C028;
    case 5u: goto L_0019C034;
    case 6u: goto L_0019C044;
    case 7u: goto L_0019C06C;
    case 8u: goto L_0019C084;
    case 9u: goto L_0019C098;
    case 10u: goto L_0019C0AC;
    case 11u: goto L_0019C0E0;
    case 12u: goto L_0019C10C;
    case 13u: goto L_0019C140;
    case 14u: goto L_0019C158;
    case 15u: goto L_0019C168;
    case 16u: goto L_0019C174;
    case 17u: goto L_0019C184;
    case 18u: goto L_0019C1AC;
    case 19u: goto L_0019C1C4;
    case 20u: goto L_0019C1E8;
    case 21u: goto L_0019C2F8;
    case 22u: goto L_0019C328;
    case 23u: goto L_0019C370;
    case 24u: goto L_0019C398;
    case 25u: goto L_0019C4EC;
    case 26u: goto L_0019C578;
    case 27u: goto L_0019C5A0;
    case 28u: goto L_0019C5B8;
    case 29u: goto L_0019C5E0;
    case 30u: goto L_0019C608;
    case 31u: goto L_0019C648;
    case 32u: goto L_0019C670;
    case 33u: goto L_0019C69C;
    case 34u: goto L_0019C6C0;
    case 35u: goto L_0019C6E8;
    case 36u: goto L_0019C70C;
    case 37u: goto L_0019C734;
    case 38u: goto L_0019C760;
    case 39u: goto L_0019C7C8;
    case 40u: goto L_0019C840;
    case 41u: goto L_0019C8D0;
    case 42u: goto L_0019CA58;
    case 43u: goto L_0019CA84;
    case 44u: goto L_0019CA90;
    case 45u: goto L_0019CB3C;
    case 46u: goto L_0019CB40;
    case 47u: goto L_0019CB8C;
    case 48u: goto L_0019CBB0;
    case 49u: goto L_0019CC8C;
    case 50u: goto L_0019CCD0;
    case 51u: goto L_0019CD18;
    case 52u: goto L_0019CD60;
    case 53u: goto L_0019CDC4;
    case 54u: goto L_0019CDD8;
    case 55u: goto L_0019CE10;
    case 56u: goto L_0019CE9C;
    case 57u: goto L_0019CEAC;
    case 58u: goto L_0019CED8;
    case 59u: goto L_0019D014;
    case 60u: goto L_0019D0BC;
    case 61u: goto L_0019D234;
    case 62u: goto L_0019D258;
    case 63u: goto L_0019D274;
    case 64u: goto L_0019D298;
    case 65u: goto L_0019D2D0;
    case 66u: goto L_0019D308;
    case 67u: goto L_0019D448;
    case 68u: goto L_0019D49C;
    case 69u: goto L_0019D550;
    case 70u: goto L_0019D578;
    case 71u: goto L_0019D5B0;
    case 72u: goto L_0019D6F0;
    case 73u: goto L_0019D744;
    case 74u: goto L_0019D764;
    case 75u: goto L_0019D790;
    case 76u: goto L_0019D7C8;
    case 77u: goto L_0019D910;
    case 78u: goto L_0019D964;
    case 79u: goto L_0019D990;
    case 80u: goto L_0019D99C;
    case 81u: goto L_0019D9C8;
    case 82u: goto L_0019DA18;
    case 83u: goto L_0019DA24;
    case 84u: goto L_0019DA48;
    case 85u: goto L_0019DA60;
    case 86u: goto L_0019DA74;
    case 87u: goto L_0019DAB0;
    case 88u: goto L_0019DAF0;
    case 89u: goto L_0019DB40;
    case 90u: goto L_0019DB4C;
    case 91u: goto L_0019DB74;
    case 92u: goto L_0019DB8C;
    case 93u: goto L_0019DBA0;
    case 94u: goto L_0019DBDC;
    case 95u: goto L_0019DC20;
    case 96u: goto L_0019DC64;
    case 97u: goto L_0019DC74;
    case 98u: goto L_0019DC7C;
    case 99u: goto L_0019DC8C;
    case 100u: goto L_0019DC94;
    case 101u: goto L_0019DCE0;
    case 102u: goto L_0019DCFC;
    case 103u: goto L_0019DD14;
    case 104u: goto L_0019DD24;
    case 105u: goto L_0019DD3C;
    case 106u: goto L_0019DD54;
    case 107u: goto L_0019DD64;
    case 108u: goto L_0019DD80;
    case 109u: goto L_0019DD88;
    case 110u: goto L_0019DDEC;
    case 111u: goto L_0019DDF0;
    case 112u: goto L_0019DE10;
    case 113u: goto L_0019DE54;
    case 114u: goto L_0019DE68;
    case 115u: goto L_0019DE7C;
    case 116u: goto L_0019DED8;
    case 117u: goto L_0019DEEC;
    case 118u: goto L_0019DF00;
    case 119u: goto L_0019DF18;
    case 120u: goto L_0019DF74;
    case 121u: goto L_0019DFB0;
    case 122u: goto L_0019DFDC;
    case 123u: goto L_0019DFF0;
    case 124u: goto L_0019E01C;
    case 125u: goto L_0019E040;
    case 126u: goto L_0019E07C;
    case 127u: goto L_0019E090;
    case 128u: goto L_0019E0A0;
    case 129u: goto L_0019E0B8;
    case 130u: goto L_0019E0C8;
    case 131u: goto L_0019E0D8;
    case 132u: goto L_0019E1B8;
    case 133u: goto L_0019E1E4;
    case 134u: goto L_0019E2F0;
    case 135u: goto L_0019E304;
    case 136u: goto L_0019E314;
    case 137u: goto L_0019E32C;
    case 138u: goto L_0019E33C;
    case 139u: goto L_0019E34C;
    case 140u: goto L_0019E36C;
    case 141u: goto L_0019E37C;
    case 142u: goto L_0019E38C;
    case 143u: goto L_0019E39C;
    case 144u: goto L_0019E3B8;
    case 145u: goto L_0019E3F8;
    case 146u: goto L_0019E400;
    case 147u: goto L_0019E550;
    case 148u: goto L_0019E57C;
    case 149u: goto L_0019E5E4;
    case 150u: goto L_0019E620;
    case 151u: goto L_0019E650;
    case 152u: goto L_0019E73C;
    case 153u: goto L_0019E748;
    case 154u: goto L_0019E760;
    case 155u: goto L_0019E77C;
    case 156u: goto L_0019E788;
    case 157u: goto L_0019E798;
    case 158u: goto L_0019E7A4;
    case 159u: goto L_0019E7BC;
    case 160u: goto L_0019E7D0;
    case 161u: goto L_0019E7E8;
    case 162u: goto L_0019E7F0;
    case 163u: goto L_0019E810;
    case 164u: goto L_0019E824;
    case 165u: goto L_0019E840;
    case 166u: goto L_0019E850;
    case 167u: goto L_0019E864;
    case 168u: goto L_0019E87C;
    case 169u: goto L_0019E89C;
    case 170u: goto L_0019E8B0;
    case 171u: goto L_0019E8D0;
    case 172u: goto L_0019E8EC;
    case 173u: goto L_0019E928;
    case 174u: goto L_0019E940;
    case 175u: goto L_0019E954;
    case 176u: goto L_0019E964;
    case 177u: goto L_0019E97C;
    case 178u: goto L_0019E994;
    case 179u: goto L_0019E9AC;
    case 180u: goto L_0019E9C4;
    case 181u: goto L_0019E9F0;
    case 182u: goto L_0019EA04;
    case 183u: goto L_0019EA18;
    case 184u: goto L_0019EA40;
    case 185u: goto L_0019EA70;
    case 186u: goto L_0019EA9C;
    case 187u: goto L_0019EAEC;
    case 188u: goto L_0019EB00;
    case 189u: goto L_0019EB2C;
    case 190u: goto L_0019EB40;
    case 191u: goto L_0019EB64;
    case 192u: goto L_0019EB80;
    case 193u: goto L_0019EB90;
    case 194u: goto L_0019EB9C;
    case 195u: goto L_0019EBA8;
    case 196u: goto L_0019EBB0;
    case 197u: goto L_0019EBC4;
    case 198u: goto L_0019EBD4;
    case 199u: goto L_0019EC04;
    case 200u: goto L_0019EC14;
    case 201u: goto L_0019EC2C;
    case 202u: goto L_0019EC58;
    case 203u: goto L_0019EC74;
    case 204u: goto L_0019EC84;
    case 205u: goto L_0019EC90;
    case 206u: goto L_0019EC9C;
    case 207u: goto L_0019ECA4;
    case 208u: goto L_0019ECB8;
    case 209u: goto L_0019ECC4;
    case 210u: goto L_0019ECD0;
    case 211u: goto L_0019ECE8;
    case 212u: goto L_0019ECF8;
    case 213u: goto L_0019ED10;
    case 214u: goto L_0019ED3C;
    case 215u: goto L_0019ED58;
    case 216u: goto L_0019ED68;
    case 217u: goto L_0019ED74;
    case 218u: goto L_0019ED80;
    case 219u: goto L_0019ED88;
    case 220u: goto L_0019ED98;
    case 221u: goto L_0019EDA4;
    case 222u: goto L_0019EDD0;
    case 223u: goto L_0019EE20;
    case 224u: goto L_0019EE38;
    case 225u: goto L_0019EECC;
    case 226u: goto L_0019EF18;
    case 227u: goto L_0019EF50;
    case 228u: goto L_0019F03C;
    case 229u: goto L_0019F0A4;
    case 230u: goto L_0019F0E0;
    case 231u: goto L_0019F12C;
    case 232u: goto L_0019F138;
    case 233u: goto L_0019F1B4;
    case 234u: goto L_0019F1C0;
    case 235u: goto L_0019F1C8;
    case 236u: goto L_0019F1E0;
    case 237u: goto L_0019F200;
    case 238u: goto L_0019F208;
    case 239u: goto L_0019F218;
    case 240u: goto L_0019F298;
    case 241u: goto L_0019F2CC;
    case 242u: goto L_0019F2E8;
    case 243u: goto L_0019F318;
    case 244u: goto L_0019F35C;
    case 245u: goto L_0019F368;
    case 246u: goto L_0019F394;
    case 247u: goto L_0019F3A4;
    case 248u: goto L_0019F3FC;
    case 249u: goto L_0019F418;
    case 250u: goto L_0019F42C;
    case 251u: goto L_0019F43C;
    case 252u: goto L_0019F444;
    case 253u: goto L_0019F480;
    case 254u: goto L_0019F4D0;
    case 255u: goto L_0019F4D8;
    case 256u: goto L_0019F4E8;
    case 257u: goto L_0019F4F0;
    case 258u: goto L_0019F4F8;
    case 259u: goto L_0019F50C;
    case 260u: goto L_0019F518;
    case 261u: goto L_0019F52C;
    case 262u: goto L_0019F53C;
    case 263u: goto L_0019F544;
    case 264u: goto L_0019F55C;
    case 265u: goto L_0019F570;
    case 266u: goto L_0019F58C;
    case 267u: goto L_0019F59C;
    case 268u: goto L_0019F5A8;
    case 269u: goto L_0019F5BC;
    case 270u: goto L_0019F610;
    case 271u: goto L_0019F620;
    case 272u: goto L_0019F640;
    case 273u: goto L_0019F680;
    case 274u: goto L_0019F6B4;
    case 275u: goto L_0019F6CC;
    case 276u: goto L_0019F6DC;
    case 277u: goto L_0019F6EC;
    case 278u: goto L_0019F7B0;
    case 279u: goto L_0019F7C4;
    case 280u: goto L_0019F7E0;
    case 281u: goto L_0019F7F8;
    case 282u: goto L_0019F804;
    case 283u: goto L_0019F81C;
    case 284u: goto L_0019F838;
    case 285u: goto L_0019F848;
    case 286u: goto L_0019F868;
    case 287u: goto L_0019F8A8;
    case 288u: goto L_0019F8F8;
    case 289u: goto L_0019F910;
    case 290u: goto L_0019F918;
    case 291u: goto L_0019F928;
    case 292u: goto L_0019F930;
    case 293u: goto L_0019F938;
    case 294u: goto L_0019F95C;
    case 295u: goto L_0019F978;
    case 296u: goto L_0019F994;
    case 297u: goto L_0019F9CC;
    case 298u: goto L_0019F9DC;
    case 299u: goto L_0019F9EC;
    case 300u: goto L_0019F9FC;
    case 301u: goto L_0019FA0C;
    case 302u: goto L_0019FA20;
    case 303u: goto L_0019FA54;
    case 304u: goto L_0019FAA4;
    case 305u: goto L_0019FAC4;
    case 306u: goto L_0019FAD0;
    case 307u: goto L_0019FAD8;
    case 308u: goto L_0019FAE0;
    case 309u: goto L_0019FAFC;
    case 310u: goto L_0019FB18;
    case 311u: goto L_0019FB50;
    case 312u: goto L_0019FBB8;
    case 313u: goto L_0019FBD0;
    case 314u: goto L_0019FC04;
    case 315u: goto L_0019FC30;
    case 316u: goto L_0019FC90;
    case 317u: goto L_0019FCB8;
    case 318u: goto L_0019FD30;
    case 319u: goto L_0019FD70;
    case 320u: goto L_0019FDC8;
    case 321u: goto L_0019FE00;
    case 322u: goto L_0019FE68;
    case 323u: goto L_0019FE7C;
    case 324u: goto L_0019FE90;
    case 325u: goto L_0019FEC8;
    case 326u: goto L_0019FED8;
    case 327u: goto L_0019FEE0;
    case 328u: goto L_0019FEFC;
    case 329u: goto L_0019FF30;
    case 330u: goto L_0019FF50;
    case 331u: goto L_0019FF68;
    case 332u: goto L_0019FFA0;
    case 333u: goto L_0019FFE8;
    default: bad_entry(c, 0x0019C000u); return;
    }
L_0019C000:
    c.budget -= 1;
L_0019C004:
    set32(c.r[5], ld32((c.r[18].w[0] + 10128u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C018u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0019C018u) [[unlikely]] return; }
L_0019C018:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C028u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019C028u) [[unlikely]] return; }
L_0019C028:
    set32(c.r[4], 0u + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C034u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C034u) [[unlikely]] return; }
L_0019C034:
    st32((c.r[17].w[0] + 1696u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C044u);  if (depth < kMaxDepth) unit_0028(c, 205u, depth + 1u); else { c.pc = 0x001A2A80u; return; } if (c.pc != 0x0019C044u) [[unlikely]] return; }
L_0019C044:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019C05C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0019C05C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C06Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019C06Cu) [[unlikely]] return; }
L_0019C06C:
    set32(c.r[5], ld32((c.r[18].w[0] + 10128u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C084u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0019C084u) [[unlikely]] return; }
L_0019C084:
    set32(c.r[5], ld32((c.r[20].w[0] + 10024u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C098u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0019C098u) [[unlikely]] return; }
L_0019C098:
    st32((c.r[21].w[0] + 15788u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[22].w[0] + 15808u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C0B0; } }
L_0019C0AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019C0B0:
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
L_0019C0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C10Cu);  if (depth < kMaxDepth) unit_0024(c, 178u, depth + 1u); else { c.pc = 0x00191C78u; return; } if (c.pc != 0x0019C10Cu) [[unlikely]] return; }
L_0019C10C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019C128; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 33u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_0019C128:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 10040u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C140u);  if (depth < kMaxDepth) unit_0024(c, 172u, depth + 1u); else { c.pc = 0x00191B70u; return; } if (c.pc != 0x0019C140u) [[unlikely]] return; }
L_0019C140:
    set32(c.r[5], ld32((c.r[18].w[0] + 10040u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 1704u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C158u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0019C158u) [[unlikely]] return; }
L_0019C158:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C168u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019C168u) [[unlikely]] return; }
L_0019C168:
    set32(c.r[4], 0u + 455u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C174u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C174u) [[unlikely]] return; }
L_0019C174:
    st32((c.r[17].w[0] + 1696u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C184u);  if (depth < kMaxDepth) unit_0028(c, 205u, depth + 1u); else { c.pc = 0x001A2A80u; return; } if (c.pc != 0x0019C184u) [[unlikely]] return; }
L_0019C184:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019C19C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0019C19C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1ACu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019C1ACu) [[unlikely]] return; }
L_0019C1AC:
    set32(c.r[5], ld32((c.r[18].w[0] + 10040u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1C4u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x0019C1C4u) [[unlikely]] return; }
L_0019C1C4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019C1E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[7] = ld32((c.r[2].w[0] + 24u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[6] = ld32((c.r[2].w[0] + 28u));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[8], ld32((c.r[2].w[0] + 15796u)));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = fp::add(c.f[4], c.f[8]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[20], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] >> 31);
    set32(c.r[5], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 60;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0019C2E4; } }
    set32(c.r[4], 0u + 436u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C2F0; } }
L_0019C2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 15776u)));
    set32(c.r[4], c.r[4].w[0] + 437u);
    c.budget -= 3;
L_0019C2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C2F8u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C2F8u) [[unlikely]] return; }
L_0019C2F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C328u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0019C328u) [[unlikely]] return; }
L_0019C328:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C370u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0019C370u) [[unlikely]] return; }
L_0019C370:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019C398:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 80u));
    c.f[3] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[2].w[0] + 28u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    set32(c.r[10], ld32((c.r[4].w[0] + 64u)));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    set32(c.r[2], ld32((c.r[3].w[0] + 15796u)));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[4] = fp::add(c.f[4], c.f[8]);
    c.f[3] = fp::add(c.f[3], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[8]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[19], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[18], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[20], c.f[0]);
    c.budget -= 57;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0019C498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 15780u), c.r[4].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 15784u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C4AC; } }
L_0019C498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 15784u), c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 15780u), 0u);
    c.budget -= 5;
L_0019C4AC:
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[8].w[0] + 7648u);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 33344ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] + 7520u), 0u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[11], 0u + 127u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C4ECu);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001938E8u; return; } if (c.pc != 0x0019C4ECu) [[unlikely]] return; }
L_0019C4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[21], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[2].w[0] + 30808u);
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    ldl(c.r[5], (c.r[6].w[0] + 23u));
    ldr(c.r[5], (c.r[6].w[0] + 16u));
    sdl(c.r[3], (c.r[29].w[0] + 39u));
    sdr(c.r[3], (c.r[29].w[0] + 32u));
    sdl(c.r[4], (c.r[29].w[0] + 47u));
    sdr(c.r[4], (c.r[29].w[0] + 40u));
    sdl(c.r[5], (c.r[29].w[0] + 55u));
    sdr(c.r[5], (c.r[29].w[0] + 48u));
    ldl(c.r[3], (c.r[6].w[0] + 31u));
    ldr(c.r[3], (c.r[6].w[0] + 24u));
    sdl(c.r[3], (c.r[29].w[0] + 63u));
    sdr(c.r[3], (c.r[29].w[0] + 56u));
    set32(c.r[3], ld32((c.r[16].w[0] + 15780u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C610; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 15776u)));
    set32(c.r[2], c.r[2].w[0] + 15968u);
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[4], 0u + 410u);
    set32(c.r[16], c.r[16].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C578u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C578u) [[unlikely]] return; }
L_0019C578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u + 255u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[13] = c.f[12];
    set32(c.r[7], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5A0u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C5A0u) [[unlikely]] return; }
L_0019C5A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 15776u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5B8u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C5B8u) [[unlikely]] return; }
L_0019C5B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 22u);
    set32(c.r[5], c.r[20].w[0] - 38u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x81000000u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5E0u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C5E0u) [[unlikely]] return; }
L_0019C5E0:
    c.f[12] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[5], c.r[20].w[0] - 40u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32897ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C608u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C608u) [[unlikely]] return; }
L_0019C608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C734; } }
L_0019C610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15792u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C734; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 15776u)));
    set32(c.r[17], c.r[19].w[0] + 45u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C648u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C648u) [[unlikely]] return; }
L_0019C648:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80BD0000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[5], c.r[20].w[0] - 40u);
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.r[6].d[0] = c.r[6].d[0] | 51928ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C670u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C670u) [[unlikely]] return; }
L_0019C670:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[9], c.r[29].w[0] + 68u);
    set32(c.r[7], c.r[7].w[0] + 30840u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C69Cu);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x0019C69Cu) [[unlikely]] return; }
L_0019C69C:
    set32(c.r[16], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], 0u + 228u);
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C6C0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C6C0u) [[unlikely]] return; }
L_0019C6C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80BD0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 51928ull;
    set32(c.r[7], 0u + 1u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C6E8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C6E8u) [[unlikely]] return; }
L_0019C6E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], 0u + 229u);
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] + 40u);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C70Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019C70Cu) [[unlikely]] return; }
L_0019C70C:
    c.f[12] = c.f[20];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80BD0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 51928ull;
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C734u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019C734u) [[unlikely]] return; }
L_0019C734:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019C760:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019C784; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019C7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C8C4; } }
L_0019C784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15776u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0019C870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 10048u);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0019C86C; } }
    c.budget -= 1;
L_0019C7C8:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0019C870; } }
    set32(c.r[3], c.r[8].w[0] + 10048u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C7C8u | kUnwind; return; } goto L_0019C7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C86C; } }
L_0019C7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15776u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019C870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 10048u);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0019C86C; } }
    c.budget -= 1;
L_0019C840:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019C870; } }
    set32(c.r[3], c.r[8].w[0] + 10048u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C840u | kUnwind; return; } goto L_0019C840; } }
L_0019C86C:
    st32((c.r[7].w[0] + 15776u), c.r[6].w[0]);
    c.budget -= 1;
L_0019C870:
    set32(c.r[2], ld32((c.r[9].w[0] + 15796u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019C8C0; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[7].w[0] + 15776u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 9408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0019C8C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10048u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0019C8C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 30u);
    st16((c.r[3].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[8].w[0] + 9408u), c.r[6].w[0]);
    c.budget -= 4;
L_0019C8C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0019C8C4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019C8D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[16].w[0] + 7648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[5], 0u + 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[7], 0u + 127u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    set32(c.r[11], 0u + 2u);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[6] = ld32((c.r[4].w[0] + 28u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = ld32((c.r[18].w[0] + 68u));
    c.f[3] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[7] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[8] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[9] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[7]);
    set32(c.r[20], ld32((c.r[18].w[0] + 64u)));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D920000u);
    c.r[1].d[0] = c.r[1].d[0] | 18725ull;
    c.f[4] = c.r[1].w[0];
    c.f[5] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F120000u);
    c.r[1].d[0] = c.r[1].d[0] | 18725ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    c.f[3] = fp::mul(c.f[3], c.f[8]);
    st32((c.r[29].w[0] + 80u), c.r[10].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[9]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[10].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[9]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[5], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[4] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[10]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[10].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[8], 0u + 48u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 144u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0]), c.f[1]);
    c.budget -= 98;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CA58u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0019CA58u) [[unlikely]] return; }
L_0019CA58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[9], c.r[29].w[0] + 84u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CA84u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x0019B370u; return; } if (c.pc != 0x0019CA84u) [[unlikely]] return; }
L_0019CA84:
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_0019CA90:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019CA90u | kUnwind; return; } goto L_0019CA90; } }
    set32(c.r[16], c.r[16].w[0] + 7648u);
    c.r[17].d[0] = ld8((c.r[18].w[0] + 60u));
    c.r[15].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[14].d[0] = ld8((c.r[18].w[0] + 48u));
    set32(c.r[9], c.r[29].w[0] + 48u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 36u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    c.r[11].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[12].d[0] = ld8((c.r[18].w[0] + 56u));
    c.r[13].d[0] = ld8((c.r[18].w[0] + 44u));
    set32(c.r[10], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CB3Cu);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019CB3Cu) [[unlikely]] return; }
L_0019CB3C:
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_0019CB40:
    set32(c.r[8], ld32((c.r[29].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 127u);
    st32((c.r[2].w[0] + 7520u), c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[8], c.r[8].w[0] - 9u);
    st32((c.r[29].w[0] + 24u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 49179ull;
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[11], 0u + 127u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CB8Cu);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001938E8u; return; } if (c.pc != 0x0019CB8Cu) [[unlikely]] return; }
L_0019CB8C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019CBB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[29].w[0] + 84u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[17].w[0] + 7648u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    set32(c.r[5], 0u + 148u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[30], 0u - 60u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 127u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[23], 0u + 396u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    c.f[4] = ld32((c.r[17].w[0] + 28u));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[6] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[18], ld32((c.r[21].w[0] + 28u)));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    if (c.r[2].d[0] != 0) c.r[30].d[0] = 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    set32(c.r[22], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[3], c.r[18].w[0] - 1u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    if (c.r[30].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.f[1] = fp::add(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[16], c.r[30].w[0] + 127u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC8Cu);  if (depth < kMaxDepth) unit_0026(c, 99u, depth + 1u); else { c.pc = 0x0019A668u; return; } if (c.pc != 0x0019CC8Cu) [[unlikely]] return; }
L_0019CC8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[6], 0u + 148u);
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CCD0u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0019CCD0u) [[unlikely]] return; }
L_0019CCD0:
    set32(c.r[11], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[9], c.r[20].w[0] + c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[9], c.r[9].w[0] + c.r[22].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[6], 0u + 148u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD18u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0019CD18u) [[unlikely]] return; }
L_0019CD18:
    set32(c.r[9], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[10], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[9], c.r[20].w[0] + c.r[9].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[6], 0u + 147u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[16].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD60u);  if (depth < kMaxDepth) unit_0026(c, 101u, depth + 1u); else { c.pc = 0x0019A6A8u; return; } if (c.pc != 0x0019CD60u) [[unlikely]] return; }
L_0019CD60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 17792u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_0019CD84; } }
    set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.budget -= 2;
L_0019CD84:
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], 0u + 64u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[6].w[0] + 9u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_0019CDA4; } }
    set32(c.r[2], 0u + 36u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019CDA4:
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDC4u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0019CDC4u) [[unlikely]] return; }
L_0019CDC4:
    c.r[18].d[0] = c.r[18].d[0] | 33024ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDD8u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x0019CDD8u) [[unlikely]] return; }
L_0019CDD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80C20000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 50125ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    if (c.r[30].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    set32(c.r[22], c.r[2].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[23].d[0];  if (t) { goto L_0019CE08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17792u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[22], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0019CE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE10u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0019CE10u) [[unlikely]] return; }
L_0019CE10:
    set32(c.r[17], 0u + 9u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019CE38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CE74; } }
L_0019CE38:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019CE58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CE74; } }
L_0019CE58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019CE74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[17], 0u + 13u);
    c.budget -= 4;
L_0019CE74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[4].w[0] + 7648u);
    set32(c.r[19], c.r[2].w[0] + 9840u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1720u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE9Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019CE9Cu) [[unlikely]] return; }
L_0019CE9C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CEACu);  if (depth < kMaxDepth) unit_0028(c, 250u, depth + 1u); else { c.pc = 0x001A30F0u; return; } if (c.pc != 0x0019CEACu) [[unlikely]] return; }
L_0019CEAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019D260; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[2], 0u + 397u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019D260; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CED8u);  if (depth < kMaxDepth) unit_0028(c, 300u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x0019CED8u) [[unlikely]] return; }
L_0019CED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 9712u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019D1A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0019D188; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019CF24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CF44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019CF24:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019CFA0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019D064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019CF44:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019CF90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D0B4; } }
L_0019CF90:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019CFA0:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D02C; } }
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D188; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D014u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0019D014u) [[unlikely]] return; }
L_0019D014:
    c.f[6] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D0CC; } }
L_0019D02C:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], 0u + 3u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019D064:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.f[3] = ld32((c.r[16].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D140; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.budget -= 14;
L_0019D0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D0BCu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0019D0BCu) [[unlikely]] return; }
L_0019D0BC:
    c.f[6] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.budget -= 4;
L_0019D0CC:
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[7] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::sub(c.f[4], c.f[8]);
    c.f[2] = fp::sub(c.f[2], c.f[7]);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[6] = fp::add(c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[4]);
    c.f[7] = fp::add(c.f[7], c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[5] = fp::add(c.f[5], c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.f[8] = fp::add(c.f[8], c.f[4]);
    st32((c.r[16].w[0] + 80u), c.f[6]);
    st32((c.r[4].w[0] + 4u), c.f[7]);
    st32((c.r[4].w[0] + 8u), c.f[5]);
    st32((c.r[4].w[0] + 12u), c.f[8]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019D140:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0019D184; } }
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D188; } }
L_0019D184:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_0019D188:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D1D0; } }
L_0019D1A8:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[16].w[0] + 80u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 80u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 10;
L_0019D1D0:
    set32(c.r[5], c.r[18].w[0] + 9712u);
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.f[1] = ld32((c.r[5].w[0] + 92u));
    c.f[0] = ld32((c.r[5].w[0] + 80u));
    set32(c.r[17], c.r[6].w[0] + c.r[17].w[0]);
    c.f[3] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[3]);
    c.f[2] = ld32((c.r[5].w[0] + 84u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    c.f[1] = ld32((c.r[5].w[0] + 88u));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    set32(c.r[16], c.r[16].w[0] << 24);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D234u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019D234u) [[unlikely]] return; }
L_0019D234:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D258u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019D258u) [[unlikely]] return; }
L_0019D258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D298; } }
L_0019D260:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D274u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019D274u) [[unlikely]] return; }
L_0019D274:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D298u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019D298u) [[unlikely]] return; }
L_0019D298:
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
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D2D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 14;
L_0019D308:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D308u | kUnwind; return; } goto L_0019D308; } }
    c.f[4] = ld32((c.r[5].w[0] + 68u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    set32(c.r[16], c.r[16].w[0] + 7648u);
    c.f[2] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[5].w[0] + 80u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[6] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.r[15].d[0] = ld8((c.r[5].w[0] + 60u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 32u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.r[14].d[0] = ld8((c.r[5].w[0] + 48u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[13].d[0] = ld8((c.r[5].w[0] + 36u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 52u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 40u));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 56u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 44u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    set32(c.r[10], ld32((c.r[16].w[0] + 100u)));
    c.f[3] = fp::add(c.f[3], c.f[8]);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[0]);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[17], c.f[0]);
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[20], c.f[0]);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[19], c.f[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D448u);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019D448u) [[unlikely]] return; }
L_0019D448:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[2].w[0] + 7520u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 33857ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], 0u + 127u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D49Cu);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001938E8u; return; } if (c.pc != 0x0019D49Cu) [[unlikely]] return; }
L_0019D49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[2].w[0] + 9416u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019D544; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[4], c.r[18].w[0] - c.r[19].w[0]);
    set32(c.r[5], c.r[17].w[0] - c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 480u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 480u)));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 480u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.budget -= 37;
L_0019D544:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D550u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x0019D550u) [[unlikely]] return; }
L_0019D550:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D578:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 14;
L_0019D5B0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D5B0u | kUnwind; return; } goto L_0019D5B0; } }
    c.f[4] = ld32((c.r[5].w[0] + 68u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    set32(c.r[16], c.r[16].w[0] + 7648u);
    c.f[2] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[5].w[0] + 80u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[6] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.r[15].d[0] = ld8((c.r[5].w[0] + 60u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[14].d[0] = ld8((c.r[5].w[0] + 48u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.r[13].d[0] = ld8((c.r[5].w[0] + 36u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 52u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 32u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 40u));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 56u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 44u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    set32(c.r[10], ld32((c.r[16].w[0] + 100u)));
    c.f[3] = fp::add(c.f[3], c.f[8]);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[20], c.f[0]);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[18], c.f[0]);
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[17], c.f[0]);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[19], c.f[0]);
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6F0u);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019D6F0u) [[unlikely]] return; }
L_0019D6F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[9], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[2].w[0] + 7520u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00880000u);
    st32((c.r[29].w[0]), c.r[9].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], 0u + 127u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 32795ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D744u);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001938E8u; return; } if (c.pc != 0x0019D744u) [[unlikely]] return; }
L_0019D744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D764u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001A0A28u; return; } if (c.pc != 0x0019D764u) [[unlikely]] return; }
L_0019D764:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[22], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 14;
L_0019D7C8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019D7C8u | kUnwind; return; } goto L_0019D7C8; } }
    c.f[4] = ld32((c.r[5].w[0] + 68u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    set32(c.r[17], c.r[17].w[0] + 7648u);
    c.f[2] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[5].w[0] + 80u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] + 9840u);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[6] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[7] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[8] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.r[15].d[0] = ld8((c.r[5].w[0] + 60u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 28u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 48u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.r[14].d[0] = ld8((c.r[5].w[0] + 36u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[13].d[0] = ld8((c.r[5].w[0] + 52u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 32u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 40u));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 56u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 44u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    set32(c.r[10], ld32((c.r[17].w[0] + 100u)));
    c.f[3] = fp::add(c.f[3], c.f[8]);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[21], c.f[0]);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[20], c.f[0]);
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[19], c.f[0]);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[18], c.f[0]);
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 74;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D910u);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019D910u) [[unlikely]] return; }
L_0019D910:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[2].w[0] + 7520u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00880000u);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[6], c.r[18].w[0] + 1u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[11], 0u + 127u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 33496ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D964u);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001938E8u; return; } if (c.pc != 0x0019D964u) [[unlikely]] return; }
L_0019D964:
    set32(c.r[18], c.r[18].w[0] + 6u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[21], c.r[21].w[0] - 6u);
    set32(c.r[20], c.r[20].w[0] - 6u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D990u);  if (depth < kMaxDepth) unit_0027(c, 329u, depth + 1u); else { c.pc = 0x0019FF30u; return; } if (c.pc != 0x0019D990u) [[unlikely]] return; }
L_0019D990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D99Cu);  if (depth < kMaxDepth) unit_0028(c, 74u, depth + 1u); else { c.pc = 0x001A0E88u; return; } if (c.pc != 0x0019D99Cu) [[unlikely]] return; }
L_0019D99C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019D9C8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 9416u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019DA00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019DA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] + 7648u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA18u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x0019DA18u) [[unlikely]] return; }
L_0019DA18:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA24u);  if (depth < kMaxDepth) unit_0027(c, 11u, depth + 1u); else { c.pc = 0x0019C0E0u; return; } if (c.pc != 0x0019DA24u) [[unlikely]] return; }
L_0019DA24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019DABC; } }
    c.f[20] = 0u;
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA48u);  if (depth < kMaxDepth) unit_002E(c, 456u, depth + 1u); else { c.pc = 0x001BB328u; return; } if (c.pc != 0x0019DA48u) [[unlikely]] return; }
L_0019DA48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9840u);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA60u);  if (depth < kMaxDepth) unit_0028(c, 299u, depth + 1u); else { c.pc = 0x001A3888u; return; } if (c.pc != 0x0019DA60u) [[unlikely]] return; }
L_0019DA60:
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA74u);  if (depth < kMaxDepth) unit_001D(c, 58u, depth + 1u); else { c.pc = 0x00174C30u; return; } if (c.pc != 0x0019DA74u) [[unlikely]] return; }
L_0019DA74:
    c.f[13] = c.f[20];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x34710000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 3514ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DAB0u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0019DAB0u) [[unlikely]] return; }
L_0019DAB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DAD0; } }
L_0019DABC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DACC; } }
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0019DACC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019DAD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019DAF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 9416u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019DB28; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019DB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] + 7648u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB40u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x0019DB40u) [[unlikely]] return; }
L_0019DB40:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB4Cu);  if (depth < kMaxDepth) unit_0027(c, 11u, depth + 1u); else { c.pc = 0x0019C0E0u; return; } if (c.pc != 0x0019DB4Cu) [[unlikely]] return; }
L_0019DB4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019DBE8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[5], c.r[5].w[0] + 13u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB74u);  if (depth < kMaxDepth) unit_002E(c, 456u, depth + 1u); else { c.pc = 0x001BB328u; return; } if (c.pc != 0x0019DB74u) [[unlikely]] return; }
L_0019DB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9840u);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB8Cu);  if (depth < kMaxDepth) unit_0028(c, 299u, depth + 1u); else { c.pc = 0x001A3888u; return; } if (c.pc != 0x0019DB8Cu) [[unlikely]] return; }
L_0019DB8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DBA0u);  if (depth < kMaxDepth) unit_001D(c, 58u, depth + 1u); else { c.pc = 0x00174C30u; return; } if (c.pc != 0x0019DBA0u) [[unlikely]] return; }
L_0019DBA0:
    c.f[13] = c.f[20];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x34710000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 3514ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DBDCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0019DBDCu) [[unlikely]] return; }
L_0019DBDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DBFC; } }
L_0019DBE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DBF8; } }
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0019DBF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019DBFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019DC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DDF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30928u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019DC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC74u);  if (depth < kMaxDepth) unit_0028(c, 99u, depth + 1u); else { c.pc = 0x001A1548u; return; } if (c.pc != 0x0019DC74u) [[unlikely]] return; }
L_0019DC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDEC; } }
L_0019DC7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC8Cu);  if (depth < kMaxDepth) unit_0028(c, 93u, depth + 1u); else { c.pc = 0x001A1358u; return; } if (c.pc != 0x0019DC8Cu) [[unlikely]] return; }
L_0019DC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDEC; } }
L_0019DC94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[2].w[0] + 9840u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DCB8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DCC0; } }
L_0019DCB8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0019DCC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0019DD74; } }
    set32(c.r[16], c.r[4].w[0] + 9840u);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCE0u);  if (depth < kMaxDepth) unit_0028(c, 137u, depth + 1u); else { c.pc = 0x001A2040u; return; } if (c.pc != 0x0019DCE0u) [[unlikely]] return; }
L_0019DCE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_0019DDEC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCFCu);  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3290u; return; } if (c.pc != 0x0019DCFCu) [[unlikely]] return; }
L_0019DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0019DD2C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD14u);  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A3458u; return; } if (c.pc != 0x0019DD14u) [[unlikely]] return; }
L_0019DD14:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD24u);  if (depth < kMaxDepth) unit_0027(c, 81u, depth + 1u); else { c.pc = 0x0019D9C8u; return; } if (c.pc != 0x0019DD24u) [[unlikely]] return; }
L_0019DD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DD64; } }
L_0019DD2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD3Cu);  if (depth < kMaxDepth) unit_0028(c, 267u, depth + 1u); else { c.pc = 0x001A3310u; return; } if (c.pc != 0x0019DD3Cu) [[unlikely]] return; }
L_0019DD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0019DDEC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD54u);  if (depth < kMaxDepth) unit_0028(c, 275u, depth + 1u); else { c.pc = 0x001A33C8u; return; } if (c.pc != 0x0019DD54u) [[unlikely]] return; }
L_0019DD54:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD64u);  if (depth < kMaxDepth) unit_0027(c, 88u, depth + 1u); else { c.pc = 0x0019DAF0u; return; } if (c.pc != 0x0019DD64u) [[unlikely]] return; }
L_0019DD64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] + 16040u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDEC; } }
L_0019DD74:
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD80u);  if (depth < kMaxDepth) unit_0028(c, 291u, depth + 1u); else { c.pc = 0x001A36E8u; return; } if (c.pc != 0x0019DD80u) [[unlikely]] return; }
L_0019DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDEC; } }
L_0019DD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[2].w[0] + 9840u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DDC0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DDC0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDC4; } }
L_0019DDC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019DDC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DDE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DDEC; } }
L_0019DDE0:
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDECu);  if (depth < kMaxDepth) unit_0028(c, 105u, depth + 1u); else { c.pc = 0x001A1718u; return; } if (c.pc != 0x0019DDECu) [[unlikely]] return; }
L_0019DDEC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0019DDF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019DE10:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[18].w[0] + 7648u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x7F000000u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    set32(c.r[20], 0u + 425u);
    set32(c.r[5], ld32((c.r[18].w[0] + 1720u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE54u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019DE54u) [[unlikely]] return; }
L_0019DE54:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 30632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE68u);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x0019DE68u) [[unlikely]] return; }
L_0019DE68:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE7Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0019DE7Cu) [[unlikely]] return; }
L_0019DE7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 18888u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 18884u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], ld32((c.r[5].w[0] + 18892u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.f[12] = ld32((c.r[7].w[0] + 18880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[5], ld32((c.r[2].w[0] + 18876u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 18872u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[7], 0u + 2u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DED8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019DED8u) [[unlikely]] return; }
L_0019DED8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 445u);
    set32(c.r[16], c.r[16].w[0] + 30968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEECu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019DEECu) [[unlikely]] return; }
L_0019DEEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 1720u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF00u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x0019DF00u) [[unlikely]] return; }
L_0019DF00:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF18u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0019DF18u) [[unlikely]] return; }
L_0019DF18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 18912u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 18908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], ld32((c.r[5].w[0] + 18916u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.f[12] = ld32((c.r[3].w[0] + 18904u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[5], ld32((c.r[3].w[0] + 18900u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 18896u)));
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF74u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0019DF74u) [[unlikely]] return; }
L_0019DF74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 450u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    if (c.r[4].d[0] != 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019DFA4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019DFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E01C; } }
L_0019DFA4:
    set32(c.r[4], 0u + 1418u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFB0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019DFB0u) [[unlikely]] return; }
L_0019DFB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFDCu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0019DFDCu) [[unlikely]] return; }
L_0019DFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E01C; } }
L_0019DFE4:
    set32(c.r[4], 0u + 1420u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFF0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0019DFF0u) [[unlikely]] return; }
L_0019DFF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E01Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0019E01Cu) [[unlikely]] return; }
L_0019E01C:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] + 7648u);
    st16((c.r[3].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 10024u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E07Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019E07Cu) [[unlikely]] return; }
L_0019E07C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E090u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x0019E090u) [[unlikely]] return; }
L_0019E090:
    st32((c.r[16].w[0] + 10024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0A0u);  if (depth < kMaxDepth) unit_0024(c, 163u, depth + 1u); else { c.pc = 0x00191A28u; return; } if (c.pc != 0x0019E0A0u) [[unlikely]] return; }
L_0019E0A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 30720u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0B8u);  if (depth < kMaxDepth) unit_0024(c, 161u, depth + 1u); else { c.pc = 0x001919F0u; return; } if (c.pc != 0x0019E0B8u) [[unlikely]] return; }
L_0019E0B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0C8u);  if (depth < kMaxDepth) unit_0024(c, 166u, depth + 1u); else { c.pc = 0x00191AA8u; return; } if (c.pc != 0x0019E0C8u) [[unlikely]] return; }
L_0019E0C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0D8u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019E0D8u) [[unlikely]] return; }
L_0019E0D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[6].w[0] + 15856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[9] = ld32((c.r[4].w[0] + 15840u));
    set32(c.r[2], c.r[2].w[0] + 9712u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[4].w[0] + 15840u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.f[10] = ld32((c.r[6].w[0] + 15856u));
    set32(c.r[7], c.r[2].w[0] + 32u);
    c.f[8] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[6], c.r[2].w[0] + 80u);
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[8], c.r[2].w[0] + 48u);
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 12u), c.f[1]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.f[10]);
    st32((c.r[4].w[0] + 4u), c.f[6]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 80u), c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[6].w[0] + 4u), c.f[8]);
    st32((c.r[6].w[0] + 8u), c.f[5]);
    st32((c.r[2].w[0] + 116u), c.f[2]);
    st32((c.r[2].w[0] + 104u), c.f[7]);
    st32((c.r[2].w[0] + 108u), c.f[3]);
    st32((c.r[2].w[0] + 32u), c.f[9]);
    st32((c.r[7].w[0] + 4u), c.f[8]);
    st32((c.r[7].w[0] + 8u), c.f[5]);
    st32((c.r[2].w[0] + 48u), c.f[10]);
    st32((c.r[8].w[0] + 4u), c.f[6]);
    st32((c.r[8].w[0] + 8u), c.f[4]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 112u), 0u);
    st32((c.r[2].w[0] + 96u), c.f[7]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 55;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E1B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], c.r[2].w[0] + 7648u);
    set32(c.r[5], c.r[5].w[0] + 30864u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E1E4u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x0019E1E4u) [[unlikely]] return; }
L_0019E1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E2C4; } }
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[4] = ld32((c.r[2].w[0] + 72u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[3] = ld32((c.r[2].w[0] + 76u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[7] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[6] = ld32((c.r[17].w[0] + 28u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[8] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[7]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[8]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[7], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[4], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[3], c.r[5].w[0] >> 31);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[9].w[0] + 10112u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 10116u), c.r[7].w[0]);
    st32((c.r[11].w[0] + 10120u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 10124u), c.r[5].w[0]);
    c.budget -= 54;
L_0019E2C4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 10024u)));
    st16((c.r[4].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2F0u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019E2F0u) [[unlikely]] return; }
L_0019E2F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E304u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x0019E304u) [[unlikely]] return; }
L_0019E304:
    st32((c.r[16].w[0] + 10024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E314u);  if (depth < kMaxDepth) unit_0024(c, 163u, depth + 1u); else { c.pc = 0x00191A28u; return; } if (c.pc != 0x0019E314u) [[unlikely]] return; }
L_0019E314:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 30848u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E32Cu);  if (depth < kMaxDepth) unit_0024(c, 161u, depth + 1u); else { c.pc = 0x001919F0u; return; } if (c.pc != 0x0019E32Cu) [[unlikely]] return; }
L_0019E32C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E33Cu);  if (depth < kMaxDepth) unit_0024(c, 166u, depth + 1u); else { c.pc = 0x00191AA8u; return; } if (c.pc != 0x0019E33Cu) [[unlikely]] return; }
L_0019E33C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E34Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019E34Cu) [[unlikely]] return; }
L_0019E34C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1720u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9840u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E36Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019E36Cu) [[unlikely]] return; }
L_0019E36C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E37Cu);  if (depth < kMaxDepth) unit_0028(c, 250u, depth + 1u); else { c.pc = 0x001A30F0u; return; } if (c.pc != 0x0019E37Cu) [[unlikely]] return; }
L_0019E37C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E38Cu);  if (depth < kMaxDepth) unit_0028(c, 300u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x0019E38Cu) [[unlikely]] return; }
L_0019E38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E39Cu);  if (depth < kMaxDepth) unit_0026(c, 246u, depth + 1u); else { c.pc = 0x0019BF58u; return; } if (c.pc != 0x0019E39Cu) [[unlikely]] return; }
L_0019E39C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E3B8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[22], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 16;
L_0019E3F8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_0019E400:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E3F8u | kUnwind; return; } goto L_0019E3F8; } }
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[17], c.r[23].w[0] + 7648u);
    c.f[2] = ld32((c.r[16].w[0] + 76u));
    c.f[4] = ld32((c.r[16].w[0] + 72u));
    c.f[5] = ld32((c.r[16].w[0] + 80u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[6] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[7] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::add(c.f[4], c.f[1]);
    c.f[8] = ld32((c.r[17].w[0] + 12u));
    c.f[5] = fp::add(c.f[5], c.f[1]);
    set32(c.r[11], ld32((c.r[16].w[0] + 16u)));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 32u));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 36u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 40u));
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 44u));
    c.f[5] = fp::mul(c.f[5], c.f[1]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 48u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 52u));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 56u));
    c.f[2] = fp::add(c.f[2], c.f[7]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.f[5] = fp::add(c.f[5], c.f[8]);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[3] = fp::add(c.f[3], c.f[7]);
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[4] = fp::add(c.f[4], c.f[8]);
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[20], c.f[0]);
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[18], c.f[0]);
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[19], c.f[0]);
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[21], c.f[0]);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[11].d[0] & 768ull;
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 65;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E620; } }
    c.r[2].d[0] = c.r[11].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E5EC; } }
    set32(c.r[10], ld32((c.r[17].w[0] + 100u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E550u);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019E550u) [[unlikely]] return; }
L_0019E550:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E584; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E57Cu);  if (depth < kMaxDepth) unit_0026(c, 79u, depth + 1u); else { c.pc = 0x0019A258u; return; } if (c.pc != 0x0019E57Cu) [[unlikely]] return; }
L_0019E57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E598; } }
L_0019E584:
    set32(c.r[2], 0u + 127u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
L_0019E598:
    set32(c.r[4], c.r[23].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 60u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 48u)));
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 134u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5E4u);  if (depth < kMaxDepth) unit_0024(c, 204u, depth + 1u); else { c.pc = 0x001920B8u; return; } if (c.pc != 0x0019E5E4u) [[unlikely]] return; }
L_0019E5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E620; } }
L_0019E5EC:
    c.r[2].d[0] = c.r[11].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E620; } }
    set32(c.r[10], ld32((c.r[17].w[0] + 100u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E620u);  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x0019A410u; return; } if (c.pc != 0x0019E620u) [[unlikely]] return; }
L_0019E620:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.f[4] = ld32((c.r[16].w[0] + 68u));
    c.f[12] = c.f[5];
    c.f[2] = ld32((c.r[16].w[0] + 76u));
    c.f[13] = c.f[12];
    c.f[3] = ld32((c.r[16].w[0] + 72u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[7] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[6] = ld32((c.r[2].w[0] + 28u));
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[6], 0u + 255u);
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    set32(c.r[7], 0u + 2u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[8]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[9], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[3]);
    set32(c.r[10], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[4].w[0] >> 31);
    set32(c.r[5], c.r[5].w[0] - c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E73Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0019E73Cu) [[unlikely]] return; }
L_0019E73C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E748u);  if (depth < kMaxDepth) unit_0027(c, 144u, depth + 1u); else { c.pc = 0x0019E3B8u; return; } if (c.pc != 0x0019E748u) [[unlikely]] return; }
L_0019E748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E77Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0019E77Cu) [[unlikely]] return; }
L_0019E77C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E788u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0019E788u) [[unlikely]] return; }
L_0019E788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E798u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0019E798u) [[unlikely]] return; }
L_0019E798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7A4u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0019E7A4u) [[unlikely]] return; }
L_0019E7A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E7BCu) [[unlikely]] return; }
L_0019E7BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019E7F0; } }
L_0019E7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7D0u);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x0019E7D0u) [[unlikely]] return; }
L_0019E7D0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E7E8u) [[unlikely]] return; }
L_0019E7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E7FC; } }
L_0019E7F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E908; } }
L_0019E7FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E810u);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B2808u; return; } if (c.pc != 0x0019E810u) [[unlikely]] return; }
L_0019E810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E824u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0019E824u) [[unlikely]] return; }
L_0019E824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E840u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x0019E840u) [[unlikely]] return; }
L_0019E840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E850u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0019E850u) [[unlikely]] return; }
L_0019E850:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E864u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019E864u) [[unlikely]] return; }
L_0019E864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E87Cu);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x0019E87Cu) [[unlikely]] return; }
L_0019E87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E7F0u | kUnwind; return; } goto L_0019E7F0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E89Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019E89Cu) [[unlikely]] return; }
L_0019E89C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E8B0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019E8B0u) [[unlikely]] return; }
L_0019E8B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 41u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0019E8D0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0019E8DC; } }
L_0019E8D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E904; } }
L_0019E8DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E8ECu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0019E8ECu) [[unlikely]] return; }
L_0019E8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019E8D0u | kUnwind; return; } goto L_0019E8D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 27596u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 4;
L_0019E904:
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 1;
L_0019E908:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019E928:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E940u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0019E940u) [[unlikely]] return; }
L_0019E940:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E954u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0019E954u) [[unlikely]] return; }
L_0019E954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E964u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0019E964u) [[unlikely]] return; }
L_0019E964:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019E9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E97Cu);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0019E97Cu) [[unlikely]] return; }
L_0019E97C:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019E9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E994u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0019E994u) [[unlikely]] return; }
L_0019E994:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019E9CC; } }
L_0019E9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9ACu);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x0019E9ACu) [[unlikely]] return; }
L_0019E9AC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E9C4u) [[unlikely]] return; }
L_0019E9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E9D8; } }
L_0019E9CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EA58; } }
L_0019E9D8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9F0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019E9F0u) [[unlikely]] return; }
L_0019E9F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA04u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019EA04u) [[unlikely]] return; }
L_0019EA04:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 41u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0019EA24; } }
L_0019EA18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EA54; } }
L_0019EA24:
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019EA18u | kUnwind; return; } goto L_0019EA18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA40u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0019EA40u) [[unlikely]] return; }
L_0019EA40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019EA18u | kUnwind; return; } goto L_0019EA18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 27596u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0019EA54:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0019EA58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019EA70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA9Cu);  if (depth < kMaxDepth) unit_001A(c, 218u, depth + 1u); else { c.pc = 0x0016A578u; return; } if (c.pc != 0x0019EA9Cu) [[unlikely]] return; }
L_0019EA9C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019EAB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 4984u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EDA8; } }
L_0019EAB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4984u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19264u);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAECu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0019EAECu) [[unlikely]] return; }
L_0019EAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EB0C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB00u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0019EB00u) [[unlikely]] return; }
L_0019EB00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EB10; } }
L_0019EB0C:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0019EB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 17200u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB2Cu);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0019EB2Cu) [[unlikely]] return; }
L_0019EB2C:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EBCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB40u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019E928u; return; } if (c.pc != 0x0019EB40u) [[unlikely]] return; }
L_0019EB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EBDC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB64u);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x0019EB64u) [[unlikely]] return; }
L_0019EB64:
    set32(c.r[2], c.r[20].w[0] + 19264u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 100u), 0u);
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB80u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x0019EB80u) [[unlikely]] return; }
L_0019EB80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB90u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x0019EB90u) [[unlikely]] return; }
L_0019EB90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB9Cu);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x0019EB9Cu) [[unlikely]] return; }
L_0019EB9C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBA8u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x0019EBA8u) [[unlikely]] return; }
L_0019EBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBB0u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x0019EBB0u) [[unlikely]] return; }
L_0019EBB0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 18920u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBC4u);  if (depth < kMaxDepth) unit_002A(c, 156u, depth + 1u); else { c.pc = 0x001A9698u; return; } if (c.pc != 0x0019EBC4u) [[unlikely]] return; }
L_0019EBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019ED98; } }
L_0019EBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBD4u);  if (depth < kMaxDepth) unit_0027(c, 154u, depth + 1u); else { c.pc = 0x0019E760u; return; } if (c.pc != 0x0019EBD4u) [[unlikely]] return; }
L_0019EBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EBE8; } }
L_0019EBDC:
    st32((c.r[19].w[0] + 4984u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EDA8; } }
L_0019EBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC04u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0019EC04u) [[unlikely]] return; }
L_0019EC04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC14u);  if (depth < kMaxDepth) unit_001D(c, 42u, depth + 1u); else { c.pc = 0x00174A58u; return; } if (c.pc != 0x0019EC14u) [[unlikely]] return; }
L_0019EC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019ECC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC2Cu);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0019EC2Cu) [[unlikely]] return; }
L_0019EC2C:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019ECC8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[18].w[0] + 1720u), 0u);
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC58u);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x0019EC58u) [[unlikely]] return; }
L_0019EC58:
    set32(c.r[2], c.r[20].w[0] + 19264u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 100u), 0u);
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC74u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x0019EC74u) [[unlikely]] return; }
L_0019EC74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC84u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x0019EC84u) [[unlikely]] return; }
L_0019EC84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC90u);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x0019EC90u) [[unlikely]] return; }
L_0019EC90:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC9Cu);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x0019EC9Cu) [[unlikely]] return; }
L_0019EC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECA4u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x0019ECA4u) [[unlikely]] return; }
L_0019ECA4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 18920u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECB8u);  if (depth < kMaxDepth) unit_0027(c, 230u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x0019ECB8u) [[unlikely]] return; }
L_0019ECB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECC4u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x0019ECC4u) [[unlikely]] return; }
L_0019ECC4:
    st32((c.r[17].w[0] + 18920u), 0u);
    c.budget -= 1;
L_0019ECC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECD0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0019ECD0u) [[unlikely]] return; }
L_0019ECD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EDA8; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECE8u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0019ECE8u) [[unlikely]] return; }
L_0019ECE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECF8u);  if (depth < kMaxDepth) unit_001D(c, 42u, depth + 1u); else { c.pc = 0x00174A58u; return; } if (c.pc != 0x0019ECF8u) [[unlikely]] return; }
L_0019ECF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EDA8; } }
    set32(c.r[4], c.r[21].w[0] + 17200u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED10u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0019ED10u) [[unlikely]] return; }
L_0019ED10:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EDA8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[18].w[0] + 1720u), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 29328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED3Cu);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x0019ED3Cu) [[unlikely]] return; }
L_0019ED3C:
    set32(c.r[2], c.r[20].w[0] + 19264u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[2].w[0] + 100u), 0u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED58u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x0019ED58u) [[unlikely]] return; }
L_0019ED58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED68u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x0019ED68u) [[unlikely]] return; }
L_0019ED68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED74u);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x0019ED74u) [[unlikely]] return; }
L_0019ED74:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED80u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x0019ED80u) [[unlikely]] return; }
L_0019ED80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED88u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x0019ED88u) [[unlikely]] return; }
L_0019ED88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 18920u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED98u);  if (depth < kMaxDepth) unit_0027(c, 230u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x0019ED98u) [[unlikely]] return; }
L_0019ED98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EDA4u);  if (depth < kMaxDepth) unit_0093(c, 89u, depth + 1u); else { c.pc = 0x0034D288u; return; } if (c.pc != 0x0019EDA4u) [[unlikely]] return; }
L_0019EDA4:
    st32((c.r[17].w[0] + 18920u), 0u);
    c.budget -= 1;
L_0019EDA8:
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
L_0019EDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[3].w[0] + 15804u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EE44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20708u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE20u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0019EE20u) [[unlikely]] return; }
L_0019EE20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 10084u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 10080u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE38u);  if (depth < kMaxDepth) unit_0023(c, 123u, depth + 1u); else { c.pc = 0x0018DC58u; return; } if (c.pc != 0x0019EE38u) [[unlikely]] return; }
L_0019EE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[19].w[0] + 15804u), 0u);
    st8((c.r[2].w[0] + 15820u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0019EE44:
    set32(c.r[2], ld32((c.r[19].w[0] + 15804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EE60; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE8C; } }
L_0019EE60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9420u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019EE78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019EE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 15788u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EF2C; } }
L_0019EE8C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 15816u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 15776u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0019EF2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 15812u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019EF2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0019EED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10080u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EECCu);  if (depth < kMaxDepth) unit_0084(c, 4u, depth + 1u); else { c.pc = 0x00310040u; return; } if (c.pc != 0x0019EECCu) [[unlikely]] return; }
L_0019EECC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 15816u), c.r[2].w[0]);
    c.budget -= 2;
L_0019EED4:
    set32(c.r[7], ld32((c.r[16].w[0] + 15776u)));
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EF2C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 29316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EF2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 76u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20708u)));
    st8((c.r[5].w[0] + 15820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    set32(c.r[5], c.r[7].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF18u);  if (depth < kMaxDepth) unit_0039(c, 104u, depth + 1u); else { c.pc = 0x001E4CC0u; return; } if (c.pc != 0x0019EF18u) [[unlikely]] return; }
L_0019EF18:
    set32(c.r[3], ld32((c.r[16].w[0] + 15776u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 15804u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 15816u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 29316u), c.r[2].w[0]);
    c.budget -= 5;
L_0019EF2C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019EF50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[2], ld32((c.r[3].w[0] + 15804u)));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EF9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EF9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[20].w[0] + 15804u), 0u);
    st8((c.r[2].w[0] + 15820u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0019EF9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 15804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EFB8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EFE4; } }
L_0019EFB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9420u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019EFD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019EFD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 15788u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F0B8; } }
L_0019EFE4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 15824u)));
    set32(c.r[16], c.r[17].w[0] + 10088u);
    set32(c.r[2], ld32((c.r[17].w[0] + 10088u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0019F014; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 15828u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0019F0B8; } }
L_0019F014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 15812u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019F0B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019F04C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 9416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F03Cu);  if (depth < kMaxDepth) unit_000D(c, 39u, depth + 1u); else { c.pc = 0x001347B8u; return; } if (c.pc != 0x0019F03Cu) [[unlikely]] return; }
L_0019F03C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 15828u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 15824u), 0u);
    c.budget -= 4;
L_0019F04C:
    set32(c.r[2], ld32((c.r[18].w[0] + 29316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F0B8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 10088u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019F0B8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[3], 0u + 72u);
    c.f[13] = ld32((c.r[16].w[0] + 12u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 9416u);
    st32((c.r[20].w[0] + 15804u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[10].w[0] + 15820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 29316u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F0A4u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x00134650u; return; } if (c.pc != 0x0019F0A4u) [[unlikely]] return; }
L_0019F0A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 10088u)));
    st32((c.r[4].w[0] + 15828u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 15824u), c.r[3].w[0]);
    c.budget -= 5;
L_0019F0B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019F0E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st16((c.r[2].w[0] + 15812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F12Cu);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x0019F12Cu) [[unlikely]] return; }
L_0019F12C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F138u);  if (depth < kMaxDepth) unit_0027(c, 253u, depth + 1u); else { c.pc = 0x0019F480u; return; } if (c.pc != 0x0019F138u) [[unlikely]] return; }
L_0019F138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 378u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], 0u + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[17], c.r[2].w[0] + 9416u);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 9840u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[5], (c.r[29].w[0] + 23u));
    ldr(c.r[5], (c.r[29].w[0] + 16u));
    sdl(c.r[2], (c.r[17].w[0] + 39u));
    sdr(c.r[2], (c.r[17].w[0] + 32u));
    sdl(c.r[3], (c.r[17].w[0] + 47u));
    sdr(c.r[3], (c.r[17].w[0] + 40u));
    sdl(c.r[5], (c.r[17].w[0] + 55u));
    sdr(c.r[5], (c.r[17].w[0] + 48u));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1B4u);  if (depth < kMaxDepth) unit_0028(c, 119u, depth + 1u); else { c.pc = 0x001A1B48u; return; } if (c.pc != 0x0019F1B4u) [[unlikely]] return; }
L_0019F1B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1C0u);  if (depth < kMaxDepth) unit_0028(c, 87u, depth + 1u); else { c.pc = 0x001A1200u; return; } if (c.pc != 0x0019F1C0u) [[unlikely]] return; }
L_0019F1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1C8u);  if (depth < kMaxDepth) unit_0081(c, 76u, depth + 1u); else { c.pc = 0x003051B8u; return; } if (c.pc != 0x0019F1C8u) [[unlikely]] return; }
L_0019F1C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F424; } }
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
L_0019F1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 15780u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[3].w[0] + 15784u), 0u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F200u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0019F200u) [[unlikely]] return; }
L_0019F200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F208u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F208u) [[unlikely]] return; }
L_0019F208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0019F218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F218u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0019F218u) [[unlikely]] return; }
L_0019F218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 15800u)));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F2F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15804u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F250; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F2F0; } }
L_0019F250:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 15812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0019F2A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019F2B4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F2A8; } }
    set32(c.r[2], 0u + 87u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st8((c.r[23].w[0] + 15820u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 20708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 12224u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F298u);  if (depth < kMaxDepth) unit_0039(c, 104u, depth + 1u); else { c.pc = 0x001E4CC0u; return; } if (c.pc != 0x0019F298u) [[unlikely]] return; }
L_0019F298:
    st32((c.r[16].w[0] + 29316u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 15804u), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F2F0; } }
L_0019F2A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 15804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F2F0; } }
L_0019F2B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 29316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2CCu);  if (depth < kMaxDepth) unit_0023(c, 139u, depth + 1u); else { c.pc = 0x0018DFD8u; return; } if (c.pc != 0x0019F2CCu) [[unlikely]] return; }
L_0019F2CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[20].w[0] + 15800u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 20708u)));
    st32((c.r[17].w[0] + 15804u), 0u);
    st8((c.r[23].w[0] + 15820u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2E8u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0019F2E8u) [[unlikely]] return; }
L_0019F2E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[3].w[0] + 10084u), c.r[2].w[0]);
    c.budget -= 2;
L_0019F2F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F37C; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F310; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0019F310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F318u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F318u) [[unlikely]] return; }
L_0019F318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15816u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0019F360; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 18924u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F360; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 15812u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0019F360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 15820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F35Cu);  if (depth < kMaxDepth) unit_0023(c, 123u, depth + 1u); else { c.pc = 0x0018DC58u; return; } if (c.pc != 0x0019F35Cu) [[unlikely]] return; }
L_0019F35C:
    st32((c.r[22].w[0] + 18924u), 0u);
    c.budget -= 1;
L_0019F360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F368u);  if (depth < kMaxDepth) unit_0027(c, 222u, depth + 1u); else { c.pc = 0x0019EDD0u; return; } if (c.pc != 0x0019F368u) [[unlikely]] return; }
L_0019F368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 15788u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F3B0; } }
L_0019F37C:
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F38C; } }
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0019F38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F394u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F394u) [[unlikely]] return; }
L_0019F394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F3A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3A4u);  if (depth < kMaxDepth) unit_0027(c, 227u, depth + 1u); else { c.pc = 0x0019EF50u; return; } if (c.pc != 0x0019F3A4u) [[unlikely]] return; }
L_0019F3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[22].w[0] + 18924u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 15788u), c.r[19].w[0]);
    c.budget -= 3;
L_0019F3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15808u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F3D8; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F3D4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019F3D4:
    st32((c.r[4].w[0] + 15788u), c.r[19].w[0]);
    c.budget -= 1;
L_0019F3D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 15812u)));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 15812u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019F3F0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[21].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F3F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3FCu);  if (depth < kMaxDepth) unit_0024(c, 47u, depth + 1u); else { c.pc = 0x00190B38u; return; } if (c.pc != 0x0019F3FCu) [[unlikely]] return; }
L_0019F3FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F424; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F418u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x0019F418u) [[unlikely]] return; }
L_0019F418:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F1E0u | kUnwind; return; } goto L_0019F1E0; } }
L_0019F424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F42Cu);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x0019F42Cu) [[unlikely]] return; }
L_0019F42C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0] + 18924u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F43Cu);  if (depth < kMaxDepth) unit_0027(c, 287u, depth + 1u); else { c.pc = 0x0019F8A8u; return; } if (c.pc != 0x0019F43Cu) [[unlikely]] return; }
L_0019F43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F444u);  if (depth < kMaxDepth) unit_0081(c, 196u, depth + 1u); else { c.pc = 0x00306628u; return; } if (c.pc != 0x0019F444u) [[unlikely]] return; }
L_0019F444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
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
    st32((c.r[2].w[0] + 15792u), 0u);
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019F480:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F4F0; } }
L_0019F4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4D8u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x0019F4D8u) [[unlikely]] return; }
L_0019F4D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4E8u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0019F4E8u) [[unlikely]] return; }
L_0019F4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4F0u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0019F4F0u) [[unlikely]] return; }
L_0019F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4F8u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F4F8u) [[unlikely]] return; }
L_0019F4F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F4D0u | kUnwind; return; } goto L_0019F4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F50Cu);  if (depth < kMaxDepth) unit_0020(c, 47u, depth + 1u); else { c.pc = 0x00180750u; return; } if (c.pc != 0x0019F50Cu) [[unlikely]] return; }
L_0019F50C:
    set32(c.r[16], c.r[16].w[0] + 12224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F518u);  if (depth < kMaxDepth) unit_001A(c, 181u, depth + 1u); else { c.pc = 0x0016A078u; return; } if (c.pc != 0x0019F518u) [[unlikely]] return; }
L_0019F518:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F52Cu);  if (depth < kMaxDepth) unit_0026(c, 86u, depth + 1u); else { c.pc = 0x0019A478u; return; } if (c.pc != 0x0019F52Cu) [[unlikely]] return; }
L_0019F52C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F53Cu);  if (depth < kMaxDepth) unit_0023(c, 130u, depth + 1u); else { c.pc = 0x0018DD40u; return; } if (c.pc != 0x0019F53Cu) [[unlikely]] return; }
L_0019F53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F544u);  if (depth < kMaxDepth) unit_0020(c, 169u, depth + 1u); else { c.pc = 0x00182118u; return; } if (c.pc != 0x0019F544u) [[unlikely]] return; }
L_0019F544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20716u)));
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F55Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0019F55Cu) [[unlikely]] return; }
L_0019F55C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[4].w[0] + 19264u);
    st32((c.r[3].w[0] + 40u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F570u);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x0019F570u) [[unlikely]] return; }
L_0019F570:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F58Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F58Cu) [[unlikely]] return; }
L_0019F58C:
    set32(c.r[4], ld32((c.r[21].w[0] + 20708u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F59Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0019F59Cu) [[unlikely]] return; }
L_0019F59C:
    set32(c.r[4], ld32((c.r[21].w[0] + 20708u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5A8u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0019F5A8u) [[unlikely]] return; }
L_0019F5A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[22].w[0] + 10084u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5BCu);  if (depth < kMaxDepth) unit_0038(c, 527u, depth + 1u); else { c.pc = 0x001E3920u; return; } if (c.pc != 0x0019F5BCu) [[unlikely]] return; }
L_0019F5BC:
    set32(c.r[4], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[6].w[0] + 9408u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 15828u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[6].w[0] + 15776u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 10048u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[20].w[0] + 10088u);
    st32((c.r[2].w[0] + 15796u), 0u);
    st32((c.r[3].w[0] + 15788u), 0u);
    st32((c.r[20].w[0] + 10088u), 0u);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] + 15824u), 0u);
    st8((c.r[5].w[0] + 15820u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 80u), 0u);
    c.budget -= 21;
L_0019F610:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F620u);  if (depth < kMaxDepth) unit_0038(c, 533u, depth + 1u); else { c.pc = 0x001E3AD0u; return; } if (c.pc != 0x0019F620u) [[unlikely]] return; }
L_0019F620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F648; } }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F640u);  if (depth < kMaxDepth) unit_0038(c, 530u, depth + 1u); else { c.pc = 0x001E3998u; return; } if (c.pc != 0x0019F640u) [[unlikely]] return; }
L_0019F640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F64C; } }
L_0019F648:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0019F64C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F610u | kUnwind; return; } goto L_0019F610; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 20708u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[16], c.r[5].w[0] + 30720u);
    st16((c.r[3].w[0] + 15812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F680u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0019F680u) [[unlikely]] return; }
L_0019F680:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 10084u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[6].w[0] + 17704u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 15804u), 0u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[6].w[0] + 10080u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6B4u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x0019F6B4u) [[unlikely]] return; }
L_0019F6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6CCu);  if (depth < kMaxDepth) unit_0024(c, 163u, depth + 1u); else { c.pc = 0x00191A28u; return; } if (c.pc != 0x0019F6CCu) [[unlikely]] return; }
L_0019F6CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6DCu);  if (depth < kMaxDepth) unit_0024(c, 161u, depth + 1u); else { c.pc = 0x001919F0u; return; } if (c.pc != 0x0019F6DCu) [[unlikely]] return; }
L_0019F6DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6ECu);  if (depth < kMaxDepth) unit_0024(c, 166u, depth + 1u); else { c.pc = 0x00191AA8u; return; } if (c.pc != 0x0019F6ECu) [[unlikely]] return; }
L_0019F6EC:
    set32(c.r[4], c.r[30].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[2], c.r[5].w[0] + 9712u);
    set32(c.r[3], c.r[23].w[0] + 15840u);
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] + 64u);
    c.f[7] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[6], c.r[2].w[0] + 80u);
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[9], 0u + 1u);
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[7], c.r[2].w[0] + 32u);
    c.f[9] = ld32((c.r[23].w[0] + 15840u));
    set32(c.r[8], c.r[2].w[0] + 48u);
    c.f[10] = ld32((c.r[30].w[0] + 15856u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[7].w[0] + 12u), c.f[1]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.f[10]);
    st32((c.r[5].w[0] + 4u), c.f[5]);
    st32((c.r[5].w[0] + 8u), c.f[6]);
    st32((c.r[2].w[0] + 80u), c.f[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[6].w[0] + 4u), c.f[7]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 116u), c.f[2]);
    st32((c.r[2].w[0] + 104u), c.f[8]);
    st32((c.r[2].w[0] + 108u), c.f[3]);
    st32((c.r[2].w[0] + 32u), c.f[9]);
    st32((c.r[7].w[0] + 4u), c.f[7]);
    st32((c.r[7].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 48u), c.f[10]);
    st32((c.r[8].w[0] + 4u), c.f[5]);
    st32((c.r[8].w[0] + 8u), c.f[6]);
    st32((c.r[2].w[0] + 96u), c.f[8]);
    st32((c.r[2].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 112u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7B0u);  if (depth < kMaxDepth) unit_0023(c, 120u, depth + 1u); else { c.pc = 0x0018DB98u; return; } if (c.pc != 0x0019F7B0u) [[unlikely]] return; }
L_0019F7B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 16792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7C4u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x0019F7C4u) [[unlikely]] return; }
L_0019F7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[4].w[0] + 16376u);
    st32((c.r[3].w[0] + 10040u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F7E0u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x0019F7E0u) [[unlikely]] return; }
L_0019F7E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[5].w[0] + 10128u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1708u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F814; } }
L_0019F7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F804u);  if (depth < kMaxDepth) unit_0030(c, 207u, depth + 1u); else { c.pc = 0x001C2AA0u; return; } if (c.pc != 0x0019F804u) [[unlikely]] return; }
L_0019F804:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[3], c.r[19].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0019F814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F81Cu);  if (depth < kMaxDepth) unit_0030(c, 269u, depth + 1u); else { c.pc = 0x001C3A68u; return; } if (c.pc != 0x0019F81Cu) [[unlikely]] return; }
L_0019F81C:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F7F8u | kUnwind; return; } goto L_0019F7F8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[6].w[0] + 15936u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F838u);  if (depth < kMaxDepth) unit_0030(c, 266u, depth + 1u); else { c.pc = 0x001C3A08u; return; } if (c.pc != 0x0019F838u) [[unlikely]] return; }
L_0019F838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] + 15940u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F848u);  if (depth < kMaxDepth) unit_0026(c, 174u, depth + 1u); else { c.pc = 0x0019B258u; return; } if (c.pc != 0x0019F848u) [[unlikely]] return; }
L_0019F848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[4].w[0] + 15944u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[5].w[0] + 15948u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F868u);  if (depth < kMaxDepth) unit_0036(c, 226u, depth + 1u); else { c.pc = 0x001D9C78u; return; } if (c.pc != 0x0019F868u) [[unlikely]] return; }
L_0019F868:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
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
    st32((c.r[6].w[0] + 15952u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019F8A8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F8F8u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F8F8u) [[unlikely]] return; }
L_0019F8F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019F9A4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F930; } }
L_0019F910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F918u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x0019F918u) [[unlikely]] return; }
L_0019F918:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F928u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0019F928u) [[unlikely]] return; }
L_0019F928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F930u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x0019F930u) [[unlikely]] return; }
L_0019F930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F938u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x0019F938u) [[unlikely]] return; }
L_0019F938:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F910u | kUnwind; return; } goto L_0019F910; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15820u)));
    set32(c.r[2], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019F964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F95Cu);  if (depth < kMaxDepth) unit_0027(c, 222u, depth + 1u); else { c.pc = 0x0019EDD0u; return; } if (c.pc != 0x0019F95Cu) [[unlikely]] return; }
L_0019F95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F9A4; } }
L_0019F964:
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019F980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F978u);  if (depth < kMaxDepth) unit_0027(c, 227u, depth + 1u); else { c.pc = 0x0019EF50u; return; } if (c.pc != 0x0019F978u) [[unlikely]] return; }
L_0019F978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F9A4; } }
L_0019F980:
    set32(c.r[2], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019F9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F994u);  if (depth < kMaxDepth) unit_0023(c, 139u, depth + 1u); else { c.pc = 0x0018DFD8u; return; } if (c.pc != 0x0019F994u) [[unlikely]] return; }
L_0019F994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[19].w[0] + 15800u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 15804u), 0u);
    st8((c.r[18].w[0] + 15820u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0019F9A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 15824u)));
    st32((c.r[20].w[0] + 28296u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F9CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 9416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9CCu);  if (depth < kMaxDepth) unit_000D(c, 39u, depth + 1u); else { c.pc = 0x001347B8u; return; } if (c.pc != 0x0019F9CCu) [[unlikely]] return; }
L_0019F9CC:
    set32(c.r[4], ld32((c.r[21].w[0] + 20716u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9DCu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0019F9DCu) [[unlikely]] return; }
L_0019F9DC:
    set32(c.r[5], ld32((c.r[22].w[0] + 10040u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9ECu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019F9ECu) [[unlikely]] return; }
L_0019F9EC:
    set32(c.r[5], ld32((c.r[23].w[0] + 10024u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9FCu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019F9FCu) [[unlikely]] return; }
L_0019F9FC:
    set32(c.r[5], ld32((c.r[30].w[0] + 10036u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA0Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019FA0Cu) [[unlikely]] return; }
L_0019FA0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA20u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x0019FA20u) [[unlikely]] return; }
L_0019FA20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 15776u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FA54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 15816u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0019FA54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10080u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA54u);  if (depth < kMaxDepth) unit_0084(c, 4u, depth + 1u); else { c.pc = 0x00310040u; return; } if (c.pc != 0x0019FA54u) [[unlikely]] return; }
L_0019FA54:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] + 15828u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 15800u)));
    st32((c.r[4].w[0] + 15816u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 15824u), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019FAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 5076u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FAA4u) [[unlikely]] return; }
L_0019FAA4:
    st32((c.r[19].w[0] + 15800u), 0u);
    c.budget -= 1;
L_0019FAA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[3].w[0] + 15788u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAC4u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x0019FAC4u) [[unlikely]] return; }
L_0019FAC4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAD0u);  if (depth < kMaxDepth) unit_0023(c, 130u, depth + 1u); else { c.pc = 0x0018DD40u; return; } if (c.pc != 0x0019FAD0u) [[unlikely]] return; }
L_0019FAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAD8u);  if (depth < kMaxDepth) unit_0023(c, 128u, depth + 1u); else { c.pc = 0x0018DD18u; return; } if (c.pc != 0x0019FAD8u) [[unlikely]] return; }
L_0019FAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAE0u);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x0019FAE0u) [[unlikely]] return; }
L_0019FAE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FAFCu) [[unlikely]] return; }
L_0019FAFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 23796u), c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] + 19264u);
    st32((c.r[2].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FB18u);  if (depth < kMaxDepth) unit_001A(c, 225u, depth + 1u); else { c.pc = 0x0016A690u; return; } if (c.pc != 0x0019FB18u) [[unlikely]] return; }
L_0019FB18:
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
L_0019FB50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[9], 0u + 2931u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 30976u);
    set32(c.r[17], c.r[17].w[0] + 31040u);
    set32(c.r[4], ld32((c.r[18].w[0] + 18708u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBB8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0019FBB8u) [[unlikely]] return; }
L_0019FBB8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBD0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0019FBD0u) [[unlikely]] return; }
L_0019FBD0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 18708u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[9], 0u + 2935u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC04u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0019FC04u) [[unlikely]] return; }
L_0019FC04:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0019FC74; } }
    c.budget -= 1;
L_0019FC30:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 48u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FC30u | kUnwind; return; } goto L_0019FC30; } }
L_0019FC74:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019FD0C; } }
    c.budget -= 1;
L_0019FC90:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[10], c.r[4].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019FCE8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
L_0019FCB8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_0019FCD4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FCEC; } }
L_0019FCD4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FCB8u | kUnwind; return; } goto L_0019FCB8; } }
L_0019FCE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019FCEC:
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FC90u | kUnwind; return; } goto L_0019FC90; } }
L_0019FD0C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 32u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019FEA8; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_0019FD30:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0019FDA8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019FDA0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_0019FD70:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_0019FD8C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FDA4; } }
L_0019FD8C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FD70u | kUnwind; return; } goto L_0019FD70; } }
L_0019FDA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019FDA4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0019FDA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019FE4C; } }
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0019FE4C; } }
L_0019FDC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[9], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019FE24; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019FE00:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019FE28; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FE00u | kUnwind; return; } goto L_0019FE00; } }
L_0019FE24:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019FE28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019FE38; } }
    set32(c.r[2], c.r[10].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_0019FE38:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FDC8u | kUnwind; return; } goto L_0019FDC8; } }
L_0019FE4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0019FE90; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE68u);  if (depth < kMaxDepth) unit_0028(c, 321u, depth + 1u); else { c.pc = 0x001A3B90u; return; } if (c.pc != 0x0019FE68u) [[unlikely]] return; }
L_0019FE68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE7Cu);  if (depth < kMaxDepth) unit_0028(c, 321u, depth + 1u); else { c.pc = 0x001A3B90u; return; } if (c.pc != 0x0019FE7Cu) [[unlikely]] return; }
L_0019FE7C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE90u);  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x001A2C30u; return; } if (c.pc != 0x0019FE90u) [[unlikely]] return; }
L_0019FE90:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FD30u | kUnwind; return; } goto L_0019FD30; } }
L_0019FEA8:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], c.r[21].w[0] + 30976u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[22].w[0] + 31040u);
    set32(c.r[8], 0u + 2994u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEC8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0019FEC8u) [[unlikely]] return; }
L_0019FEC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FED8u);  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2D48u; return; } if (c.pc != 0x0019FED8u) [[unlikely]] return; }
L_0019FED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEE0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0019FEE0u) [[unlikely]] return; }
L_0019FEE0:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0019FEFC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEFCu);  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2D48u; return; } if (c.pc != 0x0019FEFCu) [[unlikely]] return; }
L_0019FEFC:
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019FF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 15u);
    c.budget -= 8;
L_0019FF50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019FF6C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF68u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0019FF68u) [[unlikely]] return; }
L_0019FF68:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0019FF6C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019FF50u | kUnwind; return; } goto L_0019FF50; } }
    st32((c.r[18].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 1720u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFA0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0019FFA0u) [[unlikely]] return; }
L_0019FFA0:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7694u)));
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FFC4; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0019FFC4; } }
    c.r[2].d[0] = c.r[8].d[0] ^ 82ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 2;
L_0019FFC4:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0028(c, 3u, depth); } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0019FFE8:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { [[clang::musttail]] return unit_0028(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0028(c, 1u, depth);
}

}
