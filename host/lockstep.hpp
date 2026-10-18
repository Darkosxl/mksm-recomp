#pragma once

// Native deterministic lockstep co-op (web/lockstep.md): the same wire protocol, handshake and frame scheduling as
// web/lockstep.js, so two desktop players can play together and, later, a desktop player with a browser player.
// The network side runs on its own thread; the emulator side runs at every vblank (lockstep_vblank).

#include "ps2/system.hpp"

#include <cstdint>
#include <functional>
#include <string>
#include <vector>

struct LockstepOptions {
    std::string signal;          // signalling server, ws[s]://host[:port] (server/signal.mjs); from --invite when empty
    std::string room;            // room id, or "new" to create one (its id is printed for the other player)
    std::string invite;          // invite link https://host/invite?t=…[&room=…]: redeemed, its cookie stored
    std::string cookie;          // invite cookie for /ws, "__Host-mksm=..." (else the stored one; PS2_LOCKSTEP_COOKIE overrides)
    std::string disc_path;       // for the disc id in the handshake
    std::string memcard_path;    // a guest keeps the host's card in <memcard_path>.session
    std::vector<ps2::Press> script;  // scripted input, by lockstep frame; only the local player's lines are used
    // window sound queue in ms (0 = none): nudges the 59.94 Hz clock by up to 0.2% to keep it near 80 ms
    std::function<double()> audio_queued_ms;
};

// a local controller sample (PS2 button mask active-high, axes 0..255 with 128 = centre, L2/R2 pressure, 0 = none)
struct LockstepPad {
    std::uint16_t buttons = 0;
    std::uint8_t lx = 128, ly = 128, rx = 128, ry = 128, l2 = 0, r2 = 0;
};

// Builds the session config (build hash, disc id, game patch set) and starts the network thread. The emulator holds at
// its first vblank until the room is joined: the host then plays alone until a guest drops in (its state and memory
// card are sent to the guest, both load them), a guest stays held until it has the host's state. False on a local
// setup error.
bool lockstep_start(const LockstepOptions &options);
// at every vblank, on the emulation thread: waits for both players' inputs for this frame and latches them
void lockstep_vblank();
// the window's controller (any thread); sampled once per lockstep frame
void lockstep_local_pad(const LockstepPad &pad);
void lockstep_set_paused(bool paused);
// one short line for a window title
std::string lockstep_status();
// after the emulator stops: waits briefly for the last hash comparisons, prints a summary, leaves the room.
// Returns 0, or 3 when the session failed (refused, could not connect) or a desync was seen.
int lockstep_finish();
