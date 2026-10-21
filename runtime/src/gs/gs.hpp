#pragma once

#include "ps2/cpu.hpp"
#include "ps2/system.hpp"

#include <atomic>
#include <cstdint>
#include <functional>
#include <vector>

namespace ps2::state {
class Stream;
}

namespace ps2::gs {

inline constexpr std::uint32_t kMemorySize = 4u << 20;

enum Psm : std::uint32_t {
    PSMCT32 = 0x00, PSMCT24 = 0x01, PSMCT16 = 0x02, PSMCT16S = 0x0A,
    PSMT8 = 0x13, PSMT4 = 0x14, PSMT8H = 0x1B, PSMT4HL = 0x24, PSMT4HH = 0x2C,
    PSMZ32 = 0x30, PSMZ24 = 0x31, PSMZ16 = 0x32, PSMZ16S = 0x3A,
};

struct Vertex {
    std::uint32_t x, y, z;
    std::uint8_t r, g, b, a;
    float q, s, t;
    std::uint32_t u, v;
    std::uint8_t f;
};

struct Context {
    std::uint64_t tex0, clamp, tex1, tex2, xyoffset, miptbp1, miptbp2, scissor, alpha, test, fba, frame, zbuf;
};

struct State {
    std::uint64_t prim, prmode, prmodecont, rgbaq, st, uv, fog, texclut, scanmsk, texa, fogcol, dimx, dthe, colclamp, pabe;
    std::uint64_t bitbltbuf, trxpos, trxreg, trxdir;
    Context ctx[2];
    float q;
    Vertex queue[3];
    int count;
    std::uint32_t clut[512];
};

extern State g_state;
extern int g_render_path;  // GIF path of the packet being rendered (render side)
extern std::uint32_t g_setup_generation;
std::uint8_t *memory();

void init();
void state(ps2::state::Stream &s);
// false: the next save leaves out the renderer's (upscaled) VRAM copy; the load rebuilds it from GS memory
void set_state_vram(bool on);
void reset();
void write(std::uint32_t reg, std::uint64_t value);
void signal(std::uint32_t reg, std::uint64_t value);
void note_transfer(std::uint32_t reg, std::uint64_t value);
void write_packed(std::uint32_t reg, const Reg128 &q);
void write_image(const std::uint8_t *data, std::uint32_t qwords);
void read_image(std::uint8_t *data, std::uint32_t qwords);
void render_read_image(std::uint8_t *data, std::uint32_t qwords);
void render_reset();
// Native renderer (native.hpp): a queue::kNativeBegin / kNative message, posted or (no render thread) handled here.
void native_message(std::uint32_t type, const std::uint8_t *data, std::uint32_t bytes);

std::uint64_t read_privileged(std::uint32_t address);
void write_privileged(std::uint32_t address, std::uint64_t value);
void vblank(bool start);
bool interlaced_odd_field();

std::uint32_t address32(std::uint32_t bp, std::uint32_t bw, std::uint32_t x, std::uint32_t y);
std::uint32_t read_pixel(std::uint32_t psm, std::uint32_t bp, std::uint32_t bw, std::uint32_t x, std::uint32_t y);
void write_pixel(std::uint32_t psm, std::uint32_t bp, std::uint32_t bw, std::uint32_t x, std::uint32_t y, std::uint32_t value);
// Byte address of a pixel in GS memory (the byte holding it for PSMT4), and read_pixel() against another copy of GS memory.
std::uint32_t pixel_address(std::uint32_t psm, std::uint32_t bp, std::uint32_t bw, std::uint32_t x, std::uint32_t y);
std::uint32_t read_pixel_in(const std::uint8_t *memory, std::uint32_t psm, std::uint32_t bp, std::uint32_t bw, std::uint32_t x, std::uint32_t y);

struct DisplayRegs {
    std::uint64_t pmode, smode2, dispfb[2], display[2];
    bool fielded[2], half[2];  // fields line up by the game's flag (PS2_FIELD_FLAG); this buffer was drawn half a line lower
};
DisplayRegs display_regs();

bool display(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
bool display(const DisplayRegs &regs, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
// Frames for a stream (--frames-pipe) without waiting for them: display_later() (EE) queues the displayed frame and the
// render thread hands it to the sink set by stream_frames(), in order, a few frames late (null: nothing shown). The sink
// may keep the pixels until it sets *done; with done null they are gone after the call. False when there is no render
// thread (use display()). frames_finish() (render thread, after the EE stopped): the rest.
void stream_frames(std::function<void(const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height, std::atomic<bool> *done)> sink);
bool display_later();
void frames_finish();
// Frame for hosts that draw it themselves, with interlaced fields blended like present(); may lag a frame.
bool copy_frame(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
// wait: read this very frame back (blocking) instead of the newest finished asynchronous copy, one frame older
bool copy_frame(const DisplayRegs &regs, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height, bool wait = false);
bool attach_window(int kind, void *display, std::uint64_t window, void *surface, const char *selector, std::uint32_t width, std::uint32_t height);
void resize_window(std::uint32_t width, std::uint32_t height);
bool present();
bool present(const DisplayRegs &regs);
void start_thread();
void flush_and_wait();
void post_present();
Rendered render_pending(const std::function<void(const DisplayRegs &)> &on_present, double budget_ms);
double gpu_busy_ms();
std::uint64_t primitives_drawn();
void stats();

}
