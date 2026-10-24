#pragma once

#include "gs.hpp"

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <vector>

// Texture dump and replacement (remaster). PS2_TEX_DUMP=dir writes every texture the GPU renderer samples from
// uploaded data once, as <key>.pam plus a line in index.ndjson; PS2_TEX_PACK=dir replaces the textures whose <key>.pam
// it holds (2, 4 or 8 times the original size). The key hashes the decoded texels (through CLUT and TEXA), so it is the
// same in every run. Keying needs the CPU copy of GS memory, which is kept up to date while either is set.
namespace ps2::gs::texpack {

bool active();
bool packing();
bool dumping();
// GS memory written by an upload or local copy (the CPU copy): textures on those pages are keyed again.
void touched(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x, std::uint32_t y, std::uint32_t w, std::uint32_t h);
// The CPU copy of the CLUT was reloaded.
void clut_loaded();
// GS memory or the CLUT changed other than by an upload or CLUT load (a readback from the GPU, a state load): the page
// and CLUT hashes keying reuses are taken again.
void downloaded();
// The CPU renderer drew to these pages: textures on them are render targets and get no key (uploads clear it again).
// The GPU renderer keeps its own record and doesn't call this.
void drawn(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x0, std::uint32_t y0, std::uint32_t x1, std::uint32_t y1);
// Key of the texture the current context samples (0 when it is too large or a render target); dumps it when dumping.
std::uint64_t key(const State &st);
// The pack's pixels for a key, 2^scale times the given size, read from disk (the caller keeps what it needs); empty
// when the pack has none, or they are more than room pixels (they stay with the pack, unread or loaded, until they fit).
std::vector<std::uint32_t> replacement(std::uint64_t key, std::uint32_t tw, std::uint32_t th, std::uint32_t &scale, std::size_t room);
// Presentation effects (remaster): <pack>/fx.txt tints listed textures, replaced or not, so the switch is the file:
//   fx <name> <period> <gain> <lut file>   an effect: the LUT (a file in the pack dir, one "r g b" line per step on the
//                                          PS2 scale, 128 = 1.0; "#" lines skipped) read across <period> frames, looped,
//                                          linearly between steps; the texel becomes its luma x colour x gain
//   <key> <width> <height> <name> [threshold]
//                                          a texture (its PS2_TEX_DUMP key and size): the effect tints only its
//                                          near-neutral texels, saturation (max - min) / max under threshold (default
//                                          0.06; 1 tints every texel)
// fx(): the texture's entry (0: none). fx_word(): the entry's colour at a frame for the shaders (gs.wgsl fx): tint r, g,
// b as colour x gain / 2 x 255 (so up to 2.0), threshold x 255 in the top byte.
std::uint32_t fx(std::uint64_t key);
std::uint32_t fx_word(std::uint32_t entry, std::uint64_t frame);
#ifdef __EMSCRIPTEN__
// Web: starts the fetches replacement() asked for (on the browser's main thread): fetch(file, out, bytes, row bytes,
// state) fills out with the index's file and sets state to 3, or 4 when it fails (host/web.cpp, web/pack-worker.js).
using Fetcher = void (*)(const char *file, void *out, int bytes, int stride, std::atomic<std::uint32_t> *state);
void service(Fetcher fetch);
#endif
// Texture-pack work on the render thread since the last call (PS2_FRAME_LOG).
struct Stats {
    std::uint32_t decodes = 0, loads = 0;
    double decode_ms = 0, load_ms = 0, load_mb = 0, key_ms = 0, mirror_ms = 0;
};
Stats &stats();
Stats take_stats();
// Whether to time that work: only with PS2_FRAME_LOG, a clock read goes through JS on the web (4% of its GS thread).
bool timing();

}
