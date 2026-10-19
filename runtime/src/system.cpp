#include "debug.hpp"
#include "dmac.hpp"
#include "hash64.hpp"
#include "gs/drawdbg.hpp"
#include "gs/gif.hpp"
#include "vif.hpp"
#include "vu_micro.hpp"
#include "gs/gs.hpp"
#include "gs/queue.hpp"
#include "gs/texpack.hpp"
#include "hw.hpp"
#include "seamv.hpp"
#include "iop/iop.hpp"
#include "iop/sif.hpp"
#include "iop/sio2.hpp"
#include "iop/spu2.hpp"
#include "ipu/ipu.hpp"
#include "ps2/disc.hpp"
#include "kernel.hpp"
#include "ps2/generated.hpp"
#include "ps2/memory.hpp"
#include "ps2/state.hpp"
#include "ps2/system.hpp"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#include <algorithm>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <random>
#include <thread>
#ifdef __linux__
#include <pthread.h>
#endif
#include <stdexcept>
#include <string>
#include <vector>

namespace ps2 {

Cpu g_cpu;
Options g_options;

namespace {

constexpr std::int64_t kMaxSlice = 20000;

struct Event {
    int id;
    std::uint64_t at;
    std::function<void()> action;
};

std::uint64_t g_base = 0;
std::int64_t g_given = 0;
std::vector<Event> g_events;
bool g_halted = false;
std::string g_halt_reason;
std::uint64_t g_frames = 0;
std::uint64_t g_iop_synced = 0;
bool g_state_request = false;
bool g_load_request = false;
bool g_resumed = false;
std::string g_elf_path;
std::vector<std::string> g_boot_args;
bool g_disc_open = false;
bool g_reboot_request = false;
std::vector<std::string> g_reboot_args;
// lockstep: in-memory snapshot / load requested by the host (request_snapshot, request_load_state)
bool g_snapshot_request = false;
const std::uint8_t *g_load_data = nullptr;
std::size_t g_load_size = 0;
std::atomic<bool> g_rtc_pinned{false};
std::atomic<std::int64_t> g_rtc_epoch{0};

std::uint64_t next_event_time() {
    std::uint64_t t = UINT64_MAX;
    for (const Event &e : g_events) t = std::min(t, e.at);
    return t;
}

void run_due_events() {
    sync_iop();
    for (;;) {
        const std::uint64_t t = now();
        auto it = std::min_element(g_events.begin(), g_events.end(), [](const Event &a, const Event &b) { return a.at < b.at; });
        if (it == g_events.end() || it->at > t) return;
        auto action = std::move(it->action);
        g_events.erase(it);
        action();
    }
}

void refill(Cpu &c) {
    const std::uint64_t t = now(), next = next_event_time();
    std::int64_t slice = kMaxSlice;
    if (next != UINT64_MAX) slice = std::clamp<std::int64_t>(static_cast<std::int64_t>(next - std::min(next, t)), 1, kMaxSlice);
    set_budget(c, slice);
}

std::uint64_t frame_cycles() { return kEeClock / (g_options.pal ? 50u : 60u); }

void dump_frame() {
    std::vector<std::uint32_t> rgba;
    std::uint32_t w = 0, h = 0;
    if (!gs::display(rgba, w, h)) return;
    char name[512];
    std::snprintf(name, sizeof name, "%s/frame_%05llu.ppm", g_options.frames_dir.c_str(), static_cast<unsigned long long>(g_frames));
    std::FILE *f = std::fopen(name, "wb");
    if (!f) return;
    std::fprintf(f, "P6\n%u %u\n255\n", w, h);
    for (std::uint32_t p : rgba) {
        const std::uint8_t px[3] = {static_cast<std::uint8_t>(p), static_cast<std::uint8_t>(p >> 8), static_cast<std::uint8_t>(p >> 16)};
        std::fwrite(px, 1, 3, f);
    }
    std::fclose(f);
}

void apply_presses() {
    if (g_options.presses.empty()) return;
    std::uint16_t mask[2] = {};
    std::uint8_t lx[2] = {0x80, 0x80}, ly[2] = {0x80, 0x80};
    bool drives_buttons[2] = {}, drives_stick[2] = {};
    for (const Press &p : g_options.presses) {
        const int pad = p.pad & 1;
        (p.stick ? drives_stick : drives_buttons)[pad] = true;
        if (g_frames < p.frame || g_frames >= p.frame + p.frames) continue;
        if (p.stick) {
            lx[pad] = p.lx;
            ly[pad] = p.ly;
        } else {
            mask[pad] |= p.buttons;
        }
    }
    for (int pad = 0; pad < 2; ++pad) {
        if (drives_buttons[pad]) iop::sio2::set_buttons(pad, mask[pad]);
        if (drives_stick[pad]) {
            iop::sio2::set_axis(pad, 2, lx[pad]);
            iop::sio2::set_axis(pad, 3, ly[pad]);
        }
    }
}

void time_frames() {
    static const char *spec = std::getenv("PS2_TIME");
    if (!spec) return;
    static const std::uint64_t from = std::strtoull(spec, nullptr, 10);
    static const std::uint64_t count = std::strchr(spec, ',') ? std::strtoull(std::strchr(spec, ',') + 1, nullptr, 10) : 500;
    static std::chrono::steady_clock::time_point start;
    if (g_frames == from) {
        gs::flush_and_wait();
        start = std::chrono::steady_clock::now();
    } else if (g_frames == from + count) {
        gs::flush_and_wait();
        const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
        std::fprintf(stderr, "[time] frames %llu-%llu: %.2f ms per frame\n", static_cast<unsigned long long>(from), static_cast<unsigned long long>(from + count), ms / static_cast<double>(count));
    }
}

// Debug: PS2_WATCH="addr,len[;*ptr+off,len]..." logs EE RAM words every PS2_WATCH_EVERY frames (default 1) from
// PS2_WATCH_FROM to PS2_WATCH_OUT (default stderr). PS2_DUMP_AT="f1,f2,...:prefix" writes raw EE RAM at those frames.
void watch_frame() {
    struct Item { bool deref; std::uint32_t at, off, len; };
    static std::vector<Item> items;
    static std::vector<std::uint64_t> dump_at;
    static std::string dump_prefix;
    static std::FILE *out = nullptr;
    static std::uint64_t every = 1, from = 0;
    static bool init = false;
    if (!init) {
        init = true;
        if (const char *spec = std::getenv("PS2_WATCH")) {
            std::string s = spec;
            for (std::size_t p = 0; p < s.size();) {
                std::size_t e = s.find(';', p);
                if (e == std::string::npos) e = s.size();
                const std::string t = s.substr(p, e - p);
                Item it{};
                if (!t.empty() && t[0] == '*') {
                    it.deref = true;
                    std::sscanf(t.c_str() + 1, "%x+%x,%x", &it.at, &it.off, &it.len);
                } else std::sscanf(t.c_str(), "%x,%x", &it.at, &it.len);
                if (it.len) items.push_back(it);
                p = e + 1;
            }
            const char *path = std::getenv("PS2_WATCH_OUT");
            out = path ? std::fopen(path, "w") : stderr;
            if (const char *v = std::getenv("PS2_WATCH_EVERY")) every = std::max<std::uint64_t>(1, std::strtoull(v, nullptr, 10));
            if (const char *v = std::getenv("PS2_WATCH_FROM")) from = std::strtoull(v, nullptr, 10);
        }
        if (const char *spec = std::getenv("PS2_DUMP_AT")) {
            std::string s = spec;
            const auto colon = s.find(':');
            dump_prefix = colon == std::string::npos ? "dump" : s.substr(colon + 1);
            for (char *p = s.data(); *p && *p != ':';) {
                dump_at.push_back(std::strtoull(p, &p, 10));
                if (*p == ',') ++p;
                else break;
            }
        }
    }
    if (out && g_frames >= from && g_frames % every == 0) {
        std::fprintf(out, "%llu", static_cast<unsigned long long>(g_frames));
        for (const Item &it : items) {
            std::uint32_t base = it.at;
            if (it.deref) base = (ld32(it.at) & 0x1FFFFFFu) + it.off;
            std::fprintf(out, " |");
            for (std::uint32_t j = 0; j < it.len; j += 4) std::fprintf(out, " %08X", (base & 0x1FFFFFFu) + j < kRamSize ? ld32((base & 0x1FFFFFFu) + j) : 0u);
        }
        std::fprintf(out, "\n");
        std::fflush(out);
    }
    // PS2_PATCH="frame:file:lo-hi[,lo-hi...]" copies those EE RAM byte ranges from a raw RAM image at that frame.
    static const char *patch = std::getenv("PS2_PATCH");
    if (patch) {
        unsigned long long pf = 0;
        char path[512] = {};
        int used = 0;
        if (std::sscanf(patch, "%llu:%511[^:]:%n", &pf, path, &used) >= 2 && pf == g_frames) {
            if (std::FILE *img = std::fopen(path, "rb")) {
                for (const char *p = patch + used; *p;) {
                    unsigned lo = 0, hi = 0;
                    int n = 0;
                    if (std::sscanf(p, "%x-%x%n", &lo, &hi, &n) != 2) break;
                    if (hi > lo && hi <= kRamSize) {
                        std::fseek(img, lo, SEEK_SET);
                        const std::size_t got = std::fread(g_ram + lo, 1, hi - lo, img);
                        std::fprintf(stderr, "[patch] frame %llu %08X-%08X (%zu bytes)\n", pf, lo, hi, got);
                    }
                    p += n;
                    if (*p == ',') ++p;
                }
                std::fclose(img);
            }
        }
    }
    for (std::uint64_t f : dump_at)
        if (f == g_frames) {
            const std::string path = dump_prefix + "_" + std::to_string(f) + ".bin";
            if (std::FILE *d = std::fopen(path.c_str(), "wb")) {
                std::fwrite(g_ram, 1, kRamSize, d);
                std::fclose(d);
            }
        }
}

void hash_frame();

// PS2_PNACH=file[,file...]: PCSX2-style "patch=1,EE,<addr>,word,<value>" lines, written to EE RAM at every vblank
// like PCSX2's continuous patches. Only data patches take effect (code is recompiled). Game patches change what the
// game computes: lockstep peers must use the same set.
void apply_pnach() {
    struct Poke { std::uint32_t addr, value; };
    static const std::vector<Poke> pokes = [] {
        std::vector<Poke> v;
        const char *spec = std::getenv("PS2_PNACH");
        const std::string list = spec ? spec : "";
        for (std::size_t at = 0; at < list.size();) {
            const std::size_t end = std::min(list.find(',', at), list.size());
            const std::string file = list.substr(at, end - at);
            at = end + 1;
            std::ifstream in(file);
            if (!in) std::fprintf(stderr, "[pnach] cannot read %s\n", file.c_str());
            for (std::string line; std::getline(in, line);) {
                unsigned addr = 0, value = 0;
                if (std::sscanf(line.c_str(), " patch=%*[^,],EE,%x,word,%x", &addr, &value) == 2 && (addr & 0x1FFFFFFu) + 4 <= kRamSize)
                    v.push_back({addr & 0x1FFFFFFu, value});
            }
            std::fprintf(stderr, "[pnach] %s: %zu word patches total\n", file.c_str(), v.size());
        }
        return v;
    }();
    for (const Poke &p : pokes) std::memcpy(g_ram + p.addr, &p.value, 4);
}

// PS2_FPS=from,to prints the emulated frame rate over that window of frames to stderr (remaster/perf.sh).
void fps_window() {
    static const char *spec = std::getenv("PS2_FPS");
    if (!spec || !std::strchr(spec, ',')) return;
    static const std::uint64_t from = std::strtoull(spec, nullptr, 10), to = std::strtoull(std::strchr(spec, ',') + 1, nullptr, 10);
    static std::chrono::steady_clock::time_point t0;
    static double gpu0 = 0.0;
    if (g_frames == from) {
        t0 = std::chrono::steady_clock::now();
        gpu0 = gpu_busy_ms();
    }
    // GPU: timed passes (timestamp queries, GPU renderer only) per frame over the window
    if (g_frames == to && to > from)
        std::fprintf(stderr, "[fps] frames %llu-%llu: %.1f fps, GPU %.2f ms/frame\n", static_cast<unsigned long long>(from), static_cast<unsigned long long>(to),
                     static_cast<double>(to - from) / std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count(),
                     (gpu_busy_ms() - gpu0) / static_cast<double>(to - from));
}

void vblank() {
    ++g_frames;
    debug::jitter(4);
    hash_frame();
    time_frames();
    fps_window();
    apply_pnach();
    watch_frame();
    apply_presses();
    if (g_options.on_vblank) g_options.on_vblank();
    iop::sio2::flush_cards();
    if (g_options.trace_iop_modules && g_frames % 25 == 0) std::fprintf(stderr, "[frame] %llu prims %llu\n", static_cast<unsigned long long>(g_frames), static_cast<unsigned long long>(gs::primitives_drawn()));
    if (!g_options.frames_dir.empty() && g_options.frame_every && g_frames % g_options.frame_every == 0) dump_frame();
    hw::vblank_start();
    iop::vblank(true);
    schedule(hw::kEventVblankEnd + 100, now() + hblank_cycles() * 22u, [] { iop::vblank(false); });
    kernel::on_vblank_start();
    if (g_options.max_frames && g_frames >= g_options.max_frames) halt("frame limit reached");
    if (g_options.save_state_frame && g_frames == g_options.save_state_frame) g_state_request = true;
    // Debug: PS2_LOAD_AT="frame:file" loads a state in-process at that vblank (after a --save-state of the same frame),
    // the way a lockstep host reloads its own join snapshot.
    static const char *load_at = std::getenv("PS2_LOAD_AT");
    if (load_at && std::strtoull(load_at, nullptr, 10) == g_frames) g_load_request = true;
    schedule(hw::kEventVblank, now() + frame_cycles(), vblank);
}

void idle(Cpu &c) {
    std::uint64_t next = next_event_time();
    if (next == UINT64_MAX && iop::idle()) {
        halt("deadlock: every thread waits and no event is pending");
        return;
    }
    next = std::min(next, now() + kEeClock / 2000);
    g_base = std::max(now(), next);
    g_given = 0;
    c.budget = 0;
    run_due_events();
}

}

void save_context(const Cpu &c, ThreadContext &t) {
    std::memcpy(t.r, c.r, sizeof t.r);
    t.hi = c.hi;
    t.lo = c.lo;
    t.sa = c.sa;
    t.pc = c.pc & ~kUnwind;
    std::memcpy(t.f, c.f, sizeof t.f);
    t.facc = c.facc;
    t.fcr31 = c.fcr31;
}

void load_context(Cpu &c, const ThreadContext &t) {
    std::memcpy(c.r, t.r, sizeof t.r);
    c.hi = t.hi;
    c.lo = t.lo;
    c.sa = t.sa;
    c.pc = t.pc;
    std::memcpy(c.f, t.f, sizeof t.f);
    c.facc = t.facc;
    c.fcr31 = t.fcr31;
}

std::uint64_t now() { return g_base + static_cast<std::uint64_t>(g_given - g_cpu.budget); }

void set_rtc_epoch(std::int64_t epoch) {
    g_rtc_epoch.store(epoch);
    g_rtc_pinned.store(true);
}

std::int64_t rtc_time() {
    if (g_rtc_pinned.load()) return g_rtc_epoch.load() + static_cast<std::int64_t>(now() / kEeClock);
    static const char *epoch = std::getenv("PS2_RTC");
    if (!epoch) return static_cast<std::int64_t>(std::time(nullptr));
    return std::strtoll(epoch, nullptr, 10) + static_cast<std::int64_t>(now() / kEeClock);
}

std::uint64_t hblank_cycles() { return frame_cycles() * 2u / (g_options.pal ? 625u : 525u); }

void set_budget(Cpu &c, std::int64_t cycles) {
    g_base = now();
    g_given = cycles;
    c.budget = static_cast<std::int32_t>(cycles);
}

void schedule(int event, std::uint64_t at, std::function<void()> action) {
    g_events.erase(std::remove_if(g_events.begin(), g_events.end(), [&](const Event &e) { return e.id == event; }), g_events.end());
    g_events.push_back({event, at, std::move(action)});
}

std::uint64_t scheduled_at(int event) {
    for (const Event &e : g_events)
        if (e.id == event) return e.at;
    return UINT64_MAX;
}

bool preempt(Cpu &c) {
    run_due_events();
    refill(c);
    return g_halted || g_state_request || g_snapshot_request || g_load_request || g_reboot_request || kernel::must_unwind();
}

void halt(const std::string &reason) {
    if (!g_halted) std::fprintf(stderr, "[ee] halted: %s\n", reason.c_str());
    g_halted = true;
    g_halt_reason = reason;
}

bool halted() { return g_halted; }

namespace {

constexpr char kStateMagic[8] = {'P', 'S', '2', 'S', 'T', 'A', 'T', 'E'};
// Version 3 adds the disc drive timing; version 2 files still load, with an idle drive.
constexpr std::uint32_t kStateVersion = 3;

std::function<void()> event_action(int id, std::uint64_t at) {
    if (id == hw::kEventVblank) return vblank;
    if (id == hw::kEventVblankEnd + 100) return [] { iop::vblank(false); };
    if (id >= hw::kEventCount) return kernel::alarm_action(id - hw::kEventCount);
    return hw::event_action(id, at);
}

std::atomic<std::uint32_t> g_vu_fence{0};

// flush=false waits for the VU thread without sending its pending XGKICK packets on (PS2_HASH_LOG must not perturb).
void sync_vu_thread(bool flush = true) {
    if (!gs::queue::vu_active()) return;
    const std::uint32_t seen = g_vu_fence.load();
    gs::queue::vu().post(gs::queue::kVuFence, flush ? 0u : 1u, 0, nullptr, 0);
    while (g_vu_fence.load() == seen) gs::queue::wait(g_vu_fence, seen);
}

void machine_state(state::Stream &s) {
    char magic[8];
    std::memcpy(magic, kStateMagic, sizeof magic);
    s.bytes(magic, sizeof magic);
    std::uint32_t version = kStateVersion;
    s.pod(version);
    if (std::memcmp(magic, kStateMagic, sizeof magic) != 0) throw std::runtime_error("not a state file");
    if (version != kStateVersion && version != 2) throw std::runtime_error("state file from another version");
    s.tag("ee");
    s.pod(g_cpu);
    s.bytes(g_ram, kRamSize);
    s.bytes(g_spr, kScratchpadSize);
    s.pod(g_base);
    s.pod(g_given);
    s.pod(g_frames);
    s.pod(g_iop_synced);
    s.pod(g_options.pal);
    s.vec(g_events, [&s](Event &e) {
        s.pod(e.id);
        s.pod(e.at);
        if (s.loading()) e.action = event_action(e.id, e.at);
    });
    kernel::state(s);
    hw::state(s);
    dmac::state(s);
    sync_vu_thread();
    vif::state(s);
    vu::state(s);
    ipu::state(s);
    gs::state(s);
    gif::state(s);
    iop::state(s);
    sif::state(s);
    if (version >= 3) sif::timing_state(s);
    s.tag("end");
}

// PS2_HASH_LOG=file writes "frame hash" at every vblank (PS2_HASH_LOG_EVERY=n: every n-th frame), hashing the
// guest-visible machine: EE CPU/RAM/scratchpad, the event queue, every device's savestate section (VU0/VU1 memory
// and registers, IOP CPU/RAM, SPU2 RAM, ...), but not GS local memory, which depends on the GPU. PS2_HASH_SPLIT=1
// adds one "section=hash" per state section, to bisect a divergence to a component.
class HashStream final : public state::Stream {
public:
    HashStream() : Stream(true, true) {}
    void bytes(void *data, std::size_t size) override { part_.update(data, size); }
    void section(const char *name) override {
        close();
        name_ = name;
    }
    void close() {
        if (name_) parts.emplace_back(name_, part_.digest());
        part_.reset();
        name_ = nullptr;
    }
    std::vector<std::pair<const char *, std::uint64_t>> parts;

private:
    Hash64 part_;
    const char *name_ = nullptr;
};

struct HashLog {
    std::FILE *out = nullptr;
    std::uint64_t every = 1;
    bool split = false, split_vu = false;
    std::uint64_t hashed = 0;
    double total_ms = 0.0, max_ms = 0.0;
};

HashLog &hash_log() {
    static HashLog log = [] {
        HashLog l;
        if (const char *path = std::getenv("PS2_HASH_LOG")) {
            l.out = std::fopen(path, "w");
            if (!l.out) std::fprintf(stderr, "[hash] cannot write %s\n", path);
        }
        if (const char *v = std::getenv("PS2_HASH_LOG_EVERY")) l.every = std::max<std::uint64_t>(1, std::strtoull(v, nullptr, 10));
        l.split = std::getenv("PS2_HASH_SPLIT") != nullptr;
        // PS2_HASH_SPLIT=2 also prints "vu0x" (VU0 code + data; its registers are in "eecpu") and "vu1x" (VU1 registers,
        // TOP/ITOP, pending XGKICKs, code + data), the two halves of "vu"; they are not part of the frame hash
        l.split_vu = l.split && std::strcmp(std::getenv("PS2_HASH_SPLIT"), "2") == 0;
        return l;
    }();
    return log;
}

void hash_frame() {
    HashLog &log = hash_log();
    if (!log.out || g_frames % log.every) return;
    const auto start = std::chrono::steady_clock::now();
    HashStream h;
    h.tag("eecpu");
    h.pod(g_cpu);
    h.tag("eeram");
    h.bytes(g_ram, kRamSize);
    h.tag("spr");
    h.bytes(g_spr, kScratchpadSize);
    h.tag("sched");
    h.pod(g_base);
    h.pod(g_given);
    h.pod(g_frames);
    h.pod(g_iop_synced);
    for (Event &e : g_events) {
        h.pod(e.id);
        h.pod(e.at);
    }
    kernel::state(h);
    hw::state(h);
    dmac::state(h);
    sync_vu_thread(false);
    vif::state(h);
    vu::state(h);
    ipu::state(h);
    h.tag("gspriv");
    for (std::uint32_t a : {0x12001000u, 0x12001010u, 0x12001040u, 0x12001080u}) {
        std::uint64_t v = gs::read_privileged(a);
        h.pod(v);
    }
    gif::state(h);
    iop::state(h);
    sif::state(h);
    sif::timing_state(h);
    h.close();
    Hash64 all;
    for (const auto &part : h.parts) all.update(&part.second, sizeof part.second);
    std::fprintf(log.out, "%llu %016llx", static_cast<unsigned long long>(g_frames), static_cast<unsigned long long>(all.digest()));
    if (log.split)
        for (const auto &[name, value] : h.parts) std::fprintf(log.out, " %s=%016llx", name, static_cast<unsigned long long>(value));
    if (log.split_vu) {
        Hash64 vu0, vu1;
        vu::hash_units(vu0, vu1);
        std::fprintf(log.out, " vu0x=%016llx vu1x=%016llx", static_cast<unsigned long long>(vu0.digest()), static_cast<unsigned long long>(vu1.digest()));
    }
    std::fputc('\n', log.out);
    std::fflush(log.out);
    const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
    log.total_ms += ms;
    log.max_ms = std::max(log.max_ms, ms);
    if (++log.hashed % 1000 == 0)
        std::fprintf(stderr, "[hash] %llu frames hashed, %.3f ms average, %.3f ms max\n", static_cast<unsigned long long>(log.hashed),
                     log.total_ms / static_cast<double>(log.hashed), log.max_ms);
}

}

namespace {

void hash_vu0regs(Hash64 &h, const Vu0Regs &v) {
    h.update(v.vf, sizeof v.vf);
    h.update(&v.acc, sizeof v.acc);
    h.update(v.vi, sizeof v.vi);
    const std::uint32_t words[9] = {v.q, v.p, v.i, v.r, v.mac, v.status, v.clip, v.cmsar0, v.tpc};
    h.update(words, sizeof words);
}

}

std::uint64_t hash_bytes(const void *data, std::size_t size) {
    Hash64 h;
    h.update(data, size);
    return h.digest();
}

std::uint64_t hash_part(unsigned k, unsigned n) {
    Hash64 h;
    const std::size_t span = kRamSize / n;
    h.update(g_ram + static_cast<std::size_t>(k) * span, span);
    if (k == 0) {
        const Cpu &c = g_cpu;
        h.update(c.r, sizeof c.r);
        h.update(&c.hi, sizeof c.hi);
        h.update(&c.lo, sizeof c.lo);
        const std::uint32_t words[4] = {c.sa, c.pc & ~kUnwind, c.facc, c.fcr31};
        h.update(words, sizeof words);
        h.update(c.f, sizeof c.f);
        hash_vu0regs(h, c.vu0);
        h.update(c.cop0, sizeof c.cop0);
        h.update(g_spr, kScratchpadSize);
        const std::uint64_t sched[4] = {now(), g_frames, g_iop_synced, g_events.size()};
        h.update(sched, sizeof sched);
        for (const Event &e : g_events) {
            const std::uint64_t ev[2] = {static_cast<std::uint64_t>(static_cast<std::int64_t>(e.id)), e.at};
            h.update(ev, sizeof ev);
        }
    } else if (k == n / 4) {
        h.update(iop::ram_ptr(0), iop::kRamSize);
        const iop::Cpu &c = iop::g_cpu;
        h.update(c.r, sizeof c.r);
        const std::uint32_t words[7] = {c.hi, c.lo, c.pc, c.npc, c.status, c.cause, c.epc};
        h.update(words, sizeof words);
    } else if (k == n / 2) {
        h.update(iop::spu2::ram(), 2u << 20);
    } else if (k == n * 3 / 4) {
        sync_vu_thread(false);
        hash_vu0regs(h, vu::regs(1));
        vu::hash(h);
    }
    return h.digest();
}

bool save_state(const std::string &path) {
    try {
        state::Writer w;
        machine_state(w);
        std::ofstream out(path, std::ios::binary);
        out.write(reinterpret_cast<const char *>(w.out.data()), static_cast<std::streamsize>(w.out.size()));
        if (!out) throw std::runtime_error("cannot write " + path);
        std::fprintf(stderr, "[state] saved frame %llu to %s (%zu KB)\n", static_cast<unsigned long long>(g_frames), path.c_str(), w.out.size() >> 10);
        return true;
    } catch (const std::exception &e) {
        std::fprintf(stderr, "[state] cannot save: %s\n", e.what());
        return false;
    }
}

bool save_state(std::vector<std::uint8_t> &out, bool vram) {
    gs::set_state_vram(vram);
    try {
        state::Writer w;
        machine_state(w);
        gs::set_state_vram(true);
        out = std::move(w.out);
        return true;
    } catch (const std::exception &e) {
        gs::set_state_vram(true);
        std::fprintf(stderr, "[state] cannot save frame %llu: %s\n", static_cast<unsigned long long>(g_frames), e.what());
        return false;
    }
}

void request_snapshot() { g_snapshot_request = true; }

void request_load_state(const std::uint8_t *data, std::size_t size) {
    g_load_data = data;
    g_load_size = size;
    g_load_request = true;
}

std::vector<std::uint8_t> memcard_image() { return iop::sio2::card_image(); }
void set_memcard_image(const std::uint8_t *data, std::size_t size) { iop::sio2::set_card_image(data, size); }

bool load_state(const std::uint8_t *data, std::size_t size) {
    try {
        state::Reader r(data, size);
        machine_state(r);
        g_resumed = true;
        std::fprintf(stderr, "[state] loaded frame %llu\n", static_cast<unsigned long long>(g_frames));
        return true;
    } catch (const std::exception &e) {
        std::fprintf(stderr, "[state] cannot load: %s\n", e.what());
        return false;
    }
}

bool load_state(const std::string &path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        std::fprintf(stderr, "[state] cannot open %s\n", path.c_str());
        return false;
    }
    const std::vector<std::uint8_t> data{std::istreambuf_iterator<char>(in), {}};
    return load_state(data.data(), data.size());
}

