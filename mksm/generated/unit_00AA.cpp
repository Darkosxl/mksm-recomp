#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A800C;
    case 3u: goto L_003A8018;
    case 4u: goto L_003A8090;
    case 5u: goto L_003A80A8;
    case 6u: goto L_003A80B8;
    case 7u: goto L_003A80EC;
    case 8u: goto L_003A80F8;
    case 9u: goto L_003A8108;
    case 10u: goto L_003A8118;
    case 11u: goto L_003A8128;
    case 12u: goto L_003A8138;
    case 13u: goto L_003A8148;
    case 14u: goto L_003A8158;
    case 15u: goto L_003A8168;
    case 16u: goto L_003A8178;
    case 17u: goto L_003A818C;
    case 18u: goto L_003A8198;
    case 19u: goto L_003A81AC;
    case 20u: goto L_003A81B8;
    case 21u: goto L_003A8220;
    case 22u: goto L_003A8238;
    case 23u: goto L_003A8288;
    case 24u: goto L_003A82A0;
    case 25u: goto L_003A82CC;
    case 26u: goto L_003A830C;
    case 27u: goto L_003A8318;
    case 28u: goto L_003A8348;
    case 29u: goto L_003A8360;
    case 30u: goto L_003A837C;
    case 31u: goto L_003A8398;
    case 32u: goto L_003A83A0;
    case 33u: goto L_003A83C0;
    case 34u: goto L_003A83D0;
    case 35u: goto L_003A83F0;
    case 36u: goto L_003A8400;
    case 37u: goto L_003A8428;
    case 38u: goto L_003A8438;
    case 39u: goto L_003A8458;
    case 40u: goto L_003A8468;
    case 41u: goto L_003A848C;
    case 42u: goto L_003A8498;
    case 43u: goto L_003A84C0;
    case 44u: goto L_003A84D0;
    case 45u: goto L_003A8548;
    case 46u: goto L_003A8560;
    case 47u: goto L_003A8570;
    case 48u: goto L_003A85AC;
    case 49u: goto L_003A85BC;
    case 50u: goto L_003A85D0;
    case 51u: goto L_003A85E0;
    case 52u: goto L_003A85F0;
    case 53u: goto L_003A8600;
    case 54u: goto L_003A8610;
    case 55u: goto L_003A8630;
    case 56u: goto L_003A8638;
    case 57u: goto L_003A8648;
    case 58u: goto L_003A865C;
    case 59u: goto L_003A8668;
    case 60u: goto L_003A867C;
    case 61u: goto L_003A8688;
    case 62u: goto L_003A86F8;
    case 63u: goto L_003A8700;
    case 64u: goto L_003A8708;
    case 65u: goto L_003A8718;
    case 66u: goto L_003A8720;
    case 67u: goto L_003A8728;
    case 68u: goto L_003A875C;
    case 69u: goto L_003A8774;
    case 70u: goto L_003A8784;
    case 71u: goto L_003A8794;
    case 72u: goto L_003A87EC;
    case 73u: goto L_003A87F8;
    case 74u: goto L_003A8804;
    case 75u: goto L_003A8814;
    case 76u: goto L_003A8828;
    case 77u: goto L_003A8834;
    case 78u: goto L_003A8850;
    case 79u: goto L_003A885C;
    case 80u: goto L_003A8880;
    case 81u: goto L_003A8898;
    case 82u: goto L_003A88B8;
    case 83u: goto L_003A88C4;
    case 84u: goto L_003A88D0;
    case 85u: goto L_003A88F8;
    case 86u: goto L_003A8908;
    case 87u: goto L_003A8910;
    case 88u: goto L_003A8918;
    case 89u: goto L_003A8920;
    case 90u: goto L_003A8978;
    case 91u: goto L_003A8990;
    case 92u: goto L_003A89A0;
    case 93u: goto L_003A89B0;
    case 94u: goto L_003A89C4;
    case 95u: goto L_003A89D0;
    case 96u: goto L_003A89E4;
    case 97u: goto L_003A89F0;
    case 98u: goto L_003A8B48;
    case 99u: goto L_003A8B80;
    case 100u: goto L_003A8BA8;
    case 101u: goto L_003A8BB8;
    case 102u: goto L_003A8BC8;
    case 103u: goto L_003A8BD0;
    case 104u: goto L_003A8BE0;
    case 105u: goto L_003A8BF0;
    case 106u: goto L_003A8BF8;
    case 107u: goto L_003A8C38;
    case 108u: goto L_003A8C50;
    case 109u: goto L_003A8C80;
    case 110u: goto L_003A8CEC;
    case 111u: goto L_003A8D04;
    case 112u: goto L_003A8D10;
    case 113u: goto L_003A8D4C;
    case 114u: goto L_003A8D5C;
    case 115u: goto L_003A8D70;
    case 116u: goto L_003A8D80;
    case 117u: goto L_003A8D90;
    case 118u: goto L_003A8DA0;
    case 119u: goto L_003A8DB0;
    case 120u: goto L_003A8DD0;
    case 121u: goto L_003A8DD8;
    case 122u: goto L_003A8DE8;
    case 123u: goto L_003A8DFC;
    case 124u: goto L_003A8E08;
    case 125u: goto L_003A8E1C;
    case 126u: goto L_003A8E28;
    case 127u: goto L_003A8E80;
    case 128u: goto L_003A8E98;
    case 129u: goto L_003A8EA8;
    case 130u: goto L_003A8EB0;
    case 131u: goto L_003A8EC4;
    case 132u: goto L_003A8ED0;
    case 133u: goto L_003A8EE4;
    case 134u: goto L_003A8EF0;
    case 135u: goto L_003A8F58;
    case 136u: goto L_003A8FB0;
    case 137u: goto L_003A901C;
    case 138u: goto L_003A9088;
    case 139u: goto L_003A915C;
    case 140u: goto L_003A917C;
    case 141u: goto L_003A91A0;
    case 142u: goto L_003A9284;
    case 143u: goto L_003A92C4;
    case 144u: goto L_003A92E8;
    case 145u: goto L_003A9340;
    case 146u: goto L_003A934C;
    case 147u: goto L_003A937C;
    case 148u: goto L_003A9390;
    case 149u: goto L_003A93AC;
    case 150u: goto L_003A93E8;
    case 151u: goto L_003A93F0;
    case 152u: goto L_003A941C;
    case 153u: goto L_003A9440;
    case 154u: goto L_003A9458;
    case 155u: goto L_003A9498;
    case 156u: goto L_003A9510;
    case 157u: goto L_003A9528;
    case 158u: goto L_003A9538;
    case 159u: goto L_003A956C;
    case 160u: goto L_003A9578;
    case 161u: goto L_003A9588;
    case 162u: goto L_003A9598;
    case 163u: goto L_003A95A8;
    case 164u: goto L_003A95B8;
    case 165u: goto L_003A95C8;
    case 166u: goto L_003A95D0;
    case 167u: goto L_003A95E0;
    case 168u: goto L_003A95F4;
    case 169u: goto L_003A9600;
    case 170u: goto L_003A9614;
    case 171u: goto L_003A9620;
    case 172u: goto L_003A9668;
    case 173u: goto L_003A9678;
    case 174u: goto L_003A9688;
    case 175u: goto L_003A96D8;
    case 176u: goto L_003A9968;
    case 177u: goto L_003A9984;
    case 178u: goto L_003A99B0;
    case 179u: goto L_003A99B8;
    case 180u: goto L_003A9A58;
    case 181u: goto L_003A9A68;
    case 182u: goto L_003A9A70;
    case 183u: goto L_003A9A90;
    case 184u: goto L_003A9AC8;
    case 185u: goto L_003A9B04;
    case 186u: goto L_003A9B68;
    case 187u: goto L_003A9BE0;
    case 188u: goto L_003A9BF8;
    case 189u: goto L_003A9C08;
    case 190u: goto L_003A9C18;
    case 191u: goto L_003A9C28;
    case 192u: goto L_003A9C38;
    case 193u: goto L_003A9C48;
    case 194u: goto L_003A9C78;
    case 195u: goto L_003A9C80;
    case 196u: goto L_003A9C90;
    case 197u: goto L_003A9CA4;
    case 198u: goto L_003A9CB0;
    case 199u: goto L_003A9CC4;
    case 200u: goto L_003A9CD0;
    case 201u: goto L_003A9CD8;
    case 202u: goto L_003A9D3C;
    case 203u: goto L_003A9D68;
    case 204u: goto L_003A9D88;
    case 205u: goto L_003A9DA8;
    case 206u: goto L_003A9EE0;
    case 207u: goto L_003A9F30;
    case 208u: goto L_003AA074;
    case 209u: goto L_003AA090;
    case 210u: goto L_003AA0E8;
    case 211u: goto L_003AA22C;
    case 212u: goto L_003AA248;
    case 213u: goto L_003AA2A0;
    case 214u: goto L_003AA3D8;
    case 215u: goto L_003AA3E0;
    case 216u: goto L_003AA400;
    case 217u: goto L_003AA460;
    case 218u: goto L_003AA59C;
    case 219u: goto L_003AA5A4;
    case 220u: goto L_003AA5C4;
    case 221u: goto L_003AA628;
    case 222u: goto L_003AA670;
    case 223u: goto L_003AA680;
    case 224u: goto L_003AA6B8;
    case 225u: goto L_003AA6D8;
    case 226u: goto L_003AA704;
    case 227u: goto L_003AA720;
    case 228u: goto L_003AA7A8;
    case 229u: goto L_003AAAC0;
    case 230u: goto L_003AAB18;
    case 231u: goto L_003AAB64;
    case 232u: goto L_003AAC08;
    case 233u: goto L_003AACA4;
    case 234u: goto L_003AACEC;
    case 235u: goto L_003AAEE8;
    case 236u: goto L_003AAF24;
    case 237u: goto L_003AAF88;
    case 238u: goto L_003AB00C;
    case 239u: goto L_003AB03C;
    case 240u: goto L_003AB09C;
    case 241u: goto L_003AB0F8;
    case 242u: goto L_003AB118;
    case 243u: goto L_003AB138;
    case 244u: goto L_003AB168;
    case 245u: goto L_003AB3A8;
    case 246u: goto L_003AB408;
    case 247u: goto L_003AB488;
    case 248u: goto L_003AB4C0;
    case 249u: goto L_003AB528;
    case 250u: goto L_003AB6D8;
    case 251u: goto L_003AB774;
    case 252u: goto L_003AB7BC;
    case 253u: goto L_003AB9B8;
    case 254u: goto L_003AB9F4;
    case 255u: goto L_003ABA50;
    case 256u: goto L_003ABAB8;
    case 257u: goto L_003ABC88;
    case 258u: goto L_003ABD24;
    case 259u: goto L_003ABD6C;
    case 260u: goto L_003ABF68;
    case 261u: goto L_003ABFA4;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    st32((c.r[13].w[0] + 32u), c.r[12].w[0]);
    st32((c.r[13].w[0] + 8u), c.f[0]);
    st128((c.r[13].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 3;
L_003A800C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A80A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8098; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1088u)));
    set32(c.r[3], c.r[3].w[0] + 19928u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 192u);
    set32(c.r[12], 0u + 15u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23920u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] - 32584u);
    set32(c.r[7], c.r[7].w[0] - 32504u);
    set32(c.r[8], c.r[8].w[0] - 32472u);
    set32(c.r[9], c.r[9].w[0] + 32512u);
    set32(c.r[10], c.r[10].w[0] - 32440u);
    set32(c.r[11], c.r[11].w[0] - 23472u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8090u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A8090u) [[unlikely]] return; }
