#pragma once

#include "cpu.hpp"

#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace ps2 {

inline constexpr std::uint64_t kEeClock = 294912000ull;
inline constexpr std::uint32_t kHandlerReturn = 0x00001000u;
inline constexpr std::uint32_t kIdle = 0x00001010u;

extern Cpu g_cpu;

// a scripted input held for `frames` vblanks from `frame` on controller port `pad` (0 or 1): either buttons,
// or (stick) the left analog stick at lx/ly (0x00 = left/up, 0x80 = centre, 0xFF = right/down)
struct Press {
    std::uint64_t frame = 0;
    std::uint32_t frames = 6;
    std::uint16_t buttons = 0;
    int pad = 0;
    bool stick = false;
    std::uint8_t lx = 0x80, ly = 0x80;
};

struct Options {
    bool trace_syscalls = false;
    bool trace_io = false;
    bool trace_threads = false;
    bool pal = true;
    bool rate_forced = false;
    std::uint64_t max_frames = 0;
    std::string misses_path;
    std::string disc_path;
    bool trace_iop_modules = false;
    bool trace_iop_hle = false;
    std::string frames_dir;
    std::string frames_pipe;  // --frames-pipe: the frames, as PAMs (RGBA) one after another, onto one stream (a FIFO into ffmpeg)
    std::uint32_t frame_every = 60;
    std::vector<Press> presses;
    std::function<void()> on_vblank;
    std::function<void(const std::string &name, const std::uint8_t *code, std::size_t size)> on_vu_program;
    std::string memcard_path;
    std::function<void()> on_memcard_saved;
    std::string save_state_path;
    std::uint64_t save_state_frame = 0;
    // Deterministic lockstep netplay (web host only; off natively). The host's on_vblank latches both players'
    // inputs from the shared ring; the runtime pins the config that would otherwise differ between peers.
    bool lockstep = false;
    // lockstep snapshots (request_snapshot): called on the emulation thread at the top of the run loop with the
    // in-memory state, or nullptr when the guest was not at a safe point (retry at the next vblank)
    std::function<void(const std::vector<std::uint8_t> *state)> on_snapshot;
    // after a request_load_state() load, on the emulation thread
    std::function<void(bool ok)> on_state_loaded;
};

extern Options g_options;

struct ThreadContext {
    Reg128 r[32];
    Reg128 hi, lo;
    std::uint32_t sa, pc;
    std::uint32_t f[32];
    std::uint32_t facc, fcr31;
};

void save_context(const Cpu &c, ThreadContext &t);
void load_context(Cpu &c, const ThreadContext &t);

std::uint64_t now();
// The guest's real-time clock in Unix seconds: the host clock, or with PS2_RTC=<unix seconds> that epoch plus emulated
// time, which every run (and every lockstep peer) sees identically.
std::int64_t rtc_time();
std::uint64_t hblank_cycles();
void set_budget(Cpu &c, std::int64_t cycles);
void schedule(int event, std::uint64_t at, std::function<void()> action);
std::uint64_t scheduled_at(int event);
bool preempt(Cpu &c);

bool has_code(std::uint32_t pc);
void raise_intc(unsigned cause);
void request_reschedule();
void request_iop_sync();
void sync_iop();