std::uint64_t frame_count() { return g_frames; }

bool load_elf(const std::string &path, std::uint32_t &entry) {
    std::ifstream file(path, std::ios::binary);
    if (!file) return false;
    const std::vector<std::uint8_t> data{std::istreambuf_iterator<char>(file), {}};
    if (data.size() < 52 || std::memcmp(data.data(), "\x7f" "ELF", 4) != 0) return false;
    const auto u32 = [&](std::size_t o) { std::uint32_t v; std::memcpy(&v, data.data() + o, 4); return v; };
    const auto u16 = [&](std::size_t o) { std::uint16_t v; std::memcpy(&v, data.data() + o, 2); return v; };
    entry = u32(24);
    const std::uint32_t phoff = u32(28);
    for (std::uint32_t i = 0; i < u16(44); ++i) {
        const std::size_t ph = phoff + i * u16(42);
        if (u32(ph) != 1) continue;
        const std::uint32_t offset = u32(ph + 4), vaddr = physical(u32(ph + 8)), filesz = u32(ph + 16), memsz = u32(ph + 20);
        if (vaddr + memsz > kRamSize || offset + filesz > data.size()) return false;
        std::memcpy(g_ram + vaddr, data.data() + offset, filesz);
        std::memset(g_ram + vaddr + filesz, 0, memsz - filesz);
    }
    g_elf_path = path;
    return true;
}

