#pragma once

// What a lockstep peer announces in its hello besides proto and disc (web/lockstep.md). The desktop build
// (host/lockstep.cpp) and the browser build (host/web.cpp exports it to web/lockstep-emu.js) both compute it here, so
// a desktop and a browser peer built from the same sources announce the same build and config.

#include "lockstep_json.hpp"

#include <string>

namespace lockstep {

struct Identity {
    std::string build;  // hash of the emulation sources (cmake/build_id.cmake); the signalling room is pinned to it
    Json config;        // {lockstep, rate, patches, env}: every setting that changes what the game computes
    Json patch_files;   // PS2_PNACH file names; not compared, only words a refusal
    std::string error;  // non-empty: a PS2_PNACH file could not be read
};

// PS2_* settings that only change how frames look, what is logged or how the work is threaded: each player picks
// their own. Every other PS2_* variable goes into config.env and must be identical on both sides.
bool local_only(const std::string &name);

Identity identity();

}