L_003A8090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A80AC; } }
L_003A8098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80A8u); set32(c.r[4], c.r[4].w[0] - 23920u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A80A8u) [[unlikely]] return; }
L_003A80A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A80AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A80B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80ECu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A80ECu) [[unlikely]] return; }
L_003A80EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 258u, depth + 1u); else { c.pc = 0x003A7148u; return; } if (c.pc != 0x003A80F8u) [[unlikely]] return; }
L_003A80F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8118u);  if (depth < kMaxDepth) unit_00A9(c, 262u, depth + 1u); else { c.pc = 0x003A7338u; return; } if (c.pc != 0x003A8118u) [[unlikely]] return; }
L_003A8118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8138u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A8138u) [[unlikely]] return; }
L_003A8138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8158u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E3(c, 67u, depth + 1u); else { c.pc = 0x0048CAA0u; return; } if (c.pc != 0x003A8158u) [[unlikely]] return; }
L_003A8158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23920u);  c.pc = t; return; }
L_003A8178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A818Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 3u, depth + 1u); else { c.pc = 0x003A8018u; return; } if (c.pc != 0x003A818Cu) [[unlikely]] return; }
L_003A818C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81ACu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 3u, depth + 1u); else { c.pc = 0x003A8018u; return; } if (c.pc != 0x003A81ACu) [[unlikely]] return; }
L_003A81AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A81B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 31264u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 29256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32288u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8220u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0039CF08u; return; } if (c.pc != 0x003A8220u) [[unlikely]] return; }
L_003A8220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8238:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29256u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + 32288u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8288u); st32((c.r[16].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0039CF08u; return; } if (c.pc != 0x003A8288u) [[unlikely]] return; }
L_003A8288:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A82A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 32288u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82CCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A7(c, 73u, depth + 1u); else { c.pc = 0x0039CF18u; return; } if (c.pc != 0x003A82CCu) [[unlikely]] return; }
L_003A82CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 29256u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A830C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A830C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A830Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A830Cu) [[unlikely]] return; }
L_003A830C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 28u, depth + 1u); else { c.pc = 0x0048C4A8u; return; } if (c.pc != 0x003A8318u) [[unlikely]] return; }
L_003A8318:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A8348; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8348u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8348u) [[unlikely]] return; }
L_003A8348:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A837Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 33u, depth + 1u); else { c.pc = 0x003CCFD0u; return; } if (c.pc != 0x003A837Cu) [[unlikely]] return; }
L_003A837C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 19u);  c.pc = t; return; }
L_003A83A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83C0u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A83C0u) [[unlikely]] return; }
L_003A83C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A83D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83F0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 11u, depth + 1u); else { c.pc = 0x003CC158u; return; } if (c.pc != 0x003A83F0u) [[unlikely]] return; }
L_003A83F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8400:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8428u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 208u, depth + 1u); else { c.pc = 0x003CB6B8u; return; } if (c.pc != 0x003A8428u) [[unlikely]] return; }
L_003A8428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A8438:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8458u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 210u, depth + 1u); else { c.pc = 0x003CB7D8u; return; } if (c.pc != 0x003A8458u) [[unlikely]] return; }
L_003A8458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A8468:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A848Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 149u, depth + 1u); else { c.pc = 0x003CA9D8u; return; } if (c.pc != 0x003A848Cu) [[unlikely]] return; }
L_003A848C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A8498:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84C0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 153u, depth + 1u); else { c.pc = 0x003CAB10u; return; } if (c.pc != 0x003A84C0u) [[unlikely]] return; }
L_003A84C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A84D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A8560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8550; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1084u)));
    set32(c.r[3], c.r[3].w[0] + 20144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[12], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23864u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] - 31376u);
    set32(c.r[7], c.r[7].w[0] - 31280u);
    set32(c.r[8], c.r[8].w[0] - 31248u);
    set32(c.r[9], c.r[9].w[0] - 31216u);
    set32(c.r[10], c.r[10].w[0] - 31184u);
    set32(c.r[11], c.r[11].w[0] - 23528u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8548u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A8548u) [[unlikely]] return; }
L_003A8548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A8564; } }
L_003A8550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8560u); set32(c.r[4], c.r[4].w[0] - 23864u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A8560u) [[unlikely]] return; }
L_003A8560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A8564:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 20u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85ACu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A85ACu) [[unlikely]] return; }
L_003A85AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 20u, depth + 1u); else { c.pc = 0x003A81B8u; return; } if (c.pc != 0x003A85BCu) [[unlikely]] return; }
L_003A85BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A85D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85E0u);  if (depth < kMaxDepth) unit_00AA(c, 29u, depth + 1u); else { c.pc = 0x003A8360u; return; } if (c.pc != 0x003A85E0u) [[unlikely]] return; }
L_003A85E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A85F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8600u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A8600u) [[unlikely]] return; }
L_003A8600:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8624; } }
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
L_003A8624:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23864u);  c.pc = t; return; }
L_003A8648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A865Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 44u, depth + 1u); else { c.pc = 0x003A84D0u; return; } if (c.pc != 0x003A865Cu) [[unlikely]] return; }
L_003A865C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A867Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 44u, depth + 1u); else { c.pc = 0x003A84D0u; return; } if (c.pc != 0x003A867Cu) [[unlikely]] return; }
L_003A867C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 32408u);
    st32((c.r[29].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A86F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 40u));  c.pc = t; return; }