void sync_iop() {
    const std::uint64_t t = now();
    if (t > g_iop_synced) {
        iop::run(t - g_iop_synced);
        g_iop_synced = t;
    }
    sif::pump();
}

void request_iop_sync() {
    if (g_cpu.budget > 64) set_budget(g_cpu, 64);
}

void boot(std::uint32_t entry, const std::vector<std::string> &args) {
    hw::reset();
    kernel::reset();
    if (!g_options.disc_path.empty() && !g_disc_open && !(g_disc_open = disc::open(g_options.disc_path)))
        std::fprintf(stderr, "[ee] cannot open disc image %s\n", g_options.disc_path.c_str());
    iop::set_trace(g_options.trace_iop_modules, g_options.trace_iop_hle);
    iop::reset();
    std::vector<std::string> guest_args = args;
    if (!guest_args.empty() && guest_args[0].find(':') == std::string::npos) {
        std::string name = guest_args[0].substr(guest_args[0].find_last_of("/\\") + 1);
        for (char &ch : name) ch = static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
        guest_args[0] = "cdrom0:\\" + name + ";1";
    }
    std::uint32_t argv = 0x00000800u, payload = argv + 4u * static_cast<std::uint32_t>(guest_args.size() + 1);
    for (std::size_t i = 0; i < guest_args.size(); ++i) {
        store<std::uint32_t>(g_ram + argv + 4 * i, payload);
        std::memcpy(g_ram + payload, guest_args[i].c_str(), guest_args[i].size() + 1);
        payload += static_cast<std::uint32_t>(guest_args[i].size() + 1);
    }
    store<std::uint32_t>(g_ram + argv + 4 * guest_args.size(), 0);
    g_boot_args = guest_args;
    kernel::start_main_thread(entry, 0, static_cast<std::uint32_t>(guest_args.size()), argv);
    schedule(hw::kEventVblank, now() + frame_cycles(), vblank);
}

