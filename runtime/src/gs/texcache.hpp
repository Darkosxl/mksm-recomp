#pragma once

#include "gs.hpp"

#include <cstdint>

namespace ps2::gs::texcache {

// What a textured primitive sees when it samples a buffer that the current draw also renders to.
//
// The GS reads textures through a texture cache that holds one page and is only invalidated by TEXFLUSH or by touching
// another page, so a primitive never sees its own writes and usually not those of the primitives just before it.
// Following PCSX2's software renderer: consecutive primitives with identical drawing registers form a "draw" whose
// texture reads see memory as it was when the draw began; a primitive that changes texture page (or follows a TEXFLUSH)
// and samples texels an earlier primitive of the draw wrote starts a new run that sees those writes.
enum class Run : std::uint8_t {
    same,      // continues the current run: sample memory as it was when the run began
    new_draw,  // drawing registers changed: sees every earlier write
    flushed,   // same registers, but the texture cache reloads overwritten texels: sees every earlier write
};

Run next(const State &st, const Vertex *v, int count);
void texflush();
void reset();

}
