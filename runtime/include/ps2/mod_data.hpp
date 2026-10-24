#pragma once

// Host files the gameplay mods (decomp/src/mod, PS2_MOD) read: PS2_MOD_DATA=<dir> names the folder, e.g.
// remaster-data/chameleon for the Chameleon announcer clip and his model (cham.pme2, cham.pwf). They change what the
// game computes once a mod copies them into EE memory, so the lockstep identity hashes their content
// (host/lockstep_id.cpp); the folder's path itself is local. Every file a mod reads must be listed in kModDataFiles. On the web the page has to fetch them into the
// virtual file system and set PS2_MOD_DATA before main.
#include <cstdint>
#include <vector>

namespace ps2 {

inline constexpr const char *kModDataFiles[] = {"vo_name.adx", "cham.pme2", "cham.pwf", "cham_select.p2n", "cham_glow.p2n"};

// The file's bytes (read once, then cached), or nullptr when PS2_MOD_DATA is unset or the file is missing or empty.
const std::vector<std::uint8_t> *mod_data(const char *name);

}