void request_reboot(const std::vector<std::string> &args) {
    g_reboot_request = true;
    g_reboot_args = args;
}

const std::vector<std::string> &boot_args() { return g_boot_args; }

namespace {

// Runs at the top of the run loop once the guest has unwound: memory and every device start over, the frame
// counter and the memory card carry on.
void reboot(Cpu &c) {
    g_reboot_request = false;
    sync_vu_thread();
#ifdef __EMSCRIPTEN__
    // the WebGPU device belongs to the browser main thread, which drains the render queue; this is the emulation
    // thread, and gs::reset() (via boot) posts its reset to that queue in order anyway
    if (!gs::queue::active())
#endif
        gs::flush_and_wait();
    std::memset(g_ram, 0, kRamSize);
    std::memset(g_spr, 0, kScratchpadSize);
    g_events.clear();
    std::uint32_t entry = 0;
    if (g_elf_path.empty() || !load_elf(g_elf_path, entry)) {
        halt("cannot reload " + g_elf_path + " to reboot");
        return;
    }
    std::string line;
    for (const std::string &a : g_reboot_args) line += " " + a;
    std::fprintf(stderr, "[ee] reboot at frame %llu:%s\n", static_cast<unsigned long long>(g_frames), line.c_str());
    boot(entry, g_reboot_args);
    set_budget(c, kMaxSlice);
}

}