L_003A8700:
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003A8708:
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.r[3]);  c.pc = t; return; }
L_003A8718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 32u));  c.pc = t; return; }
L_003A8720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 36u));  c.pc = t; return; }
L_003A8728:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A875Cu); st32((c.r[29].w[0] + 288u), c.f[20]);  if (depth < kMaxDepth) unit_00B1(c, 123u, depth + 1u); else { c.pc = 0x003C66B8u; return; } if (c.pc != 0x003A875Cu) [[unlikely]] return; }
L_003A875C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8774u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 113u, depth + 1u); else { c.pc = 0x003C6508u; return; } if (c.pc != 0x003A8774u) [[unlikely]] return; }
L_003A8774:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 144u, depth + 1u); else { c.pc = 0x003C6AB8u; return; } if (c.pc != 0x003A8784u) [[unlikely]] return; }
L_003A8784:
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8794u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 119u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003A8794u) [[unlikely]] return; }
L_003A8794:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[17].w[0] + 8u), c.f[20]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 124u), 0u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A87ECu); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AA(c, 65u, depth + 1u); else { c.pc = 0x003A8718u; return; } if (c.pc != 0x003A87ECu) [[unlikely]] return; }
L_003A87EC:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A87F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 66u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003A87F8u) [[unlikely]] return; }
L_003A87F8:
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8804u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 62u, depth + 1u); else { c.pc = 0x003A86F8u; return; } if (c.pc != 0x003A8804u) [[unlikely]] return; }
L_003A8804:
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 64u, depth + 1u); else { c.pc = 0x003A8708u; return; } if (c.pc != 0x003A8814u) [[unlikely]] return; }
L_003A8814:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8828u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00B1(c, 120u, depth + 1u); else { c.pc = 0x003C6638u; return; } if (c.pc != 0x003A8828u) [[unlikely]] return; }
L_003A8828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 41u, depth + 1u); else { c.pc = 0x003C8988u; return; } if (c.pc != 0x003A8834u) [[unlikely]] return; }
L_003A8834:
    set32(c.r[3], 0u + 50u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8850u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 118u, depth + 1u); else { c.pc = 0x003C65D0u; return; } if (c.pc != 0x003A8850u) [[unlikely]] return; }
L_003A8850:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A885Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 121u, depth + 1u); else { c.pc = 0x003C6668u; return; } if (c.pc != 0x003A885Cu) [[unlikely]] return; }
L_003A885C:
    set32(c.r[7], ld32((c.r[20].w[0] + 8208u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 31u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8880u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8880u) [[unlikely]] return; }
L_003A8880:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8898u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 95u, depth + 1u); else { c.pc = 0x003C62A0u; return; } if (c.pc != 0x003A8898u) [[unlikely]] return; }
L_003A8898:
    set32(c.r[6], ld32((c.r[20].w[0] + 8208u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88B8u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A88B8u) [[unlikely]] return; }
L_003A88B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88C4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 116u, depth + 1u); else { c.pc = 0x003C65A8u; return; } if (c.pc != 0x003A88C4u) [[unlikely]] return; }
L_003A88C4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 125u, depth + 1u); else { c.pc = 0x003C6708u; return; } if (c.pc != 0x003A88D0u) [[unlikely]] return; }
L_003A88D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003A88F8:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_003A8908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 22u);  c.pc = t; return; }
L_003A8910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A8918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A8990; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8980; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1080u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 23808u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8978u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A8978u) [[unlikely]] return; }
L_003A8978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A8994; } }
L_003A8980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8990u); set32(c.r[4], c.r[4].w[0] - 23808u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A8990u) [[unlikely]] return; }
L_003A8990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A8994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A89A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23808u);  c.pc = t; return; }
L_003A89B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89C4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 89u, depth + 1u); else { c.pc = 0x003A8920u; return; } if (c.pc != 0x003A89C4u) [[unlikely]] return; }
L_003A89C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A89D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89E4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 89u, depth + 1u); else { c.pc = 0x003A8920u; return; } if (c.pc != 0x003A89E4u) [[unlikely]] return; }
L_003A89E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A89F0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    vu::sub(c.vu0, 15u, 5u, 2u, 1u);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    vu::mul(c.vu0, 14u, 2u, 5u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.f[5] = 0u;
    c.r[2] = c.vu0.vf[2];
    c.r[3] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    c.f[3] = fp::add(c.f[0], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[3]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_003A8B38; } }
    vu::mul(c.vu0, 14u, 1u, 5u, 5u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2] = c.vu0.vf[1];
    c.f[1] = fp::mul(c.f[3], c.f[3]);
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 17;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A8B3C; }
    c.f[0] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::sqrt(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8B3C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A8B3C; } }
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    set32(c.r[3], c.f[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[2] = c.r[3];
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[0]);
    vu::maddbc(c.vu0, 15u, 2u, 3u, c.vu0.vf[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 2u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003A8B3C; } }
L_003A8B38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31728u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 32432u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_003A8B80:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 32432u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.f[12]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003A8BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BB8u);  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5960u; return; } if (c.pc != 0x003A8BB8u) [[unlikely]] return; }
L_003A8BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8BC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_003A8BD0:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_003A8BE0:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_003A8BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003A8BF8:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    set32(c.r[2], c.f[12]);
    c.vu0.vf[2] = c.r[2];
    vu::addabc(c.vu0, 15u, 0u, c.vu0.vf[2].w[0]);
    vu::msubbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 15u, 3u, 3u, 2u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8C38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003A8C50:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A8D04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8CF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1076u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23752u);
    set32(c.r[6], c.r[6].w[0] - 29424u);
    set32(c.r[7], c.r[7].w[0] - 29328u);
    set32(c.r[8], c.r[8].w[0] - 29296u);
    set32(c.r[9], c.r[9].w[0] - 29264u);
    set32(c.r[10], c.r[10].w[0] - 29232u);
    set32(c.r[11], c.r[11].w[0] - 24088u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CECu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A8CECu) [[unlikely]] return; }
L_003A8CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A8D08; } }
L_003A8CF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D04u); set32(c.r[4], c.r[4].w[0] - 23752u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A8D04u) [[unlikely]] return; }
L_003A8D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A8D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D4Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8D4Cu) [[unlikely]] return; }
L_003A8D4C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 98u, depth + 1u); else { c.pc = 0x003A8B48u; return; } if (c.pc != 0x003A8D5Cu) [[unlikely]] return; }
L_003A8D5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D80u);  if (depth < kMaxDepth) unit_00AA(c, 100u, depth + 1u); else { c.pc = 0x003A8BA8u; return; } if (c.pc != 0x003A8D80u) [[unlikely]] return; }
L_003A8D80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DA0u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A8DA0u) [[unlikely]] return; }
L_003A8DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8DB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8DC4; } }
    st32((c.r[4].w[0] + 4u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1104u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_003A8DC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23752u);  c.pc = t; return; }
L_003A8DE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DFCu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 109u, depth + 1u); else { c.pc = 0x003A8C80u; return; } if (c.pc != 0x003A8DFCu) [[unlikely]] return; }
L_003A8DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E1Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 109u, depth + 1u); else { c.pc = 0x003A8C80u; return; } if (c.pc != 0x003A8E1Cu) [[unlikely]] return; }
L_003A8E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8E28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A8E98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A8E88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1072u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 23696u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E80u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A8E80u) [[unlikely]] return; }
L_003A8E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A8E9C; } }
L_003A8E88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E98u); set32(c.r[4], c.r[4].w[0] - 23696u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A8E98u) [[unlikely]] return; }
L_003A8E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A8E9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8EA8:
    set32(c.r[2], c.r[2].w[0]);
    c.budget -= 2;
