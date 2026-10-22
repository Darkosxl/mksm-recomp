#include "lockstep_id.hpp"
#include "ps2/disc.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"

#include <emscripten.h>
#include <emscripten/threading.h>
#include <pthread.h>
#include <unistd.h>

#include <algorithm>
#include <atomic>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <string>
#include <vector>

void register_generated_code();
void register_generated_vu();

EM_JS_DEPS(ps2web, "$stringToNewUTF8,$UTF8ToString");

EM_JS(void, ps2web_fetch, (const char *url, double offset, int size, void *out, std::atomic<std::uint32_t> *state), {
    const target = UTF8ToString(url);
    const finish = (value) => {
        Atomics.store(HEAP32, state >> 2, value);
        Atomics.notify(HEAP32, state >> 2);
    };
    fetch(target, {headers: {Range: 'bytes=' + offset + '-' + (offset + size - 1)}})
        .then((response) => {
            if (response.status !== 206 && response.status !== 200) throw new Error('status ' + response.status);
            return response.arrayBuffer().then((buffer) => {
                let bytes = new Uint8Array(buffer);
                if (response.status === 200) bytes = bytes.subarray(offset, offset + size);
                HEAPU8.set(bytes.subarray(0, Math.min(bytes.length, size)), out);
                finish(3);
            });
        })
        .catch((e) => {
            console.warn('disc read failed', e);
            finish(4);
        });
});

EM_JS(int, ps2web_save_program, (const char *name, const std::uint8_t *code, int size), {
    try {
        const xhr = new XMLHttpRequest();
        xhr.open('PUT', 'vu1/' + UTF8ToString(name), false);
        xhr.send(HEAPU8.slice(code, code + size));
        return xhr.status;
    } catch (e) {
        return 0;
    }
});

EM_JS(double, ps2web_disc_size, (), { return Module.discSize || 0; });
EM_JS(char *, ps2web_state_url, (), { return Module.stateUrl ? stringToNewUTF8(new URL(Module.stateUrl, location.href).href) : 0; });
EM_JS(double, ps2web_url_size, (const char *url), {
    try {
        const xhr = new XMLHttpRequest();
        xhr.open('HEAD', UTF8ToString(url), false);
        xhr.send();
        return xhr.status === 200 ? Number(xhr.getResponseHeader('Content-Length') || 0) : 0;
    } catch (e) {
        return 0;
    }
});
EM_JS(double, ps2web_url_read, (const char *url, std::uint8_t *out, double size), {
    try {
        const xhr = new XMLHttpRequest();
        xhr.open('GET', UTF8ToString(url), false);
        xhr.responseType = 'arraybuffer';
        xhr.send();
        if (xhr.status !== 200) return 0;
        const bytes = new Uint8Array(xhr.response);
        HEAPU8.set(bytes.subarray(0, size), out);
        return bytes.length;
    } catch (e) {
        return 0;
    }
});
EM_JS(char *, ps2web_disc_url, (), { return stringToNewUTF8(new URL(Module.discUrl, location.href).href); });
EM_JS(void, ps2web_frame_done, (std::atomic<std::uint32_t> *shown), {
    if (!Module.shownChannel) {
        Module.shownChannel = new MessageChannel();
        Module.shownWaiters = [];
        Module.shownChannel.port1.onmessage = () => {
            Atomics.add(HEAP32, shown >> 2, 1);  // after the rAF the frame was presented in: one per frame_done
            Atomics.notify(HEAP32, shown >> 2);
            Module.shownPending = false;
            const waiters = Module.shownWaiters;
            Module.shownWaiters = [];
            for (const resolve of waiters) resolve();
        };
    }
    Module.shownPending = true;
    requestAnimationFrame(() => Module.shownChannel.port2.postMessage(0));
    if (Module.onFrame) Module.onFrame();
});
EM_ASYNC_JS(void, ps2web_wait_shown, (), {
    if (Module.shownPending) await new Promise((resolve) => Module.shownWaiters.push(resolve));
});
EM_JS(void, ps2web_blit, (const std::uint32_t *rgba, int width, int height), {
    const canvas = Module.canvas;
    if (!Module.blitContext) Module.blitContext = canvas.getContext('2d');
    if (!Module.blitImage || Module.blitImage.width !== width || Module.blitImage.height !== height) {
        Module.blitImage = new ImageData(width, height);
        Module.blitSource = new OffscreenCanvas(width, height);
    }
    Module.blitImage.data.set(HEAPU8.subarray(rgba, rgba + width * height * 4));
    Module.blitSource.getContext('2d').putImageData(Module.blitImage, 0, 0);
    const ctx = Module.blitContext;
    const scale = Math.min(canvas.width / 4, canvas.height / 3);
    const w = scale * 4, h = scale * 3;
    const sx = Math.max(1, Math.floor(w / width)), sy = Math.max(1, Math.floor(h / height));
    let source = Module.blitSource;
    if (sx > 1 || sy > 1) {
        if (!Module.blitSharp || Module.blitSharp.width !== width * sx || Module.blitSharp.height !== height * sy)
            Module.blitSharp = new OffscreenCanvas(width * sx, height * sy);
        const sharp = Module.blitSharp.getContext('2d');
        sharp.imageSmoothingEnabled = false;
        sharp.drawImage(Module.blitSource, 0, 0, width * sx, height * sy);
        source = Module.blitSharp;
    }
    ctx.fillStyle = '#000';
    ctx.fillRect(0, 0, canvas.width, canvas.height);
    ctx.imageSmoothingEnabled = true;
    ctx.drawImage(source, (canvas.width - w) / 2, (canvas.height - h) / 2, w, h);
});