int run() {
    Cpu &c = g_cpu;
    if (!g_resumed) set_budget(c, kMaxSlice);
    while (!g_halted) {
        if (g_reboot_request) {
            reboot(c);
            continue;
        }
        if (g_state_request) {
            g_state_request = false;
            save_state(g_options.save_state_path);
        }
        if (g_snapshot_request) {
            g_snapshot_request = false;
            std::vector<std::uint8_t> snapshot;
            const bool saved = save_state(snapshot, false);
            if (g_options.on_snapshot) g_options.on_snapshot(saved ? &snapshot : nullptr);
        }
        if (g_load_request && g_load_data) {
            g_load_request = false;
            const std::uint8_t *data = g_load_data;
            g_load_data = nullptr;
            const bool loaded = load_state(data, g_load_size);
            if (g_options.on_state_loaded) g_options.on_state_loaded(loaded);
            if (!loaded) halt("lockstep state load failed");
        }
        if (g_load_request) {
            g_load_request = false;
            const char *spec = std::getenv("PS2_LOAD_AT");
            if (!load_state(std::string(std::strchr(spec, ':') ? std::strchr(spec, ':') + 1 : ""))) halt("PS2_LOAD_AT failed");
        }
        c.pc &= ~kUnwind;
        run_due_events();
        kernel::service(c);
        if (g_halted) break;
        if (c.pc == kIdle) {
            idle(c);
            continue;
        }
        if (c.budget <= 0) refill(c);
        dispatch(c, 0, 0);
    }
    kernel::dump();
    iop::dump();
    sif::dump();
    if (const char *peek = std::getenv("PS2_PEEK")) {
        std::uint32_t at = 0, len = 0;
        if (std::sscanf(peek, "%x,%x", &at, &len) == 2)
            for (std::uint32_t i = 0; i < len; i += 16) {
                std::fprintf(stderr, "[peek] %08X:", at + i);
                for (std::uint32_t j = 0; j < 16 && i + j < len; j += 4) std::fprintf(stderr, " %08X", ld32(at + i + j));
                std::fprintf(stderr, "\n");
            }
    }
    if (const char *path = std::getenv("PS2_DUMP")) {
        if (std::FILE *f = std::fopen(path, "wb")) {
            std::fwrite(g_ram, 1, kRamSize, f);
            std::fwrite(iop::ram_ptr(0), 1, iop::kRamSize, f);
            std::fwrite(iop::spu2::ram(), 2, 1u << 20, f);
            std::fclose(f);
        }
    }
    debug::print_census();
    debug::print_jitter();
    if (hash_log().hashed)
        std::fprintf(stderr, "[hash] %llu frames hashed, %.3f ms average, %.3f ms max\n", static_cast<unsigned long long>(hash_log().hashed),
                     hash_log().total_ms / static_cast<double>(hash_log().hashed), hash_log().max_ms);
    gs::stats();
    ipu::stats();
    if (const char *path = std::getenv("PS2_DUMP_AUDIO")) iop::spu2::dump_audio(path);
    if (std::getenv("PS2_TRACE_SPU2")) iop::spu2::dump_voices();
    dmac::stats();
    gif::stats();
    vif::stats();
    std::fprintf(stderr, "[ee] stopped after %llu frames, %llu cycles: %s\n",
                 static_cast<unsigned long long>(g_frames), static_cast<unsigned long long>(now()), g_halt_reason.c_str());
    return 0;
}