L_003A8EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8EC4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 126u, depth + 1u); else { c.pc = 0x003A8E28u; return; } if (c.pc != 0x003A8EC4u) [[unlikely]] return; }
L_003A8EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8EE4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 126u, depth + 1u); else { c.pc = 0x003A8E28u; return; } if (c.pc != 0x003A8EE4u) [[unlikely]] return; }
L_003A8EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 31264u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 32568u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[6]);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A8F58:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[3].w[0] + 32568u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A8FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 5u, 4u, 1u);
    vu::mul(c.vu0, 14u, 7u, 3u, 1u);
    vu::mul(c.vu0, 14u, 6u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::addbc(c.vu0, 4u, 5u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 5u, 6u, c.vu0.vf[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A901Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A901Cu) [[unlikely]] return; }
L_003A901C:
    set32(c.r[2], c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[4] = c.r[2];
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 15u, 4u, 1u, c.vu0.vf[4].w[0]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 3u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 3u, 6u, c.vu0.vf[0].w[3]);
    vu::mul(c.vu0, 14u, 2u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 5u, c.vu0.vf[2].w[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2] = c.vu0.vf[2];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[0] = c.r[2].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A9088:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[29].w[0] + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[19], c.r[4].w[0] + 16u);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    vu::sub(c.vu0, 15u, 5u, 9u, 4u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 4u, 8u, 4u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    vu::mul(c.vu0, 14u, 7u, 3u, 5u);
    vu::mul(c.vu0, 14u, 11u, 2u, 5u);
    vu::mul(c.vu0, 14u, 10u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[1]);
    vu::addbc(c.vu0, 4u, 11u, 11u, c.vu0.vf[11].w[0]);
    vu::addbc(c.vu0, 2u, 10u, 10u, c.vu0.vf[10].w[1]);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 4u, 7u, 11u, c.vu0.vf[11].w[2]);
    vu::addbc(c.vu0, 2u, 7u, 10u, c.vu0.vf[10].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    vu::mul(c.vu0, 14u, 6u, 3u, 4u);
    vu::mul(c.vu0, 14u, 13u, 2u, 4u);
    vu::mul(c.vu0, 14u, 12u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 4u, 13u, 13u, c.vu0.vf[13].w[0]);
    vu::addbc(c.vu0, 2u, 12u, 12u, c.vu0.vf[12].w[1]);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[2]);
    vu::addbc(c.vu0, 4u, 6u, 13u, c.vu0.vf[13].w[2]);
    vu::addbc(c.vu0, 2u, 6u, 12u, c.vu0.vf[12].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 53;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A915Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A915Cu) [[unlikely]] return; }
L_003A915C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A917C; } }
    ld128((c.r[17].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A917Cu); st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00C2(c, 197u, depth + 1u); else { c.pc = 0x0040A700u; return; } if (c.pc != 0x003A917Cu) [[unlikely]] return; }
L_003A917C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A91A0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[29].w[0] + 48u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 5u, 8u, 4u);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 4u, 9u, 4u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    vu::mul(c.vu0, 14u, 7u, 3u, 5u);
    vu::mul(c.vu0, 14u, 10u, 2u, 5u);
    vu::mul(c.vu0, 14u, 6u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[1]);
    vu::addbc(c.vu0, 4u, 10u, 10u, c.vu0.vf[10].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 4u, 7u, 10u, c.vu0.vf[10].w[2]);
    vu::addbc(c.vu0, 2u, 7u, 6u, c.vu0.vf[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    vu::mul(c.vu0, 14u, 6u, 3u, 4u);
    vu::mul(c.vu0, 14u, 11u, 2u, 4u);
    vu::mul(c.vu0, 14u, 10u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 4u, 11u, 11u, c.vu0.vf[11].w[0]);
    vu::addbc(c.vu0, 2u, 10u, 10u, c.vu0.vf[10].w[1]);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[2]);
    vu::addbc(c.vu0, 4u, 6u, 11u, c.vu0.vf[11].w[2]);
    vu::addbc(c.vu0, 2u, 6u, 10u, c.vu0.vf[10].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    set32(c.r[5], c.r[7].w[0] + 32u);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9284u); st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_00C2(c, 191u, depth + 1u); else { c.pc = 0x0040A620u; return; } if (c.pc != 0x003A9284u) [[unlikely]] return; }
L_003A9284:
    st32((c.r[29].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92C4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A92C4u) [[unlikely]] return; }
L_003A92C4:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003A92E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 32568u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A9340; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A9340; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9340u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9340u) [[unlikely]] return; }
L_003A9340:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A934Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 28u, depth + 1u); else { c.pc = 0x0048C4A8u; return; } if (c.pc != 0x003A934Cu) [[unlikely]] return; }
L_003A934C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A937C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A937Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A937Cu) [[unlikely]] return; }
L_003A937C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A93ACu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003A93ACu) [[unlikely]] return; }
L_003A93AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A93E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 21u);  c.pc = t; return; }
L_003A93F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A941Cu); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00C2(c, 191u, depth + 1u); else { c.pc = 0x0040A620u; return; } if (c.pc != 0x003A941Cu) [[unlikely]] return; }
L_003A941C:
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9440u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9440u) [[unlikely]] return; }
L_003A9440:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A9458:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9490; } }
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 12;
L_003A9490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9498:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A9528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A9518; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1068u)));
    set32(c.r[3], c.r[3].w[0] + 20280u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 80u);
    set32(c.r[12], 0u + 2u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23640u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] - 27336u);
    set32(c.r[7], c.r[7].w[0] - 27256u);
    set32(c.r[8], c.r[8].w[0] - 27224u);
    set32(c.r[9], c.r[9].w[0] - 27560u);
    set32(c.r[10], c.r[10].w[0] - 27192u);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9510u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A9510u) [[unlikely]] return; }
L_003A9510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A952C; } }
L_003A9518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9528u); set32(c.r[4], c.r[4].w[0] - 23640u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A9528u) [[unlikely]] return; }
L_003A9528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A952C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9538:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 30u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[5], 0u + 80u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A956Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A956Cu) [[unlikely]] return; }
L_003A956C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9578u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 134u, depth + 1u); else { c.pc = 0x003A8EF0u; return; } if (c.pc != 0x003A9578u) [[unlikely]] return; }
L_003A9578:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9588:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9598u);  if (depth < kMaxDepth) unit_00AA(c, 148u, depth + 1u); else { c.pc = 0x003A9390u; return; } if (c.pc != 0x003A9598u) [[unlikely]] return; }
L_003A9598:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A95A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95B8u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A95B8u) [[unlikely]] return; }
L_003A95B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A95C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A95D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23640u);  c.pc = t; return; }
L_003A95E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95F4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 155u, depth + 1u); else { c.pc = 0x003A9498u; return; } if (c.pc != 0x003A95F4u) [[unlikely]] return; }
L_003A95F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9614u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 155u, depth + 1u); else { c.pc = 0x003A9498u; return; } if (c.pc != 0x003A9614u) [[unlikely]] return; }
L_003A9614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    set32(c.r[2], c.f[12]);
    c.vu0.vf[1] = c.r[2];
    vu::addabc(c.vu0, 15u, 0u, c.vu0.vf[1].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[0].w[3]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9668u); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A9668u) [[unlikely]] return; }
