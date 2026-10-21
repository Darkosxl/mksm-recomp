#pragma once

#include "../gs.hpp"
#include "../texcache.hpp"

#include <cstdint>
#include <vector>

namespace ps2::gs::gpu {

enum class Mode { off, mirror, primary };

struct DisplaySource {
    std::uint32_t fbp, fbw, psm, dbx, dby, width, height;
    bool halved;
    bool fielded = false, half = false;  // fields line up by the game's flag (no blend); this one moves up half a line
};

struct SurfaceTarget {
    enum Kind { X11, Wayland, Canvas } kind;
    void *display;
    std::uint64_t window;
    void *surface;
    const char *selector;
    std::uint32_t width, height;
};

Mode mode();
bool init(Mode m);
void draw(const State &s, const Vertex *v, int count, texcache::Run run);
void image_begin(const State &s);
void image_data(const std::uint8_t *data, std::size_t bytes);
void local_copy(const State &s);
void load_clut(std::uint64_t tex0, std::uint64_t texclut);
void flush();
// PS2_GS_SPLIT: hands the ops queued so far to the gsdraw thread (render thread, when it runs out of work)
void publish_draws();
void wait_idle();
void download(std::uint8_t *memory, std::uint32_t offset = 0, std::uint32_t bytes = kMemorySize);
bool download_async(std::uint8_t *memory, std::uint32_t offset, std::uint32_t bytes, std::uint32_t serial);
bool finish_download(std::uint32_t serial);
void read_state(std::vector<std::uint32_t> &vram, std::uint32_t &scale, std::vector<std::uint32_t> &clut);
void write_state(const std::vector<std::uint32_t> &vram, std::uint32_t scale, const std::vector<std::uint32_t> &clut);
bool display(const DisplaySource &src, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
bool display_async(const DisplaySource &src, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
bool attach_surface(const SurfaceTarget &target);
void resize_surface(std::uint32_t width, std::uint32_t height);
bool has_surface();
bool present(const DisplaySource &src);
double busy_ms();
void stats();
// Native renderer, stage 1 (runtime/src/native.hpp): render thread, in GS order around each native batch's XGKICK.
void native_begin(const State &s);
void native_batch(const State &s, const std::uint8_t *payload, std::uint32_t bytes, std::uint32_t pass);
void native_vblank(std::uint64_t frame);

}
