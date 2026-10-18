// Native lockstep co-op: a C++ port of web/lockstep.js (the protocol), web/lockstep-emu.js (W4 drop-in: the host
// sends its state + memory card, both load it) and of the emulator side in host/web.cpp (LockstepShared,
// lockstep_vblank). Wire format, handshake, input packets, time sync, hash exchange and the state transfer follow
// web/lockstep.md; mksm/notes/native-lockstep.md lists the differences.
//
// Threads: the emulation thread runs lockstep_vblank() at every vblank and waits there for both inputs; the network
// thread (Session) owns the signalling socket and the data channels, samples the local pad when the emulator reaches
// a new frame, sends and receives inputs and control messages. They share the W3 struct below, as the browser's page
// and worker do. libdatachannel's callbacks are queued for the network thread.

#include "lockstep.hpp"

#include "lockstep_json.hpp"
#include "lockstep_net.hpp"
#include "lockstep_rtc.hpp"

#include <poll.h>
#include <sys/eventfd.h>
#include <unistd.h>
#include <zlib.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <map>
#include <memory>
#include <mutex>
#include <random>
#include <sstream>
#include <thread>

extern char **environ;

namespace {

using lockstep::Json;

constexpr int kRing = 64, kInputBytes = 12, kWire = 10, kHeader = 20, kMaxRedundant = 32, kPings = 20, kProtocol = 1;
constexpr double kFrameMs = 16.68, kKeepaliveMs = 50, kStallRetryMs = 16, kOverlayMs = 3000, kSoloMs = 15000, kP2pTimeoutMs = 10000;
constexpr std::size_t kChunk = 64 * 1024, kBufHigh = 4u << 20, kBufLow = 1u << 20;
enum : std::int32_t { kFlagPaused = 1, kFlagResync = 2, kFlagHold = 4 };
enum : std::int32_t { kCmdSnapshot = 1, kCmdLoad = 2 };
enum : std::int32_t { kSnapIdle, kSnapReady, kSnapRetry, kSnapLoaded, kSnapFailed };
constexpr std::uint8_t kPktInput = 1, kPktNeed = 1, kInputPause = 1;
constexpr std::uint8_t kNeutral[kWire] = {0, 0, 128, 128, 128, 128, 0, 0, 0, 0};
// lockstep.js STUN fallback when /turn is not served (host mode)
const char *const kPublicStun[] = {"stun:stun.l.google.com:19302", "stun:stun.cloudflare.com:3478"};

double now_ms() {
    static const auto t0 = std::chrono::steady_clock::now();
    return std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - t0).count();
}

void log(const char *fmt, ...) {
    char line[1024];
    va_list ap;
    va_start(ap, fmt);
    std::vsnprintf(line, sizeof line, fmt, ap);
    va_end(ap);
    std::fprintf(stderr, "[lockstep] %s\n", line);
    std::fflush(stderr);
}

int input_delay(double p95) { return std::clamp(static_cast<int>(std::ceil((p95 / 2 + 8) / kFrameMs)) + 1, 2, 8); }

double percentile(std::vector<double> xs, double p) {
    if (xs.empty()) return 0.0;
    std::sort(xs.begin(), xs.end());
    return xs[std::min(xs.size() - 1, static_cast<std::size_t>(std::floor(p * static_cast<double>(xs.size()))))];
}

// BigInt.prototype.toString(16): lower case, no leading zeros
std::string hex(std::uint64_t v) {
    char buf[20];
    std::snprintf(buf, sizeof buf, "%llx", static_cast<unsigned long long>(v));
    return buf;
}
std::string hex16(std::uint64_t v) {
    char buf[20];
    std::snprintf(buf, sizeof buf, "%016llx", static_cast<unsigned long long>(v));
    return buf;
}

std::int32_t le32(const std::uint8_t *p) { return static_cast<std::int32_t>(p[0] | p[1] << 8 | p[2] << 16 | static_cast<std::uint32_t>(p[3]) << 24); }
void put32(std::uint8_t *p, std::int32_t v) {
    for (int i = 0; i < 4; ++i) p[i] = static_cast<std::uint8_t>(static_cast<std::uint32_t>(v) >> (i * 8));
}

// ---- the W3 struct (web/lockstep.md), here between two threads of one process ----

struct Shared {
    std::atomic<std::int32_t> emu_frame{-1}, seq{0}, delay{0}, active{0}, flags{kFlagHold}, local_slot{0};
    std::atomic<std::int32_t> have[2][kRing];
    std::uint8_t input[2][kRing][kInputBytes] = {};
    std::atomic<std::int32_t> hash_frame{-1}, slow_ms{0};
    // native counterparts of the W4 counters
    std::atomic<std::int32_t> held_frame{-1}, stall_frames{0}, stall_ms{0}, paused_frames{0};
    std::atomic<bool> failed{false};
    std::mutex hash_mutex;  // hash + slices, published together with hash_frame
    std::uint64_t hash = 0, slices[32] = {};
    std::mutex m;  // seq waits (the browser uses a futex on seq)
    std::condition_variable cv;
    // W4: snapshot/load commands (lockstep-emu.js Emu)
    std::atomic<std::int32_t> cmd{0}, snap_state{kSnapIdle}, snap_frame{0}, loaded_frame{-1};
    std::atomic<std::uint64_t> load_hash{0};
    Shared() {
        for (auto &player : have)
            for (auto &slot : player) slot.store(-1);
    }
};

Shared g_ls;
int g_wake = -1;  // eventfd: the emulator wakes the network thread when emu_frame changes
std::mutex g_fail_mutex;
std::string g_fail_reason;
std::atomic<std::uint64_t> g_local_pad{0x0000808080800000ull};  // buttons | lx<<16 | ly<<24 | rx<<32 | ry<<40 | l2<<48 | r2<<56
std::atomic<bool> g_paused{false};
std::function<double()> g_audio_queued_ms;

std::uint64_t pack(const LockstepPad &p) {
    return p.buttons | static_cast<std::uint64_t>(p.lx) << 16 | static_cast<std::uint64_t>(p.ly) << 24 | static_cast<std::uint64_t>(p.rx) << 32 |
           static_cast<std::uint64_t>(p.ry) << 40 | static_cast<std::uint64_t>(p.l2) << 48 | static_cast<std::uint64_t>(p.r2) << 56;
}
LockstepPad unpack(std::uint64_t v) {
    LockstepPad p;
    p.buttons = static_cast<std::uint16_t>(v);
    p.lx = static_cast<std::uint8_t>(v >> 16);
    p.ly = static_cast<std::uint8_t>(v >> 24);
    p.rx = static_cast<std::uint8_t>(v >> 32);
    p.ry = static_cast<std::uint8_t>(v >> 40);
    p.l2 = static_cast<std::uint8_t>(v >> 48);
    p.r2 = static_cast<std::uint8_t>(v >> 56);
    return p;
}
void encode(const LockstepPad &p, std::uint8_t flags, std::uint8_t *out) {
    out[0] = static_cast<std::uint8_t>(p.buttons);
    out[1] = static_cast<std::uint8_t>(p.buttons >> 8);
    out[2] = p.lx, out[3] = p.ly, out[4] = p.rx, out[5] = p.ry, out[6] = p.l2, out[7] = p.r2, out[8] = flags, out[9] = 0;
}

void bump() {
    g_ls.seq.fetch_add(1);
    { std::lock_guard<std::mutex> lock(g_ls.m); }
    g_ls.cv.notify_all();
}
bool has(int p, std::int32_t f) { return g_ls.have[p][f & (kRing - 1)].load() == f; }
const std::uint8_t *get(int p, std::int32_t f) { return g_ls.input[p][f & (kRing - 1)]; }
// the bytes go in first; the store of have[] publishes them
void put(int p, std::int32_t f, const std::uint8_t *wire) {
    std::memcpy(g_ls.input[p][f & (kRing - 1)], wire, kWire);
    g_ls.have[p][f & (kRing - 1)].store(f);
}
void wake_network() {
    const std::uint64_t one = 1;
    if (g_wake >= 0 && ::write(g_wake, &one, sizeof one) < 0) {
    }
}

// ---- emulator side (host/web.cpp lockstep_vblank and friends) ----

std::int32_t g_frame = 0;      // lockstep frame: vblanks plus consumed paused frames, the same on both peers
std::atomic<std::int32_t> g_hash_from{1};  // first frame of a hash window that lies entirely inside the session
std::uint64_t g_parts[32];
double g_next = 0.0;
std::int64_t g_rtc = 0;  // this process's guest RTC epoch (the host's goes to the guest with the state)
std::string g_session_card;  // where a guest keeps the host's memory card (its own card file stays untouched)

// W4 (emulation thread unless noted): the snapshot the host takes, and the state either side loads. The network
// thread fills g_load before it stores kCmdLoad and reads g_snap after kSnapReady; the command word orders them.
std::vector<std::uint8_t> g_snap, g_snap_card;
std::int32_t g_snap_at = 0, g_load_frame = 0;
bool g_snap_retry = false;
struct Load {
    const std::uint8_t *ptr = nullptr;
    std::size_t size = 0;
    std::vector<std::uint8_t> owned, card;
    std::int32_t frame = 0;
    bool card_set = false, rtc_set = false;
    std::int64_t rtc = 0;
} g_load;

void ls_set_pad(int pad, const std::uint8_t *in) {
    ps2::set_pad_buttons(static_cast<std::uint16_t>(in[0] | in[1] << 8), pad);
    ps2::set_pad_axis(0, in[4], pad);
    ps2::set_pad_axis(1, in[5], pad);
    ps2::set_pad_axis(2, in[2], pad);
    ps2::set_pad_axis(3, in[3], pad);
    // pressure is guest-visible: 255 for every pressed button, the struct's L2/R2 pressure when the pad has one
    for (int i = 0; i < 16; ++i) ps2::set_pad_pressure(i, 255, pad);
    ps2::set_pad_pressure(8, in[6] ? in[6] : 255, pad);
    ps2::set_pad_pressure(9, in[7] ? in[7] : 255, pad);
}