L_003A9668:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9678u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A9678u) [[unlikely]] return; }
L_003A9678:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9688u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C2(c, 195u, depth + 1u); else { c.pc = 0x0040A680u; return; } if (c.pc != 0x003A9688u) [[unlikely]] return; }
L_003A9688:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::max(c.vu0, 15u, 4u, 2u, 3u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mini(c.vu0, 15u, 2u, 2u, 3u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    vu::max(c.vu0, 15u, 3u, 4u, 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    vu::mini(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 3u, 3u, 2u);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A96D8:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    set32(c.r[29], c.r[29].w[0] - 160u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 7u, 7u, 3u);
    vu::sub(c.vu0, 15u, 5u, 5u, 3u);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 5u, 7u);
    vu::opmsub(c.vu0, 2u, 7u, 5u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 14u, 4u, 3u, 2u);
    vu::addbc(c.vu0, 8u, 10u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 10u, c.vu0.vf[4].w[2]);
    vu::mul(c.vu0, 14u, 8u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 9u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 8u, c.vu0.vf[8].w[1]);
    vu::maddbc(c.vu0, 8u, 8u, 9u, c.vu0.vf[8].w[2]);
    c.r[2] = c.vu0.vf[4];
    vu::mul(c.vu0, 14u, 1u, 2u, 6u);
    vu::addbc(c.vu0, 8u, 9u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 9u, c.vu0.vf[1].w[2]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[4].w[0] + 32u);
    c.r[2] = c.vu0.vf[1];
    c.f[2] = 0u;
    c.f[3] = c.r[2].w[0];
    set32(c.r[8], c.r[4].w[0] + 48u);
    c.r[2] = c.vu0.vf[8];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003A979C; } }
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A995C; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A995C; } }
L_003A979C:
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    fpu_div(c, 2u, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A995C; } }
    set32(c.r[2], c.f[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[3] = c.r[2];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 5u, 7u, 7u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 1u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 2u, c.vu0.vf[3].w[0]);
    vu::maddbc(c.vu0, 15u, 6u, 4u, c.vu0.vf[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 8u, 1u, 6u);
    c.r[3] = c.vu0.vf[5];
    vu::sub(c.vu0, 15u, 4u, 2u, 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB8D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[0] = c.r[1].w[0];
    vu::opmula(c.vu0, 8u, 4u);
    vu::opmsub(c.vu0, 2u, 4u, 8u);
    c.f[1] = c.r[3].w[0];
    vu::mul(c.vu0, 14u, 1u, 2u, 7u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.r[3] = c.vu0.vf[1];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[6]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[8]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 38;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003A9854; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9958; } }
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 6u, 2u, 6u);
    vu::opmula(c.vu0, 4u, 6u);
    vu::opmsub(c.vu0, 1u, 6u, 4u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 14u, 2u, 1u, 7u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[2];
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A98A0; }
L_003A98A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A995C; } }
    vu::opmula(c.vu0, 6u, 8u);
    vu::opmsub(c.vu0, 1u, 8u, 6u);
    set32(c.r[2], 0u + 1u);
    vu::mul(c.vu0, 14u, 2u, 1u, 7u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[2];
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A98E4; }
L_003A98E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A995C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0] + 20u), c.f[2]);  if (t) { goto L_003A990C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[7]);  if (t) { goto L_003A9918; } }
L_003A990C:
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 7u, c.vu0.vf[0].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 3;
L_003A9918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003A995C; } }
L_003A9958:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A995C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A9968:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9984u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5960u; return; } if (c.pc != 0x003A9984u) [[unlikely]] return; }
L_003A9984:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A99B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 5u);  c.pc = t; return; }
L_003A99B8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], 0u + 1u);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 4u, 5u);
    vu::mul(c.vu0, 14u, 7u, 2u, 5u);
    vu::mul(c.vu0, 14u, 6u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[2]);
    vu::addbc(c.vu0, 4u, 3u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 3u, 6u, c.vu0.vf[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], 0u + 2u);  goto L_003A9A10; }
L_003A9A10:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.f[1] = ld32((c.r[29].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A9A34; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9A34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9A58:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.r[2]);  c.pc = t; return; }
L_003A9A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_003A9A70:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  c.pc = t; return; }
L_003A9A90:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_003A9AC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 30u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[17], 0u + 64u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B04u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9B04u) [[unlikely]] return; }
L_003A9B04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 31728u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[4].w[0] + 32664u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[4]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9B68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A9BF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A9BE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1064u)));
    set32(c.r[3], c.r[3].w[0] + 20344u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 64u);
    set32(c.r[12], 0u + 3u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23584u);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] - 25912u);
    set32(c.r[7], c.r[7].w[0] - 25592u);
    set32(c.r[8], c.r[8].w[0] - 25560u);
    set32(c.r[9], c.r[9].w[0] - 25528u);
    set32(c.r[10], c.r[10].w[0] - 25480u);
    set32(c.r[11], c.r[11].w[0] - 24088u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BE0u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003A9BE0u) [[unlikely]] return; }
L_003A9BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A9BFC; } }
L_003A9BE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BF8u); set32(c.r[4], c.r[4].w[0] - 23584u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003A9BF8u) [[unlikely]] return; }
L_003A9BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A9BFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9C08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C18u);  if (depth < kMaxDepth) unit_00AA(c, 176u, depth + 1u); else { c.pc = 0x003A9968u; return; } if (c.pc != 0x003A9C18u) [[unlikely]] return; }
L_003A9C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9C28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C38u);  if (depth < kMaxDepth) unit_00A9(c, 32u, depth + 1u); else { c.pc = 0x003A4420u; return; } if (c.pc != 0x003A9C38u) [[unlikely]] return; }
L_003A9C38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9C48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A9C6C; } }
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1104u));
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 7;
L_003A9C6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23584u);  c.pc = t; return; }
L_003A9C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CA4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 186u, depth + 1u); else { c.pc = 0x003A9B68u; return; } if (c.pc != 0x003A9CA4u) [[unlikely]] return; }
L_003A9CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CC4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AA(c, 186u, depth + 1u); else { c.pc = 0x003A9B68u; return; } if (c.pc != 0x003A9CC4u) [[unlikely]] return; }
L_003A9CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A9CD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57147ull;
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_003A9D34; } }
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003A9D44; } }
L_003A9D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D3Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 86u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003A9D3Cu) [[unlikely]] return; }
L_003A9D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);  if (t) { goto L_003A9D90; } }
L_003A9D44:
    set32(c.r[5], 0u + 128u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], 0u + 22u);
    set32(c.r[17], 0u + 128u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D68u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9D68u) [[unlikely]] return; }
L_003A9D68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] - 32736u);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AE4E8u; return; } if (c.pc != 0x003A9D88u) [[unlikely]] return; }
L_003A9D88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 2;
L_003A9D90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A9DA8:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 1916u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[13].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003A9E10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 20384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003A9E10:
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[5], c.r[11].w[0] + 16u);
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[6], ld32((c.r[11].w[0] + 8u)));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[11], c.f[1]);
    c.vu0.vf[4] = c.r[11];
    vu::addbc(c.vu0, 15u, 4u, 0u, c.vu0.vf[4].w[0]);
    set32(c.r[11], c.f[0]);
    c.vu0.vf[3] = c.r[11];
    vu::addbc(c.vu0, 15u, 3u, 0u, c.vu0.vf[3].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 3u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 80u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[8].w[0] + 100u), c.f[2]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 4u, 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 4u, 4u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EE0u); st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_00AB(c, 9u, depth + 1u); else { c.pc = 0x003AC160u; return; } if (c.pc != 0x003A9EE0u) [[unlikely]] return; }
L_003A9EE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003A9F1C; } }
    set32(c.r[2], c.r[2].w[0] + 20400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003A9F1C:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003A9F30:
    set32(c.r[29], c.r[29].w[0] - 496u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[16].w[0] + 1916u);
    st64((c.r[29].w[0] + 416u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003A9F9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 20384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003A9F9C:
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[17], c.r[29].w[0] + 368u);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.vu0.vf[4] = c.r[6];
    vu::addbc(c.vu0, 15u, 4u, 0u, c.vu0.vf[4].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[6], c.f[0]);
    c.vu0.vf[2] = c.r[6];
    vu::addbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[8].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 400u), c.r[9].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 4u, 1u);
    vu::add(c.vu0, 15u, 2u, 4u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[2]);
    st32((c.r[29].w[0] + 404u), c.r[10].w[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA074u); st128((c.r[29].w[0] + 352u) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_00AB(c, 53u, depth + 1u); else { c.pc = 0x003AE1A8u; return; } if (c.pc != 0x003AA074u) [[unlikely]] return; }
L_003AA074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AA090; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA090u); set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA090u) [[unlikely]] return; }
L_003AA090:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003AA0CC; } }
    set32(c.r[2], c.r[2].w[0] + 20400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003AA0CC:
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 416u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003AA0E8:
    set32(c.r[29], c.r[29].w[0] - 496u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[16].w[0] + 1916u);
    st64((c.r[29].w[0] + 416u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003AA154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 20384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003AA154:
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[17], c.r[29].w[0] + 368u);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 8u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.vu0.vf[4] = c.r[6];
    vu::addbc(c.vu0, 15u, 4u, 0u, c.vu0.vf[4].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[6], c.f[0]);
    c.vu0.vf[2] = c.r[6];
    vu::addbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[8].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 400u), c.r[9].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 4u, 1u);
    vu::add(c.vu0, 15u, 2u, 4u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[2]);
    st32((c.r[29].w[0] + 404u), c.r[10].w[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA22Cu); st128((c.r[29].w[0] + 352u) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_00AB(c, 53u, depth + 1u); else { c.pc = 0x003AE1A8u; return; } if (c.pc != 0x003AA22Cu) [[unlikely]] return; }
L_003AA22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AA248; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA248u); set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA248u) [[unlikely]] return; }
L_003AA248:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003AA284; } }
    set32(c.r[2], c.r[2].w[0] + 20400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003AA284:
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 416u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003AA2A0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[19].w[0] + 1916u);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AA310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 20384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003AA310:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.vu0.vf[4] = c.r[5];
    vu::addbc(c.vu0, 15u, 4u, 0u, c.vu0.vf[4].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[5], c.f[0]);
    c.vu0.vf[2] = c.r[5];
    vu::addbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[2]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 4u, 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 4u, 4u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3D8u); st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_00AB(c, 23u, depth + 1u); else { c.pc = 0x003AC648u; return; } if (c.pc != 0x003AA3D8u) [[unlikely]] return; }
