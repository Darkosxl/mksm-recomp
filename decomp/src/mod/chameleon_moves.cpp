// Chameleon's colour modes, phase 2: whose specials his special inputs play. mksm/tools/scripts/chamspecials.py grafts
// every special of Scorpion and Sub-Zero (with its follow-ups) into Reptile's command tree (versus_combos.inc) and gates
// the special roots with condition ids 12723-12738 (after the game's last, 12722); versus_boss_moves.cpp loads the
// donor states on group 84. The ids:
//   id = 12723 + donor * 8 + mask, mask bit m - 1 = the node is on in mode m (1 yellow Scorpion, 2 blue Sub-Zero,
//   3 green Reptile; rainbow plays green's). Not Chameleon: Reptile's own roots (donor 0) pass, the donors' never.
//
// The gate has to act when the node is matched, not when its condition is tested: the matcher FUN_0016CE20 queues the
// first sibling that matches the input and at once makes that node's children the next input list (actor +0x24C); a
// failed condition later (FUN_0016F1F8, int fn_2e7f30(Fighter *a0, int cond) at 0x002E7F30) only swaps the state for a
// later sibling with the same input, so the moves would follow the wrong node's follow-ups. So the gate is part of the
// requirement test the matcher calls per candidate, int fn_16b950(Fighter *a0, Node *a1) (number of failed
// requirements): an off-mode node fails there and the next sibling matches. chamspecials.py splices each donor root in
// front of (or right behind, at a list head) Reptile's root for the same input, ahead of the plain attacks. The
// condition hook stays for FUN_0016F1F8 (and frame events, FUN_002E6F98 / FUN_002E7240): every other id runs the
// original.
#include "ps2/decomp.hpp"

#include "chameleon.hpp"

#include <algorithm>
#include <iterator>

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kBase = 12723, kIds = 16;
constexpr int kGreen = 3;
constexpr std::uint16_t kReptile = 84, kAsDonor = 82;

// gate k (id - kBase) for that fighter
bool on(std::uint32_t fighter, std::uint32_t k) {
    const int mode = chameleon_mode(fighter);
    const bool donor = k >> 3;
    return mode < 0 ? !donor : (k & 7) >> ((mode ? mode : kGreen) - 1) & 1;
}

// the original with the fighter's group shown as kAsDonor; guest code run from a hook must not be preempted (a thread
// switch would unwind the host stack with the group still swapped), so the budget is lifted around it
void as_donor(Cpu &c, std::uint32_t fighter, DecompFn &hook) {
    const std::uint16_t group = rd<std::uint16_t>(fighter + 0x1E0E);
    const std::int32_t budget = c.budget;
    c.budget = 0x40000000;
    wr<std::uint16_t>(fighter + 0x1E0E, kAsDonor);
    hook.enabled = false;
    const bool back = call(c, hook.addr, Ra{c.r[ra].w[0]});
    hook.enabled = true;
    wr<std::uint16_t>(fighter + 0x1E0E, group);
    c.budget = budget;
    (void)back; // control left: the machine resumes in the caller, group restored
}

}

PS2_MOD(0016B950, chameleon_moves_match) {
    const std::uint32_t k = rd<std::uint16_t>(c.r[a1].w[0] + 0x2C) - kBase;
    if (k < kIds && !on(c.r[a0].w[0], k)) {
        c.r[v0].d[0] = 1;
        return;
    }
    decomp::hook_0016B950.enabled = false;
    tail(c, 0x0016B950u);
    decomp::hook_0016B950.enabled = true;
}

PS2_MOD(002E7F30, chameleon_moves_cond) {
    const std::uint32_t k = c.r[a1].w[0] - kBase;
    if (k < kIds) {
        c.r[v0].d[0] = on(c.r[a0].w[0], k);
        return;
    }
    decomp::hook_002E7F30.enabled = false;
    tail(c, 0x002E7F30u);
    decomp::hook_002E7F30.enabled = true;
}

// Upgrades for Reptile and Chameleon (group 84). The Experience store picks its page by fighter group, key = the group
// if it is 0, 1, 82 or 88, else 0 (Liu Kang's); Liu Kang's levels gate nothing in Reptile's tree. Group 84 gets
// Scorpion's page: the levels are per player slot, not per fighter (FUN_001BB3F8), so his Specials gate the donor
// specials' level variants and his Combos the combo extensions versus_combos.inc gave Reptile. The mapping is inline in
// every function that reads the group from the fighter (the current one: *(0x67C59C + 12 * (*0x5D2498 + 1))):
// 0x0019FF30 (the page drawn every frame), 0x001A1200 (store entry: the highlighted node), 0x001A1B48 (owned flags from
// the levels), 0x001A1010 (the preview video); they run with the fighter shown as group 82. FUN_001A30F0 takes the
// group as a1 (a0 = the menu) and serves the purchases (FUN_001A2D48) and the "something to buy" hint.
namespace {

void store(Cpu &c, DecompFn &hook) {
    const std::uint32_t fighter = rd<std::uint32_t>(0x0067C59Cu + 12 * (rd<std::uint32_t>(0x005D2498u) + 1));
    if (fighter && rd<std::uint16_t>(fighter + 0x1E0E) == kReptile) return as_donor(c, fighter, hook);
    hook.enabled = false;
    tail(c, hook.addr);
    hook.enabled = true;
}

}

