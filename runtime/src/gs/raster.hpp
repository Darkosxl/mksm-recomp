#pragma once

#include "gs.hpp"
#include "texcache.hpp"

#include <cstdint>
#include <vector>

namespace ps2::gs::raster {

void reset();
void draw(const State &s, const Vertex *v, int count, texcache::Run run);
// Writes the texture the current context samples (level 0, decoded through its CLUT) as a PAM; needs the CPU copy of GS memory.
bool dump_texture(const State &st, const char *path);
// The same texels (level 0 through CLUT/TEXA, as the samplers see them), row-major.
bool decode_texture(const State &st, std::vector<std::uint32_t> &texels, std::uint32_t &w, std::uint32_t &h);

}