bool load_elf(const std::string &path, std::uint32_t &entry);
void boot(std::uint32_t entry, const std::vector<std::string> &args);
// LoadExecPS2 on a console wipes memory and starts another program. Only the loaded ELF exists here, so the
// run loop restarts it from its entry point with fresh hardware and args[0] = its own cdrom0: path.
void request_reboot(const std::vector<std::string> &args);
// the program path and arguments the running ELF was last booted with
const std::vector<std::string> &boot_args();
int run();
void halt(const std::string &reason);
bool save_state(const std::string &path);
bool load_state(const std::string &path);
bool load_state(const std::uint8_t *data, std::size_t size);
// In-memory state for lockstep drop-in and resync. `vram` = false leaves out the renderer's (possibly upscaled)
// VRAM copy: the load rebuilds it from GS memory, so the bytes do not depend on the peer's resolution scale.
bool save_state(std::vector<std::uint8_t> &out, bool vram = true);
// Emulation thread only (e.g. from on_vblank): the guest unwinds and the run loop saves (on_snapshot) or loads
// (on_state_loaded) at its top, the same safe point as --save-state and PS2_LOAD_AT. `data` must stay valid until then.
void request_snapshot();
void request_load_state(const std::uint8_t *data, std::size_t size);
// 64-bit hash of part `k` of `n` (n = 32) of the guest-visible machine: 1 MB of EE RAM per part, plus the EE CPU,
// scratchpad and event queue (k=0), IOP RAM and CPU (k=8), SPU2 RAM (k=16) and VU memory/registers (k=24).
// Raw memory and named fields only: no padded structs, no GS memory, no host pointers.
std::uint64_t hash_part(unsigned k, unsigned n = 32);
// XXH64 of a buffer (the same on native and wasm32)
std::uint64_t hash_bytes(const void *data, std::size_t size);
// Lockstep: the guest RTC reads epoch + emulated seconds (overrides PS2_RTC)
void set_rtc_epoch(std::int64_t epoch);
// Memory card in slot 1 as raw bytes (empty: no card), and replacing it (the lockstep session card)
std::vector<std::uint8_t> memcard_image();
void set_memcard_image(const std::uint8_t *data, std::size_t size);
bool halted();
std::uint64_t frame_count();

bool display_frame(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);

struct WindowTarget {
    enum Kind { X11, Wayland, Canvas } kind = X11;
    void *display = nullptr;
    std::uint64_t window = 0;
    void *surface = nullptr;
    const char *selector = nullptr;
    std::uint32_t width = 0, height = 0;
};

// Lets the WebGPU renderer present straight to a window or canvas instead of handing frames back.
bool attach_window(const WindowTarget &target);
void resize_window(std::uint32_t width, std::uint32_t height);
bool present_frame();
void init_graphics();
void start_render_thread();
void start_vu_thread();
void run_vu_thread();
double vu_thread_idle_ms();
std::uint64_t vu1_interpreted_calls();
std::uint64_t vu1_jit_programs();  // VU1 programs the browser build has JIT-compiled
void post_present();
enum class Rendered { idle, presented, busy };
Rendered render_pending(bool surface, const std::function<void(const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height)> &copy,
                        const std::function<void()> &before_present, double budget_ms);
void wait_render_work(int timeout_ms);
void wake_render_thread();
// --frames-pipe (render thread, once the EE stopped): writes the frames still on their way.
void finish_frames();
bool copy_frame(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height);
// also hands every presented frame to `tap` (on the render thread), e.g. for streaming it; with `wait` the
// frame is read back before the next one is drawn (one frame less delay, the render thread waits for the GPU)
void set_frame_tap(std::function<void(const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height)> tap, bool wait = true);
// the tap only costs a readback while enabled (any thread may call this)
void enable_frame_tap(bool enabled);
// "frame:[p1:|p2:]button[+button][:frames]"
bool parse_press(const std::string &spec, Press &press);
// "frame:[p1:|p2:]lx,ly[:frames]", axis values 0..255 (decimal or 0x hex)
bool parse_stick(const std::string &spec, Press &press);
double gpu_busy_ms();
// Width/height the frame is shown at: PS2_ASPECT=16:9 (with a widescreen game patch), default 4:3.
float display_aspect();
void browser_yield();
#ifdef __EMSCRIPTEN__
// Web, PS2_WEB_THREADS (default on): the GS front end runs on a pthread (render_pending there) and the browser's main
// thread runs its GPU jobs, the only WebGPU caller.
bool web_gs_threads();
bool run_gpu_jobs(double budget_ms, bool &presented);  // up to the first present; whether any ran
std::uint32_t main_work();  // bumped whenever the main thread has work (jobs, disc reads: wake_main_thread)
void wait_main_work(std::uint32_t seen, int timeout_ms);  // main thread (JSPI): until main_work() != seen
void wake_main_thread();
#endif
std::uint64_t frames_run();
std::uint64_t primitives_drawn();
// pad 0 is the first controller port, pad 1 the second, which starts unplugged
void set_pad_buttons(std::uint16_t pressed, int pad = 0);
void set_pad_axis(int axis, std::uint8_t value, int pad = 0);
void set_pad_pressure(int button, std::uint8_t value, int pad = 0);
void set_pad_connected(int pad, bool connected);
std::uint16_t pad_rumble(int pad = 0);
void set_audio_sink(std::function<void(const std::int16_t *samples, std::size_t frames)> sink);

}