L_003AA3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 25u, depth + 1u); else { c.pc = 0x003AC738u; return; } if (c.pc != 0x003AA3E0u) [[unlikely]] return; }
L_003AA3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AA400; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA400u); set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA400u) [[unlikely]] return; }
L_003AA400:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003AA43C; } }
    set32(c.r[2], c.r[2].w[0] + 20400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003AA43C:
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_003AA460:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[19].w[0] + 1916u);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003AA4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 20384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003AA4D4:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::addbc(c.vu0, 15u, 1u, 0u, c.vu0.vf[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[2] = c.r[1].w[0];
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    vu::add(c.vu0, 15u, 3u, 3u, 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.vu0.vf[4] = c.r[5];
    vu::addbc(c.vu0, 15u, 4u, 0u, c.vu0.vf[4].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[5], c.f[0]);
    c.vu0.vf[2] = c.r[5];
    vu::addbc(c.vu0, 15u, 2u, 0u, c.vu0.vf[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[2]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    vu::add(c.vu0, 15u, 1u, 4u, 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 4u, 4u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA59Cu); st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_00AB(c, 23u, depth + 1u); else { c.pc = 0x003AC648u; return; } if (c.pc != 0x003AA59Cu) [[unlikely]] return; }
L_003AA59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 25u, depth + 1u); else { c.pc = 0x003AC738u; return; } if (c.pc != 0x003AA5A4u) [[unlikely]] return; }
L_003AA5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AA5C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5C4u); set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA5C4u) [[unlikely]] return; }
L_003AA5C4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 1916u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003AA600; } }
    set32(c.r[2], c.r[2].w[0] + 20400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003AA600:
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_003AA628:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[6].w[0] - 24344u);
    set32(c.r[7], c.r[7].w[0] - 20760u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 25384u);
    set32(c.r[3], c.r[3].w[0] - 23456u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 6u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 6u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA670u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 211u, depth + 1u); else { c.pc = 0x003A33A8u; return; } if (c.pc != 0x003AA670u) [[unlikely]] return; }
L_003AA670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA680:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AA6E8; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 52u);
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
L_003AA6B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6D8u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA6D8u) [[unlikely]] return; }
L_003AA6D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA6B8u | kUnwind; return; } goto L_003AA6B8; }
L_003AA6E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003AA704; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA704u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA704u) [[unlikely]] return; }
L_003AA704:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AA720:
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_003AAAB4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));  if (t) { goto L_003AA748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AAAB0; } }
L_003AA748:
    c.r[2].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_003AA764; } }
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    set32(c.r[13], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    if (c.r[3].d[0] != 0) c.r[13].d[0] = c.r[2].d[0];
    c.budget -= 4;
L_003AA764:
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));
    c.r[2].d[0] = c.r[7].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003AA784; } }
    c.r[3].d[0] = c.r[7].d[0] & 4ull;
    set32(c.r[12], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    if (c.r[3].d[0] != 0) c.r[12].d[0] = c.r[2].d[0];
    c.budget -= 4;
L_003AA784:
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    c.r[14].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003AAA80; } }
    set32(c.r[11], 0u + 1u);
    set32(c.r[15], 0u + 2u);
    set32(c.r[10], c.r[5].w[0] + 32u);
    c.budget -= 4;
L_003AA7A8:
    c.r[3].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003AA854; } }
    c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[12].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_003AA810; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[11].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003AA814; }
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003AA810:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003AA814:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_003AA844; } }
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003AA844; } }
    st32((c.r[9].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AA844:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { goto L_003AAA6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[9].w[0])));  if (t) { goto L_003AA8F8; } }
L_003AA854:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[29].w[0] + 4u);  if (t) { goto L_003AA924; } }
    c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[13].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_003AA8B8; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[11].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003AA8BC; }
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003AA8B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003AA8BC:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_003AA8EC; } }
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003AA8EC; } }
    st32((c.r[9].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AA8EC:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[15].d[0]; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { goto L_003AAA6C; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.budget -= 1;
L_003AA8F8:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[11].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003AAA70; }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_003AAA6C; } }
L_003AA924:
    c.r[2].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.r[6].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_003AA980; } }
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[11].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));  goto L_003AA9CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003AA9C4; } }
L_003AA980:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[7].d[0]) { set32(c.r[2], c.r[2].w[0] << 1);  goto L_003AA99C; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_003AA9A4; } }
L_003AA99C:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_003AA9A4:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));  goto L_003AA9CC; }
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003AA9C4:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[10].w[0] + 2u));
    c.budget -= 2;
L_003AA9CC:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.r[6].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_003AAA24; } }
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[11].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003AAA70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003AAA68; } }
L_003AAA24:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[7].d[0]) { set32(c.r[2], c.r[2].w[0] << 1);  goto L_003AAA40; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_003AAA48; } }
L_003AAA40:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_003AAA48:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 100u)));  goto L_003AAA70; }
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003AAA68:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AAA6C:
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 1;
L_003AAA70:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[2].d[0] = c.r[14].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA7A8u | kUnwind; return; } goto L_003AA7A8; } }
L_003AAA80:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[3].d[0] | 21845ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AAAA8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[4].d[0] ^ 1ull;  if (t) { goto L_003AAAB0; } }
L_003AAAA8:
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_003AAAB0:
    st32((c.r[5].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_003AAAB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AAAC0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 18;
    { const bool t = c.r[5].sd[0] < 0; c.f[20] = c.f[12];  if (t) { goto L_003AAB3C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[6].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 4;
L_003AAB18:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_003AAB34; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AAB40; } }
L_003AAB34:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAB18u | kUnwind; return; } goto L_003AAB18; } }
L_003AAB3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AAB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003AAF58; } }
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB64u); st16((c.r[29].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 37u, depth + 1u); else { c.pc = 0x003AD760u; return; } if (c.pc != 0x003AAB64u) [[unlikely]] return; }
L_003AAB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0] + 52u));  if (t) { goto L_003AAF54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48759ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003AAF58; } }
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003AAC7C; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003AABB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (t) { goto L_003AABBC; } }
L_003AABB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.budget -= 2;
L_003AABBC:
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AAC80; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[22].w[0] + 32u);
    c.budget -= 7;
L_003AAC08:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003AAC6C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 4u, 1u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003AAF54; } }
L_003AAC6C:
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC08u | kUnwind; return; } goto L_003AAC08; } }
L_003AAC7C:
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 1;
L_003AAC80:
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003AAF58; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACA4u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 65u, depth + 1u); else { c.pc = 0x003AE528u; return; } if (c.pc != 0x003AACA4u) [[unlikely]] return; }
L_003AACA4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003AAF54; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[21], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[21].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] << 1);  if (t) { goto L_003AACEC; } }
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACECu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003AACECu) [[unlikely]] return; }
L_003AACEC:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 56u));
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003AAD70; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    ld128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003AAE34; } }
L_003AAD70:
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_003AADE0; } }
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003AAE34; } }
L_003AADE0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    ld128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 14u, 3u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 4u, c.vu0.vf[2].w[2]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 21;
L_003AAE34:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], ld32((c.r[18].w[0] + 12u)));  goto L_003AAEB8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], 0u + 48u);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[1] = 0u;
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[6].w[0] - 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_003AAEB4; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003AAF18; } }
L_003AAEB4:
    set32(c.r[9], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003AAEB8:
    set32(c.r[2], c.r[23].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEE8u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AAEE8u) [[unlikely]] return; }