namespace {

constexpr std::size_t kChunk = 256u << 10;
constexpr std::uint32_t kSlots = 256;
constexpr std::uint64_t kReadAhead = 16;
constexpr std::uint32_t kAudioFrames = 1u << 14;

enum : std::uint32_t { kEmpty, kWanted, kLoading, kReady, kFailed };

struct Slot {
    std::atomic<std::uint32_t> state{kEmpty};
    std::uint64_t index = 0, used = 0;
    std::uint32_t size = 0;
    std::uint8_t *data = nullptr;
};

struct AudioRing {
    std::atomic<std::uint32_t> write{0}, read{0};
    std::uint32_t capacity = kAudioFrames;
    std::atomic<std::uint32_t> active{0};
    std::int16_t samples[kAudioFrames * 2];
};

// Deterministic lockstep (web/lockstep.md). The first 2088 bytes are the W3 interface shared with web/lockstep.js;
// the rest is the W4 extension (snapshot/load commands, stats, desync bisection).
struct LockstepShared {
    std::atomic<std::int32_t> emu_frame{-1};
    std::atomic<std::int32_t> seq{0};
    std::atomic<std::int32_t> delay{0};
    std::atomic<std::int32_t> active{0};
    std::atomic<std::int32_t> flags{0};
    std::atomic<std::int32_t> local_slot{0};
    std::atomic<std::int32_t> have[2][64];
    std::uint8_t input[2][64][12];
    std::atomic<std::int32_t> hash_frame{-1};
    std::atomic<std::int32_t> slow_ms{0};
    std::uint64_t hash = 0;
    // ---- W4 extension ----
    std::atomic<std::int32_t> cmd{0};          // JS: kCmdSnapshot / kCmdLoad (the emulator takes it and writes 0)
    std::atomic<std::int32_t> held_frame{-1};  // emu: the frame it is held at by kFlagHold, else -1
    std::int32_t load_ptr = 0, load_size = 0, load_frame = 0;
    std::int32_t card_ptr = 0, card_size = -1;  // card to install with the load; size -1 keeps the current card
    std::atomic<std::int32_t> snap_state{0};   // emu: kSnap*
    std::int32_t snap_ptr = 0, snap_size = 0, snap_frame = 0;
    std::int32_t card_out_ptr = 0, card_out_size = 0;
    std::int32_t pad0 = 0;
    std::uint64_t load_hash = 0;               // full state hash right after a load (or a snapshot)
    std::atomic<std::int32_t> loaded_frame{-1};
    std::atomic<std::int32_t> disc_wait{0};    // ms the emulation thread has waited on the current disc fetch
    std::atomic<std::int32_t> stall_frames{0};
    std::atomic<std::int32_t> stall_ms{0};
    std::atomic<std::int32_t> paused_frames{0};
    std::atomic<std::int32_t> game_frame{0};
    std::int64_t rtc = 0;                      // JS: guest RTC epoch, installed with the next load when rtc_set
    std::int32_t rtc_set = 0;
    std::int32_t pad1 = 0;
    std::uint64_t slices[32] = {};             // emu: the per-part hashes behind the last published hash
};
static_assert(offsetof(LockstepShared, have) == 24 && offsetof(LockstepShared, input) == 536);
static_assert(offsetof(LockstepShared, hash_frame) == 2072 && offsetof(LockstepShared, slow_ms) == 2076);
static_assert(offsetof(LockstepShared, hash) == 2080 && offsetof(LockstepShared, cmd) == 2088);
static_assert(offsetof(LockstepShared, load_hash) == 2144 && offsetof(LockstepShared, rtc) == 2176);
static_assert(offsetof(LockstepShared, slices) == 2192 && sizeof(LockstepShared) == 2448);

enum : std::int32_t { kFlagPaused = 1, kFlagResync = 2, kFlagHold = 4 };
enum : std::int32_t { kCmdSnapshot = 1, kCmdLoad = 2 };
enum : std::int32_t { kSnapIdle, kSnapReady, kSnapRetry, kSnapLoaded, kSnapFailed };

AudioRing g_audio;
LockstepShared g_ls;
Slot g_slots[kSlots];
std::uint64_t g_disc_size = 0, g_use_clock = 0, g_last_chunk = ~0ull, g_run = 0;
char *g_disc_url = nullptr;
char *g_state_url = nullptr;

// the main loop serves disc reads: it waits on the render ring, or on main work with the GS threads (PS2_WEB_THREADS)
void wake_main() {
    ps2::wake_render_thread();
    ps2::wake_main_thread();
}

Slot *find_slot(std::uint64_t index) {
    for (Slot &s : g_slots)
        if (s.state.load(std::memory_order_acquire) != kEmpty && s.index == index) return &s;
    return nullptr;
}

Slot *want(std::uint64_t index) {
    if (index * kChunk >= g_disc_size) return nullptr;
    if (Slot *s = find_slot(index)) return s;
    Slot *victim = nullptr;
    for (Slot &s : g_slots) {
        const std::uint32_t state = s.state.load(std::memory_order_acquire);
        if (state == kEmpty) {
            victim = &s;
            break;
        }
        if ((state == kReady || state == kFailed) && (!victim || s.used < victim->used)) victim = &s;
    }
    if (!victim) return nullptr;
    if (!victim->data) victim->data = new std::uint8_t[kChunk];
    victim->index = index;
    victim->size = static_cast<std::uint32_t>(std::min<std::uint64_t>(kChunk, g_disc_size - index * kChunk));
    victim->used = ++g_use_clock;
    victim->state.store(kWanted, std::memory_order_release);
    wake_main();
    return victim;
}

void advance(std::uint64_t index) {
    if (index <= g_last_chunk && g_last_chunk - index <= kReadAhead * 4) return;
    g_run = index == g_last_chunk + 1 ? g_run + 1 : 0;
    g_last_chunk = index;
}

void read_ahead(std::uint64_t index) {
    for (std::uint64_t k = 1; k <= std::min(g_run * 2, kReadAhead); ++k) want(index + k);
}

bool lockstep() { return ps2::g_options.lockstep; }

void note_disc_wait(double since) {
    const double waited = emscripten_get_now() - since;
    if (waited > 250.0) g_ls.disc_wait.store(static_cast<std::int32_t>(waited));
}

// Lockstep: a cache miss blocks the emulation thread until the bytes arrive, retrying a failed fetch forever, so
// guest timing never depends on the network (no emulated retry, no zero-fill).
const Slot *chunk_blocking(std::uint64_t index) {
    const double since = emscripten_get_now();
    int failures = 0;
    bool first = true;
    for (;;) {
        Slot *s = want(index);
        if (first) {
            first = false;
            advance(index);
            read_ahead(std::max(index, g_last_chunk));
        }
        if (!s) {  // every slot is being fetched: wait for one to finish
            usleep(2000);
            note_disc_wait(since);
            continue;
        }
        const std::uint32_t state = s->state.load(std::memory_order_acquire);
        if (state == kReady) {
            s->used = ++g_use_clock;
            if (g_ls.disc_wait.load()) g_ls.disc_wait.store(0);
            return s;
        }
        if (state == kFailed) {
            ++failures;
            std::fprintf(stderr, "[web] disc chunk %llu failed %d times, retrying\n", static_cast<unsigned long long>(index), failures);
            usleep(static_cast<useconds_t>(std::min(2000, 100 << std::min(failures, 5)) * 1000));
            s->state.store(kWanted, std::memory_order_release);
            wake_main();
        } else {
            emscripten_futex_wait(&s->state, state, 100);
        }
        note_disc_wait(since);
    }
}

const Slot *chunk(std::uint64_t index) {
    if (lockstep()) return chunk_blocking(index);
    Slot *s = want(index);
    advance(index);
    read_ahead(std::max(index, g_last_chunk));
    for (int attempt = 0; s && attempt < 4; ++attempt) {
        for (std::uint32_t state = s->state.load(); state != kReady && state != kFailed; state = s->state.load())
            emscripten_futex_wait(&s->state, state, INFINITY);
        if (s->state.load() == kReady) {
            s->used = ++g_use_clock;
            return s;
        }
        usleep(100000);
        s->state.store(kWanted, std::memory_order_release);
        wake_main();
    }
    return nullptr;
}

bool disc_ready(std::uint64_t offset, std::size_t size) {
    if (!size) return true;
    const std::uint64_t last = (offset + size - 1) / kChunk;
    bool ready = true;
    for (std::uint64_t index = offset / kChunk; index <= last; ++index) {
        Slot *s = want(index);
        if (s && s->state.load(std::memory_order_acquire) == kFailed) {
            s->state.store(kWanted, std::memory_order_release);
            wake_main();
        }
        ready = ready && s && s->state.load(std::memory_order_acquire) == kReady;
        advance(index);
    }
    read_ahead(std::max(last, g_last_chunk));
    // lockstep: the read itself blocks until the chunks arrive, so the guest always sees a ready drive
    return ready || lockstep();
}

std::size_t read_disc(std::uint64_t offset, void *out, std::size_t size) {
    std::size_t done = 0;
    auto *to = static_cast<std::uint8_t *>(out);
    while (done < size && offset + done < g_disc_size) {
        const std::uint64_t at = offset + done;
        const Slot *c = chunk(at / kChunk);
        if (!c) break;
        const std::size_t within = static_cast<std::size_t>(at % kChunk);
        const std::size_t take = std::min<std::size_t>(size - done, c->size - within);
        std::memcpy(to + done, c->data + within, take);
        done += take;
    }
    return done;
}

void service_disc() {
    for (Slot &s : g_slots) {
        std::uint32_t expected = kWanted;
        if (s.state.compare_exchange_strong(expected, kLoading, std::memory_order_acq_rel))
            ps2web_fetch(g_disc_url, static_cast<double>(s.index * kChunk), static_cast<int>(s.size), s.data, &s.state);
    }
}

void push_audio(const std::int16_t *samples, std::size_t frames) {
    std::uint32_t write = g_audio.write.load(std::memory_order_relaxed);
    const std::uint32_t read = g_audio.read.load(std::memory_order_acquire);
    for (std::size_t i = 0; i < frames && write - read < kAudioFrames; ++i, ++write) {
        const std::uint32_t at = (write & (kAudioFrames - 1)) * 2;
        g_audio.samples[at] = samples[i * 2];
        g_audio.samples[at + 1] = samples[i * 2 + 1];
    }
    g_audio.write.store(write, std::memory_order_release);
}

double audio_queued_ms() { return static_cast<double>(g_audio.write.load() - g_audio.read.load()) / 48.0; }

double g_next_frame = 0.0;
std::atomic<double> g_emulation_idle{0.0}, g_render_idle{0.0}, g_main_busy{0.0};
std::atomic<std::uint32_t> g_shown{0};  // frames on screen: the page counts one per ps2web_frame_done

void pace() {
    ps2::post_present();
    if (g_audio.active.load()) {
        while (audio_queued_ms() > 80.0) usleep(1000);
        g_next_frame = 0.0;
        return;
    }
    const double period = ps2::g_options.pal ? 20.0 : 1000.0 / 59.94;
    const double now = emscripten_get_now();
    if (g_next_frame == 0.0 || now - g_next_frame > 200.0) g_next_frame = now;
    g_next_frame += period;
    if (g_next_frame > now) usleep(static_cast<useconds_t>((g_next_frame - now) * 1000.0));
}

void on_vblank() {
    const double start = emscripten_get_now();
    pace();
    g_emulation_idle.store(g_emulation_idle.load() + emscripten_get_now() - start);
}

// ---- lockstep: the emulator side of web/lockstep.md ----

std::int32_t g_ls_frame = 0;          // lockstep frame: vblanks plus consumed paused frames, the same on both peers
std::int32_t g_ls_hash_from = 0;      // first frame of a hash window that lies entirely after the last load
std::int32_t g_ls_snap_at = 0, g_ls_load_frame = 0;
bool g_ls_snap_retry = false;
std::uint64_t g_ls_parts[32];
double g_ls_next = 0.0;
std::vector<std::uint8_t> g_ls_snapshot, g_ls_card;

void ls_notify(std::atomic<std::int32_t> &word) { emscripten_futex_wake(&word, INT_MAX); }

std::uint64_t combine_parts(const std::uint64_t *parts) { return ps2::hash_bytes(parts, 32 * sizeof *parts); }

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

// 59.94 Hz clock (+ slow_ms from the time sync), nudged by at most 0.2% to keep the audio ring near 80 ms; after a
// stall longer than a frame the clock restarts instead of catching up.
void ls_pace(bool paused) {
    double period = ps2::g_options.pal ? 20.0 : 1000.0 / 59.94;
    if (!paused && g_audio.active.load()) period *= 1.0 + 0.002 * std::clamp((audio_queued_ms() - 80.0) / 40.0, -1.0, 1.0);
    period += g_ls.slow_ms.load();
    const double now = emscripten_get_now();
    if (g_ls_next == 0.0 || now - g_ls_next > period) g_ls_next = now;
    g_ls_next += period;
    if (g_ls_next > now) usleep(static_cast<useconds_t>((g_ls_next - now) * 1000.0));
}

// Part (frame & 31) of the state hash every frame; the window's 32 parts are published at the frame ending in 31.
void ls_hash(std::int32_t frame) {
    const unsigned k = static_cast<unsigned>(frame) & 31u;
    g_ls_parts[k] = ps2::hash_part(k);
    if (k != 31 || frame - 31 < g_ls_hash_from) return;
    std::memcpy(g_ls.slices, g_ls_parts, sizeof g_ls_parts);
    g_ls.hash = combine_parts(g_ls_parts);
    g_ls.hash_frame.store(frame);
}

std::uint64_t ls_full_hash() {
    std::uint64_t parts[32];
    for (unsigned k = 0; k < 32; ++k) parts[k] = ps2::hash_part(k);
    return combine_parts(parts);
}

void ls_take_load() {
    if (g_ls.card_size >= 0) {
        const auto *card = reinterpret_cast<const std::uint8_t *>(static_cast<std::uintptr_t>(g_ls.card_ptr));
        ps2::set_memcard_image(card, static_cast<std::size_t>(g_ls.card_size));
        // the session card lives in memory only: the guest's own card in IndexedDB stays untouched
        ps2::g_options.memcard_path = g_ls.card_size ? "/session/Mcd001.ps2" : "";
        ps2::g_options.on_memcard_saved = nullptr;
    }
    if (g_ls.rtc_set) ps2::set_rtc_epoch(g_ls.rtc);
    g_ls_load_frame = g_ls.load_frame;
    ps2::request_load_state(reinterpret_cast<const std::uint8_t *>(static_cast<std::uintptr_t>(g_ls.load_ptr)), static_cast<std::size_t>(g_ls.load_size));
}

enum class LsWait { run, solo, command };

// Waits at vblank `frame` until both inputs exist, holding while JS sets kFlagHold, and takes snapshot/load commands.
LsWait ls_wait(std::int32_t frame) {
    const double start = emscripten_get_now();
    bool stalled = false;
    for (;;) {
        const std::int32_t seq = g_ls.seq.load();
        const std::int32_t cmd = g_ls.cmd.exchange(0);
        if (g_ls_snap_retry || cmd == kCmdSnapshot) {
            g_ls_snap_retry = false;
            g_ls_snap_at = frame;
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
            if (g_ls.held_frame.exchange(frame) != frame) ls_notify(g_ls.held_frame);
            emscripten_futex_wait(&g_ls.seq, seq, 250);
            continue;
        }
        if (g_ls.held_frame.load() != -1) {
            g_ls.held_frame.store(-1);
            ls_notify(g_ls.held_frame);
        }
        if (!g_ls.active.load()) return LsWait::solo;
        const int at = frame & 63;
        if (g_ls.have[0][at].load() == frame && g_ls.have[1][at].load() == frame) {
            if (stalled) g_ls.stall_ms.fetch_add(static_cast<std::int32_t>(emscripten_get_now() - start + 0.5));
            return LsWait::run;
        }
        if (!stalled && !(flags & kFlagPaused)) {
            stalled = true;
            g_ls.stall_frames.fetch_add(1);
        }
        emscripten_futex_wait(&g_ls.seq, seq, 250);
    }
}

void lockstep_vblank() {
    const double start = emscripten_get_now();
    ps2::post_present();
    for (;;) {
        const std::int32_t frame = ++g_ls_frame;
        g_ls.game_frame.store(static_cast<std::int32_t>(ps2::frame_count()));
        g_ls.emu_frame.store(frame);
        ls_notify(g_ls.emu_frame);
        ls_hash(frame);
        const LsWait got = ls_wait(frame);
        if (got == LsWait::command) break;  // this frame's inputs are not applied: a snapshot or a load comes first
        if (got == LsWait::solo) {
            ls_pace(false);
            break;
        }
        const std::uint8_t *in0 = g_ls.input[0][frame & 63], *in1 = g_ls.input[1][frame & 63];
        if ((in0[8] | in1[8]) & 1) {  // a paused frame: consumed at 60 Hz, the game does not run
            g_ls.paused_frames.fetch_add(1);
            ls_pace(true);
            continue;
        }
        ls_set_pad(0, in0);
        ls_set_pad(1, in1);
        ls_pace(false);
        break;
    }
    g_emulation_idle.store(g_emulation_idle.load() + emscripten_get_now() - start);
}

// Run-loop top after request_snapshot(): publish the state (and card) and hold until JS sends the load that both
// peers run (the host reloads its own bytes, so the saver and the loader continue from identical memory).
void lockstep_snapshot(const std::vector<std::uint8_t> *state) {
    if (!state) {
        g_ls_snap_retry = true;  // not at a safe point: snapshot again at the next vblank
        g_ls.snap_state.store(kSnapRetry);
        ls_notify(g_ls.snap_state);
        return;
    }
    g_ls_snapshot = *state;
    g_ls_card = ps2::memcard_image();
    g_ls.snap_ptr = static_cast<std::int32_t>(reinterpret_cast<std::uintptr_t>(g_ls_snapshot.data()));
    g_ls.snap_size = static_cast<std::int32_t>(g_ls_snapshot.size());
    g_ls.snap_frame = g_ls_snap_at;
    g_ls.card_out_ptr = static_cast<std::int32_t>(reinterpret_cast<std::uintptr_t>(g_ls_card.data()));
    g_ls.card_out_size = static_cast<std::int32_t>(g_ls_card.size());
    g_ls.snap_state.store(kSnapReady);
    ls_notify(g_ls.snap_state);
    std::fprintf(stderr, "[lockstep] snapshot of frame %d: %d KB, card %d KB\n", g_ls_snap_at, g_ls.snap_size >> 10, g_ls.card_out_size >> 10);
    for (;;) {
        const std::int32_t seq = g_ls.seq.load();
        if (g_ls.cmd.load() == kCmdLoad) {
            g_ls.cmd.store(0);
            ls_take_load();
            return;
        }
        emscripten_futex_wait(&g_ls.seq, seq, 250);
    }
}

void lockstep_loaded(bool ok) {
    if (!ok) {
        g_ls.snap_state.store(kSnapFailed);
        ls_notify(g_ls.snap_state);
        return;
    }
    g_ls_frame = g_ls_load_frame;
    g_ls_hash_from = g_ls_load_frame + 1;
    g_ls_next = 0.0;
    // the pads' pressure is outside the state: both peers restart it from the same values
    for (int pad = 0; pad < 2; ++pad)
        for (int i = 0; i < 16; ++i) ps2::set_pad_pressure(i, 255, pad);
    g_ls.load_hash = ls_full_hash();
    g_ls.loaded_frame.store(g_ls_load_frame);
    g_ls_snapshot.clear();
    g_ls_snapshot.shrink_to_fit();
    g_ls_card.clear();
    g_ls.snap_state.store(kSnapLoaded);
    ls_notify(g_ls.snap_state);
    std::fprintf(stderr, "[lockstep] loaded frame %d (game frame %llu), hash %016llx\n", g_ls_load_frame,
                 static_cast<unsigned long long>(ps2::frame_count()), static_cast<unsigned long long>(g_ls.load_hash));
}

struct Launch {
    std::vector<std::string> args;
};

void *emulate(void *data) {
    const Launch &launch = *static_cast<const Launch *>(data);
    if (g_disc_size && !ps2::disc::open("disc", g_disc_size, read_disc, disc_ready)) std::fprintf(stderr, "[web] cannot read the disc image\n");
    std::uint32_t entry = 0;
    if (!ps2::load_elf("/game/core.elf", entry)) {
        std::fprintf(stderr, "cannot load the game executable\n");
        return nullptr;
    }
    ps2::boot(entry, launch.args);
    if (g_state_url) {
        const double size = ps2web_url_size(g_state_url);
        std::vector<std::uint8_t> data(static_cast<std::size_t>(size));
        if (size <= 0 || ps2web_url_read(g_state_url, data.data(), size) != size || !ps2::load_state(data.data(), data.size())) {
            std::fprintf(stderr, "[web] cannot load the state %s\n", g_state_url);
            return nullptr;
        }
    }
    ps2::run();
    return nullptr;
}

}