// 59.94 Hz (+ slow_ms from the time sync), nudged by at most 0.2% towards ~80 ms of queued sound; after a stall
// longer than a frame the clock restarts instead of catching up
void ls_pace(bool paused) {
    double period = ps2::g_options.pal ? 20.0 : 1000.0 / 59.94;
    if (!paused && g_audio_queued_ms) {
        const double queued = g_audio_queued_ms();
        if (queued > 0.0) period *= 1.0 + 0.002 * std::clamp((queued - 80.0) / 40.0, -1.0, 1.0);
    }
    period += g_ls.slow_ms.load();
    const double now = now_ms();
    if (g_next == 0.0 || now - g_next > period) g_next = now;
    g_next += period;
    if (g_next > now) std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(g_next - now));
}

// part (frame & 31) of the state hash every frame; the window's 32 parts are published at the frame ending in 31
void ls_hash(std::int32_t frame) {
    const unsigned k = static_cast<unsigned>(frame) & 31u;
    g_parts[k] = ps2::hash_part(k);
    if (k != 31 || frame - 31 < g_hash_from) return;
    std::lock_guard<std::mutex> lock(g_ls.hash_mutex);
    std::memcpy(g_ls.slices, g_parts, sizeof g_parts);
    g_ls.hash = ps2::hash_bytes(g_parts, sizeof g_parts);
    g_ls.hash_frame.store(frame);
}

std::uint64_t ls_full_hash() {
    std::uint64_t parts[32];
    for (unsigned k = 0; k < 32; ++k) parts[k] = ps2::hash_part(k);
    return ps2::hash_bytes(parts, sizeof parts);
}

void ls_wait_seq(std::int32_t seq) {
    std::unique_lock<std::mutex> lock(g_ls.m);
    g_ls.cv.wait_for(lock, std::chrono::milliseconds(250), [&] { return g_ls.seq.load() != seq; });
}

void ls_take_load() {
    if (g_load.card_set) {
        ps2::set_memcard_image(g_load.card.data(), g_load.card.size());
        ps2::g_options.memcard_path = g_load.card.empty() ? "" : g_session_card;
        ps2::g_options.on_memcard_saved = nullptr;
    }
    if (g_load.rtc_set) ps2::set_rtc_epoch(g_load.rtc);
    g_load_frame = g_load.frame;
    ps2::request_load_state(g_load.ptr, g_load.size);
}

enum class LsWait { run, solo, command, failed };

// waits at vblank `frame` until both inputs exist, holding while the hold flag is set, and takes snapshot/load commands
LsWait ls_wait(std::int32_t frame) {
    const double start = now_ms();
    bool stalled = false;
    for (;;) {
        const std::int32_t seq = g_ls.seq.load();
        if (g_ls.failed.load()) return LsWait::failed;
        if (ps2::halted()) return LsWait::solo;  // e.g. the window was closed while waiting
        const std::int32_t cmd = g_ls.cmd.exchange(0);
        if (g_snap_retry || cmd == kCmdSnapshot) {
            g_snap_retry = false;
            g_snap_at = frame;
            g_ls.held_frame.store(-1);
            ps2::request_snapshot();
            return LsWait::command;
        }
        if (cmd == kCmdLoad) {
            g_ls.held_frame.store(-1);
            ls_take_load();
            return LsWait::command;
        }
        const std::int32_t flags = g_ls.flags.load();
        if (flags & kFlagHold) {
            if (g_ls.held_frame.exchange(frame) != frame) wake_network();
        } else {
            if (g_ls.held_frame.load() != -1) g_ls.held_frame.store(-1);
            if (!g_ls.active.load()) return LsWait::solo;
            const int at = frame & (kRing - 1);
            if (g_ls.have[0][at].load() == frame && g_ls.have[1][at].load() == frame) {
                if (stalled) g_ls.stall_ms.fetch_add(static_cast<std::int32_t>(now_ms() - start + 0.5));
                return LsWait::run;
            }
            if (!stalled && !(flags & kFlagPaused)) {
                stalled = true;
                g_ls.stall_frames.fetch_add(1);
            }
        }
        ls_wait_seq(seq);
    }
}

// run-loop top after request_snapshot(): publish the state (and card) and wait for the load that both peers run (the
// host reloads its own bytes, so the saver and the loader continue from identical memory)
void lockstep_snapshot(const std::vector<std::uint8_t> *state) {
    if (!state) {
        g_snap_retry = true;  // not at a safe point: snapshot again at the next vblank
        g_ls.snap_state.store(kSnapRetry);
        wake_network();
        return;
    }
    g_snap = *state;
    g_snap_card = ps2::memcard_image();
    g_ls.snap_frame.store(g_snap_at);
    g_ls.snap_state.store(kSnapReady);
    wake_network();
    for (;;) {
        const std::int32_t seq = g_ls.seq.load();
        if (g_ls.failed.load()) return;
        if (g_ls.cmd.load() == kCmdLoad) {
            g_ls.cmd.store(0);
            ls_take_load();
            return;
        }
        ls_wait_seq(seq);
    }
}

void lockstep_loaded(bool ok) {
    if (!ok) {
        g_ls.snap_state.store(kSnapFailed);
        wake_network();
        return;
    }
    g_frame = g_load_frame;
    g_hash_from = g_load_frame + 1;
    g_next = 0.0;
    // the pads' pressure is outside the state: both peers restart it from the same values
    for (int pad = 0; pad < 2; ++pad)
        for (int i = 0; i < 16; ++i) ps2::set_pad_pressure(i, 255, pad);
    g_ls.load_hash.store(ls_full_hash());
    g_ls.loaded_frame.store(g_load_frame);
    g_snap.clear();
    g_snap.shrink_to_fit();
    g_snap_card.clear();
    g_load.owned.clear();
    g_load.owned.shrink_to_fit();
    g_ls.snap_state.store(kSnapLoaded);
    wake_network();
    std::fprintf(stderr, "[lockstep] loaded frame %d (game frame %llu), hash %016llx\n", g_load_frame,
                 static_cast<unsigned long long>(ps2::frame_count()), static_cast<unsigned long long>(g_ls.load_hash.load()));
}

// ---- session config: what both peers must share ----

