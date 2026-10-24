#pragma once

// The Chameleon mod's state for other mods (phase 2: mode-gated donor specials). Both read EE memory (the mod's
// Player records at 0xA0020 + slot * 0x20: +0 u8 Chameleon, +1 u8 mode), so savestates and lockstep cover them.
// Only meaningful with PS2_MOD on.
#include <cstdint>

namespace chameleon {

// the fighter (actor address; player slot = u32 fighter+0x68 - 1, group = u16 fighter+0x1E0E) is a player who loaded
// as Chameleon (Reptile, group 84, in story or Ko-op)
bool is(std::uint32_t fighter);

// his colour mode, chameleon.py MODES order: 0 rainbow, 1 scorpion (yellow), 2 subzero (blue), 3 reptile (green);
// -1 when the fighter is not Chameleon
int mode(std::uint32_t fighter);

// his effect bank (87) while a player is Chameleon (chameleon_fx.cpp): Reptile's effects 0-18, Scorpion's from
// kFxScorpion, Sub-Zero's from kFxSubzero (the donor ports' effect events are moved there, versus_boss_moves.cpp)
constexpr std::uint8_t kFxScorpion = 20, kFxSubzero = 36;

}

inline bool chameleon_is(std::uint32_t fighter) { return chameleon::is(fighter); }
inline int chameleon_mode(std::uint32_t fighter) { return chameleon::mode(fighter); }