// while a lockstep session runs, both pads come from the input ring only
bool direct_pads() { return !(ps2::g_options.lockstep && g_ls.active.load()); }

extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_pad(int pad, int buttons, int lx, int ly, int rx, int ry) {
    if (!direct_pads()) return;
    ps2::set_pad_buttons(static_cast<std::uint16_t>(buttons), pad);
    ps2::set_pad_axis(0, static_cast<std::uint8_t>(rx), pad);
    ps2::set_pad_axis(1, static_cast<std::uint8_t>(ry), pad);
    ps2::set_pad_axis(2, static_cast<std::uint8_t>(lx), pad);
    ps2::set_pad_axis(3, static_cast<std::uint8_t>(ly), pad);
}

extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_pad_connected(int pad, int connected) {
    if (ps2::g_options.lockstep) return;  // both ports stay plugged from boot
    ps2::set_pad_connected(pad, connected != 0);
}

extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_pressure(int pad, int a, int b, int c, int d) {
    if (!direct_pads()) return;
    const int packed[4] = {a, b, c, d};
    for (int i = 0; i < 16; ++i) ps2::set_pad_pressure(i, static_cast<std::uint8_t>(static_cast<unsigned>(packed[i / 4]) >> (i % 4 * 8)), pad);
}

extern "C" EMSCRIPTEN_KEEPALIVE int ps2web_rumble(int pad) { return ps2::pad_rumble(pad); }

extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_resize(int width, int height) {
    ps2::resize_window(static_cast<std::uint32_t>(width), static_cast<std::uint32_t>(height));
}

extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_gpu_ms() { return ps2::gpu_busy_ms(); }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_frames() { return static_cast<double>(ps2::frames_run()); }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_primitives() { return static_cast<double>(ps2::primitives_drawn()); }
extern "C" EMSCRIPTEN_KEEPALIVE void *ps2web_audio_ring() { return &g_audio; }
extern "C" EMSCRIPTEN_KEEPALIVE void *ps2web_lockstep() { return &g_ls; }
extern "C" EMSCRIPTEN_KEEPALIVE void *ps2web_alloc(int size) { return std::malloc(static_cast<std::size_t>(size)); }
extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_free(void *p) { std::free(p); }
// The hello's build and config as a desktop peer computes them (host/lockstep_id.cpp), JSON for web/lockstep-emu.js
extern "C" EMSCRIPTEN_KEEPALIVE const char *ps2web_lockstep_identity() {
    static std::string json;
    const lockstep::Identity id = lockstep::identity();
    json = lockstep::Json::object().set("build", id.build).set("config", id.config).set("patchFiles", id.patch_files).set("error", id.error).dump();
    return json.c_str();
}
// test hook for the forced-desync test: flips one byte of EE RAM on this peer only
extern "C" EMSCRIPTEN_KEEPALIVE void ps2web_debug_corrupt(int offset) { ps2::g_ram[static_cast<std::uint32_t>(offset) & (ps2::kRamSize - 1)] ^= 0x5A; }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_audio_queued_ms() { return audio_queued_ms(); }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_vu_interpreted() { return static_cast<double>(ps2::vu1_interpreted_calls()); }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_vu_jit_programs() { return static_cast<double>(ps2::vu1_jit_programs()); }
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_idle_ms(int which) {
    if (which == 3) return g_main_busy.load();  // not idle: the main thread's time running GPU jobs
    if (which == 2) return ps2::vu_thread_idle_ms();
    return which ? g_render_idle.load() : g_emulation_idle.load();
}

