#pragma once

#include "gs.hpp"
#include "texcache.hpp"

namespace ps2::gs::raster {

void reset();
void draw(const State &s, const Vertex *v, int count, texcache::Run run);
// Writes the texture the current context samples (level 0, decoded through its CLUT) as a PAM; needs the CPU copy of GS memory.
bool dump_texture(const State &st, const char *path);

}