bool display_frame(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height) { return gs::display(rgba, width, height); }
bool attach_window(const WindowTarget &t) { return gs::attach_window(static_cast<int>(t.kind), t.display, t.window, t.surface, t.selector, t.width, t.height); }
void resize_window(std::uint32_t width, std::uint32_t height) { gs::resize_window(width, height); }
bool present_frame() { return gs::present(); }
void init_graphics() { gs::init(); }
void start_render_thread() { gs::start_thread(); }
void start_vu_thread() { gs::queue::vu().start(32u << 20); }

std::atomic<double> g_vu_idle_ms{0.0};

double vu_thread_idle_ms() { return g_vu_idle_ms.load(); }
std::uint64_t vu1_interpreted_calls() { return vu::interpreted_calls(); }
std::uint64_t vu1_jit_programs() { return vu::jit_programs(); }

void run_vu_thread() {
#ifdef __linux__
    pthread_setname_np(pthread_self(), "vu1");  // perf --sort comm
#endif
    gs::queue::role() = gs::queue::Role::Vu;
    gs::queue::Ring &in = gs::queue::vu();
    for (;;) {
        gs::queue::Header h;
        const std::uint8_t *payload = nullptr;
        while (in.peek(h, payload)) {
            debug::jitter(2);
            if (seamv::on()) {
                if (h.type == gs::queue::kVblank) seamv::vblank(h.arg0);
                else if (h.type == gs::queue::kGif) seamv::gif(static_cast<int>(h.arg0), payload, h.arg1);
            }
            switch (h.type) {
            case gs::queue::kVif1:
                if (vif::null_sink()) break;
                if (gs::drawdbg::enabled()) gs::drawdbg::set_vif1_ra(h.arg1);
                else if (seamv::on()) vif::posted_source(h.arg1);
                vif::transfer(1, payload, h.arg0);
                break;
            case gs::queue::kVif1Write:
                if (!vif::null_sink()) vif::write(1, h.arg0, h.arg1);
                break;
            case gs::queue::kVuReset:
                vif::reset_vu_side();
                vu::reset();
                break;
            case gs::queue::kVuFence:
                if (!h.arg0 && vu::kicks_pending()) std::fprintf(stderr, "[state] a VU1 fence (save/reboot) sends pending XGKICK packets early\n");
                if (!h.arg0) vu::flush_kicks();
                g_vu_fence.fetch_add(1);
                gs::queue::notify(g_vu_fence);
                break;
            default:
                vu::flush_kicks();
                gs::queue::render().post(static_cast<gs::queue::Type>(h.type), h.arg0, h.arg1, payload, h.bytes);
                break;
            }
            in.pop(h);
        }
        const auto start = std::chrono::steady_clock::now();
        in.wait_for_work(50);
        g_vu_idle_ms.store(g_vu_idle_ms.load() + std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count());
    }
}
void post_present() { gs::post_present(); }

