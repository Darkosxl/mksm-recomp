#pragma once

#include "gs.hpp"
#include "texcache.hpp"

namespace ps2::gs::raster {

void reset();
void draw(const State &s, const Vertex *v, int count, texcache::Run run);

}
