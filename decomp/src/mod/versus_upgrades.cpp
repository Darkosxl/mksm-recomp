// Versus round start, void fn_1b90b8(int slot) at 0x001B90B8, called once per player slot by 0x00105A28. The original
// clears the slot's 28 upgrade levels (0x001B8E00) and then sets the Specials (moves 0-3) and the Combos (13-22) to
// their maximum level (byte table 0x004CC448) with 0x001B85A8(slot, move, level, time 0.0 in f12).
//
// The mod also grants the platform abilities, moves 4-10 (wall climb, swing, wall run, double jump, wall jump...),
// which story mode hands out one by one and Versus otherwise leaves off. They are checked in engine code, not in a
// fighter's move data, so they work for every fighter. The upgrade levels are per player slot, not per character.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kClearLevels = 0x001B8E00u;  // (slot): every level 0
constexpr std::uint32_t kSetLevel = 0x001B85A8u;     // (slot, move, level, time)
constexpr std::uint32_t kMaxLevel = 0x004CC448u;     // u8[28]
constexpr std::uint8_t kMoves[] = {0, 1, 2, 3, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 4, 5, 6, 7, 8, 9, 10};

}

PS2_MOD(001B90B8, versus_round_upgrades) {
    const std::uint32_t slot = c.r[a0].w[0];
    if (!call(c, kClearLevels)) return;
    for (const std::uint8_t move : kMoves) {
        c.r[a0].d[0] = slot;
        c.r[a1].d[0] = move;
        c.r[a2].d[0] = ld8(kMaxLevel + move);
        c.f[12] = 0u;
        if (!call(c, kSetLevel)) return;
    }
}