std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> g_frame_tap;
bool g_frame_tap_wait = true;
std::atomic<bool> g_frame_tap_on{false};

void enable_frame_tap(bool enabled) { g_frame_tap_on.store(enabled, std::memory_order_relaxed); }

void set_frame_tap(std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> tap, bool wait) {
    g_frame_tap = std::move(tap);
    g_frame_tap_wait = wait;
}

// PS2_FRAME_LOG=file: one line per displayed frame on the render thread: wall ms since the previous one, then the
// texture pack's work in it (key decodes, ms; file loads, ms, MB; key lookups ms; CPU copy of GS memory ms).
void log_frame() {
    static std::FILE *file = [] {
        const char *path = std::getenv("PS2_FRAME_LOG");
        return path ? std::fopen(path, "w") : nullptr;
    }();
    if (!file) return;
    static auto last = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    const gs::texpack::Stats s = gs::texpack::take_stats();
    std::fprintf(file, "%.2f %u %.2f %u %.2f %.1f %.2f %.2f\n", std::chrono::duration<double, std::milli>(now - last).count(), s.decodes, s.decode_ms,
                 s.loads, s.load_ms, s.load_mb, s.key_ms, s.mirror_ms);
    last = now;
}

Rendered render_pending(bool surface, const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> &copy,
                        const std::function<void()> &before_present, double budget_ms) {
    static std::vector<std::uint32_t> frame;
    return gs::render_pending([&](const gs::DisplayRegs &regs) {
        log_frame();
        if (before_present) before_present();
        if (surface) gs::present(regs);
        const bool show = copy && !surface, tap = g_frame_tap && g_frame_tap_on.load(std::memory_order_relaxed);
        if (!show && !tap) return;
        std::uint32_t width = 0, height = 0;
        if (!gs::copy_frame(regs, frame, width, height, tap && g_frame_tap_wait)) return;
        if (show) copy(frame.data(), width, height);
        if (tap) g_frame_tap(frame.data(), width, height);
    }, budget_ms);
}

void wait_render_work(int timeout_ms) { gs::queue::render().wait_for_work(timeout_ms); }
void wake_render_thread() { gs::queue::render().wake(); }
bool copy_frame(std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height) { return gs::copy_frame(rgba, width, height); }

namespace {

// splits "frame:[p1:|p2:]body[:frames]" into its parts; body is left for the caller to parse
bool parse_input_spec(const std::string &spec, Press &press, std::string &body) {
    const auto colon = spec.find(':');
    if (colon == std::string::npos || colon == 0) return false;
    char *end = nullptr;
    press.frame = std::strtoull(spec.c_str(), &end, 10);
    if (end != spec.c_str() + colon) return false;
    std::string rest = spec.substr(colon + 1);
    press.pad = 0;
    if (rest.size() > 3 && (rest[0] == 'p' || rest[0] == 'P') && (rest[1] == '1' || rest[1] == '2') && rest[2] == ':') {
        press.pad = rest[1] - '1';
        rest = rest.substr(3);
    }
    press.frames = 6;
    const auto second = rest.find(':');
    if (second != std::string::npos) {
        press.frames = static_cast<std::uint32_t>(std::strtoul(rest.c_str() + second + 1, nullptr, 10));
        rest = rest.substr(0, second);
    }
    body = rest;
    return !body.empty();
}

}

bool parse_press(const std::string &spec, Press &press) {
    static const char *const kNames[16] = {"select", "l3", "r3", "start", "up", "right", "down", "left",
                                           "l2", "r2", "l1", "r1", "triangle", "circle", "cross", "square"};
    std::string rest;
    if (!parse_input_spec(spec, press, rest)) return false;
    press.stick = false;
    press.buttons = 0;
    std::size_t start = 0;
    while (start <= rest.size()) {
        const auto plus = rest.find('+', start);
        const std::string name = rest.substr(start, plus == std::string::npos ? std::string::npos : plus - start);
        int bit = -1;
        for (int i = 0; i < 16; ++i)
            if (name == kNames[i]) bit = i;
        if (bit < 0) return false;
        press.buttons |= static_cast<std::uint16_t>(1u << bit);
        if (plus == std::string::npos) break;
        start = plus + 1;
    }
    return true;
}

bool parse_stick(const std::string &spec, Press &press) {
    std::string rest;
    if (!parse_input_spec(spec, press, rest)) return false;
    const auto comma = rest.find(',');
    if (comma == std::string::npos) return false;
    char *end = nullptr;
    const long x = std::strtol(rest.c_str(), &end, 0);
    if (end != rest.c_str() + comma) return false;
    const long y = std::strtol(rest.c_str() + comma + 1, &end, 0);
    if (*end != '\0' || x < 0 || x > 255 || y < 0 || y > 255) return false;
    press.stick = true;
    press.buttons = 0;
    press.lx = static_cast<std::uint8_t>(x);
    press.ly = static_cast<std::uint8_t>(y);
    return true;
}

double gpu_busy_ms() { return gs::gpu_busy_ms(); }