// PS2_WEB_THREADS: the GS front end's loop, on its own pthread (gsdraw and gsprim with it). Before each present it waits
// until the frame before is on screen, unless the audio runs dry.
void *gs_front(void *) {
    static const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> none;
    static const std::function<void()> wait_shown = [] {
        static std::uint32_t presents = 0;
        static int since_skip = 0;
        static double window_start = 0.0, window_gpu = 0.0, gpu_load = 1.0;
        const double start = emscripten_get_now();
        if (start - window_start > 500.0) {
            const double gpu = ps2::gpu_busy_ms();
            gpu_load = window_start > 0.0 ? (gpu - window_gpu) / (start - window_start) : 1.0;
            window_start = start;
            window_gpu = gpu;
        }
        if (++since_skip > 8 && gpu_load < 0.8 && g_audio.active.load() && audio_queued_ms() < 40.0) since_skip = 0;
        else
            for (std::uint32_t shown; (shown = g_shown.load()) < presents;) emscripten_futex_wait(&g_shown, shown, 100);
        ++presents;
        g_render_idle.store(g_render_idle.load() + emscripten_get_now() - start);
    };
    for (;;) {
        if (ps2::render_pending(true, none, wait_shown, 6.0) == ps2::Rendered::idle) {
            const double start = emscripten_get_now();
            ps2::wait_render_work(50);
            g_render_idle.store(g_render_idle.load() + emscripten_get_now() - start);
        }
    }
}