L_003AAEE8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003AAF2C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_003AAF18:
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF24u); set32(c.r[6], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 69u, depth + 1u); else { c.pc = 0x003AE5C0u; return; } if (c.pc != 0x003AAF24u) [[unlikely]] return; }
L_003AAF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003AAF58; } }
L_003AAF2C:
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003AAF58; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_003AAF54:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003AAF58:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003AAF88:
    set32(c.r[29], c.r[29].w[0] - 208u);
    ld128((c.r[10].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[11].w[0]) & ~15u, c.r[6]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[7], c.r[29].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[18].w[0] << 2);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[23], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB00Cu); st32((c.r[3].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_00E3(c, 35u, depth + 1u); else { c.pc = 0x0048C5D0u; return; } if (c.pc != 0x003AB00Cu) [[unlikely]] return; }
L_003AB00C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 0u, 1u, 2u);
    set32(c.r[16], cfc2(c, 17u));
    c.r[16].d[0] = c.r[16].d[0] & 240ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB03Cu); c.r[16].d[0] = c.r[16].d[0] & 14ull;  if (depth < kMaxDepth) unit_00E3(c, 35u, depth + 1u); else { c.pc = 0x0048C5D0u; return; } if (c.pc != 0x003AB03Cu) [[unlikely]] return; }
L_003AB03C:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[16], c.r[16].w[0] << 4);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[17], c.r[17].w[0] + 16384u);
    vu::sub(c.vu0, 15u, 0u, 1u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 14ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB09Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AA(c, 229u, depth + 1u); else { c.pc = 0x003AAAC0u; return; } if (c.pc != 0x003AB09Cu) [[unlikely]] return; }
L_003AB09C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003AB0B0; } }
    c.r[2].d[0] = c.r[21].d[0] ^ 1ull;
    set32(c.r[16], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[23].d[0];
    c.budget -= 3;
L_003AB0B0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003AB0D0; } }
    c.r[2].d[0] = c.r[22].d[0] ^ 1ull;
    set32(c.r[16], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[23].d[0];
    c.budget -= 3;
L_003AB0D0:
    c.r[2].d[0] = ld16((c.r[29].w[0]));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[16], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AA(c, 229u, depth + 1u); else { c.pc = 0x003AAAC0u; return; } if (c.pc != 0x003AB0F8u) [[unlikely]] return; }
L_003AB0F8:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB118u); st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 229u, depth + 1u); else { c.pc = 0x003AAAC0u; return; } if (c.pc != 0x003AB118u) [[unlikely]] return; }
L_003AB118:
    c.r[2].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB138u); st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 229u, depth + 1u); else { c.pc = 0x003AAAC0u; return; } if (c.pc != 0x003AB138u) [[unlikely]] return; }
L_003AB138:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003AB168:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 400u), c.f[22]);
    st32((c.r[29].w[0] + 392u), c.f[21]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    set32(c.r[7], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 19;
    { const bool t = c.r[7].sd[0] <= 0; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 6u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    set32(c.r[9], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[18], c.r[2].w[0] - c.r[7].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 6u, 3u, 1u);
    vu::mul(c.vu0, 14u, 7u, 2u, 1u);
    vu::mul(c.vu0, 14u, 5u, 4u, 1u);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[2]);
    vu::addbc(c.vu0, 4u, 6u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 6u, 5u, c.vu0.vf[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[0].w[3]);
    vu::abs(c.vu0, 15u, 7u, 6u);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    vu::mul(c.vu0, 14u, 5u, 2u, 3u);
    vu::mul(c.vu0, 14u, 9u, 1u, 3u);
    vu::mul(c.vu0, 14u, 8u, 4u, 3u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 4u, 9u, 9u, c.vu0.vf[9].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 8u, c.vu0.vf[8].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::addbc(c.vu0, 4u, 5u, 9u, c.vu0.vf[9].w[2]);
    vu::addbc(c.vu0, 2u, 5u, 8u, c.vu0.vf[8].w[0]);
    vu::abs(c.vu0, 15u, 7u, 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 53;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[6]);  if (t) { goto L_003AB298; } }
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_003AB2A4; } }
L_003AB298:
    set32(c.r[4], 0u + 64u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 200u), c.r[4].w[0]);
    c.budget -= 3;
L_003AB2A4:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 32u);  if (t) { goto L_003AB2CC; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 200u), c.r[5].w[0]);
    c.budget -= 2;
L_003AB2CC:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[29].w[0] + 196u);  if (t) { goto L_003AB300; } }
    set32(c.r[7], 0u + 128u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[7].w[0]);  if (t) { goto L_003AB30C; } }
L_003AB300:
    set32(c.r[8], 0u + 64u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    c.budget -= 3;
L_003AB30C:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 32u);  if (t) { goto L_003AB334; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 2;
L_003AB334:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57672ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00AB(c, 7u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);  [[clang::musttail]] return unit_00AB(c, 8u, depth); }
    set32(c.r[3], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], c.r[21].w[0] + c.r[5].w[0]);
    c.f[21] = ld32((c.r[3].w[0] + 192u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[20] = ld32((c.r[2].w[0] + 176u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB3A8u); c.r[30].d[0] = c.r[4].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00E3(c, 35u, depth + 1u); else { c.pc = 0x0048C5D0u; return; } if (c.pc != 0x003AB3A8u) [[unlikely]] return; }
L_003AB3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[5], c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    vu::sub(c.vu0, 15u, 0u, 1u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], ld32((c.r[29].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB408u); st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E3(c, 35u, depth + 1u); else { c.pc = 0x0048C5D0u; return; } if (c.pc != 0x003AB408u) [[unlikely]] return; }
L_003AB408:
    set32(c.r[7], c.f[21]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[29].w[0] + 192u));
    vu::sub(c.vu0, 15u, 0u, 1u, 2u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] >> 20);
    set32(c.r[7], ld32((c.r[22].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] + 3u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 25;
    { const bool t = c.r[7].sd[0] <= 0; st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AB4A8; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], 0u + 48u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_003AB488:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[22] = c.f[0];  goto L_003AB49C; }
L_003AB49C:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB488u | kUnwind; return; } goto L_003AB488; } }
L_003AB4A8:
    ldl(c.r[8], (c.r[17].w[0] + 7u));
    ldr(c.r[8], (c.r[17].w[0]));
    sdl(c.r[8], (c.r[29].w[0] + 55u));
    sdr(c.r[8], (c.r[29].w[0] + 48u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
L_003AB4C0:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 20656u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & c.r[30].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[4].w[0] + 1u);  if (t) { goto L_003ABA24; } }
    c.r[4].d[0] = ld16((c.r[29].w[0] + 50u));
    set32(c.r[7], c.r[29].w[0] + 64u);
    ldl(c.r[8], (c.r[29].w[0] + 55u));
    ldr(c.r[8], (c.r[29].w[0] + 48u));
    sdl(c.r[8], (c.r[29].w[0] + 71u));
    sdr(c.r[8], (c.r[29].w[0] + 64u));
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = ld16((c.r[29].w[0] + 66u));
    set32(c.r[3], ld32((c.r[22].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 65295ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] < 0; st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003AB54C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 4;
L_003AB528:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_003AB544; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AB550; } }
L_003AB544:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB528u | kUnwind; return; } goto L_003AB528; } }
L_003AB54C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABA28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[8].w[0] + 20528u);
    set32(c.r[7], c.f[2]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[3].d[0] = c.r[3].d[0] & 3840ull;
    c.r[4].d[0] = ld16((c.r[29].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], 0u + 14u);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    ld128((c.r[21].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    ld128((c.r[21].w[0] + 128u) & ~15u, c.vu0.vf[7]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    ld128((c.r[21].w[0] + 144u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[21].w[0] + 160u) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 15u, 3u, 3u, 1u);
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[3].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[3].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 4u, c.vu0.vf[0].w[3]);
    ld128((c.r[21].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    vu::abs(c.vu0, 15u, 1u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 0u, 1u, 5u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 47;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003AB640; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_003AB644; } }
L_003AB640:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB644:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0] + 132u));  if (t) { goto L_003ABA24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = ld16((c.r[29].w[0] + 64u));  if (t) { goto L_003ABA24; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003AB74C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003AB688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  if (t) { goto L_003AB690; } }
L_003AB688:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.budget -= 2;
L_003AB690:
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AB750; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[4]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[22].w[0] + 32u);
    c.budget -= 6;
L_003AB6D8:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003AB73C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.f[1] = ld32((c.r[21].w[0] + 96u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 4u, 1u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003ABA24; } }
L_003AB73C:
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB6D8u | kUnwind; return; } goto L_003AB6D8; } }
L_003AB74C:
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 1;
L_003AB750:
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABA28; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB774u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 65u, depth + 1u); else { c.pc = 0x003AE528u; return; } if (c.pc != 0x003AB774u) [[unlikely]] return; }
L_003AB774:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003ABA24; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] << 1);  if (t) { goto L_003AB7BC; } }
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7BCu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003AB7BCu) [[unlikely]] return; }
L_003AB7BC:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 136u));
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003AB840; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003AB904; } }
L_003AB840:
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_003AB8B0; } }
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], c.f[0]);
    c.vu0.vf[1] = c.r[4];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003AB904; } }
