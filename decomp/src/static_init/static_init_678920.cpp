// void static_init_678920(int initialize, int priority) at 0x00273C38: GCC's __static_initialization_and_destruction_0
// for the small translation unit at 0x00273630-0x00273CBF (no source path in the binary). The unit's global
// constructor (0x00273C70) calls it with (1, 0xFFFF) at start-up and its global destructor (0x00273C98) with
// (0, 0xFFFF) at exit. Constructing the unit's global state block at 0x00678920 zeroes four of its words;
// destroying it does nothing.
#include "ps2/decomp.hpp"

using namespace ps2;
using namespace ps2::gpr;

namespace {
constexpr std::uint32_t kStateBlock = 0x00678920u;
constexpr std::uint64_t kDefaultPriority = 0xFFFFu;
}

PS2_DECOMP(00273C38, static_init_678920) {
    const bool initialize = c.r[a0].d[0] != 0;
    const bool default_priority = c.r[a1].d[0] == kDefaultPriority;  // 64-bit compares, as the branches do
    c.r[v0].d[0] = kDefaultPriority;
    tick(c, 3);
    if (default_priority) {
        tick(c, 2);
        if (initialize) {
            set32(c.r[v1], (kStateBlock + 0x8000u) & 0xFFFF0000u);  // lui v1, %hi(kStateBlock)
            set32(c.r[v0], kStateBlock);
            for (const std::uint32_t offset : {0u, 20u, 4u, 8u}) wr<std::uint32_t>(kStateBlock + offset, 0);
            tick(c, 6);
        }
    }
    tick(c, 2);
}