int main(int argc, char **argv) {
    static Launch launch;
    for (int i = 2; i < argc; ++i) {
        const std::string a = argv[i];
        if (a == "--arg" && i + 1 < argc) launch.args.push_back(argv[++i]);
        else if (a == "--frames" && i + 1 < argc) ps2::g_options.max_frames = std::strtoull(argv[++i], nullptr, 10);
        else if ((a == "--press" || a == "--press2" || a == "--stick" || a == "--stick2") && i + 1 < argc) {
            ps2::Press press;
            const bool stick = a.compare(0, 7, "--stick") == 0;
            if (!(stick ? ps2::parse_stick(argv[++i], press) : ps2::parse_press(argv[++i], press))) continue;
            if (a.back() == '2') press.pad = 1;
            if (press.pad == 1) ps2::set_pad_connected(1, true);
            ps2::g_options.presses.push_back(press);
        }
    }
    if (launch.args.empty()) {
        std::string boot = "/game/core.elf";
        if (std::FILE *f = std::fopen("/game/boot.txt", "rb")) {
            char text[256] = {};
            const std::size_t n = std::fread(text, 1, sizeof text - 1, f);
            std::fclose(f);
            std::string line(text, n);
            line.erase(line.find_last_not_of(" \r\n\t") + 1);
            if (!line.empty()) boot = line;
        }
        launch.args.push_back(boot);
    }
    g_disc_size = static_cast<std::uint64_t>(ps2web_disc_size());
    g_disc_url = ps2web_disc_url();
    g_state_url = ps2web_state_url();
    ps2::g_options.lockstep = EM_ASM_INT({ return Module.lockstep ? 1 : 0; }) != 0;
    if (ps2::g_options.lockstep) {
        for (auto &row : g_ls.have)
            for (auto &h : row) h.store(-1);
        ps2::g_options.on_vblank = lockstep_vblank;
        ps2::g_options.on_snapshot = lockstep_snapshot;
        ps2::g_options.on_state_loaded = lockstep_loaded;
        ps2::set_pad_connected(1, true);  // both ports plugged from boot, on both peers
        const double epoch = EM_ASM_DOUBLE({ return Module.rtcEpoch || 0; });
        if (epoch > 0) ps2::set_rtc_epoch(static_cast<std::int64_t>(epoch));
        std::fprintf(stderr, "[lockstep] lockstep mode, RTC epoch %.0f, VU1 %s\n", epoch, std::getenv("PS2_NO_VU_THREAD") ? "on the emulation thread" : "thread");
    } else {
        ps2::g_options.on_vblank = on_vblank;
    }
    ps2::g_options.on_vu_program = [](const std::string &name, const std::uint8_t *code, std::size_t size) {
        static bool unsupported = false;
        if (unsupported) return;
        const int status = ps2web_save_program(name.c_str(), code, static_cast<int>(size));
        if (status == 200 || status == 201) std::fprintf(stderr, "[web] saved VU1 program %s\n", name.c_str());
        else unsupported = true;
    };
    if (!EM_ASM_INT({ return Module.noCard ? 1 : 0; })) {
        ps2::g_options.memcard_path = "/memcard/Mcd001.ps2";
        ps2::g_options.on_memcard_saved = [] { MAIN_THREAD_ASYNC_EM_ASM({ if (Module.ps2CardSaved) Module.ps2CardSaved(); }); };
    }
    ps2::set_audio_sink(push_audio);
    register_generated_code();
    register_generated_vu();

    ps2::init_graphics();
    const bool no_surface = EM_ASM_INT({ return Module.noSurface ? 1 : 0; });
    bool copy = EM_ASM_INT({ return Module.presentCopy ? 1 : 0; });
    bool surface = false;
    if (!copy && !no_surface) {
        ps2::WindowTarget target;
        target.kind = ps2::WindowTarget::Canvas;
        target.selector = "#canvas";
        target.width = static_cast<std::uint32_t>(EM_ASM_INT({ return Module.canvas.width; }));
        target.height = static_cast<std::uint32_t>(EM_ASM_INT({ return Module.canvas.height; }));
        surface = ps2::attach_window(target);
    }
    copy = copy || (!surface && !no_surface);
    if (!surface) setenv("PS2_WEB_THREADS", "0", 1);  // the copy path reads frames back in the main loop's render_pending
    const bool threads = ps2::web_gs_threads();
    std::fprintf(stderr, "[web] %s%s\n", surface ? "presenting through WebGPU" : copy ? "presenting through a 2D canvas copy" : "not presenting",
                 threads ? ", the GS on its own threads" : "");

    ps2::start_render_thread();
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 16u << 20);
    if (!std::getenv("PS2_NO_VU_THREAD")) {
        ps2::start_vu_thread();
        pthread_t vu_thread;
        if (pthread_create(&vu_thread, &attr, [](void *) -> void * {
                ps2::run_vu_thread();
                return nullptr;
            }, nullptr) != 0) {
            std::fprintf(stderr, "[web] cannot start the VU thread\n");
            return 1;
        }
    }
    pthread_t thread;
    if (pthread_create(&thread, &attr, emulate, &launch) != 0) {
        std::fprintf(stderr, "[web] cannot start the emulation thread\n");
        return 1;
    }
    const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> blit = [](const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height) {
        ps2web_blit(rgba, static_cast<int>(width), static_cast<int>(height));
    };
    const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> none;
    const std::function<void()> wait_shown = [] {
        static int since_skip = 0;
        static double window_start = 0.0, window_gpu = 0.0, gpu_load = 1.0;
        const double start = emscripten_get_now();
        if (start - window_start > 500.0) {
            const double gpu = ps2::gpu_busy_ms();
            gpu_load = window_start > 0.0 ? (gpu - window_gpu) / (start - window_start) : 1.0;
            window_start = start;
            window_gpu = gpu;
        }
        if (++since_skip > 8 && gpu_load < 0.8 && g_audio.active.load() && audio_queued_ms() < 40.0) {
            since_skip = 0;
            return;
        }
        ps2web_wait_shown();
        g_render_idle.store(g_render_idle.load() + emscripten_get_now() - start);
    };
    if (threads) {
        // the main thread: disc reads and the GS threads' GPU jobs (WebGPU is only callable here), a present per task
        pthread_t front;
        if (pthread_create(&front, &attr, gs_front, nullptr) != 0) {
            std::fprintf(stderr, "[web] cannot start the GS thread\n");
            return 1;
        }
        for (;;) {
            service_disc();
            const std::uint32_t seen = ps2::main_work();
            const double start = emscripten_get_now();
            bool presented = false;
            if (ps2::run_gpu_jobs(8.0, presented)) {
                g_main_busy.store(g_main_busy.load() + emscripten_get_now() - start);
                if (presented) ps2web_frame_done(&g_shown);
                ps2::browser_yield();
            } else {
                ps2::wait_main_work(seen, 50);
            }
        }
    }
    for (;;) {
        service_disc();
        const ps2::Rendered rendered = ps2::render_pending(surface, copy ? blit : none, wait_shown, 6.0);
        if (rendered == ps2::Rendered::presented) ps2web_frame_done(&g_shown);
        if (rendered != ps2::Rendered::idle) {
            ps2::browser_yield();
        } else {
            const double start = emscripten_get_now();
            ps2::wait_render_work(50);
            g_render_idle.store(g_render_idle.load() + emscripten_get_now() - start);
        }
    }
}
