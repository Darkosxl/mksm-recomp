// Chameleon's colour modes, phase 2: whose specials his special inputs play. mksm/tools/scripts/chamspecials.py grafts
// every special of Scorpion and Sub-Zero (with its follow-ups) into Reptile's command tree (versus_combos.inc) and gates
// the special roots with condition ids 12723-12738 (after the game's last, 12722); versus_boss_moves.cpp loads the
// donor states on group 84. This hook evaluates those ids:
//   id = 12723 + donor * 8 + mask, mask bit m - 1 = the node is on in mode m (1 yellow Scorpion, 2 blue Sub-Zero,
//   3 green Reptile; rainbow plays green's). Not Chameleon: Reptile's own roots (donor 0) pass, the donors' never.
// A failed gate makes FUN_0016F1F8 try the next node queued for the same input, so one press finds the mode's move.
//
// The hook: int fn_2e7f30(Fighter *a0, int cond) at 0x002E7F30, the condition test of command nodes (FUN_0016F1F8)
// and frame events (FUN_002E6F98 / FUN_002E7240); every other id runs the original.
#include "ps2/decomp.hpp"

#include "chameleon.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kSelf = 0x002E7F30u;
constexpr std::uint32_t kBase = 12723, kIds = 16;
constexpr int kGreen = 3;

}

PS2_MOD(002E7F30, chameleon_moves_cond) {
    const std::uint32_t k = c.r[a1].w[0] - kBase;
    if (k < kIds) {
        const std::uint32_t fighter = c.r[a0].w[0];
        const int mode = chameleon_mode(fighter);
        const bool donor = k >> 3;
        c.r[v0].d[0] = mode < 0 ? !donor : (k & 7) >> ((mode ? mode : kGreen) - 1) & 1;
        return;
    }
    decomp::hook_002E7F30.enabled = false;
    tail(c, kSelf);
    decomp::hook_002E7F30.enabled = true;
}