PS2_MOD(0019FF30, reptile_store_draw) { store(c, decomp::hook_0019FF30); }
PS2_MOD(001A1200, reptile_store_enter) { store(c, decomp::hook_001A1200); }
PS2_MOD(001A1B48, reptile_store_owned) { store(c, decomp::hook_001A1B48); }
PS2_MOD(001A1010, reptile_store_video) { store(c, decomp::hook_001A1010); }

PS2_MOD(001A30F0, reptile_store_page) {
    if (c.r[a1].w[0] == kReptile) c.r[a1].d[0] = kAsDonor;
    decomp::hook_001A30F0.enabled = false;
    tail(c, 0x001A30F0u);
    decomp::hook_001A30F0.enabled = true;
}

// Scorpion's spear and Sub-Zero's ice blast on the ground (command list 0) carry requirement bit 0x800000000000, which
// FUN_0016B950 checks with the mode controller's virtual 0x11C (DAT_00524D1C, vtable 0x57ABC0): FUN_001C4A88(ctl,
// fighter) passes only groups 52, 55, 82 and 88, and in Versus (or with FUN_001D8F08) not after a spear or ice blast
// reached frame 20 (FUN_001EB378 -> FUN_00167458(fighter) sets (fighter +0x2C00) +0x7C for those groups and states
// 2125 / 2644). Only donor nodes carry the bit (none of Reptile's own), so a Chameleon fighter is shown to both as
// Scorpion (group 82; both functions treat 82 and 88 alike) for the one call; the mode gates still pick the nodes.
PS2_MOD(001C4A88, chameleon_spear_rule) {
    if (chameleon_is(c.r[a1].w[0])) return as_donor(c, c.r[a1].w[0], decomp::hook_001C4A88);
    decomp::hook_001C4A88.enabled = false;
    tail(c, 0x001C4A88u);
    decomp::hook_001C4A88.enabled = true;
}

PS2_MOD(00167458, chameleon_spear_flag) {
    if (chameleon_is(c.r[a0].w[0])) return as_donor(c, c.r[a0].w[0], decomp::hook_00167458);
    decomp::hook_00167458.enabled = false;
    tail(c, 0x00167458u);
    decomp::hook_00167458.enabled = true;
}

// Stance per colour mode. FUN_00169A10(slot, set) loads the player's stance (0x004E8388 + 4 * slot, the state the end
// of a move returns to: the set's +0, or its +8 when locked on an enemy) and walk from the stance set table 0x0064B9D8
// (28-byte sets, FUN_001F5758); the game calls it on spawn, lock-on changes and frame event 303 (FUN_001F29D0 resets
// the stance to the group's last one). In yellow / blue a Chameleon stands as Scorpion / Sub-Zero: Reptile's a00_stnd
// and his story b00_stnd / b50_st_m become their a00_stnd, his c00_stnd (locked on) their c00_stnd (all four loaded by
// versus_boss_moves.cpp; their b-series is not: the 200 clip slots are full). His walk and run stay Reptile's. Reptile's
// own stance is kept per slot, so a switch back restores it; a mode switch remaps at once (chameleon.cpp next_mode) and
// the game walks him into it.
namespace {

constexpr std::uint32_t kStance = 0x004E8388u, kFighters = 0x005E6B40u, kFighterSize = 0x33C0u;
constexpr std::uint32_t kOwnStance = 0x000A0060u; // chameleon.cpp's state block, past the Player records: s32 [slot]
constexpr std::int32_t kOwn[4] = {2299, 2309, 2315, 2317}; // a00_stnd, b00_stnd, b50_st_m, c00_stnd
constexpr std::int32_t kAs[2][4] = {{1994, 1994, 1994, 2012}, {2515, 2515, 2515, 2534}}; // yellow, blue

}

void chameleon::restance(std::uint32_t slot) {
    const int m = mode(kFighters + slot * kFighterSize);
    if (m < 0 || slot > 1) return;
    const std::uint32_t at = kStance + 4 * slot, own_at = kOwnStance + 4 * slot;
    const std::int32_t s = rd<std::int32_t>(at);
    if (std::find(std::begin(kOwn), std::end(kOwn), s) != std::end(kOwn)) wr<std::int32_t>(own_at, s);
    const std::int32_t own = rd<std::int32_t>(own_at);
    if (!own) return;
    std::int32_t to = own;
    if (m == 1 || m == 2)
        for (int j = 0; j < 4; ++j)
            if (own == kOwn[j]) to = kAs[m - 1][j];
    wr<std::int32_t>(at, to);
}

PS2_MOD(00169A10, chameleon_stance) {
    const std::uint32_t slot = c.r[a0].w[0];
    const std::int32_t budget = c.budget;
    c.budget = 0x40000000; // not preempted: the remap has to follow the original
    decomp::hook_00169A10.enabled = false;
    const bool back = call(c, 0x00169A10u, Ra{c.r[ra].w[0]});
    decomp::hook_00169A10.enabled = true;
    c.budget = budget;
    if (back) chameleon::restance(slot);
}