bool read_file(const std::string &path, std::vector<std::uint8_t> &out) {
    std::ifstream in(path, std::ios::binary);
    if (!in) return false;
    out.assign(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    return true;
}

// SHA-256 (FIPS 180-4), for the browser-compatible disc id
std::string sha256_hex(const std::uint8_t *data, std::size_t size) {
    static constexpr std::uint32_t k[64] = {
        0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be,
        0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa,
        0x5cb0a9dc, 0x76f988da, 0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85,
        0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
        0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f,
        0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
    std::uint32_t h[8] = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
    std::vector<std::uint8_t> m(data, data + size);
    m.push_back(0x80);
    while (m.size() % 64 != 56) m.push_back(0);
    const std::uint64_t bits = static_cast<std::uint64_t>(size) * 8;
    for (int i = 7; i >= 0; --i) m.push_back(static_cast<std::uint8_t>(bits >> (i * 8)));
    const auto rotr = [](std::uint32_t x, int n) { return x >> n | x << (32 - n); };
    for (std::size_t block = 0; block < m.size(); block += 64) {
        std::uint32_t w[64];
        for (int i = 0; i < 16; ++i)
            w[i] = static_cast<std::uint32_t>(m[block + i * 4]) << 24 | m[block + i * 4 + 1] << 16 | m[block + i * 4 + 2] << 8 | m[block + i * 4 + 3];
        for (int i = 16; i < 64; ++i) {
            const std::uint32_t s0 = rotr(w[i - 15], 7) ^ rotr(w[i - 15], 18) ^ (w[i - 15] >> 3);
            const std::uint32_t s1 = rotr(w[i - 2], 17) ^ rotr(w[i - 2], 19) ^ (w[i - 2] >> 10);
            w[i] = w[i - 16] + s0 + w[i - 7] + s1;
        }
        std::uint32_t a = h[0], b = h[1], c = h[2], d = h[3], e = h[4], f = h[5], g = h[6], hh = h[7];
        for (int i = 0; i < 64; ++i) {
            const std::uint32_t t1 = hh + (rotr(e, 6) ^ rotr(e, 11) ^ rotr(e, 25)) + ((e & f) ^ (~e & g)) + k[i] + w[i];
            const std::uint32_t t2 = (rotr(a, 2) ^ rotr(a, 13) ^ rotr(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
            hh = g, g = f, f = e, e = d + t1, d = c, c = b, b = a, a = t1 + t2;
        }
        h[0] += a, h[1] += b, h[2] += c, h[3] += d, h[4] += e, h[5] += f, h[6] += g, h[7] += hh;
    }
    char out[65];
    for (int i = 0; i < 8; ++i) std::snprintf(out + i * 8, 9, "%08x", h[i]);
    return out;
}

// lockstep.js discId: "<size>:<sha256 of the first MB>"
std::string disc_id(const std::string &path) {
    if (path.empty()) return "none";
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    if (!in) return "";
    const std::uint64_t size = static_cast<std::uint64_t>(in.tellg());
    std::vector<std::uint8_t> first(static_cast<std::size_t>(std::min<std::uint64_t>(size, 1u << 20)));
    in.seekg(0);
    in.read(reinterpret_cast<char *>(first.data()), static_cast<std::streamsize>(first.size()));
    return std::to_string(size) + ":" + sha256_hex(first.data(), first.size());
}

std::string basename(const std::string &path) {
    const std::size_t slash = path.find_last_of('/');
    return slash == std::string::npos ? path : path.substr(slash + 1);
}

// Settings that only change how frames look or what is logged: each player picks their own. Every other PS2_*
// variable must be identical on both sides (it goes into config.env), like the browser's RENDER_ONLY list.
bool local_only(const std::string &name) {
    static const char *kNames[] = {"PS2_ASPECT", "PS2_SCALE", "PS2_TEX_PACK", "PS2_TEX_DUMP", "PS2_GS", "PS2_NO_DEINTERLACE", "PS2_DECODE",
                                   "PS2_GPU_FALLBACK", "PS2_GPU_LOW_POWER", "PS2_GPU_PROFILE", "PS2_SDL_RENDERER", "PS2_FPS", "PS2_HASH_LOG",
                                   "PS2_HASH_LOG_EVERY", "PS2_HASH_SPLIT", "PS2_NO_VU_THREAD", "PS2_THREADS", "PS2_ONE_THREAD", "PS2_PNACH",
                                   "PS2_RTC", "PS2_PROFILE", "PS2_PROFILE_FROM", "PS2_CENSUS", "PS2_DRAW_DUMP", "PS2_DUMP_AUDIO",
                                   "PS2_DUMP_STEMS", "PS2_DUMP_VRAM", "PS2_NETPLAY_ASYNC"};
    for (const char *n : kNames)
        if (name == n) return true;
    return name.rfind("PS2_TRACE_", 0) == 0 || name.rfind("PS2_LOCKSTEP_", 0) == 0;
}

// ---- invite cookies: one line per signalling origin, "<origin> <cookie>" ----

std::filesystem::path cookie_file() {
    if (const char *f = std::getenv("PS2_LOCKSTEP_COOKIE_FILE"); f && *f) return f;
    const char *config = std::getenv("XDG_CONFIG_HOME");
    const char *home = std::getenv("HOME");
    const std::filesystem::path base = config && *config ? std::filesystem::path(config) : std::filesystem::path(home ? home : ".") / ".config";
    return base / "ps2run" / "lockstep-cookies";
}

std::map<std::string, std::string> read_cookies() {
    std::map<std::string, std::string> out;
    std::ifstream in(cookie_file());
    for (std::string line; std::getline(in, line);)
        if (const std::size_t sp = line.find(' '); sp != std::string::npos) out[line.substr(0, sp)] = line.substr(sp + 1);
    return out;
}

bool store_cookie(const std::string &origin, const std::string &cookie) {
    auto all = read_cookies();
    all[origin] = cookie;
    const std::filesystem::path path = cookie_file();
    std::error_code ec;
    std::filesystem::create_directories(path.parent_path(), ec);
    const std::filesystem::path tmp = path.string() + ".tmp";
    {
        std::ofstream out(tmp, std::ios::trunc);
        if (!out) return false;
        for (const auto &[o, c] : all) out << o << ' ' << c << '\n';
    }
    std::filesystem::permissions(tmp, std::filesystem::perms::owner_read | std::filesystem::perms::owner_write, ec);
    std::filesystem::rename(tmp, path, ec);
    return !ec;
}

std::string query_param(const std::string &path, const std::string &name) {
    const std::size_t q = path.find('?');
    if (q == std::string::npos) return "";
    std::stringstream ss(path.substr(q + 1));
    for (std::string kv; std::getline(ss, kv, '&');)
        if (kv.rfind(name + "=", 0) == 0) return kv.substr(name.size() + 1);
    return "";
}

// Opens an invite link (signal.mjs /invite?t=…[&room=…]) like a browser would: the answer sets the invite cookie,
// which is stored for the link's origin. A link that is used up still works when a stored cookie is valid.
bool redeem_invite(const std::string &link, std::string &signal, std::string &room, std::string &cookie, std::string &error) {
    lockstep::Url url;
    if (!lockstep::Url::parse(link, url, error)) return false;
    if (url.scheme == "ws" || url.scheme == "wss") url.scheme = url.scheme == "wss" ? "https" : "http";
    const std::string origin = url.origin();
    const std::string stored = read_cookies()[origin];
    int status = 0;
    std::string headers, body;
    if (!lockstep::http_get(url, stored, status, headers, body, error)) return false;
    std::string fresh;
    std::size_t at = 0;
    while ((at = headers.find("\n", at)) != std::string::npos) {
        ++at;
        if (headers.compare(at, 11, "Set-Cookie:") != 0 && headers.compare(at, 11, "set-cookie:") != 0) continue;
        std::string value = headers.substr(at + 11, headers.find("\r\n", at) - at - 11);
        value.erase(0, value.find_first_not_of(' '));
        if (value.rfind("__Host-mksm=", 0) == 0) fresh = value.substr(0, value.find(';'));
    }
    if (!fresh.empty()) {
        cookie = fresh;
        if (!store_cookie(origin, cookie)) log("could not store the invite cookie in %s", cookie_file().c_str());
        else log("invite accepted; cookie stored in %s", cookie_file().c_str());
    } else if (status == 302 && !stored.empty()) {
        cookie = stored;  // already signed in
    } else if (!stored.empty()) {
        cookie = stored;
        log("the invite link answered HTTP %d (used up?); using the stored cookie", status);
    } else {
        error = "the invite link was refused (HTTP " + std::to_string(status) + "): it is invalid, revoked or used up";
        return false;
    }
    signal = std::string(url.tls() ? "wss://" : "ws://") + origin.substr(origin.find("://") + 3);
    room = query_param(url.path, "room");
    return true;
}

// ---- the network side (web/lockstep.js) ----

struct Rtt {
    double p50 = 0, p95 = 0;
    int n = 0;
};

class Session {
public:
    Session(LockstepOptions options, Json hello) : opts_(std::move(options)), hello_(std::move(hello)) {
        // test hooks: drop this fraction of input packets; never send our ICE candidates (P2P fails, the relay takes
        // over, like lockstep.js test.blockIce); skip WebRTC; P2P timeout
        const char *drop = std::getenv("PS2_LOCKSTEP_DROP");
        drop_ = drop ? std::atof(drop) : 0.0;
        block_ice_ = std::getenv("PS2_LOCKSTEP_BLOCK_ICE") != nullptr;
        rtc_allowed_ = lockstep::RtcChannels::available() && !std::getenv("PS2_LOCKSTEP_RELAY");
        const char *timeout = std::getenv("PS2_LOCKSTEP_P2P_TIMEOUT_MS");
        p2p_timeout_ms_ = timeout ? std::atof(timeout) : kP2pTimeoutMs;
    }

    void run();
    std::atomic<bool> finishing{false};

    struct Stats {
        std::uint64_t sent = 0, recv = 0, dropped = 0, need_sends = 0, keepalives = 0, written = 0, hashes_ok = 0, desyncs = 0, disconnects = 0;
        double max_gap_ms = 0;
    } stats;
    bool started = false, is_host = false;
    int D = 0;
    Rtt rtt_start;
    std::int32_t first_frame = 0, last_frame = -1, last_good_hash = -1;
    std::string room, transport = "none", sync_info;

    std::string status() {
        std::lock_guard<std::mutex> lock(status_mutex_);
        return status_;
    }

private:
    void set_status(const std::string &s) {
        std::lock_guard<std::mutex> lock(status_mutex_);
        status_ = s;
    }
    void fail(const std::string &reason) {
        if (g_ls.failed.load()) return;
        {
            std::lock_guard<std::mutex> lock(g_fail_mutex);
            g_fail_reason = reason;
        }
        g_ls.failed.store(true);
        bump();
        set_status("failed: " + reason);
        log("%s", reason.c_str());
    }
    bool failed() const { return g_ls.failed.load(); }
    bool stopping() const { return failed() || (finishing.load() && !running_); }

    void send_signal(const Json &msg) {
        if (ws_.is_open()) ws_.send_text(msg.dump());
    }
    void send_ctl(const Json &msg) {
        if (ch_ && ch_->open()) ch_->send_text(lockstep::kCtl, msg.dump());
    }

    void pump(int timeout_ms);
    Json wait_ctl(const std::string &type, int timeout_ms);
    bool wait_for(const std::function<bool()> &done, int timeout_ms);
    void on_signal(std::string_view text);
    void on_relay(std::string_view frame);
    void start_peer(bool offer);
    std::vector<lockstep::IceServer> ice_servers();
    void on_rtc(const lockstep::RtcEvent &e);
    void flush_ice();
    void use_relay(const char *why);
    void on_ctl(std::string_view text);
    void on_ctl_binary(std::string_view chunk);
    void handshake();
    std::string describe(const std::string &why, const Json &peer) const;
    Rtt measure_rtt(int n);
    void issue_load(const std::uint8_t *ptr, std::size_t size, std::vector<std::uint8_t> owned, std::int32_t frame, const std::vector<std::uint8_t> *card,
                    const std::int64_t *rtc);
    bool wait_loaded(std::uint64_t &hash);
    bool send_blob(const std::vector<std::uint8_t> &bytes, const Json &meta);
    std::int32_t host_sync(int attempt);
    bool guest_sync();
    void begin(std::int32_t frame);
    void on_frame(std::int32_t frame);
    void sample(std::int32_t frame, std::uint8_t *out) const;
    void send_inputs(bool need);
    void on_input(std::string_view packet);
    void time_sync(std::int32_t remote_frame, double remote_adv);
    void tick();
    void reconnected();
    void go_solo();
    void resync();
    void set_delay(int d) {
        D = d;
        g_ls.delay.store(d);
    }
    void compare_hash(std::int32_t f);

    LockstepOptions opts_;
    Json hello_;
    lockstep::WsClient ws_;
    std::unique_ptr<lockstep::Channels> ch_;  // the RTC channels while P2P, the relay after the switch
    lockstep::RtcChannels *rtc_ = nullptr;   // ch_ while it is the WebRTC one
    std::mutex status_mutex_;
    std::string status_ = "starting";
    bool relay_ = false, channels_open_ = false, ws_lost_ = false, have_joined_ = false, peer_left_ = false;
    bool rtc_allowed_ = true, block_ice_ = false, remote_set_ = false;
    double p2p_timeout_ms_ = kP2pTimeoutMs, p2p_deadline_ = 0;
    std::vector<Json> pending_ice_;
    // libdatachannel callbacks, tagged with the peer connection they came from (rtc_gen_)
    std::mutex events_mutex_;
    std::deque<std::pair<int, lockstep::RtcEvent>> events_;
    int rtc_gen_ = 0;
    Json joined_, created_;
    std::deque<Json> ctl_queue_;
    double drop_ = 0.0;
    std::mt19937 rng_{12345};
    // inbound blob (W4 state transfer, gzip on the wire)
    struct BlobIn {
        bool active = false, ready = false, ok = false, error = false;
        std::int64_t id = 0, size = 0, zsize = 0;
        Json meta;
        std::vector<std::uint8_t> bytes;
        z_stream z{};
        double t0 = 0;
    } blob_;
    std::int64_t blob_id_ = 0;

    bool running_ = false, solo_ = false, stalled_ = false, remote_paused_ = false, resync_pending_ = false;
    std::int32_t local_high_ = 0, remote_high_ = 0, acked_by_remote_ = 0, last_hash_frame_ = -1;
    double last_recv_ = 0, last_send_ = 0, disconnected_ = 0, next_tick_ = 0, next_ping_ = 0;
    double local_adv_ = 0, adv_ = 0;
    int slow_ms_ = 0;
    std::uint16_t pkt_seq_ = 0;
    int slot_ = -1;
    std::vector<double> rtts_;
    std::map<std::int32_t, std::string> local_hashes_, remote_hashes_;
    std::map<std::int32_t, Json> local_extra_, remote_extra_;
};

std::unique_ptr<Session> g_session;
std::thread g_thread;

void Session::pump(int timeout_ms) {
    if (running_) timeout_ms = std::clamp(static_cast<int>(std::ceil(next_tick_ - now_ms())), 0, timeout_ms);
    pollfd fds[2];
    int n = 0, ws_at = -1;
    if (ws_.is_open()) {
        fds[n] = {ws_.fd(), static_cast<short>(POLLIN | (ws_.wants_write() ? POLLOUT : 0)), 0};
        ws_at = n++;
    }
    fds[n] = {g_wake, POLLIN, 0};
    const int wake_at = n++;
    ::poll(fds, static_cast<nfds_t>(n), timeout_ms);
    if (fds[wake_at].revents & POLLIN) {
        std::uint64_t v;
        if (::read(g_wake, &v, sizeof v) < 0) {
        }
    }
    if (ws_at >= 0 && (fds[ws_at].revents || ws_.wants_write()) && !ws_.pump() && !ws_lost_) {
        ws_lost_ = true;
        log("lost the connection to the signalling server");
        if (!running_ && !finishing.load() && !(channels_open_ && !relay_)) fail("lost the connection to the signalling server");
    }
    // WebRTC callbacks queued by libdatachannel's threads
    for (;;) {
        std::pair<int, lockstep::RtcEvent> e;
        {
            std::lock_guard<std::mutex> lock(events_mutex_);
            if (events_.empty()) break;
            e = std::move(events_.front());
            events_.pop_front();
        }
        if (e.first == rtc_gen_ && rtc_) on_rtc(e.second);
    }
    // no direct connection within the timeout (strict NATs, no TURN): use the relay instead
    if (rtc_ && !channels_open_ && now_ms() > p2p_deadline_) use_relay("no direct connection");
    if (running_) {
        const std::int32_t f = g_ls.emu_frame.load();
        if (f != last_frame) on_frame(f);
        const double t = now_ms();
        if (t >= next_tick_) {
            tick();
            next_tick_ = t + 10;
        }
        if (t >= next_ping_) {
            send_ctl(Json::object().set("t", "ping").set("i", -1).set("ts", t));
            next_ping_ = t + 1000;
        }
    }
}

Json Session::wait_ctl(const std::string &type, int timeout_ms) {
    const double deadline = now_ms() + timeout_ms;
    for (;;) {
        for (auto it = ctl_queue_.begin(); it != ctl_queue_.end(); ++it)
            if ((*it)["t"].str() == type) {
                Json msg = std::move(*it);
                ctl_queue_.erase(it);
                return msg;
            }
        const double left = deadline - now_ms();
        if (failed() || left <= 0 || finishing.load()) return Json();
        pump(static_cast<int>(std::min(left, 5.0)) + 1);
    }
}

bool Session::wait_for(const std::function<bool()> &done, int timeout_ms) {
    const double deadline = timeout_ms < 0 ? 1e300 : now_ms() + timeout_ms;
    while (!done()) {
        if (stopping() || now_ms() >= deadline) return false;
        pump(5);
    }
    return true;
}

void Session::on_signal(std::string_view text) {
    const Json msg = Json::parse(text);
    const std::string &type = msg["type"].str();
    if (type == "created") created_ = msg;
    else if (type == "joined") {
        joined_ = msg;
        have_joined_ = true;
    } else if (type == "error") {
        const std::string &error = msg["error"].str();
        std::string hint;
        if (error == "not-found") hint = ": no such room (or it expired)";
        else if (error == "full") hint = ": the room already has two players";
        else if (error == "build-mismatch") hint = ": the room was created for a different build";
        if (!have_joined_) fail("signalling error " + error + " (" + msg["request"].str() + ")" + hint);
        else log("signalling error %s (%s)", error.c_str(), msg["request"].str().c_str());
    } else if (type == "peer-joined") log("the other player joined the room");
    else if (type == "peer-left") {
        log("the other player left the room");
        peer_left_ = true;
    } else if (type == "offer") {
        if (relay_) return;
        if (!rtc_) start_peer(false);
        if (!rtc_) return;  // no WebRTC here: start_peer asked for the relay
        rtc_->set_remote_description(msg["sdp"]["type"].str(), msg["sdp"]["sdp"].str());
        remote_set_ = true;
        flush_ice();
    } else if (type == "answer") {
        if (!rtc_) return;
        rtc_->set_remote_description(msg["sdp"]["type"].str(), msg["sdp"]["sdp"].str());
        remote_set_ = true;
        flush_ice();
    } else if (type == "ice") {
        const Json &c = msg["candidate"];
        if (!c.is_object() || c["candidate"].str().empty()) return;
        if (!rtc_ || !remote_set_) pending_ice_.push_back(c);
        else rtc_->add_remote_candidate(c["candidate"].str(), c["sdpMid"].is_string() ? c["sdpMid"].str() : "0");
    } else if (type == "transport") {
        if (msg["mode"].str() == "relay") use_relay("the other player asked");
    } else if (type == "relay-throttle") log("relay throttled by the server");
}

void Session::flush_ice() {
    if (!rtc_) return;
    for (const Json &c : pending_ice_) rtc_->add_remote_candidate(c["candidate"].str(), c["sdpMid"].is_string() ? c["sdpMid"].str() : "0");
    pending_ice_.clear();
}

// GET /turn (coturn credentials, as lockstep.js); public STUN when it is not served (host mode)
std::vector<lockstep::IceServer> Session::ice_servers() {
    std::vector<lockstep::IceServer> out;
    lockstep::Url url;
    std::string error, headers, body;
    int status = 0;
    if (lockstep::Url::parse(opts_.signal, url, error)) {
        url.scheme = url.tls() ? "https" : "http";
        url.path = "/turn";
        if (lockstep::http_get(url, opts_.cookie, status, headers, body, error) && status == 200) {
            const Json turn = Json::parse(body);  // named: a temporary would die before the loop body runs
            for (const Json &s : turn["iceServers"].items()) {
                std::vector<std::string> urls;
                if (s["urls"].is_string()) urls.push_back(s["urls"].str());
                for (const Json &u : s["urls"].items()) urls.push_back(u.str());
                for (const std::string &u : urls) out.push_back({u, s["username"].str(), s["credential"].str()});
            }
        }
    }
    if (!out.empty()) {
        log("ICE servers from /turn: %zu", out.size());
        return out;
    }
    // PS2_LOCKSTEP_STUN=url[,url] replaces the public fallback, "none" leaves only host candidates (local tests)
    const char *stun = std::getenv("PS2_LOCKSTEP_STUN");
    if (!stun)
        for (const char *s : kPublicStun) out.push_back({s, "", ""});
    else if (std::string(stun) != "none") {
        std::stringstream ss(stun);
        for (std::string u; std::getline(ss, u, ',');) out.push_back({u, "", ""});
    }
    log("no ICE servers from /turn (%s): %s", error.empty() ? ("HTTP " + std::to_string(status)).c_str() : error.c_str(),
        out.empty() ? "host candidates only" : "public STUN");
    return out;
}

void Session::start_peer(bool offer) {
    if (relay_) return;
    if (!rtc_allowed_) return use_relay(lockstep::RtcChannels::available() ? "PS2_LOCKSTEP_RELAY is set" : "this build has no WebRTC");
    const int gen = ++rtc_gen_;
    std::string error;
    auto rtc = lockstep::RtcChannels::create(ice_servers(), offer, [this, gen](lockstep::RtcEvent e) {
        {
            std::lock_guard<std::mutex> lock(events_mutex_);
            events_.emplace_back(gen, std::move(e));
        }
        wake_network();
    }, error);
    if (!rtc) return use_relay(error.c_str());
    rtc_ = rtc.get();
    ch_ = std::move(rtc);
    remote_set_ = false;
    p2p_deadline_ = now_ms() + p2p_timeout_ms_;
    transport = "p2p";
    log("WebRTC: %s", offer ? "offering a direct connection" : "answering the other player's offer");
}

void Session::on_rtc(const lockstep::RtcEvent &e) {
    using K = lockstep::RtcEvent;
    switch (e.kind) {
    case K::description:
        send_signal(Json::object().set("type", e.a).set("sdp", Json::object().set("type", e.a).set("sdp", e.b)));
        break;
    case K::candidate:
        if (!block_ice_)
            send_signal(Json::object().set("type", "ice").set("candidate", Json::object().set("candidate", e.a).set("sdpMid", e.b).set("sdpMLineIndex", 0)));
        break;
    case K::state: {
        static const char *kNames[] = {"new", "connecting", "connected", "disconnected", "failed", "closed"};
        log("WebRTC %s", e.state_value >= 0 && e.state_value < 6 ? kNames[e.state_value] : "?");
        if (e.state_value == 4) use_relay("ICE failed");
        break;
    }
    case K::open:
        if (!channels_open_) {
            channels_open_ = true;
            log("direct connection (WebRTC data channels open)");
        }
        break;
    case K::closed:
        break;
    case K::message:
        if (e.ch == lockstep::kIn) on_input(e.a);
        else if (e.text) on_ctl(e.a);
        else on_ctl_binary(e.a);
        break;
    }
}

// Switches both channels to the signalling relay for the rest of the session and tells the peer to do the same
// (lockstep.js useRelay). Idempotent; also used when a direct connection dies mid-session.
void Session::use_relay(const char *why) {
    if (relay_ || !ws_.is_open()) return;
    log("using the relay (%s)", why);
    relay_ = true;
    transport = "relay";
    send_signal(Json::object().set("type", "transport").set("mode", "relay"));
    ++rtc_gen_;  // drop the old peer connection's queued callbacks
    rtc_ = nullptr;
    ch_ = std::make_unique<lockstep::RelayChannels>(ws_);
    channels_open_ = true;
}

void Session::on_relay(std::string_view frame) {
    lockstep::Channel ch;
    std::string_view payload;
    bool text = false;
    if (!lockstep::RelayChannels::decode(frame, ch, payload, text)) return;
    if (!relay_) use_relay("the other player is relaying");  // its 'transport' message may come later
    if (ch == lockstep::kIn) on_input(payload);
    else if (text) on_ctl(payload);
    else on_ctl_binary(payload);
}

void Session::on_ctl(std::string_view text) {
    Json msg = Json::parse(text);
    const std::string t = msg["t"].str();
    if (t == "ping") {
        send_ctl(Json::object().set("t", "pong").set("i", msg["i"]).set("ts", msg["ts"]));
    } else if (t == "pong" && msg["i"].num() < 0) {
        rtts_.push_back(now_ms() - msg["ts"].num());
        if (rtts_.size() > 200) rtts_.erase(rtts_.begin(), rtts_.begin() + 100);
    } else if (t == "hash") {
        const std::int32_t f = static_cast<std::int32_t>(msg["f"].integer(-1));
        if (!running_ || f < first_frame) return;  // from before the last (re)start
        remote_hashes_[f] = msg["h"].str();
        if (!msg["x"].is_null()) remote_extra_[f] = msg["x"];
        compare_hash(f);
    } else if (t == "refuse") {
        const std::string detail = msg["detail"].is_string() ? msg["detail"].str() : "different " + msg["reason"].str();
        fail("the other player refused the session: " + detail);
    } else if (t == "delay") {
        set_delay(static_cast<int>(msg["D"].integer(D)));
        rtts_.push_back(msg["rtt"]["p50"].num());
        log("host set D=%d", D);
    } else if (t == "resync-request") {
        if (is_host) resync_pending_ = true;
    } else if (t == "resync-begin") {
    } else if (t == "blob") {
        // the W4 state transfer: gzip chunks follow on ctl, then blob-end (lockstep.js sendBlob)
        if (blob_.active) inflateEnd(&blob_.z);
        blob_ = BlobIn{};
        blob_.active = true;
        blob_.id = msg["id"].integer();
        blob_.size = msg["size"].integer();
        blob_.meta = msg["meta"];
        blob_.t0 = now_ms();
        blob_.bytes.reserve(static_cast<std::size_t>(std::max<std::int64_t>(0, blob_.size)));
        blob_.error = inflateInit2(&blob_.z, 15 + 32) != Z_OK;
        log("receiving the game state: %.1f MB", static_cast<double>(blob_.size) / 1048576.0);
    } else if (t == "blob-end") {
        if (!blob_.active || msg["id"].integer() != blob_.id) return;
        inflateEnd(&blob_.z);
        blob_.active = false;
        blob_.ok = !blob_.error && static_cast<std::int64_t>(blob_.bytes.size()) == blob_.size;
        blob_.ready = true;
        log("received the game state: %.1f MB gzip in %.0f ms%s", static_cast<double>(blob_.zsize) / 1048576.0, now_ms() - blob_.t0,
            blob_.ok ? "" : " (incomplete or corrupt)");
    } else {
        ctl_queue_.push_back(std::move(msg));
        if (ctl_queue_.size() > 64) ctl_queue_.pop_front();
    }
}

void Session::on_ctl_binary(std::string_view chunk) {
    if (!blob_.active || blob_.error) return;
    blob_.zsize += static_cast<std::int64_t>(chunk.size());
    blob_.z.next_in = reinterpret_cast<Bytef *>(const_cast<char *>(chunk.data()));
    blob_.z.avail_in = static_cast<uInt>(chunk.size());
    while (blob_.z.avail_in) {
        const std::size_t at = blob_.bytes.size();
        blob_.bytes.resize(at + 256 * 1024);
        blob_.z.next_out = blob_.bytes.data() + at;
        blob_.z.avail_out = 256 * 1024;
        const uInt before = blob_.z.avail_in;
        const int r = inflate(&blob_.z, Z_NO_FLUSH);
        const bool progress = blob_.z.avail_out != 256 * 1024 || blob_.z.avail_in != before;
        blob_.bytes.resize(at + 256 * 1024 - blob_.z.avail_out);
        if (r == Z_STREAM_END) break;
        if ((r != Z_OK && r != Z_BUF_ERROR) || !progress) {
            blob_.error = true;
            break;
        }
    }
}

// A refusal names both sides by player number, so the message reads the same on both screens.
std::string Session::describe(const std::string &why, const Json &peer) const {
    const Json &mine = hello_;
    const std::string me = is_host ? "P1" : "P2", them = is_host ? "P2" : "P1";
    const auto both = [&](const std::string &a, const std::string &b) { return me + " has " + a + ", " + them + " has " + b; };
    if (why == "proto") return "protocol version differs (" + both(mine["proto"].dump(), peer["proto"].dump()) + ")";
    if (why == "build") return "different build (" + both(mine["build"].str(), peer["build"].dump()) + "): both players need the same ps2run";
    if (why == "disc") return "different game disc (" + both(mine["disc"].str(), peer["disc"].dump()) + ")";
    const Json &a = mine["config"], &b = peer["config"];
    std::vector<std::string> keys;
    for (const auto &m : a.members()) keys.push_back(m.first);
    for (const auto &m : b.members())
        if (!a.has(m.first)) keys.push_back(m.first);
    for (const std::string &k : keys) {
        if (a[k].dump() == b[k].dump()) continue;
        if (k == "patches") {
            const auto files = [](const Json &hello) {
                std::string s;
                for (const Json &f : hello["patchFiles"].items()) s += (s.empty() ? "" : ",") + f.str();
                const Json &hash = hello["config"]["patches"];
                return s.empty() ? std::string("no game patches") : s + " (" + (hash.is_string() ? hash.str() : hash.dump()) + ")";
            };
            return "game patch set differs: " + both(files(mine), files(peer)) +
                   ". Both players need the same PS2_PNACH files (both with or both without widescreen)";
        }
        return "config." + k + " differs (" + both(a[k].dump(), b[k].dump()) + ")";
    }
    return "config differs";
}

void Session::handshake() {
    set_status("handshake");
    send_ctl(hello_);
    const Json peer = wait_ctl("hello", 10000);
    if (failed() || finishing.load()) return;
    if (peer.is_null()) return fail("no hello from the other player within 10 s");
    for (const char *k : {"proto", "build", "disc", "config"})
        if (peer[k].dump() != hello_[k].dump()) {
            const std::string detail = describe(k, peer);
            send_ctl(Json::object().set("t", "refuse").set("reason", k).set("detail", detail));
            wait_for([] { return false; }, 200);
            return fail("refused: " + detail);
        }
    log("handshake ok over %s (build %s, disc %s, config %s)", transport.c_str(), hello_["build"].str().c_str(), hello_["disc"].str().c_str(),
        hello_["config"].dump().c_str());
    if (is_host) {
        const Rtt rtt = measure_rtt(kPings);
        if (failed() || finishing.load()) return;
        if (!rtt.n) return fail("no RTT samples");
        set_delay(input_delay(rtt.p95));
        rtt_start = rtt;
        log("rtt p50 %.1f p95 %.1f ms -> D=%d", rtt.p50, rtt.p95, D);
        // W4: the guest drops into the host's game (lockstep-emu.js hostSync)
        const std::int32_t frame = host_sync(0);
        if (failed() || finishing.load() || frame < 0) return;
        send_ctl(Json::object()
                     .set("t", "start")
                     .set("D", D)
                     .set("frame", frame)
                     .set("rtt", Json::object().set("p50", rtt.p50).set("p95", rtt.p95).set("n", rtt.n)));
        wait_for([] { return false; }, static_cast<int>(rtt.p50 / 2));  // start when the guest gets 'start'
        begin(frame);
    } else {
        if (!guest_sync()) return;
        const Json start = wait_ctl("start", 60000);
        if (failed() || finishing.load()) return;
        if (start.is_null()) return fail("no start from the host within 60 s");
        set_delay(static_cast<int>(start["D"].integer(2)));
        rtt_start = {start["rtt"]["p50"].num(), start["rtt"]["p95"].num(), static_cast<int>(start["rtt"]["n"].integer())};
        rtts_.push_back(rtt_start.p50);  // time sync needs an RTT before our own pings come back
        log("host set D=%d, first frame %lld", D, static_cast<long long>(start["frame"].integer()));
        begin(static_cast<std::int32_t>(start["frame"].integer(1)));
    }
}

// Hands the emulator a state to load at its held vblank (the host its own snapshot, the guest the host's). `owned`
// keeps received bytes alive until the load; `card` installs a memory card (the guest's session card); `rtc` the
// host's clock.
void Session::issue_load(const std::uint8_t *ptr, std::size_t size, std::vector<std::uint8_t> owned, std::int32_t frame,
                         const std::vector<std::uint8_t> *card, const std::int64_t *rtc) {
    g_load.owned = std::move(owned);
    g_load.ptr = ptr ? ptr : g_load.owned.data();
    g_load.size = size;
    g_load.frame = frame;
    g_load.card_set = card != nullptr;
    g_load.card = card ? *card : std::vector<std::uint8_t>{};
    g_load.rtc_set = rtc != nullptr;
    g_load.rtc = rtc ? *rtc : 0;
    g_ls.snap_state.store(kSnapIdle);
    g_ls.loaded_frame.store(-1);
    g_ls.cmd.store(kCmdLoad);
    bump();
}

bool Session::wait_loaded(std::uint64_t &hash) {
    if (!wait_for([] { const auto s = g_ls.snap_state.load(); return s == kSnapLoaded || s == kSnapFailed; }, 120000)) {
        if (!failed()) fail("the emulator did not load the state");
        return false;
    }
    if (g_ls.snap_state.load() == kSnapFailed) {
        fail("the emulator could not load the state");
        return false;
    }
    hash = g_ls.load_hash.load();
    return true;
}

// lockstep.js sendBlob: {t:'blob', id, size, meta}, the gzip stream in 64 KB binary messages on ctl (waiting while
// more than 4 MB is queued), then {t:'blob-end', id, zsize}
bool Session::send_blob(const std::vector<std::uint8_t> &bytes, const Json &meta) {
    const double t0 = now_ms();
    const std::int64_t id = ++blob_id_;
    send_ctl(Json::object().set("t", "blob").set("id", id).set("size", static_cast<std::int64_t>(bytes.size())).set("meta", meta));
    z_stream z{};
    if (deflateInit2(&z, Z_BEST_SPEED, Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY) != Z_OK) return false;
    z.next_in = const_cast<Bytef *>(bytes.data());
    z.avail_in = static_cast<uInt>(bytes.size());
    std::vector<std::uint8_t> out(kChunk);
    std::int64_t zsize = 0;
    for (int r = Z_OK; r != Z_STREAM_END;) {
        z.next_out = out.data();
        z.avail_out = static_cast<uInt>(out.size());
        r = deflate(&z, Z_FINISH);
        if (r != Z_OK && r != Z_STREAM_END && r != Z_BUF_ERROR) break;
        const std::size_t n = out.size() - z.avail_out;
        if (!n) continue;
        if (ch_->buffered() > kBufHigh) wait_for([&] { return !ch_ || ch_->buffered() <= kBufLow; }, 60000);
        if (failed() || !ch_ || !ch_->open()) {
            deflateEnd(&z);
            return false;
        }
        ch_->send(lockstep::kCtl, out.data(), n, false);
        zsize += static_cast<std::int64_t>(n);
        pump(0);
    }
    deflateEnd(&z);
    send_ctl(Json::object().set("t", "blob-end").set("id", id).set("zsize", zsize));
    log("sent the game state: %.1f MB, %.1f MB gzip in %.0f ms over %s", static_cast<double>(bytes.size()) / 1048576.0,
        static_cast<double>(zsize) / 1048576.0, now_ms() - t0, transport.c_str());
    return true;
}

// lockstep-emu.js hostSync: snapshot at the held vblank F (no upscaled VRAM) with the memory card, send it, reload
// our own bytes, compare the guest's load hash; the session starts at F+1. Returns -1 on failure.
std::int32_t Session::host_sync(int attempt) {
    set_status("sending the game state to the other player");
    g_ls.flags.store(g_ls.flags.load() | kFlagHold);
    bump();
    if (!wait_for([] { return g_ls.held_frame.load() >= 0; }, 60000)) {
        if (!failed()) fail("the emulator did not stop for the snapshot");
        return -1;
    }
    g_ls.snap_state.store(kSnapIdle);
    g_ls.cmd.store(kCmdSnapshot);
    bump();
    const bool ready = wait_for([] {
        if (g_ls.snap_state.load() == kSnapRetry) g_ls.snap_state.store(kSnapIdle);  // not at a safe point: retried next vblank
        return g_ls.snap_state.load() == kSnapReady;
    }, 60000);
    if (!ready) {
        if (!failed()) fail("no snapshot from the emulator");
        return -1;
    }
    // the emulator now waits inside on_snapshot for the load; g_snap stays valid until it has loaded
    const std::int32_t frame = g_ls.snap_frame.load();
    std::vector<std::uint8_t> blob(g_snap);
    blob.insert(blob.end(), g_snap_card.begin(), g_snap_card.end());
    const Json meta = Json::object()
                          .set("frame", frame)
                          .set("stateSize", static_cast<std::int64_t>(g_snap.size()))
                          .set("cardSize", static_cast<std::int64_t>(g_snap_card.size()))
                          .set("rtc", g_rtc)
                          .set("attempt", attempt);
    log("snapshot of frame %d: %.1f MB + card %.1f MB", frame, static_cast<double>(g_snap.size()) / 1048576.0, static_cast<double>(g_snap_card.size()) / 1048576.0);
    issue_load(g_snap.data(), g_snap.size(), {}, frame, nullptr, nullptr);  // our own card stays
    if (!send_blob(blob, meta)) {
        if (!failed()) fail("the state transfer failed");
        return -1;
    }
    blob.clear();
    std::uint64_t mine = 0;
    if (!wait_loaded(mine)) return -1;
    const Json theirs = wait_ctl("loaded", 300000);
    if (failed() || finishing.load()) return -1;
    if (theirs.is_null()) {
        fail("the other player did not load the state");
        return -1;
    }
    const bool ok = theirs["h"].str() == hex(mine) && theirs["f"].integer(-1) == frame;
    send_ctl(Json::object().set("t", "sync-result").set("ok", ok).set("f", frame));
    sync_info = "drop-in at frame " + std::to_string(frame) + ", load hash " + hex(mine) + (ok ? " = " : " != ") + theirs["h"].str();
    log("%s", sync_info.c_str());
    if (!ok) {
        if (attempt >= 2) {
            fail("the loaded states differ");
            return -1;
        }
        return host_sync(attempt + 1);
    }
    return frame + 1;
}

// lockstep-emu.js guestSync: receive the host's state + card, load it at the held vblank, report the load hash
bool Session::guest_sync() {
    for (;;) {
        set_status("receiving the game state");
        if (!wait_for([&] { return blob_.ready; }, 300000)) {
            if (!failed() && !finishing.load()) fail("no game state from the host within 300 s");
            return false;
        }
        blob_.ready = false;
        if (!blob_.ok) {
            fail("the state transfer was cut short");
            return false;
        }
        const Json &m = blob_.meta;
        const std::int64_t state_size = m["stateSize"].integer(-1), card_size = m["cardSize"].integer(0);
        const std::int32_t frame = static_cast<std::int32_t>(m["frame"].integer());
        if (state_size < 0 || card_size < 0 || state_size + card_size > static_cast<std::int64_t>(blob_.bytes.size())) {
            fail("the host's state has a bad size");
            return false;
        }
        if (!wait_for([] { return g_ls.held_frame.load() >= 0; }, 60000)) {
            if (!failed()) fail("the emulator did not stop to load the state");
            return false;
        }
        set_status("loading the game state");
        const std::vector<std::uint8_t> card(blob_.bytes.begin() + state_size, blob_.bytes.begin() + state_size + card_size);
        const std::int64_t rtc = m["rtc"].integer(g_rtc);
        std::vector<std::uint8_t> bytes = std::move(blob_.bytes);
        bytes.resize(static_cast<std::size_t>(state_size));
        issue_load(nullptr, bytes.size(), std::move(bytes), frame, &card, m["rtc"].is_number() ? &rtc : nullptr);
        std::uint64_t hash = 0;
        if (!wait_loaded(hash)) return false;
        send_ctl(Json::object().set("t", "loaded").set("f", frame).set("h", hex(hash)));
        const Json result = wait_ctl("sync-result", 120000);
        if (failed() || finishing.load()) return false;
        if (result.is_null()) {
            fail("no sync result from the host");
            return false;
        }
        sync_info = "drop-in at frame " + std::to_string(frame) + ", load hash " + hex(hash) + (result["ok"].dump() == "true" ? " (host agrees)" : " (host differs)");
        if (result["ok"].dump() == "true") return true;
        log("the host loaded a different state; it sends a new snapshot");
    }
}

Rtt Session::measure_rtt(int n) {
    std::vector<double> samples;
    for (int i = 0; i < n && !failed(); ++i) {
        const double t = now_ms();
        send_ctl(Json::object().set("t", "ping").set("i", i).set("ts", t));
        const Json pong = wait_ctl("pong", 2000);
        if (!pong.is_null()) samples.push_back(now_ms() - pong["ts"].num());
        wait_for([] { return false; }, 5);
    }
    rtts_.insert(rtts_.end(), samples.begin(), samples.end());
    return {percentile(samples, 0.5), percentile(samples, 0.95), static_cast<int>(samples.size())};
}

void Session::begin(std::int32_t F) {
    g_ls.active.store(0);
    for (auto &player : g_ls.have)
        for (auto &slot : player) slot.store(-1);
    g_ls.delay.store(D);
    g_ls.local_slot.store(slot_);
    g_ls.flags.store(g_ls.flags.load() & kFlagHold);  // the hold lasts until active=1 below
    g_ls.slow_ms.store(0);
    stalled_ = false;
    disconnected_ = 0;
    slow_ms_ = 0;
    local_adv_ = adv_ = 0;
    local_hashes_.clear();
    remote_hashes_.clear();
    // frames F..F+D-1 are neutral for both players on both sides, so nothing needs sending for them
    for (std::int32_t f = F; f < F + D; ++f)
        for (int p = 0; p < 2; ++p) put(p, f, kNeutral);
    local_high_ = remote_high_ = acked_by_remote_ = F + D - 1;
    last_frame = F - 1;
    last_recv_ = last_send_ = now_ms();
    last_hash_frame_ = g_ls.hash_frame.load();
    first_frame = F;
    g_hash_from = F;
    g_ls.active.store(1);
    g_ls.flags.store(0);
    bump();
    running_ = started = true;
    next_tick_ = next_ping_ = now_ms();
    set_status("running, P" + std::to_string(slot_ + 1) + ", input delay " + std::to_string(D));
    log("running as P%d from frame %d, input delay D=%d", slot_ + 1, F, D);
}

// lockstep.js readPad + shell.html applyScript: the local controller plus the local player's scripted lines
void Session::sample(std::int32_t frame, std::uint8_t *out) const {
    LockstepPad pad = unpack(g_local_pad.load());
    bool drives = false, stick = false;
    std::uint16_t mask = 0;
    std::uint8_t lx = 128, ly = 128;
    for (const ps2::Press &e : opts_.script) {
        if ((e.pad & 1) != slot_) continue;
        (e.stick ? stick : drives) = true;
        if (frame < static_cast<std::int64_t>(e.frame) || frame >= static_cast<std::int64_t>(e.frame + e.frames)) continue;
        if (e.stick) {
            lx = e.lx;
            ly = e.ly;
        } else {
            mask |= e.buttons;
        }
    }
    if (drives) pad.buttons |= mask;
    if (stick && pad.lx == 128 && pad.ly == 128) {
        pad.lx = lx;
        pad.ly = ly;
    }
    encode(pad, g_paused.load() ? kInputPause : 0, out);
}

// the emulator now waits for frame N: sample the local pad for N+D (and any gap after a D change)
void Session::on_frame(std::int32_t N) {
    last_frame = N;
    if (!solo_) {
        const std::int32_t target = N + D;
        if (target > local_high_) {
            std::uint8_t pad[kWire];
            sample(target, pad);
            for (std::int32_t f = local_high_ + 1; f <= target; ++f) put(slot_, f, pad);
            local_high_ = target;
            bump();
        }
        // missing the remote input for N (a stall) or N+1 (one is coming): ask for a resend now
        const int remote = 1 - slot_;
        stalled_ = !has(remote, N) || !has(remote, N + 1);
        send_inputs(stalled_);
        remote_paused_ = has(remote, N) && (get(remote, N)[8] & kInputPause);
    }
    if (g_ls.hash_frame.load() != last_hash_frame_ && g_ls.hash_frame.load() >= 0) {
        std::int32_t hf;
        std::uint64_t h, parts[32];
        {
            std::lock_guard<std::mutex> lock(g_ls.hash_mutex);
            hf = g_ls.hash_frame.load();
            h = g_ls.hash;
            std::memcpy(parts, g_ls.slices, sizeof parts);
        }
        last_hash_frame_ = hf;
        const std::string hs = hex(h);
        Json extra = Json::array();
        for (const std::uint64_t p : parts) extra.push(hex(p));
        local_hashes_[hf] = hs;
        local_extra_[hf] = extra;
        if (!solo_) send_ctl(Json::object().set("t", "hash").set("f", hf).set("h", hs).set("x", extra));
        compare_hash(hf);
    }
}

void Session::compare_hash(std::int32_t f) {
    const auto a = local_hashes_.find(f), b = remote_hashes_.find(f);
    if (a == local_hashes_.end() || b == remote_hashes_.end()) {
        for (auto *m : {&local_hashes_, &remote_hashes_})
            if (m->size() > 128) m->erase(m->begin());
        for (auto *m : {&local_extra_, &remote_extra_})
            if (m->size() > 128) m->erase(m->begin());
        return;
    }
    const bool same = a->second == b->second;
    if (same) {
        ++stats.hashes_ok;
        last_good_hash = f;
    } else {
        ++stats.desyncs;
        std::string parts;
        const Json &lx = local_extra_[f], &rx = remote_extra_[f];
        for (std::size_t k = 0; k < lx.items().size() && k < rx.items().size(); ++k)
            if (lx.items()[k].str() != rx.items()[k].str())
                parts += (parts.empty() ? "" : ", ") + ("ee" + std::to_string(k) + "MB") +
                         (k == 0 ? "+cpu,spr,events" : k == 8 ? "+iop" : k == 16 ? "+spu2" : k == 24 ? "+vu" : "");
        log("DESYNC at frame %d: local %s remote %s (last good %d; differing parts: %s)", f, a->second.c_str(), b->second.c_str(), last_good_hash,
            parts.empty() ? "unknown" : parts.c_str());
    }
    local_hashes_.erase(a);
    remote_hashes_.erase(b);
    local_extra_.erase(f);
    remote_extra_.erase(f);
}

// u8 kind, u8 count, u8 flags, u8 slot, i32 emu_frame, i32 ack, i32 first, i16 adv*16, u16 seq,
// then count x 10-byte inputs for frames first.. (the oldest unacknowledged first, at most 32)
void Session::send_inputs(bool need) {
    const std::int32_t first = acked_by_remote_ + 1;
    const int count = std::max(0, std::min<std::int32_t>(kMaxRedundant, local_high_ - first + 1));
    std::uint8_t buf[kHeader + kMaxRedundant * kWire];
    buf[0] = kPktInput;
    buf[1] = static_cast<std::uint8_t>(count);
    buf[2] = need ? kPktNeed : 0;
    buf[3] = static_cast<std::uint8_t>(slot_);
    put32(buf + 4, last_frame);
    put32(buf + 8, remote_high_);
    put32(buf + 12, first);
    const auto adv = static_cast<std::int16_t>(std::clamp(std::lround(local_adv_ * 16), -32768l, 32767l));
    buf[16] = static_cast<std::uint8_t>(adv), buf[17] = static_cast<std::uint8_t>(static_cast<std::uint16_t>(adv) >> 8);
    ++pkt_seq_;
    buf[18] = static_cast<std::uint8_t>(pkt_seq_), buf[19] = static_cast<std::uint8_t>(pkt_seq_ >> 8);
    for (int i = 0; i < count; ++i) std::memcpy(buf + kHeader + i * kWire, get(slot_, first + i), kWire);
    last_send_ = now_ms();
    ++stats.sent;
    if (need) ++stats.need_sends;
    if (drop_ > 0 && std::uniform_real_distribution<double>(0, 1)(rng_) < drop_) {
        ++stats.dropped;
        return;
    }
    if (ch_ && ch_->open()) ch_->send(lockstep::kIn, buf, static_cast<std::size_t>(kHeader + count * kWire), false);
}

void Session::on_input(std::string_view packet) {
    if (!running_ || solo_) return;
    const auto *u8 = reinterpret_cast<const std::uint8_t *>(packet.data());
    if (packet.size() < static_cast<std::size_t>(kHeader) || u8[0] != kPktInput) return;
    const double t = now_ms();
    stats.max_gap_ms = std::max(stats.max_gap_ms, t - last_recv_);
    last_recv_ = t;
    ++stats.recv;
    if (disconnected_) reconnected();
    const int count = u8[1];
    const bool need = u8[2] & kPktNeed;
    if (packet.size() < static_cast<std::size_t>(kHeader + count * kWire)) return;
    const std::int32_t remote_frame = le32(u8 + 4), ack = le32(u8 + 8), first = le32(u8 + 12);
    if (ack > acked_by_remote_) acked_by_remote_ = std::min(ack, local_high_);
    const int remote = 1 - slot_;
    const std::int32_t limit = last_frame + kRing - 8;  // never overwrite a slot the emulator has not consumed
    bool wrote = false;
    for (int i = 0; i < count; ++i) {
        const std::int32_t f = first + i;
        if (f <= remote_high_) continue;
        if (f != remote_high_ + 1 || f > limit) break;
        put(remote, f, u8 + kHeader + i * kWire);
        remote_high_ = f;
        ++stats.written;
        wrote = true;
    }
    if (wrote) bump();
    time_sync(remote_frame, static_cast<std::int16_t>(u8[16] | u8[17] << 8) / 16.0);
    // the peer lacks one of our inputs it needs now or next frame: resend at once
    if (need && acked_by_remote_ < local_high_ && t - last_send_ > 4) send_inputs(stalled_);
}

// frame advantage: (mine - theirs) / 2 cancels the one-way latency estimate; the peer ahead by more than a frame
// stretches each frame by 1-2 ms
void Session::time_sync(std::int32_t remote_frame, double remote_adv) {
    const double rtt = rtts_.empty() ? 0.0 : percentile(std::vector<double>(rtts_.end() - std::min<std::size_t>(20, rtts_.size()), rtts_.end()), 0.5);
    const double local = last_frame - (remote_frame + rtt / 2 / kFrameMs);
    local_adv_ += (local - local_adv_) * 0.1;
    adv_ = (local_adv_ - remote_adv) / 2;
    const int slow = adv_ > 1 ? (adv_ > 2 ? 2 : 1) : 0;
    if (slow != slow_ms_) {
        slow_ms_ = slow;
        g_ls.slow_ms.store(slow);
    }
}

void Session::tick() {
    if (!running_ || solo_) return;
    const double t = now_ms();
    const std::int32_t N = last_frame;
    const int remote = 1 - slot_;
    if (stalled_ && has(remote, N) && has(remote, N + 1)) stalled_ = false;
    if (stalled_ && t - last_send_ >= kStallRetryMs) send_inputs(true);
    else if (t - last_send_ >= kKeepaliveMs) {
        ++stats.keepalives;
        send_inputs(false);
    }
    const double silent = t - last_recv_;
    if (silent > kOverlayMs && !disconnected_) {
        disconnected_ = t;
        ++stats.disconnects;
        g_ls.flags.store(g_ls.flags.load() | kFlagPaused);
        bump();
        set_status("connection lost, waiting for the other player");
        log("no packets for %.1f s at frame %d: waiting (solo after %.0f s)", silent / 1000, N, kSoloMs / 1000);
    }
    if (disconnected_ && silent > kSoloMs) go_solo();
}

void Session::reconnected() {
    disconnected_ = 0;
    g_ls.flags.store(g_ls.flags.load() & ~kFlagPaused);
    bump();
    set_status("running, P" + std::to_string(slot_ + 1) + ", input delay " + std::to_string(D));
    log("packets again at frame %d", last_frame);
}

// the remote player is gone: the emulator runs free with the remote slot neutral (active=0)
void Session::go_solo() {
    solo_ = true;
    g_ls.active.store(0);
    g_ls.flags.store(0);
    g_ls.slow_ms.store(0);
    bump();
    set_status("solo");
    log("the other player is gone: continuing solo at frame %d", last_frame);
}

// host only: re-measure RTT and announce a new D; each side fills the gap (D up) or skips sampling (D down)
void Session::resync() {
    resync_pending_ = false;
    g_ls.flags.store(g_ls.flags.load() | kFlagResync);
    send_ctl(Json::object().set("t", "resync-begin"));
    const Rtt rtt = measure_rtt(kPings);
    const int d = input_delay(rtt.p95);
    send_ctl(Json::object().set("t", "delay").set("D", d).set("rtt", Json::object().set("p50", rtt.p50).set("p95", rtt.p95).set("n", rtt.n)));
    set_delay(d);
    g_ls.flags.store(g_ls.flags.load() & ~kFlagResync);
    log("resync: rtt p95 %.1f ms -> D=%d", rtt.p95, d);
}

void Session::run() {
    ws_.on_text = [this](std::string_view t) { on_signal(t); };
    ws_.on_binary = [this](std::string_view b) { on_relay(b); };
    set_status("connecting");
    std::string error;
    const std::string cookie = opts_.cookie.empty() ? "" : "Cookie: " + opts_.cookie;
    if (!ws_.connect(opts_.signal, cookie, error)) return fail("signalling: " + error);
    const std::string build = hello_["build"].str();
    room = opts_.room;
    if (room.empty() || room == "new") {
        send_signal(Json::object().set("type", "create").set("build", build));
        if (!wait_for([&] { return !created_.is_null(); }, 10000)) {
            if (!failed()) fail("signalling: no answer to create");
            return;
        }
        room = created_["room"].str();
        log("created room %s: the other player joins with --room %s", room.c_str(), room.c_str());
    }
    send_signal(Json::object().set("type", "join").set("room", room).set("build", build));
    if (!wait_for([&] { return have_joined_; }, 10000)) {
        if (!failed()) fail("signalling: no answer to join");
        return;
    }
    is_host = joined_["host"].dump() == "true";
    slot_ = is_host ? 0 : 1;
    g_ls.local_slot.store(slot_);
    log("joined room %s as %s (P%d)", room.c_str(), is_host ? "host" : "guest", slot_ + 1);
    if (is_host) {
        // the host plays alone until a guest drops in (active=0: its own controller drives its port)
        g_ls.flags.store(0);
        bump();
    }
    if (!joined_["peer"].is_null()) start_peer(true);  // the newcomer makes the offer (server README)
    else set_status(is_host ? "waiting for the other player (playing alone)" : "waiting for the other player");
    if (!wait_for([&] { return channels_open_; }, -1)) return;
    handshake();
    while (!failed()) {
        if (finishing.load()) {
            // the emulator stopped: settle the last hash windows (both peers stop at the same frame), then leave
            const double deadline = now_ms() + 2000;
            while (running_ && !local_hashes_.empty() && !peer_left_ && !ws_lost_ && now_ms() < deadline) pump(5);
            break;
        }
        if (resync_pending_) resync();
        pump(5);
    }
    running_ = false;
    send_signal(Json::object().set("type", "leave"));
    ++rtc_gen_;
    rtc_ = nullptr;
    ch_.reset();
    ws_.close();
}

}

bool lockstep_start(const LockstepOptions &options_in) {
    LockstepOptions options = options_in;
    // an invite link gives the server, the room and (once redeemed) the cookie; --lockstep/--room override them
    if (!options.invite.empty()) {
        std::string signal, room, cookie, error;
        if (!redeem_invite(options.invite, signal, room, cookie, error)) {
            log("invite: %s", error.c_str());
            return false;
        }
        if (options.signal.empty()) options.signal = signal;
        if (options.room.empty()) options.room = room;
        if (options.cookie.empty()) options.cookie = cookie;
    }
    if (options.signal.empty()) {
        log("no signalling server: pass --lockstep ws[s]://host[:port] or --invite <link>");
        return false;
    }
    if (const char *env = std::getenv("PS2_LOCKSTEP_COOKIE"); env && *env) options.cookie = env;  // override
    if (options.cookie.empty()) {
        lockstep::Url url;
        std::string error;
        if (lockstep::Url::parse(options.signal, url, error)) options.cookie = read_cookies()[url.origin()];
    }
    // build: the executable itself. Peers must run bit-identical code (a different compiler or flags can change
    // floating-point results), and this is what the signalling room is pinned to.
    std::vector<std::uint8_t> bytes;
    if (!read_file("/proc/self/exe", bytes)) {
        log("cannot read the executable for the build hash");
        return false;
    }
    const std::string build = hex16(ps2::hash_bytes(bytes.data(), bytes.size()));
    const std::string disc = disc_id(options.disc_path);
    if (disc.empty()) {
        log("cannot read the disc image %s", options.disc_path.c_str());
        return false;
    }
    // game patch set: PS2_PNACH files (runtime apply_pnach) by content, in order; they change what the game computes
    Json patch_files = Json::array();
    std::string patches = "none";
    if (const char *spec = std::getenv("PS2_PNACH"); spec && *spec) {
        std::vector<std::uint8_t> all;
        const std::string list = spec;
        for (std::size_t at = 0; at < list.size();) {
            const std::size_t end = std::min(list.find(',', at), list.size());
            const std::string file = list.substr(at, end - at);
            at = end + 1;
            if (!read_file(file, bytes)) {
                log("cannot read the game patch %s", file.c_str());
                return false;
            }
            const std::uint64_t size = bytes.size();
            all.insert(all.end(), reinterpret_cast<const std::uint8_t *>(&size), reinterpret_cast<const std::uint8_t *>(&size) + 8);
            all.insert(all.end(), bytes.begin(), bytes.end());
            patch_files.push(basename(file));
        }
        patches = hex16(ps2::hash_bytes(all.data(), all.size()));
    }
    std::vector<std::string> env;
    for (char **e = environ; *e; ++e) {
        const std::string kv = *e;
        if (kv.rfind("PS2_", 0) == 0 && !local_only(kv.substr(0, kv.find('=')))) env.push_back(kv);
    }
    std::sort(env.begin(), env.end());
    Json env_json = Json::array();
    for (const std::string &kv : env) env_json.push(kv);
    const char *rate = ps2::g_options.rate_forced ? (ps2::g_options.pal ? "pal" : "ntsc") : "auto";
    // no start state in the config: the guest drops into the host's game (W4), whatever it booted from
    Json config = Json::object().set("lockstep", 1).set("rate", rate).set("patches", patches).set("env", env_json);
    Json hello = Json::object()
                     .set("t", "hello")
                     .set("proto", kProtocol)
                     .set("build", build)
                     .set("disc", disc)
                     .set("config", config)
                     .set("patchFiles", patch_files);  // not compared: names the patches in a refusal
    log("build %s, disc %s, game patches %s%s, config %s", build.c_str(), disc.c_str(), patches.c_str(),
        patch_files.items().empty() ? "" : (" " + patch_files.dump()).c_str(), config.dump().c_str());
    log("transport: %s; signalling %s", lockstep::RtcChannels::available() ? "WebRTC data channels, relay as fallback" : "relay only (built without libdatachannel)",
        options.signal.c_str());

    // this process's guest clock (PS2_RTC pins it); a guest takes the host's with the state
    const char *pinned = std::getenv("PS2_RTC");
    g_rtc = pinned ? std::strtoll(pinned, nullptr, 10) : static_cast<std::int64_t>(std::time(nullptr));
    ps2::set_rtc_epoch(g_rtc);
    // a guest's copy of the host's memory card lives next to its own card (or in the temp dir), never over it
    g_session_card = !options.memcard_path.empty()
                         ? options.memcard_path + ".session"
                         : (std::filesystem::temp_directory_path() / ("ps2run-lockstep-" + std::to_string(::getpid()) + ".ps2")).string();
    ps2::g_options.on_snapshot = lockstep_snapshot;
    ps2::g_options.on_state_loaded = lockstep_loaded;

    g_wake = ::eventfd(0, EFD_NONBLOCK | EFD_CLOEXEC);
    if (g_wake < 0) {
        log("eventfd failed");
        return false;
    }
    g_audio_queued_ms = options.audio_queued_ms;
    g_session = std::make_unique<Session>(options, std::move(hello));
    g_thread = std::thread([] { g_session->run(); });
    return true;
}

void lockstep_vblank() {
    for (;;) {
        const std::int32_t frame = ++g_frame;
        g_ls.emu_frame.store(frame);
        wake_network();
        ls_hash(frame);
        const LsWait got = ls_wait(frame);
        if (got == LsWait::failed) {
            std::lock_guard<std::mutex> lock(g_fail_mutex);
            ps2::halt("lockstep: " + g_fail_reason);
            return;
        }
        if (got == LsWait::command) return;  // a snapshot or a load comes first; this frame's inputs are not applied
        if (got == LsWait::solo) {
            // no session (the host before a guest arrives, or after the guest left): the local controller drives
            // the local port, the other one stays neutral
            std::uint8_t pad[kWire];
            encode(unpack(g_local_pad.load()), 0, pad);
            const int slot = g_ls.local_slot.load();
            ls_set_pad(slot, pad);
            ls_set_pad(1 - slot, kNeutral);
            ls_pace(false);
            return;
        }
        const std::uint8_t *in0 = get(0, frame), *in1 = get(1, frame);
        if ((in0[8] | in1[8]) & kInputPause) {  // a paused frame: consumed at 60 Hz, the game does not run
            g_ls.paused_frames.fetch_add(1);
            ls_pace(true);
            continue;
        }
        ls_set_pad(0, in0);
        ls_set_pad(1, in1);
        ls_pace(false);
        return;
    }
}

void lockstep_local_pad(const LockstepPad &pad) { g_local_pad.store(pack(pad)); }
void lockstep_set_paused(bool paused) { g_paused.store(paused); }
std::string lockstep_status() { return g_session ? g_session->status() : std::string(); }

int lockstep_finish() {
    if (!g_session) return 0;
    g_session->finishing.store(true);
    wake_network();
    if (g_thread.joinable()) g_thread.join();
    const Session &s = *g_session;
    const bool failed = g_ls.failed.load();
    if (s.started)
        log("summary: room %s, P%d, transport %s, D=%d, rtt p50 %.1f p95 %.1f ms, frames %d-%d, hashes ok %llu, desyncs %llu, "
            "stalls %d frames / %d ms, paused frames %d, packets sent %llu (need %llu, keepalive %llu, dropped %llu) recv %llu, "
            "max gap %.0f ms, disconnects %llu",
            s.room.c_str(), s.is_host ? 1 : 2, s.transport.c_str(), s.D, s.rtt_start.p50, s.rtt_start.p95, s.first_frame, s.last_frame,
            static_cast<unsigned long long>(s.stats.hashes_ok), static_cast<unsigned long long>(s.stats.desyncs), g_ls.stall_frames.load(),
            g_ls.stall_ms.load(), g_ls.paused_frames.load(), static_cast<unsigned long long>(s.stats.sent),
            static_cast<unsigned long long>(s.stats.need_sends), static_cast<unsigned long long>(s.stats.keepalives),
            static_cast<unsigned long long>(s.stats.dropped), static_cast<unsigned long long>(s.stats.recv), s.stats.max_gap_ms,
            static_cast<unsigned long long>(s.stats.disconnects));
    if (!s.sync_info.empty()) log("%s", s.sync_info.c_str());
    else log("summary: the session never started%s", failed ? "" : " (the emulator stopped first)");
    return failed || s.stats.desyncs ? 3 : 0;
}