L_003AB8B0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 14u, 3u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 4u, c.vu0.vf[2].w[2]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 21;
L_003AB904:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], ld32((c.r[21].w[0] + 12u)));  goto L_003AB988; }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], 0u + 48u);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.f[1] = 0u;
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] - 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[7] = c.vu0.vf[2];
    c.f[0] = c.r[7].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_003AB984; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AB9E8; } }
L_003AB984:
    set32(c.r[9], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_003AB988:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9B8u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB9B8u) [[unlikely]] return; }
L_003AB9B8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003AB9FC; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_003AB9E8:
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9F4u); set32(c.r[7], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AB(c, 69u, depth + 1u); else { c.pc = 0x003AE5C0u; return; } if (c.pc != 0x003AB9F4u) [[unlikely]] return; }
L_003AB9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABA28; } }
L_003AB9FC:
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABA28; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_003ABA24:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_003ABA28:
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB4C0u | kUnwind; return; } goto L_003AB4C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ldl(c.r[8], (c.r[29].w[0] + 39u));
    ldr(c.r[8], (c.r[29].w[0] + 32u));
    sdl(c.r[8], (c.r[29].w[0] + 55u));
    sdr(c.r[8], (c.r[29].w[0] + 48u));
    set32(c.r[30], c.r[2].w[0] + 20528u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_003ABA50:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 20656u);
    set32(c.r[7], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[4].w[0] + 1u);  if (t) { goto L_003ABFD4; } }
    c.r[4].d[0] = ld16((c.r[29].w[0] + 50u));
    set32(c.r[7], c.r[29].w[0] + 64u);
    ldl(c.r[8], (c.r[29].w[0] + 55u));
    ldr(c.r[8], (c.r[29].w[0] + 48u));
    sdl(c.r[8], (c.r[29].w[0] + 71u));
    sdr(c.r[8], (c.r[29].w[0] + 64u));
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = ld16((c.r[29].w[0] + 66u));
    set32(c.r[3], ld32((c.r[22].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 65295ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] < 0; st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003ABADC; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 3;
L_003ABAB8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_003ABAD4; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003ABAE0; } }
L_003ABAD4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABAB8u | kUnwind; return; } goto L_003ABAB8; } }
L_003ABADC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABFD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 66u));
    set32(c.r[5], 0u + 14u);
    set32(c.r[7], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] & 3840ull;
    c.r[4].d[0] = ld16((c.r[29].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    ld128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[8]);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    ld128((c.r[21].w[0] + 160u) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    ld128((c.r[21].w[0] + 144u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    ld128((c.r[21].w[0] + 112u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 15u, 8u, 8u, 1u);
    ld128((c.r[21].w[0] + 128u) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 15u, 5u, 8u, 5u);
    ld128((c.r[21].w[0] + 80u) & ~15u, c.vu0.vf[9]);
    vu::mul(c.vu0, 14u, 1u, 7u, 5u);
    vu::mul(c.vu0, 14u, 4u, 6u, 5u);
    vu::mul(c.vu0, 14u, 3u, 2u, 5u);
    vu::addbc(c.vu0, 8u, 1u, 1u, c.vu0.vf[1].w[1]);
    vu::addbc(c.vu0, 4u, 4u, 4u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 3u, 3u, c.vu0.vf[3].w[1]);
    vu::addbc(c.vu0, 8u, 1u, 1u, c.vu0.vf[1].w[2]);
    vu::addbc(c.vu0, 4u, 1u, 4u, c.vu0.vf[4].w[2]);
    vu::addbc(c.vu0, 2u, 1u, 3u, c.vu0.vf[3].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[5]);
    vu::abs(c.vu0, 15u, 2u, 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 2u, 9u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[8]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 53;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003ABBF0; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.f[2] = c.f[2] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] - 3u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.f[2]);  if (t) { goto L_003ABBF4; } }
L_003ABBF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABBF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0] + 132u));  if (t) { goto L_003ABFD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = ld16((c.r[29].w[0] + 64u));  if (t) { goto L_003ABFD4; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003ABCFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);  if (t) { goto L_003ABC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  if (t) { goto L_003ABC40; } }
L_003ABC38:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    c.budget -= 2;
L_003ABC40:
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003ABD00; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[4]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[22].w[0] + 32u);
    c.budget -= 6;
L_003ABC88:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003ABCEC; }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.f[1] = ld32((c.r[21].w[0] + 96u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 4u, 1u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.vu0.vf[1]);
    c.r[8] = c.vu0.vf[3];
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003ABFD4; } }
L_003ABCEC:
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC88u | kUnwind; return; } goto L_003ABC88; } }
L_003ABCFC:
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.budget -= 1;
L_003ABD00:
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABFD8; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD24u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 65u, depth + 1u); else { c.pc = 0x003AE528u; return; } if (c.pc != 0x003ABD24u) [[unlikely]] return; }
L_003ABD24:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003ABFD4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] << 1);  if (t) { goto L_003ABD6C; } }
    set32(c.r[6], 0u + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD6Cu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003ABD6Cu) [[unlikely]] return; }
L_003ABD6C:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 136u));
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003ABDF0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003ABEB4; } }
L_003ABDF0:
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_003ABE60; } }
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], c.f[0]);
    c.vu0.vf[1] = c.r[4];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003ABEB4; } }
L_003ABE60:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[2].w[1]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[2].w[2]);
    vu::maddbc(c.vu0, 15u, 2u, 5u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 14u, 3u, c.vu0.vf[2].w[0]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 14u, 2u, 4u, c.vu0.vf[2].w[2]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 21;
L_003ABEB4:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], ld32((c.r[21].w[0] + 12u)));  goto L_003ABF38; }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], 0u + 48u);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.f[1] = 0u;
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] - 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[7] = c.vu0.vf[2];
    c.f[0] = c.r[7].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_003ABF34; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003ABF98; } }
L_003ABF34:
    set32(c.r[9], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_003ABF38:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF68u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABF68u) [[unlikely]] return; }
L_003ABF68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003ABFAC; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_003ABF98:
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABFA4u); set32(c.r[7], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AB(c, 69u, depth + 1u); else { c.pc = 0x003AE5C0u; return; } if (c.pc != 0x003ABFA4u) [[unlikely]] return; }
L_003ABFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABFD8; } }
L_003ABFAC:
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003ABFD8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_003ABFD4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_003ABFD8:
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABA50u | kUnwind; return; } goto L_003ABA50; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { [[clang::musttail]] return unit_00AB(c, 1u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 104u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00AB(c, 6u, depth); } }
    [[clang::musttail]] return unit_00AB(c, 1u, depth);
}

}