float display_aspect() {
    static const float aspect = [] {
        float a = 4.0f, b = 3.0f;
        if (const char *e = std::getenv("PS2_ASPECT")) std::sscanf(e, "%f:%f", &a, &b);
        return a > 0.0f && b > 0.0f ? a / b : 4.0f / 3.0f;
    }();
    return aspect;
}

namespace debug {

bool g_census = std::getenv("PS2_CENSUS") != nullptr;

namespace {

constexpr const char *kCensusNames[kCensusCount] = {
    "gs_download_dma", "gs_download_vif1fifo", "gs_download_qwords", "gs_download_cached", "gs_download_wait", "gs_csr_read",
    "gs_priv_read", "vu1_mem_read", "vu1_mem_write", "vu1_code_read", "vu1_code_write", "vu0_mem_read", "rtc_read", "gs_signal",
    "gs_signal_path1", "gs_signal_path2", "gs_signal_path3", "gs_finish", "gs_label", "intc5_vif1", "d1_pause", "cmsar1"};

struct Counter {
    std::uint64_t count = 0, first = 0, last = 0, frames = 0;
    std::uint32_t pc[8] = {};
    std::uint64_t pc_count[8] = {};
};

Counter g_counters[kCensusCount];

}

void count_slow(Census what, std::uint64_t n) {
    Counter &c = g_counters[what];
    if (!c.count || c.last != g_frames) {
        if (!c.count) c.first = g_frames;
        c.last = g_frames;
        ++c.frames;
    }
    c.count += n;
    const std::uint32_t pc = g_cpu.pc & ~kUnwind;
    for (int i = 0; i < 8; ++i)
        if (c.pc_count[i] == 0 || c.pc[i] == pc) {
            c.pc[i] = pc;
            c.pc_count[i] += n;
            break;
        }
}

void print_census() {
    if (!g_census) return;
    for (int i = 0; i < kCensusCount; ++i) {
        const Counter &c = g_counters[i];
        std::fprintf(stderr, "[census] %s count=%llu", kCensusNames[i], static_cast<unsigned long long>(c.count));
        if (c.count) {
            std::fprintf(stderr, " frames=%llu first=%llu last=%llu pcs", static_cast<unsigned long long>(c.frames),
                         static_cast<unsigned long long>(c.first), static_cast<unsigned long long>(c.last));
            for (int j = 0; j < 8 && c.pc_count[j]; ++j) std::fprintf(stderr, " %08X:%llu", c.pc[j], static_cast<unsigned long long>(c.pc_count[j]));
        }
        std::fprintf(stderr, "\n");
    }
}

namespace {

struct JitterConfig {
    std::uint64_t seed = 0;
    std::uint32_t ppm = 2000;
    bool on = false;
};

const JitterConfig &jitter_config() {
    static const JitterConfig config = [] {
        JitterConfig c;
        if (const char *spec = std::getenv("PS2_JITTER")) {
            char *end = nullptr;
            c.seed = std::strtoull(spec, &end, 10);
            if (end && *end == ',') c.ppm = static_cast<std::uint32_t>(std::strtoul(end + 1, nullptr, 10));
            c.on = true;
            std::fprintf(stderr, "[jitter] seed %llu: %u ppm of hand-offs sleep 0-2 ms\n", static_cast<unsigned long long>(c.seed), c.ppm);
        }
        return c;
    }();
    return config;
}

constexpr int kJitterSites = 8;
std::atomic<std::uint64_t> g_jitter_calls[kJitterSites], g_jitter_sleeps[kJitterSites], g_jitter_us{0};

}

bool g_jitter = std::getenv("PS2_JITTER") != nullptr;

void jitter_slow(int site) {
    const JitterConfig &config = jitter_config();
    thread_local std::mt19937_64 rng(config.seed * 0x9E3779B97F4A7C15ull ^ std::hash<std::thread::id>{}(std::this_thread::get_id()) ^ static_cast<std::uint64_t>(site) << 56);
    const std::uint64_t r = rng();
    site &= kJitterSites - 1;
    g_jitter_calls[site].fetch_add(1, std::memory_order_relaxed);
    if (r % 1000000 >= config.ppm) return;
    const std::uint64_t us = (r >> 24) % 2001;
    std::this_thread::sleep_for(std::chrono::microseconds(us));
    g_jitter_sleeps[site].fetch_add(1, std::memory_order_relaxed);
    g_jitter_us.fetch_add(us, std::memory_order_relaxed);
}

void print_jitter() {
    if (!g_jitter) return;
    std::fprintf(stderr, "[jitter] slept %.1f s; calls/sleeps per site:", static_cast<double>(g_jitter_us.load()) / 1e6);
    for (int i = 0; i < kJitterSites; ++i)
        if (g_jitter_calls[i].load())
            std::fprintf(stderr, " %d:%llu/%llu", i, static_cast<unsigned long long>(g_jitter_calls[i].load()), static_cast<unsigned long long>(g_jitter_sleeps[i].load()));
    std::fprintf(stderr, "\n");
}

}

#ifdef __EMSCRIPTEN__
EM_ASYNC_JS(void, ps2_browser_yield, (), {
    if (!Module.yieldPort) {
        const channel = new MessageChannel();
        Module.yieldWaiters = [];
        channel.port1.onmessage = () => Module.yieldWaiters.shift()();
        Module.yieldPort = channel.port2;
    }
    await new Promise((resolve) => { Module.yieldWaiters.push(resolve); Module.yieldPort.postMessage(0); });
});
void browser_yield() { ps2_browser_yield(); }
#else
void browser_yield() {}
#endif

std::uint64_t frames_run() { return g_frames; }
std::uint64_t primitives_drawn() { return gs::primitives_drawn(); }
void set_pad_buttons(std::uint16_t pressed, int pad) { iop::sio2::set_buttons(pad, pressed); }
void set_pad_axis(int axis, std::uint8_t value, int pad) { iop::sio2::set_axis(pad, axis, value); }
void set_pad_pressure(int button, std::uint8_t value, int pad) { iop::sio2::set_pressure(pad, button, value); }
void set_pad_connected(int pad, bool connected) { iop::sio2::set_connected(pad, connected); }
std::uint16_t pad_rumble(int pad) { return iop::sio2::rumble(pad); }
void set_audio_sink(std::function<void(const std::int16_t *, std::size_t)> sink) { iop::spu2::set_sink(std::move(sink)); }

}
