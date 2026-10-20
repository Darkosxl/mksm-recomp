#include "gpu.hpp"
#include "../drawdbg.hpp"
#include "../../native.hpp"
#include "../texpack.hpp"
#include "ps2/system.hpp"
#include "../queue.hpp"

#include <webgpu/webgpu.h>
#ifndef __EMSCRIPTEN__
#include <webgpu/wgpu.h>
#endif

#include <algorithm>
#include <array>
#include <atomic>
#include <cmath>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <map>
#include <memory>
#include <mutex>
#ifdef __linux__
#include <pthread.h>
#endif
#include <string>
#include <thread>
#include <unordered_map>

extern const char kGsShader[];
extern const char kBlitShader[];
extern const char kNativeShader[];

namespace ps2::gs {
void swizzle_tables(std::vector<std::uint32_t> &out);
}

namespace ps2::gs::gpu {

void configure_surface();

namespace {

// kRasterHi: raster with RT_HIRES on, for batches holding F_RT_HIRES sprites (scale > 1 only).
enum Pipeline { kUpload, kCopyRead, kCopyWrite, kLoadClut, kDisplay, kRaster, kResolve, kSnapshot, kDecode, kRasterHi, kPipelines };
const char *const kEntryPoints[kPipelines] = {"upload", "copy_read", "copy_write", "load_clut", "display", "raster", "resolve", "snapshot", "decode", "raster"};

constexpr std::uint32_t kParamStride = 256;
constexpr std::uint32_t kClutSlots = 2048;
constexpr std::uint32_t kClutEntries = 512;
constexpr std::uint32_t kPrimWords = 28;
constexpr std::uint32_t kSetupWords = 32;
constexpr std::uint32_t kDecodedWords = 4u << 20;
// Texture-pack replacements live after the per-batch decodes in the same buffer (only allocated with PS2_TEX_PACK).
constexpr std::uint32_t kReplaced = 1u << 16, kRtHires = 1u << 17;
// A hardware batch's texture read straight from the target it sits on (hw_flush, gs.wgsl F_SOURCE), one of kSources
// a batch binds: kSourceSlot set, the second.
constexpr std::uint32_t kSource = 1u << 18, kSourceSlot = 1u << 19, kSources = 2;
// a source read through VRAM's pages (source_of): kSourcePages, the first target's rows / 32 << kSourceSplit
constexpr std::uint32_t kSourcePages = 1u << 20, kSourceSplit = 21;
// a Z24 texture at a target's Z24 Z buffer, read from its depth (z_source_of, native.wgsl source_texel; one per batch);
// setup word 26 (unused without mipmaps or a replacement) the GS pixels across | down << 16 of the Z buffer's tiles
constexpr std::uint32_t kSourceZ = 1u << 28;
// Texture-pack replacements live in this many words after kDecodedWords (PS2_TEX_PACK_MB, default 256 MB).
const std::uint32_t kReplWords = [] {
    const char *e = std::getenv("PS2_TEX_PACK_MB");
    return static_cast<std::uint32_t>(std::clamp(e ? std::atoi(e) : 256, 16, 1024)) << 18;
}();
constexpr std::uint32_t kDecodePrims = 64;

Mode g_mode = Mode::off;
std::uint64_t g_dispatches[kPipelines] = {}, g_submits = 0;

WGPUInstance g_instance = nullptr;
WGPUAdapter g_adapter = nullptr;
WGPUSurface g_surface = nullptr;
WGPUTextureFormat g_surface_format = WGPUTextureFormat_Undefined;
WGPUPresentMode g_present_mode = WGPUPresentMode_Fifo;
std::uint32_t g_surface_width = 0, g_surface_height = 0;
WGPURenderPipeline g_blit = nullptr;
WGPUBindGroup g_blit_group = nullptr;
WGPUBuffer g_blit_params = nullptr;
std::uint32_t g_field = 0, g_last_width = 0, g_last_height = 0;
bool g_have_previous = false;
// Samples per GS word: g_sx across, g_sy down (PS2_SCALE=n or nxm). Sample k = sub_y * g_sx + sub_x; sample 0 is the
// native position. Display output is g_sx per pixel across and g_rows per line down (g_sx, or g_sy / 2 when g_sy > g_sx:
// then a 224-line field fills a full frame, e.g. 3x6 -> 1920x1344, 4x6 -> 2560x1344 for 16:9).
std::uint32_t g_sx = 1, g_sy = 1, g_rows = 1, g_samples = 1, g_copy_words = 1u << 20, g_field_words = 1u << 19;

std::uint32_t field_base(std::uint32_t field) { return g_copy_words + (field & 1u) * g_field_words; }

bool g_timestamps = false;
WGPUQuerySet g_queries = nullptr;
WGPUBuffer g_query_resolve = nullptr, g_query_read = nullptr;
std::atomic<bool> g_query_pending = false, g_query_ready = false;
std::atomic<std::uint64_t> g_measured_ns = 0, g_measured = 0, g_total_passes = 0;
std::atomic<std::uint64_t> g_compute_passes = 0, g_render_passes = 0;  // passes encoded (each switch between the kinds drains the GPU)
WGPUDevice g_device = nullptr;
WGPUQueue g_queue = nullptr;
WGPUBuffer g_vram = nullptr, g_tables = nullptr, g_params = nullptr, g_data = nullptr, g_clut = nullptr, g_scratch = nullptr, g_readback = nullptr, g_decoded = nullptr;
std::uint32_t g_decoded_used = 0;
// Blocks whose last write was rendering, per page (bit b: block b of the page): their samples may differ, so nothing that
// keeps one value per texel (a decode, a texture-pack key) reads them. Uploads of whole words clear the blocks they fill.
std::uint32_t g_drawn[512] = {};
// Pages whose last write was rendering, with no upload since (not even into part of them): render targets whose samples
// may differ, which F_RT_HIRES sprites read on the fine grid. Uploaded data holds one value per texel.
bool g_rt_pages[512] = {};
// Write generation per page, bumped by every render into it and every upload: a texture decoded earlier in the submit
// is reused while the pages it read keep theirs (plan_decodes).
std::uint32_t g_page_gen[512] = {};
bool g_decode = true;
std::uint64_t g_params_size = 0, g_data_size = 0;
WGPUBindGroupLayout g_layout = nullptr;
WGPUPipelineLayout g_pipeline_layout = nullptr;
WGPUBindGroup g_group = nullptr;
WGPUComputePipeline g_pipelines[kPipelines] = {};

struct Command {
    Pipeline pipeline;
    std::uint32_t x, y;
    std::uint32_t param;
};

struct CommandInfo {
    std::size_t index;
    std::uint32_t values[9];
};
std::vector<CommandInfo> g_command_info;
std::FILE *g_profile_out = nullptr;
std::uint64_t g_profile_from = 0, g_profile_to = 0;
WGPUQuerySet g_profile_queries = nullptr;
WGPUBuffer g_profile_resolve = nullptr, g_profile_read = nullptr;
// PS2_GPU_PROFILE: every pass of a profiled submit, compute commands and native passes alike, in encoding order; the
// span from the first pass's start to the last pass's end minus the passes is what runs between them (barriers, layout
// transitions)
struct ProfPass { const char *what; std::uint32_t command, a, b; };
std::vector<ProfPass> g_prof_passes;
bool g_prof_on = false;
std::uint32_t g_prof_untimed = 0;  // passes past kProfPasses in one submit
constexpr std::uint32_t kProfPasses = 2048;  // 4096 queries, the most a query set may hold
WGPUPassTimestampWrites g_prof_writes = WGPU_PASS_TIMESTAMP_WRITES_INIT;
const WGPUPassTimestampWrites *prof_slot(const char *what, std::uint32_t command, std::uint32_t a = 0, std::uint32_t b = 0) {
    if (!g_prof_on) return nullptr;
    if (g_prof_passes.size() >= kProfPasses) return ++g_prof_untimed, nullptr;
    g_prof_writes = WGPU_PASS_TIMESTAMP_WRITES_INIT;
    g_prof_writes.querySet = g_profile_queries;
    g_prof_writes.beginningOfPassWriteIndex = static_cast<std::uint32_t>(g_prof_passes.size()) * 2;
    g_prof_writes.endOfPassWriteIndex = g_prof_writes.beginningOfPassWriteIndex + 1;
    g_prof_passes.push_back({what, command, a, b});
    return &g_prof_writes;
}

std::vector<Command> g_commands;

// Native renderer, stage 1 (runtime/src/native.hpp, native.wgsl): render passes in the command stream between compute
// dispatches. A kNativeDraws command holds draws [x, x + y) of the job's list; encode_native() records them.
constexpr Pipeline kNativeDraws = static_cast<Pipeline>(kPipelines + 1);
struct Binding;
struct NativeDraw {
    WGPURenderPipeline pipeline = nullptr;
    WGPUTextureView color = nullptr, depth = nullptr, alpha = nullptr;
    std::uint32_t param = 0, vertices = 0, instances = 1, check = 0;  // check: workgroups of the per-vertex oracle (native_check)
    std::uint32_t writeback[3] = {};  // workgroups of a write-back to VRAM (replace): a run's box, or z = one per tile
    WGPUComputePipeline compute = nullptr;  // the write-back's pipeline (default: g_nat.writeback, a run's box)
    Binding *binding = nullptr;  // a tile write-back's target (its bind group, of the views above); none: g_nat.target
    WGPUBindGroup source = nullptr;  // the render pipelines' group 1: the targets a hardware batch reads (kSource)
    std::uint32_t scissor[4] = {};
    double constant = 0.0;  // blend constant (FIX / 128)
};
std::vector<NativeDraw> g_native_draws;
std::size_t g_native_emitted = 0;
std::uint64_t g_hoisted = 0;  // commands moved ahead of render passes (hoist_commands)
WGPUBindGroupLayout g_native_layout = nullptr;
WGPUBindGroup g_native_group = nullptr;
WGPUComputePipeline g_native_check = nullptr;
WGPUBuffer g_native_checks = nullptr;
void encode_native(WGPUCommandEncoder enc, const Command &c, const std::vector<NativeDraw> &draws);
std::vector<std::array<std::uint32_t, kParamStride / 4>> g_param_records;
struct Arena {
    std::unique_ptr<std::uint32_t[]> words;
    std::size_t used = 0, capacity = 0;

    std::uint32_t *grow(std::size_t count) {
        if (used + count > capacity) {
            std::size_t next = std::max<std::size_t>(capacity * 2, 1u << 20);
            while (next < used + count) next *= 2;
            auto bigger = std::make_unique_for_overwrite<std::uint32_t[]>(next);
            if (used) std::memcpy(bigger.get(), words.get(), used * 4);
            words = std::move(bigger);
            capacity = next;
        }
        std::uint32_t *at = words.get() + used;
        used += count;
        return at;
    }
    std::size_t size() const { return used; }
    bool empty() const { return !used; }
    void clear() { used = 0; }
    std::uint32_t *data() { return words.get(); }
    std::uint32_t &operator[](std::size_t i) { return words[i]; }
} g_arena;
std::uint32_t g_clut_slot = 0, g_clut_loads = 0;

// With the render thread on its own, submits run on a worker thread (submit()). Buffer writes made on the render thread
// then travel with the next job, so the queue sees them in the same order as before.
struct Write {
    WGPUBuffer buffer;
    std::uint64_t offset;
    std::vector<std::uint8_t> bytes;
};
std::vector<Write> g_writes;
bool g_worker_on = false;  // render thread only

void queue_write(WGPUBuffer buffer, std::uint64_t offset, const void *data, std::uint64_t size) {
    if (!g_worker_on) return wgpuQueueWriteBuffer(g_queue, buffer, offset, data, size);
    const auto *p = static_cast<const std::uint8_t *>(data);
    g_writes.push_back({buffer, offset, std::vector<std::uint8_t>(p, p + size)});
}

struct Image {
    bool active = false;
    std::uint32_t dbp = 0, dbw = 0, dpsm = 0, dsax = 0, dsay = 0, rrw = 0, total = 0, done = 0, bpp = 32, lead_bits = 0, id = 0;
    std::vector<std::uint8_t> pending;
} g_image;
std::uint32_t g_image_ids = 0;

struct Range {
    std::uint64_t lo = ~0ull, hi = 0;
    bool overlaps(std::uint64_t a, std::uint64_t b) const { return lo < b && a < hi; }
    void add(std::uint64_t a, std::uint64_t b) {
        lo = std::min(lo, a);
        hi = std::max(hi, b);
    }
};

struct Batch {
    std::vector<std::uint32_t> prims;
    std::vector<std::uint32_t> setups;
    std::vector<std::uint32_t> boxes;
    std::uint64_t key = ~0ull;
    int minx = 1 << 30, miny = 1 << 30, maxx = -1, maxy = -1;
    std::uint32_t fbp = 0, fbw = 0, fpsm = 0, zbp = 0, zpsm = 0;
    bool zte = false, zwrite = false;
    std::size_t run_start = 0;
    bool hw = false;  // PS2_GS_HW: drawn by the render pipeline (hw_flush), not the compute raster
    Binding *binding = nullptr;  // hw: the cached target it draws into
    int rx0 = 0, ry0 = 0, rx1 = -2, ry1 = -2;
    Range fb_range, z_range;
    std::vector<std::pair<std::uint32_t, std::uint32_t>> dbg_draws;  // frame debugger: (draw id, primitives) in this batch
} g_batch;

struct SetupCache {
    std::uint32_t generation = ~0u, clut = ~0u;
    std::uint64_t attr = ~0ull;
    std::uint32_t setup[kSetupWords] = {};
    std::uint32_t flags = 0;
    std::uint64_t key = 0;
    Range tex;
    Range levels[7];
    std::uint32_t mips = 0;
    std::uint8_t hw = 0;  // why the hardware GS renderer cannot draw the setup (hw_setup; kHwOk: it can)
} g_setup_cache;

bool g_hw = false;  // PS2_GS_HW=1: the hardware GS renderer, step 1 (hw_flush)
enum HwReject : std::uint8_t { kHwOk, kHwDate, kHwPabe, kHwFbmsk, kHwAmsk, kHwFormat, kHwWidth, kHwBlend, kHwZNever, kHwANever, kHwPrim, kHwReasons };
void hw_flush();
std::uint8_t hw_setup(const std::uint32_t *w);
void hw_bind(const std::uint32_t *w);

struct PreOp {
    bool clut = false;
    std::uint32_t rec[12] = {};
    Range range;
    std::uint32_t x0 = 0, y0 = 0, x1 = 0, y1 = 0, image = 0;
};

bool uploads_overlap(const PreOp &a, const PreOp &b) {
    if (a.image && a.image == b.image) return false;
    if (!a.range.overlaps(b.range.lo, b.range.hi)) return false;
    if (a.rec[0] != b.rec[0] || a.rec[1] != b.rec[1] || a.rec[2] != b.rec[2]) return true;
    return a.x0 <= b.x1 && b.x0 <= a.x1 && a.y0 <= b.y1 && b.y0 <= a.y1;
}

// Uploads and CLUT loads run before the pending primitive batch unless they touch memory it reads or writes.
std::vector<PreOp> g_pre;
std::vector<Range> g_batch_reads;

int g_tiles_per_row = 128;
std::vector<std::uint32_t> g_tile_count(128 * 128), g_tile_fill(128 * 128);
std::vector<std::uint32_t> g_touched;

WGPUStringView view(const char *s) { return WGPUStringView{s, WGPU_STRLEN}; }

std::uint32_t bits_per_pixel(std::uint32_t psm) {
    switch (psm) {
    case PSMCT24: case PSMZ24: return 24;
    case PSMCT16: case PSMCT16S: case PSMZ16: case PSMZ16S: return 16;
    case PSMT8: case PSMT8H: return 8;
    case PSMT4: case PSMT4HL: case PSMT4HH: return 4;
    default: return 32;
    }
}

void page_size(std::uint32_t psm, std::uint32_t &pw, std::uint32_t &ph) {
    switch (psm) {
    case PSMCT16: case PSMCT16S: case PSMZ16: case PSMZ16S: pw = 64; ph = 64; break;
    case PSMT8: pw = 128; ph = 64; break;
    case PSMT4: pw = 128; ph = 128; break;
    default: pw = 64; ph = 32; break;
    }
}

Range region(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1) {
    std::uint32_t pw, ph;
    page_size(psm, pw, ph);
    const std::uint64_t per_row = std::max<std::uint32_t>(1, bw * 64 / pw);
    const auto page = [&](int x, int y) {
        return static_cast<std::uint64_t>(bp) * 256 + (static_cast<std::uint64_t>(std::max(x, 0)) / pw + static_cast<std::uint64_t>(std::max(y, 0)) / ph * per_row) * 8192;
    };
    Range r;
    r.add(std::min(page(x0, y0), static_cast<std::uint64_t>(bp) * 256), page(x1, y1) + 8192);
    return r;
}

// Highest mipmap level a setup can sample: MXL when MMIN selects a *_MIPMAP_* filter, else 0.
std::uint32_t mip_levels(const std::uint32_t *w) {
    const std::uint32_t mmin = (w[25] >> 4) & 7u;
    return mmin >= 2 && mmin <= 5 ? (w[25] >> 1) & 7u : 0u;
}

// GS memory a mipmap level occupies (level 0 included), as far as the CLAMP mode lets coordinates reach.
Range level_range(const std::uint32_t *w, std::uint32_t n) {
    const std::uint32_t tw = w[15] & 0xFFu, th = w[15] >> 8;
    const int lw = 1 << (tw > n ? tw - n : 0), lh = 1 << (th > n ? th - n : 0);
    const int tex_w = std::max(lw, static_cast<int>((w[18] >> 16) >> n) + 1), tex_h = std::max(lh, static_cast<int>((w[19] >> 16) >> n) + 1);
    if (!n) return region(w[12], w[13], w[14], 0, 0, tex_w - 1, tex_h - 1);
    return region(w[25 + n] & 0x3FFFu, w[25 + n] >> 16, w[14], 0, 0, tex_w - 1, tex_h - 1);
}

std::uint32_t z_max(std::uint32_t psm) {
    switch (psm) {
    case PSMZ24: return 0xFFFFFFu;
    case PSMZ16: case PSMZ16S: return 0xFFFFu;
    default: return 0xFFFFFFFFu;
    }
}

std::uint32_t f2u(float f) {
    std::uint32_t v;
    std::memcpy(&v, &f, 4);
    return v;
}

std::uint32_t push_params(const std::initializer_list<std::uint32_t> values) {
    std::array<std::uint32_t, kParamStride / 4> record{};
    std::size_t i = 0;
    for (std::uint32_t v : values) record[i++] = v;
    g_param_records.push_back(record);
    return static_cast<std::uint32_t>(g_param_records.size() - 1);
}

void dispatch_linear(Pipeline p, std::uint32_t items, std::uint32_t param) {
    const std::uint32_t groups = (items + 63) / 64;
    if (!groups) return;
    g_commands.push_back({p, std::min(groups, 1024u), (groups + 1023) / 1024, param});
}

constexpr std::uint32_t kCacheWords = 4u << 20;
constexpr std::size_t kCacheMinBytes = 256;

struct CacheEntry {
    std::uint64_t key;
    std::uint32_t offset, words;
    std::size_t bytes;
    std::uint64_t used;
};

WGPUBuffer g_cache = nullptr;
std::vector<std::uint32_t> g_cache_copy;
std::deque<CacheEntry> g_cache_ring;
std::unordered_multimap<std::uint64_t, CacheEntry *> g_cache_index;
std::unordered_map<std::uint64_t, std::uint32_t> g_cache_seen;
std::uint32_t g_cache_head = 0;
std::uint64_t g_serial = 1;

std::uint64_t content_key(const std::uint8_t *p, std::size_t n) {
    std::uint64_t h = static_cast<std::uint64_t>(n) * 0x9E3779B97F4A7C15ull;
    const auto mix = [&h](std::uint64_t v) {
        h ^= v + 0x9E3779B97F4A7C15ull + (h << 6) + (h >> 2);
        h *= 0xBF58476D1CE4E5B9ull;
    };
    const std::size_t step = std::max<std::size_t>(8, (n / 64) & ~static_cast<std::size_t>(7));
    std::uint64_t v;
    for (std::size_t i = 0; i + 8 <= n; i += step) {
        std::memcpy(&v, p + i, 8);
        mix(v);
    }
    v = 0;
    std::memcpy(&v, p + n - std::min<std::size_t>(n, 8), std::min<std::size_t>(n, 8));
    mix(v);
    return h;
}

bool cache_find(std::uint64_t key, const std::uint8_t *bytes, std::size_t n, std::uint32_t &offset) {
    const auto [first, last] = g_cache_index.equal_range(key);
    for (auto it = first; it != last; ++it) {
        CacheEntry &e = *it->second;
        if (e.bytes != n || std::memcmp(g_cache_copy.data() + e.offset, bytes, n) != 0) continue;
        e.used = g_serial;
        offset = e.offset;
        return true;
    }
    return false;
}

bool cache_insert(std::uint64_t key, const std::uint8_t *bytes, std::size_t n, std::uint32_t &offset) {
    const auto words = static_cast<std::uint32_t>((n + 3) / 4 + 1);
    if (words > kCacheWords / 4) return false;
    const auto evict_front = [] {
        CacheEntry &front = g_cache_ring.front();
        if (front.used == g_serial) return false;
        const auto [first, last] = g_cache_index.equal_range(front.key);
        for (auto it = first; it != last; ++it)
            if (it->second == &front) {
                g_cache_index.erase(it);
                break;
            }
        g_cache_ring.pop_front();
        return true;
    };
    if (g_cache_head + words > kCacheWords) {
        while (!g_cache_ring.empty() && g_cache_ring.front().offset >= g_cache_head)
            if (!evict_front()) return false;
        g_cache_head = 0;
    }
    while (!g_cache_ring.empty() && g_cache_ring.front().offset < g_cache_head + words)
        if (!evict_front()) return false;
    offset = g_cache_head;
    std::uint32_t *to = g_cache_copy.data() + offset;
    to[words - 1] = 0;
    to[words - 2] = 0;
    std::memcpy(to, bytes, n);
    queue_write(g_cache, static_cast<std::uint64_t>(offset) * 4, to, static_cast<std::uint64_t>(words) * 4);
    g_cache_ring.push_back({key, offset, words, n, g_serial});
    g_cache_index.emplace(key, &g_cache_ring.back());
    g_cache_head += words;
    return true;
}

std::uint32_t arena_append(const void *bytes, std::size_t size) {
    const std::uint32_t offset = static_cast<std::uint32_t>(g_arena.size());
    const std::size_t words = (size + 3) / 4 + 1;
    std::uint32_t *to = g_arena.grow(words);
    to[words - 2] = 0;
    to[words - 1] = 0;
    std::memcpy(to, bytes, size);
    return offset;
}

float u2f(std::uint32_t u) {
    float f;
    std::memcpy(&f, &u, 4);
    return f;
}

struct Span {
    std::int16_t ty, tx0, tx1;
};
std::vector<Span> g_spans;
std::vector<std::uint32_t> g_span_start;

void add_spans(const std::uint32_t *rec, std::uint32_t lo, std::uint32_t hi) {
    const int scx = static_cast<int>(g_sx), scy = static_cast<int>(g_sy);
    const int tx0 = static_cast<int>(lo & 0xFFFFu) * scx / 16, ty0 = static_cast<int>(lo >> 16) * scy / 16;
    const int tx1 = (static_cast<int>(hi & 0xFFFFu) * scx + scx - 1) / 16, ty1 = (static_cast<int>(hi >> 16) * scy + scy - 1) / 16;
    const auto whole = [&] {
        for (int ty = ty0; ty <= ty1; ++ty) g_spans.push_back({static_cast<std::int16_t>(ty), static_cast<std::int16_t>(tx0), static_cast<std::int16_t>(tx1)});
    };
    if (rec[1] != 0 || tx1 - tx0 < 2) {
        whole();
        return;
    }
    const double x[3] = {u2f(rec[4]), u2f(rec[6]), u2f(rec[8])}, y[3] = {u2f(rec[5]), u2f(rec[7]), u2f(rec[9])};
    const double inv = u2f(rec[10]);
    static const int kEdges[3][2] = {{1, 2}, {2, 0}, {0, 1}};
    double m[3], q[3];
    int kind[3];
    for (int e = 0; e < 3; ++e) {
        const int a = kEdges[e][0], b = kEdges[e][1];
        const double ca = (y[a] - y[b]) * inv, cb = (x[b] - x[a]) * inv, cc = (x[a] * y[b] - x[b] * y[a]) * inv;
        if (!std::isfinite(ca) || !std::isfinite(cb) || !std::isfinite(cc)) {
            whole();
            return;
        }
        kind[e] = ca > 0.0 ? 1 : ca < 0.0 ? -1 : 0;
        m[e] = kind[e] ? -cb / ca : cb;
        q[e] = kind[e] ? -cc / ca : cc;
    }
    const double span = 16.0 / static_cast<double>(scx), span_y = 16.0 / static_cast<double>(scy);
    for (int ty = ty0; ty <= ty1; ++ty) {
        const double y0 = ty * span_y - 1.0, y1 = (ty + 1) * span_y + 1.0;
        double left = -1e30, right = 1e30;
        bool empty = false;
        for (int e = 0; e < 3; ++e) {
            const double a0 = m[e] * y0, a1 = m[e] * y1;
            if (kind[e] == 0) empty = empty || std::max(a0, a1) + q[e] < 0.0;
            else if (kind[e] > 0) left = std::max(left, std::min(a0, a1) + q[e]);
            else right = std::min(right, std::max(a0, a1) + q[e]);
        }
        left -= 1.0;
        right += 1.0;
        if (empty || left > right) continue;
        const int rx0 = std::max(tx0, static_cast<int>(std::floor(std::max(left, -1.0) / span)));
        const int rx1 = std::min(tx1, static_cast<int>(std::floor(std::min(right, 4096.0) / span)));
        if (rx0 <= rx1) g_spans.push_back({static_cast<std::int16_t>(ty), static_cast<std::int16_t>(rx0), static_cast<std::int16_t>(rx1)});
    }
}

bool reads_own_word(const std::uint32_t *rec, const std::uint32_t *setup) {
    const std::uint32_t fpsm = setup[3], tpsm = setup[14];
    if (rec[1] != 1 || (setup[0] & (16u | 16384u)) != 16u || setup[12] != setup[1] || setup[13] != setup[2]) return false;
    float f[6], uv[6];
    std::memcpy(f, rec + 4, sizeof f);
    std::memcpy(uv, rec + 15, sizeof uv);
    const float du = (uv[3] - uv[0]) / 16.0f, dv = (uv[4] - uv[1]) / 16.0f;
    if (f[2] == 0.0f || f[3] == 0.0f || std::fabs(du - f[2]) > 0.0005f * std::fabs(f[2]) || std::fabs(dv - f[3]) > 0.0005f * std::fabs(f[3])) return false;
    const int x0 = static_cast<int>(rec[2] & 0xFFFFu), y0 = static_cast<int>(rec[2] >> 16), x1 = static_cast<int>(rec[3] & 0xFFFFu), y1 = static_cast<int>(rec[3] >> 16);
    const auto texel = [](float a, float b, float origin, float span, int p) {
        return static_cast<int>(std::floor((a + (b - a) * ((static_cast<float>(p) - origin) / span)) / 16.0f));
    };
    for (const int y : {y0, y1})
        if (texel(uv[1], uv[4], f[1], f[3], y) != y) return false;
    const int ox = texel(uv[0], uv[3], f[0], f[2], x0) - x0;
    if (texel(uv[0], uv[3], f[0], f[2], x1) - x1 != ox) return false;
    const auto wide = [](std::uint32_t psm) { return psm == PSMCT32 || psm == PSMCT24 || psm == PSMT8H || psm == PSMT4HL || psm == PSMT4HH; };
    if (ox == 0) return tpsm == fpsm || (wide(fpsm) && wide(tpsm));
    const bool half = fpsm == PSMCT16 || fpsm == PSMCT16S;
    return half && tpsm == fpsm && (ox == 8 || ox == -8) && x1 - x0 < 8 && (x0 & 8) == (x1 & 8) && ((x0 ^ 8) == x0 + ox);
}

Range read_range(const std::uint32_t *rec, const std::uint32_t *setup, const Range &whole) {
    if (rec[1] != 1 || !(setup[0] & 16u)) return whole;
    float uv[6];
    std::memcpy(uv, rec + 15, sizeof uv);
    const int u0 = static_cast<int>(std::floor(std::min(uv[0], uv[3]) / 16.0f)) - 1, u1 = static_cast<int>(std::ceil(std::max(uv[0], uv[3]) / 16.0f)) + 1;
    const int v0 = static_cast<int>(std::floor(std::min(uv[1], uv[4]) / 16.0f)) - 1, v1 = static_cast<int>(std::ceil(std::max(uv[1], uv[4]) / 16.0f)) + 1;
    const int tw = std::max(1 << (setup[15] & 0xFFu), static_cast<int>(setup[18] >> 16) + 1), th = std::max(1 << (setup[15] >> 8), static_cast<int>(setup[19] >> 16) + 1);
    if (u0 < 0 || v0 < 0 || u1 >= tw || v1 >= th) return whole;
    return region(setup[12], setup[13], setup[14], u0, v0, u1, v1);
}

Range pages(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1) {
    std::uint32_t pw, ph;
    page_size(psm, pw, ph);
    const std::uint64_t per_row = std::max<std::uint32_t>(1, bw * 64 / pw);
    const auto page = [&](int x, int y) {
        return static_cast<std::uint64_t>(bp) * 256 + (static_cast<std::uint64_t>(std::max(x, 0)) / pw + static_cast<std::uint64_t>(std::max(y, 0)) / ph * per_row) * 8192;
    };
    Range r;
    r.add(page(x0, y0), page(x1, y1) + 8192);
    return r;
}

// Every physical page r touches (a buffer may start inside a page, so its pages straddle two).
template <class F> void each_page(const Range &r, F f) {
    if (r.lo < r.hi)
        for (std::uint64_t p = r.lo >> 13; p <= (r.hi - 1) >> 13; ++p) f(static_cast<std::uint32_t>(p & 511u));
}

void mark_uploaded(const Range &r) {
    each_page(r, [](std::uint32_t p) { ++g_page_gen[p]; });
}

void block_size(std::uint32_t psm, int &w, int &h) {
    switch (psm) {
    case PSMCT16: case PSMCT16S: case PSMZ16: case PSMZ16S: w = 16, h = 8; break;
    case PSMT8: w = 16, h = 16; break;
    case PSMT4: w = 32, h = 16; break;
    default: w = 8, h = 8; break;
    }
}

// Every block of a buffer's rectangle (whole: only the blocks it fills) as f(page, block bits): a whole page at once when
// the buffer starts on a page, else block by block through the GS layout.
template <class F> void each_block(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1, bool whole, F f) {
    std::uint32_t pw, ph;
    page_size(psm, pw, ph);
    int w, h;
    block_size(psm, w, h);
    x0 = std::max(x0, 0);
    y0 = std::max(y0, 0);
    const int bx0 = (x0 + (whole ? w - 1 : 0)) / w, by0 = (y0 + (whole ? h - 1 : 0)) / h, bx1 = (x1 + (whole ? 1 : w)) / w - 1, by1 = (y1 + (whole ? 1 : h)) / h - 1;
    const int cols = static_cast<int>(pw) / w, rows = static_cast<int>(ph) / h;
    if (bx0 > bx1 || by0 > by1) return;
    for (int py = by0 / rows; py <= by1 / rows; ++py)
        for (int px = bx0 / cols; px <= bx1 / cols; ++px) {
            const int ax = std::max(bx0, px * cols), ay = std::max(by0, py * rows), zx = std::min(bx1, px * cols + cols - 1), zy = std::min(by1, py * rows + rows - 1);
            if (bp % 32 == 0 && ax == px * cols && ay == py * rows && zx == px * cols + cols - 1 && zy == py * rows + rows - 1) {
                f(pixel_address(psm, bp, bw, px * pw, py * ph) >> 13, ~0u);
                continue;
            }
            for (int y = ay; y <= zy; ++y)
                for (int x = ax; x <= zx; ++x) {
                    const std::uint32_t a = pixel_address(psm, bp, bw, x * w, y * h);
                    f(a >> 13, 1u << ((a >> 8) & 31u));
                }
        }
}

void mark_rendered(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1) {
    const Range r = pages(bp, bw, psm, x0, y0, x1, y1);
    for (std::uint64_t at = r.lo; at < r.hi; at += 8192) g_rt_pages[(at >> 13) & 511u] = true;
    mark_uploaded(r);
    each_block(bp, bw, psm, x0, y0, x1, y1, false, [](std::uint32_t page, std::uint32_t bits) { g_drawn[page & 511u] |= bits; });
}

std::uint64_t page_gens(const Range &r) {
    std::uint64_t n = 0;
    each_page(r, [&](std::uint32_t p) { n += g_page_gen[p]; });
    return n;
}

std::uint64_t mix(std::uint64_t h, std::uint64_t v) {
    h ^= v + 0x9E3779B97F4A7C15ull + (h << 6) + (h >> 2);
    return h * 0xFF51AFD7ED558CCDull;
}

// CLUT contents by 16-entry block, per slot: the id of the load that last wrote the block (its registers and the
// generations of the pages it read; gs.wgsl load_clut writes whole aligned blocks). A decode keys on the blocks it reads,
// not on the slot: games reload the same CLUT before each draw, and every load takes a new slot.
std::vector<std::array<std::uint64_t, 32>> g_clut_blocks(kClutSlots);

std::uint64_t clut_key(const std::uint32_t *w) {
    const std::array<std::uint64_t, 32> &b = g_clut_blocks[w[22] % kClutSlots];
    if (w[14] == PSMT4 || w[14] == PSMT4HL || w[14] == PSMT4HH) return b[w[17] & 15u];
    if (w[14] != PSMT8 && w[14] != PSMT8H) return 0;
    std::uint64_t h = 0;
    for (int k = 0; k < 16; ++k) h = mix(h, b[k]);
    return h;
}

bool rendered(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1) {
    bool any = false;
    each_block(bp, bw, psm, x0, y0, x1, y1, false, [&](std::uint32_t page, std::uint32_t bits) { any = any || (g_drawn[page & 511u] & bits); });
    return any;
}

struct Decode {
    std::uint32_t setup, level, offset, words;
};
std::vector<Decode> g_decodes;
// This submit's decodes (cleared with g_decoded_used): the setup words that key them, the generations of the pages they
// read, where they sit. ponytail: linear scan, a hash map if it shows in a profile.
struct Decoded {
    std::uint32_t key[15];
    std::uint64_t clut, gens;
    std::uint32_t offset;
};
std::vector<Decoded> g_decode_cache;

// A decode holds every level the setup samples, level n right after level n - 1 (gs.wgsl level()).
void plan_decodes(std::uint32_t prims, bool all = false) {
    Batch &b = g_batch;
    g_decodes.clear();
    if (!g_decode || (prims <= kDecodePrims && !all)) return;
    const std::uint32_t setups = static_cast<std::uint32_t>(b.setups.size() / kSetupWords);
    static const int kKey[] = {12, 13, 14, 15, 16, 17, 20, 25, 26, 27, 28, 29, 30, 31};
    for (std::uint32_t i = 0; i < setups; ++i) {
        std::uint32_t *w = b.setups.data() + i * kSetupWords;
        if (!(w[0] & 2u) || (w[0] & (kReplaced | kSource))) continue;
        const std::uint32_t tw = w[15] & 0xFFu, th = w[15] >> 8, levels = mip_levels(w);
        const auto bits = [&](std::uint32_t n) { return (tw > n ? tw - n : 0u) + (th > n ? th - n : 0u); };
        const auto level = [&](std::uint32_t n, auto f) {
            return f(n ? w[25 + n] & 0x3FFFu : w[12], n ? w[25 + n] >> 16 : w[13], w[14], 0, 0, (1 << (tw > n ? tw - n : 0)) - 1, (1 << (th > n ? th - n : 0)) - 1);
        };
        Decoded e{{w[0] & 32768u}, clut_key(w), 0, 0};
        for (int k = 0; k < 14; ++k) e.key[k + 1] = w[kKey[k]];
        std::uint32_t words = 0;
        for (std::uint32_t n = 0; n <= levels; ++n) {
            e.gens += page_gens(level(n, pages));
            words += 1u << bits(n);
        }
        bool shared = false;
        for (const Decoded &d : g_decode_cache) {
            if (d.gens != e.gens || d.clut != e.clut || !std::equal(e.key, e.key + 15, d.key)) continue;
            w[24] = d.offset;
            shared = true;
            break;
        }
        if (shared) continue;
        const std::uint32_t mu = (w[7] >> 24) & 3u, mv = (w[7] >> 26) & 3u;
        const auto inside = [](std::uint32_t mode, std::uint32_t region, std::uint32_t size) { return mode < 2 || ((region & 0x3FFu) < (1u << size) && (region >> 16) < (1u << size)); };
        if (!inside(mu, w[18], tw) || !inside(mv, w[19], th) || g_decoded_used + words > kDecodedWords) continue;
        bool drawn = false;
        for (std::uint32_t n = 0; n <= levels && g_samples > 1; ++n) drawn = drawn || level(n, rendered);
        if (drawn) continue;
        w[24] = e.offset = g_decoded_used;
        g_decode_cache.push_back(e);
        for (std::uint32_t n = 0; n <= levels; ++n) {
            g_decodes.push_back({i, n, g_decoded_used, 1u << bits(n)});
            g_decoded_used += 1u << bits(n);
        }
    }
}

// GS memory pages a rectangle of a buffer touches, as the shader addresses them (gs.wgsl addr: wraps at 4 MB).
void mark_pages(bool *page, std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, int x0, int y0, int x1, int y1) {
    std::uint32_t pw, ph;
    page_size(psm, pw, ph);
    const std::uint32_t per_row = std::max<std::uint32_t>(1, bw * 64 / pw);
    for (std::uint32_t py = static_cast<std::uint32_t>(y0) / ph; py <= static_cast<std::uint32_t>(y1) / ph; ++py)
        for (std::uint32_t px = static_cast<std::uint32_t>(x0) / pw; px <= static_cast<std::uint32_t>(x1) / pw; ++px)
            page[((bp * 256 + (px + py * per_row) * 8192) & (kMemorySize - 1)) >> 13] = true;
}

// Snapshot of the GS memory a batch both reads as texture and writes, so its texture reads see the memory as it was
// before the batch (gs.wgsl load_texel). Only pages the batch's frame or Z rectangle touches are copied: words
// lo..hi, pages flagged in mask (512 bits).
std::uint32_t snapshot_batch(std::uint32_t prims, std::uint32_t &lo, std::uint32_t &hi, std::uint32_t mask[16]) {
    Batch &b = g_batch;
    lo = hi = 0;
    std::fill(mask, mask + 16, 0u);
    if (g_batch_reads.empty()) return 0;
    const Range fb = pages(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    const Range z = pages(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    const auto written = [&](const Range &t) { return t.overlaps(fb.lo, fb.hi) || (b.zwrite && t.overlaps(z.lo, z.hi)); };
    bool any = false;
    for (const Range &t : g_batch_reads) any = any || written(t);
    if (!any) return 0;
    Range shared;
    static bool read[512];
    std::fill(std::begin(read), std::end(read), false);
    const auto add = [&](const Range &t, const Range &w) {
        const std::uint64_t from = std::max(t.lo, w.lo), to = std::min({t.hi, w.hi, static_cast<std::uint64_t>(kMemorySize)});
        shared.add(std::max(t.lo, w.lo), std::min(t.hi, w.hi));
        for (std::uint64_t at = from & ~8191ull; at < to; at += 8192) read[at >> 13] = true;
    };
    for (std::uint32_t i = 0; i < prims; ++i) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        const std::uint32_t *setup = b.setups.data() + rec[0] * kSetupWords;
        if (!(setup[0] & 2u) || reads_own_word(rec, setup)) continue;
        const int tw = std::max(1 << (setup[15] & 0xFFu), static_cast<int>(setup[18] >> 16) + 1), th = std::max(1 << (setup[15] >> 8), static_cast<int>(setup[19] >> 16) + 1);
        const Range t = read_range(rec, setup, region(setup[12], setup[13], setup[14], 0, 0, tw - 1, th - 1));
        for (const Range *w : {&fb, b.zwrite ? &z : nullptr})
            if (w && t.overlaps(w->lo, w->hi)) add(t, *w);
        for (std::uint32_t n = 1; n <= mip_levels(setup); ++n) {
            const Range m = level_range(setup, n);
            for (const Range *w : {&fb, b.zwrite ? &z : nullptr})
                if (w && m.overlaps(w->lo, w->hi)) add(m, *w);
        }
    }
    if (shared.lo >= shared.hi) return 0;
    static bool drawn[512];
    std::fill(std::begin(drawn), std::end(drawn), false);
    mark_pages(drawn, b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    if (b.zwrite) mark_pages(drawn, b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    std::uint32_t first = 512, last = 0, count = 0;
    for (std::uint32_t page = 0; page < 512; ++page)
        if (read[page] && drawn[page]) {
            mask[page >> 5] |= 1u << (page & 31u);
            first = std::min(first, page);
            last = page;
            ++count;
        }
    if (!count) return 0;
    lo = first * 2048;
    hi = (last + 1) * 2048;
    std::uint32_t *list = g_arena.grow(count);
    const std::uint32_t at = static_cast<std::uint32_t>(list - g_arena.data());
    for (std::uint32_t page = first, j = 0; page <= last; ++page)
        if (mask[page >> 5] >> (page & 31u) & 1u) list[j++] = page;
    const std::uint32_t words = count * 2048 * g_samples;
    dispatch_linear(kSnapshot, words, push_params({lo, count, at}));
    return words;
}

// A sprite that maps texels 1:1 to pixels, with a wide margin around gs.wgsl shade_at's 0.1% test: it never reads a
// render target on the fine grid, so its batch can keep the common raster pipeline (kRaster).
bool one_to_one(const std::uint32_t *rec, const std::uint32_t *setup) {
    float uv[6];
    std::memcpy(uv, rec + 15, sizeof uv);
    double du = static_cast<double>(uv[3]) - uv[0], dv = static_cast<double>(uv[4]) - uv[1];
    if (setup[0] & 16u) {
        du /= 16.0;
        dv /= 16.0;
    } else {
        const double q = uv[5] == 0.0f ? 1.0 : uv[5];
        du = du / q * static_cast<double>(1u << (setup[15] & 0xFFu));
        dv = dv / q * static_cast<double>(1u << (setup[15] >> 8));
    }
    const double dx = std::fabs(static_cast<double>(u2f(rec[6]))), dy = std::fabs(static_cast<double>(u2f(rec[7])));
    if (!std::isfinite(du) || !std::isfinite(dv) || !(dx > 0.0) || !(dy > 0.0) || !std::isfinite(dx) || !std::isfinite(dy)) return false;
    return std::fabs(std::fabs(du) - dx) <= dx * 0.0005 && std::fabs(std::fabs(dv) - dy) <= dy * 0.0005;
}

void note_raster(std::uint32_t prims, std::uint32_t tiles, std::uint32_t entries, std::uint32_t snapshot) {
    if (!g_profile_out) return;
    const Batch &b = g_batch;
    const std::uint32_t *first = b.setups.data();
    std::uint32_t textured = 0;
    for (std::uint32_t i = 0; i < prims; ++i) textured += (b.setups[b.prims[i * kPrimWords] * kSetupWords] & 2u) ? 1u : 0u;
    static std::uint32_t seq = 0;
    g_command_info.push_back({g_commands.size(), {prims, tiles, entries, snapshot, b.prims[1], first[3] | (first[14] << 8) | (first[6] << 16), first[0], textured, ++seq}});
    if (drawdbg::enabled()) drawdbg::batch(seq, b.dbg_draws);
}

// The batch's planned decodes (plan_decodes) in one dispatch (gs.wgsl decode): setup, decoded offset, texels, first thread
void emit_decodes(std::uint32_t setup_offset) {
    if (g_decodes.empty()) return;
    const std::uint32_t n = static_cast<std::uint32_t>(g_decodes.size());
    std::uint32_t *rec = g_arena.grow(n * 4u);
    const std::uint32_t records = static_cast<std::uint32_t>(rec - g_arena.data());
    std::uint32_t total = 0;
    for (std::uint32_t i = 0; i < n; ++i) {
        const Decode &d = g_decodes[i];
        rec[i * 4] = (setup_offset + d.setup * kSetupWords) | d.level << 29;  // the arena stays far below 2^29 words
        rec[i * 4 + 1] = d.offset;
        rec[i * 4 + 2] = d.words;
        rec[i * 4 + 3] = total;
        total += d.words;
    }
    dispatch_linear(kDecode, total, push_params({records, n, total}));
}

void flush_batch() {
    Batch &b = g_batch;
    if (b.prims.empty()) {
        b.key = ~0ull;
        return;
    }
    if (b.hw) return hw_flush();
    const std::uint32_t prims = static_cast<std::uint32_t>(b.prims.size() / kPrimWords);
    g_touched.clear();
    g_spans.clear();
    g_span_start.resize(prims + 1);
    for (std::uint32_t i = 0; i < prims; ++i) {
        g_span_start[i] = static_cast<std::uint32_t>(g_spans.size());
        add_spans(b.prims.data() + i * kPrimWords, b.boxes[i * 2], b.boxes[i * 2 + 1]);
        for (std::size_t k = g_span_start[i]; k < g_spans.size(); ++k) {
            const Span &sp = g_spans[k];
            std::uint32_t t = static_cast<std::uint32_t>(sp.ty * g_tiles_per_row + sp.tx0);
            for (int tx = sp.tx0; tx <= sp.tx1; ++tx, ++t)
                if (!g_tile_count[t]++) g_touched.push_back(t);
        }
    }
    g_span_start[prims] = static_cast<std::uint32_t>(g_spans.size());
    plan_decodes(prims);
    const std::uint32_t prim_offset = arena_append(b.prims.data(), b.prims.size() * 4);
    const std::uint32_t setup_offset = arena_append(b.setups.data(), b.setups.size() * 4);
    emit_decodes(setup_offset);
    std::uint32_t total = 0;
    for (std::uint32_t t : g_touched) total += g_tile_count[t];
    const std::uint32_t tiles = static_cast<std::uint32_t>(g_touched.size());
    const std::uint32_t tile_offset = static_cast<std::uint32_t>(g_arena.size());
    const std::uint32_t list_offset = tile_offset + tiles * 2 + 2;
    const std::uint32_t list_words = (total + 1) / 2;
    std::uint32_t *grown = g_arena.grow(tiles * 2 + 2 + list_words);
    if (list_words) grown[tiles * 2 + 2 + list_words - 1] = 0;
    std::uint32_t cursor = 0;
    for (std::uint32_t i = 0; i < tiles; ++i) {
        const std::uint32_t t = g_touched[i];
        grown[i * 2] = (t % static_cast<std::uint32_t>(g_tiles_per_row)) | ((t / static_cast<std::uint32_t>(g_tiles_per_row)) << 16);
        grown[i * 2 + 1] = cursor;
        g_tile_fill[t] = cursor;
        cursor += g_tile_count[t];
    }
    grown[tiles * 2] = 0;
    grown[tiles * 2 + 1] = cursor;
    auto *halves = reinterpret_cast<unsigned char *>(grown + tiles * 2 + 2);
    for (std::uint32_t i = 0; i < prims; ++i) {
        const auto index = static_cast<std::uint16_t>(i);
        for (std::uint32_t k = g_span_start[i]; k < g_span_start[i + 1]; ++k) {
            const Span &sp = g_spans[k];
            std::uint32_t t = static_cast<std::uint32_t>(sp.ty * g_tiles_per_row + sp.tx0);
            for (int tx = sp.tx0; tx <= sp.tx1; ++tx, ++t) std::memcpy(halves + 2u * g_tile_fill[t]++, &index, 2);
        }
    }
    for (std::uint32_t t : g_touched) g_tile_count[t] = 0;
    std::uint32_t snapshot_lo, snapshot_hi, snapshot_mask[16];
    const std::uint32_t snapshot = snapshot_batch(prims, snapshot_lo, snapshot_hi, snapshot_mask);
    // Z24 words only this batch's Z writes touch (gs.wgsl z_owned): Z pages apart from the frame's, inside GS memory,
    // and no column past the buffer width (it would alias the next row of pages).
    const Range fb_pages = pages(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy), z_pages = pages(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    const bool z_owned = b.zpsm == PSMZ24 && b.maxx < static_cast<int>(b.fbw) * 64 && z_pages.hi <= kMemorySize && fb_pages.hi <= kMemorySize &&
                         !z_pages.overlaps(fb_pages.lo, fb_pages.hi);
    const std::uint32_t param = push_params({tile_offset, prim_offset, setup_offset, tiles, list_offset, snapshot_lo, snapshot_hi, b.fbp, b.fbw, b.fpsm, b.zbp, b.zpsm,
                                             z_max(b.zpsm), z_owned ? 1u : 0u, 0u, 0u});
    std::copy(snapshot_mask, snapshot_mask + 16, g_param_records[param].begin() + 16);
    note_raster(prims, tiles, total, snapshot);
    bool hires = false;
    for (std::uint32_t i = 0; i < prims && !hires; ++i) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        hires = rec[1] == 1 && (b.setups[rec[0] * kSetupWords] & kRtHires) && !one_to_one(rec, b.setups.data() + rec[0] * kSetupWords);
    }
    g_commands.push_back({hires ? kRasterHi : kRaster, std::min(tiles, 1024u), (tiles + 1023) / 1024, param});
    mark_rendered(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    if (b.zwrite) mark_rendered(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    b.prims.clear();
    b.setups.clear();
    b.boxes.clear();
    b.dbg_draws.clear();
    g_batch_reads.clear();
    b.key = ~0ull;
    b.minx = b.miny = 1 << 30;
    b.maxx = b.maxy = -1;
}

void batch_ranges() {
    Batch &b = g_batch;
    if (b.rx0 == b.minx && b.ry0 == b.miny && b.rx1 == b.maxx && b.ry1 == b.maxy) return;
    b.rx0 = b.minx;
    b.ry0 = b.miny;
    b.rx1 = b.maxx;
    b.ry1 = b.maxy;
    b.fb_range = region(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    b.z_range = region(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
}

bool batch_conflict(const Range &r, bool clut) {
    Batch &b = g_batch;
    if (!b.prims.empty()) {
        batch_ranges();
        if (b.fb_range.overlaps(r.lo, r.hi)) return true;
        if (b.zte && b.z_range.overlaps(r.lo, r.hi)) return true;
    } else if (g_native_draws.size() == g_native_emitted) {
        return false;  // (native draws not yet emitted read their textures too)
    }
    if (!clut)
        for (const Range &t : g_batch_reads)
            if (t.overlaps(r.lo, r.hi)) return true;
    return false;
}

// Uploads and CLUT loads in as few dispatches as their order allows: each goes into the earliest dispatch of its kind
// after every dispatch holding an earlier op it depends on (an upload over memory an earlier upload wrote or an
// earlier CLUT load reads; a CLUT load of memory an earlier upload wrote). CLUT loads keep their chain order, so each
// load_clut dispatch holds consecutive loads of the chain.
void emit_pre() {
    const std::size_t n = g_pre.size();
    static std::vector<std::uint32_t> group;
    static std::vector<bool> kinds;  // per dispatch: CLUT loads (true) or uploads
    group.assign(n, 0);
    kinds.clear();
    std::uint32_t chain = 0;
    for (std::size_t j = 0; j < n; ++j) {
        const PreOp &op = g_pre[j];
        std::uint32_t g = op.clut ? chain : 0;
        for (std::size_t k = 0; k < j; ++k) {
            const PreOp &e = g_pre[k];
            const bool after = op.clut ? !e.clut && e.range.overlaps(op.range.lo, op.range.hi)
                                       : e.clut ? e.range.overlaps(op.range.lo, op.range.hi) : uploads_overlap(e, op);
            if (after) g = std::max(g, group[k] + 1);
        }
        while (g < kinds.size() && kinds[g] != op.clut) ++g;
        if (g == kinds.size()) kinds.push_back(op.clut);
        group[j] = g;
        if (op.clut) chain = g;
    }
    for (std::uint32_t g = 0; g < kinds.size(); ++g) {
        const bool clut = kinds[g];
        std::uint32_t count = 0;
        for (std::size_t j = 0; j < n; ++j) count += group[j] == g;
        std::uint32_t *records = g_arena.grow(count * 12u);
        const std::uint32_t offset = static_cast<std::uint32_t>(records - g_arena.data());
        std::uint32_t total = 0, r = 0;
        for (std::size_t j = 0; j < n; ++j) {
            if (group[j] != g) continue;
            std::memcpy(records + r * 12, g_pre[j].rec, sizeof g_pre[j].rec);
            if (!clut) {
                records[r * 12 + 11] = total;
                total += g_pre[j].rec[7];
            }
            ++r;
        }
        if (clut) g_commands.push_back({kLoadClut, kClutEntries / 256, 1, push_params({offset, count})});  // one thread per entry
        else dispatch_linear(kUpload, total * g_samples, push_params({offset, count, total}));  // one thread per sample
    }
    g_pre.clear();
}

// Native draws recorded since the last command go into the stream here, after the raster dispatch of the batch that
// holds their emulated twins: both see the same uploads and CLUT loads.
void emit_native() {
    if (g_native_draws.size() == g_native_emitted) return;
    g_commands.push_back({kNativeDraws, static_cast<std::uint32_t>(g_native_emitted), static_cast<std::uint32_t>(g_native_draws.size() - g_native_emitted), 0});
    g_native_emitted = g_native_draws.size();
}

void tiles_apply();
void tiles_writeback();
bool native_tiles();

void emit_all() {
    emit_pre();
    if (native_tiles()) {  // replace mode, tiles: the write-backs the pending batch needs go ahead of it
        tiles_apply();
        tiles_writeback();
        emit_native();
    }
    flush_batch();
    emit_native();
}

bool native_overlaps(const Range &r);
enum NativeClose : int { kCloseDraw, kCloseSync, kCloseUpload, kCloseTarget, kCloseTexture, kCloseVblank };
void native_close(int why);

enum TileCause : int { kByEmulated, kByTexture, kByClaim, kByDisplay, kByAccess, kByFlush };
void tiles_access(const Range &r, bool write, int cause = kByAccess);
bool native_bound();

void queue_pre(const PreOp &op) {
    if (native_bound()) {  // an upload over the bound target's pages, or a CLUT load from them
        const std::size_t pending = g_native_draws.size();
        tiles_access(op.range, !op.clut);
        if (g_native_draws.size() != pending) emit_all();
    } else if (native_overlaps(op.range)) native_close(kCloseUpload);  // over what an open run of native draws holds in its target
    if (batch_conflict(op.range, op.clut)) emit_all();
    g_pre.push_back(op);
}

std::uint64_t queue_upload(const std::uint8_t *bytes, std::size_t size, std::uint32_t lead_bits) {
    Image &im = g_image;
    const std::uint64_t bits = static_cast<std::uint64_t>(size) * 8;
    if (bits <= lead_bits) return 0;
    const std::uint32_t pixels = static_cast<std::uint32_t>(std::min<std::uint64_t>((bits - lead_bits) / im.bpp, im.total - im.done));
    if (!pixels) return 0;
    const std::uint64_t used = lead_bits + static_cast<std::uint64_t>(pixels) * im.bpp;
    PreOp op;
    const auto n = static_cast<std::size_t>((used + 7) / 8);
    std::uint32_t offset = 0, source = 0;
    if (n >= kCacheMinBytes) {
        const std::uint64_t key = content_key(bytes, n);
        if (cache_find(key, bytes, n, offset) || (++g_cache_seen[key] >= 2 && cache_insert(key, bytes, n, offset))) source = 0x80000000u;
        if (g_cache_seen.size() > 65536) g_cache_seen.clear();
    }
    if (!source) offset = arena_append(bytes, n);
    const std::uint32_t rec[11] = {im.dbp, im.dbw, im.dpsm, im.dsax, im.dsay, im.rrw, im.done, pixels, offset, lead_bits, im.bpp | source};
    std::memcpy(op.rec, rec, sizeof rec);
    const std::uint32_t first = im.done / im.rrw, last = (im.done + pixels - 1) / im.rrw;
    op.range = region(im.dbp, im.dbw, im.dpsm, static_cast<int>(im.dsax), static_cast<int>(im.dsay + first), static_cast<int>(im.dsax + im.rrw - 1),
                      static_cast<int>(im.dsay + last));
    op.x0 = im.dsax;
    op.x1 = im.dsax + im.rrw - 1;
    op.y0 = im.dsay + first;
    op.y1 = im.dsay + last;
    op.image = im.id;
    queue_pre(op);
    im.done += pixels;
    return used;
}

void finish_image_if_done() {
    Image &im = g_image;
    if (im.done < im.total) return;
    im.active = false;
    im.pending.clear();
    mark_uploaded(pages(im.dbp, im.dbw, im.dpsm, static_cast<int>(im.dsax), static_cast<int>(im.dsay), static_cast<int>(im.dsax + im.rrw) - 1, static_cast<int>(im.dsay + im.total / im.rrw) - 1));
    const std::uint32_t psm = im.dpsm;
    if (im.rrw && im.total >= im.rrw) {
        std::uint32_t pw, ph;
        page_size(psm, pw, ph);
        const std::uint32_t per_row = std::max<std::uint32_t>(1, im.dbw * 64 / pw), last = im.dsay + im.total / im.rrw - 1;
        for (std::uint32_t py = im.dsay / ph; py <= last / ph; ++py)
            for (std::uint32_t px = im.dsax / pw; px <= (im.dsax + im.rrw - 1) / pw; ++px) g_rt_pages[((im.dbp * 256 + (px + py * per_row) * 8192) >> 13) & 511u] = false;
    }
    if (psm != PSMCT32 && psm != PSMCT16 && psm != PSMCT16S && psm != PSMT8 && psm != PSMT4 && psm != PSMZ32 && psm != PSMZ16 && psm != PSMZ16S) return;
    const int rows = im.rrw ? static_cast<int>(im.total / im.rrw) : 0;
    each_block(im.dbp, im.dbw, psm, static_cast<int>(im.dsax), static_cast<int>(im.dsay), static_cast<int>(im.dsax + im.rrw) - 1, static_cast<int>(im.dsay) + rows - 1, true,
               [](std::uint32_t page, std::uint32_t bits) { g_drawn[page & 511u] &= ~bits; });
}

void flush_image() {
    Image &im = g_image;
    if (!im.active || im.pending.empty()) return;
    const std::uint64_t used = queue_upload(im.pending.data(), im.pending.size(), im.lead_bits);
    if (!used) return;
    im.pending.erase(im.pending.begin(), im.pending.begin() + static_cast<std::ptrdiff_t>(used / 8));
    im.lead_bits = static_cast<std::uint32_t>(used % 8);
    finish_image_if_done();
}

void flush_all() {
    flush_image();
    emit_all();
}

void on_error(WGPUDevice const *, WGPUErrorType type, WGPUStringView message, void *, void *) {
    std::fprintf(stderr, "[gpu] error %d: %.*s\n", static_cast<int>(type), static_cast<int>(message.length == WGPU_STRLEN ? std::strlen(message.data) : message.length), message.data);
}

void pump() {
#ifdef __EMSCRIPTEN__
    browser_yield();
    wgpuInstanceProcessEvents(g_instance);
#else
    if (g_device) wgpuDevicePoll(g_device, true, nullptr);
    else wgpuInstanceProcessEvents(g_instance);
#endif
}

void wait_until(const bool &flag) {
    while (!flag) pump();
}

WGPUBuffer make_buffer(std::uint64_t size, WGPUBufferUsage usage) {
    WGPUBufferDescriptor d = WGPU_BUFFER_DESCRIPTOR_INIT;
    d.size = size;
    d.usage = usage;
    return wgpuDeviceCreateBuffer(g_device, &d);
}

void native_writeback_group();

void rebuild_group() {
    if (g_group) wgpuBindGroupRelease(g_group);
    WGPUBindGroupEntry e[8] = {};
    WGPUBuffer buffers[8] = {g_vram, g_tables, g_params, g_data, g_clut, g_scratch, g_cache, g_decoded};
    for (int i = 0; i < 8; ++i) {
        e[i] = WGPU_BIND_GROUP_ENTRY_INIT;
        e[i].binding = static_cast<std::uint32_t>(i);
        e[i].buffer = buffers[i];
        e[i].size = i == 2 ? kParamStride : WGPU_WHOLE_SIZE;
    }
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = g_layout;
    d.entryCount = 8;
    d.entries = e;
    g_group = wgpuDeviceCreateBindGroup(g_device, &d);
    if (g_native_layout) {
        if (g_native_group) wgpuBindGroupRelease(g_native_group);
        WGPUBindGroupEntry n[9];
        for (int i = 0; i < 8; ++i) n[i] = e[i];
        n[8] = WGPU_BIND_GROUP_ENTRY_INIT;
        n[8].binding = 8;
        n[8].buffer = g_native_checks;
        n[8].size = WGPU_WHOLE_SIZE;
        d.layout = g_native_layout;
        d.entryCount = 9;
        d.entries = n;
        g_native_group = wgpuDeviceCreateBindGroup(g_device, &d);
        native_writeback_group();
    }
}

void ensure_capacity(std::size_t arena_words = g_arena.size(), std::size_t param_records = g_param_records.size()) {
    bool changed = false;
    const std::uint64_t data_bytes = std::max<std::uint64_t>(arena_words * 4, 16);
    if (data_bytes > g_data_size) {
        if (g_data) wgpuBufferRelease(g_data);
        g_data_size = std::max<std::uint64_t>(g_data_size * 2, (data_bytes + (4u << 20) - 1) & ~((4ull << 20) - 1));
        g_data = make_buffer(g_data_size, WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst);
        changed = true;
    }
    const std::uint64_t param_bytes = std::max<std::uint64_t>(param_records, 1) * kParamStride;
    if (param_bytes > g_params_size) {
        if (g_params) wgpuBufferRelease(g_params);
        g_params_size = std::max<std::uint64_t>(g_params_size * 2, std::max<std::uint64_t>(param_bytes, 64 * 1024));
        g_params = make_buffer(g_params_size, WGPUBufferUsage_Uniform | WGPUBufferUsage_CopyDst);
        changed = true;
    }
    if (changed || !g_group) rebuild_group();
}

void profile_submit() {
    if (!g_profile_queries) {
        WGPUQuerySetDescriptor qd = WGPU_QUERY_SET_DESCRIPTOR_INIT;
        qd.type = WGPUQueryType_Timestamp;
        qd.count = kProfPasses * 2;
        g_profile_queries = wgpuDeviceCreateQuerySet(g_device, &qd);
        g_profile_resolve = make_buffer(kProfPasses * 16, WGPUBufferUsage_QueryResolve | WGPUBufferUsage_CopySrc);
        g_profile_read = make_buffer(kProfPasses * 16, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
    }
    ensure_capacity();
    wgpuQueueWriteBuffer(g_queue, g_data, 0, g_arena.data(), g_arena.size() * 4);
    wgpuQueueWriteBuffer(g_queue, g_params, 0, g_param_records.data(), g_param_records.size() * kParamStride);
    WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
    g_prof_passes.clear();
    g_prof_untimed = 0;
    g_prof_on = true;
    for (std::uint32_t i = 0; i < g_commands.size(); ++i) {
        const Command &c = g_commands[i];
        if (c.pipeline == kNativeDraws) {
            encode_native(enc, c, g_native_draws);
            continue;
        }
        WGPUComputePassDescriptor cd = WGPU_COMPUTE_PASS_DESCRIPTOR_INIT;
        cd.timestampWrites = prof_slot(kEntryPoints[c.pipeline], i, c.x, c.y);
        WGPUComputePassEncoder pass = wgpuCommandEncoderBeginComputePass(enc, &cd);
        wgpuComputePassEncoderSetPipeline(pass, g_pipelines[c.pipeline]);
        const std::uint32_t offset = c.param * kParamStride;
        wgpuComputePassEncoderSetBindGroup(pass, 0, g_group, 1, &offset);
        wgpuComputePassEncoderDispatchWorkgroups(pass, c.x, c.y, 1);
        wgpuComputePassEncoderEnd(pass);
        wgpuComputePassEncoderRelease(pass);
    }
    g_prof_on = false;
    const std::uint32_t n = static_cast<std::uint32_t>(g_prof_passes.size());
    if (n) {
        wgpuCommandEncoderResolveQuerySet(enc, g_profile_queries, 0, n * 2, g_profile_resolve, 0);
        wgpuCommandEncoderCopyBufferToBuffer(enc, g_profile_resolve, 0, g_profile_read, 0, n * 16);
    }
    WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
    wgpuQueueSubmit(g_queue, 1, &cmd);
    wgpuCommandBufferRelease(cmd);
    wgpuCommandEncoderRelease(enc);
    if (n) {
        bool done = false;
        WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
        cb.mode = WGPUCallbackMode_AllowProcessEvents;
        cb.callback = [](WGPUMapAsyncStatus, WGPUStringView, void *flag, void *) { *static_cast<bool *>(flag) = true; };
        cb.userdata1 = &done;
        wgpuBufferMapAsync(g_profile_read, WGPUMapMode_Read, 0, n * 16, cb);
        wait_until(done);
        const auto *t = static_cast<const std::uint64_t *>(wgpuBufferGetConstMappedRange(g_profile_read, 0, n * 16));
        std::size_t info = 0;
        std::uint64_t inside = 0;
        for (std::uint32_t k = 0; t && k < n; ++k) {
            const ProfPass &p = g_prof_passes[k];
            const std::uint64_t ns = t[k * 2 + 1] > t[k * 2] ? t[k * 2 + 1] - t[k * 2] : 0;
            inside += ns;
            std::fprintf(g_profile_out, "%llu %u %s %llu %u %u", static_cast<unsigned long long>(frame_count()), p.command, p.what,
                         static_cast<unsigned long long>(ns), p.a, p.b);
            if (std::strncmp(p.what, "native", 6) != 0) {
                while (info < g_command_info.size() && g_command_info[info].index < p.command) ++info;
                if (info < g_command_info.size() && g_command_info[info].index == p.command)
                    for (std::uint32_t v : g_command_info[info].values) std::fprintf(g_profile_out, " %u", v);
            }
            std::fprintf(g_profile_out, "\n");
        }
        if (t && n > 1 && t[n * 2 - 1] > t[0])  // between the passes: barriers and layout transitions
            std::fprintf(g_profile_out, "%llu %u between-passes %llu %u %u\n", static_cast<unsigned long long>(frame_count()), n,
                         static_cast<unsigned long long>(t[n * 2 - 1] - t[0] > inside ? t[n * 2 - 1] - t[0] - inside : 0), n, g_prof_untimed);
        wgpuBufferUnmap(g_profile_read);
    }
    g_commands.clear();
    g_command_info.clear();
    g_native_draws.clear();
    g_native_emitted = 0;
    ++g_serial;
    g_param_records.clear();
    g_arena.clear();
    g_decoded_used = 0;
    g_decode_cache.clear();
    g_clut_loads = 0;
}

// Browsers copy writes above about 1 MiB through a slower path, so large uploads go in pieces.
using ParamRecords = std::vector<std::array<std::uint32_t, kParamStride / 4>>;

// Copies the commands' data into the GPU buffers, encodes them and submits (render thread, or the submit worker).
void run_commands(Arena &arena, ParamRecords &params, std::vector<Command> &commands, const std::vector<NativeDraw> &natives, WGPUTextureView present_view) {
    ensure_capacity(arena.size(), params.size());
    wgpuQueueWriteBuffer(g_queue, g_data, 0, arena.data(), arena.size() * 4);
    wgpuQueueWriteBuffer(g_queue, g_params, 0, params.data(), params.size() * kParamStride);
    if (g_query_ready) {
        const void *mapped = wgpuBufferGetConstMappedRange(g_query_read, 0, 16);
        if (mapped) {
            std::uint64_t t[2];
            std::memcpy(t, mapped, sizeof t);
            if (t[1] > t[0]) {
                g_measured_ns += t[1] - t[0];
                ++g_measured;
            }
        }
        wgpuBufferUnmap(g_query_read);
        g_query_ready = g_query_pending = false;
    }
    // one compute pass holds every dispatch, unless native render passes split it (then no timestamps)
    const bool measure = g_timestamps && !g_query_pending && natives.empty();
    WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
    WGPUPassTimestampWrites writes = WGPU_PASS_TIMESTAMP_WRITES_INIT;
    writes.querySet = g_queries;
    writes.beginningOfPassWriteIndex = 0;
    writes.endOfPassWriteIndex = 1;
    WGPUComputePassDescriptor cd = WGPU_COMPUTE_PASS_DESCRIPTOR_INIT;
    if (measure) cd.timestampWrites = &writes;
    WGPUComputePassEncoder pass = wgpuCommandEncoderBeginComputePass(enc, &cd);
    ++g_compute_passes;
    Pipeline current = kPipelines;
    ++g_submits;
    ++g_total_passes;
    for (const Command &c : commands) {
        if (c.pipeline == kNativeDraws) {
            if (pass) {
                wgpuComputePassEncoderEnd(pass);
                wgpuComputePassEncoderRelease(pass);
                pass = nullptr;
            }
            encode_native(enc, c, natives);
            continue;
        }
        if (!pass) {
            WGPUComputePassDescriptor again = WGPU_COMPUTE_PASS_DESCRIPTOR_INIT;
            pass = wgpuCommandEncoderBeginComputePass(enc, &again);
            ++g_compute_passes;
            current = kPipelines;
        }
        ++g_dispatches[c.pipeline];
        if (c.pipeline != current) {
            wgpuComputePassEncoderSetPipeline(pass, g_pipelines[c.pipeline]);
            current = c.pipeline;
        }
        const std::uint32_t offset = c.param * kParamStride;
        wgpuComputePassEncoderSetBindGroup(pass, 0, g_group, 1, &offset);
        wgpuComputePassEncoderDispatchWorkgroups(pass, c.x, c.y, 1);
    }
    if (pass) {
        wgpuComputePassEncoderEnd(pass);
        wgpuComputePassEncoderRelease(pass);
    }
    if (measure) {
        wgpuCommandEncoderResolveQuerySet(enc, g_queries, 0, 2, g_query_resolve, 0);
        wgpuCommandEncoderCopyBufferToBuffer(enc, g_query_resolve, 0, g_query_read, 0, 16);
    }
    if (present_view) {
        WGPURenderPassColorAttachment color = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
        color.view = present_view;
        color.loadOp = WGPULoadOp_Clear;
        color.storeOp = WGPUStoreOp_Store;
        color.clearValue = WGPUColor{0.0, 0.0, 0.0, 1.0};
        WGPURenderPassDescriptor rd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
        rd.colorAttachmentCount = 1;
        rd.colorAttachments = &color;
        WGPURenderPassEncoder rp = wgpuCommandEncoderBeginRenderPass(enc, &rd);
        const float w = static_cast<float>(g_surface_width), h = static_cast<float>(g_surface_height);
        const float vw = std::min(w, h * display_aspect()), vh = vw / display_aspect();
        wgpuRenderPassEncoderSetViewport(rp, (w - vw) * 0.5f, (h - vh) * 0.5f, vw, vh, 0.0f, 1.0f);
        wgpuRenderPassEncoderSetPipeline(rp, g_blit);
        wgpuRenderPassEncoderSetBindGroup(rp, 0, g_blit_group, 0, nullptr);
        wgpuRenderPassEncoderDraw(rp, 3, 1, 0, 0);
        wgpuRenderPassEncoderEnd(rp);
        wgpuRenderPassEncoderRelease(rp);
    }
    WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
    wgpuQueueSubmit(g_queue, 1, &cmd);
    wgpuCommandBufferRelease(cmd);
    wgpuCommandEncoderRelease(enc);
    if (measure) {
        g_query_pending = true;
        WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
        cb.mode = WGPUCallbackMode_AllowProcessEvents;
        cb.callback = [](WGPUMapAsyncStatus status, WGPUStringView, void *, void *) {
            if (status == WGPUMapAsyncStatus_Success) g_query_ready = true;
            else g_query_pending = false;
        };
        wgpuBufferMapAsync(g_query_read, WGPUMapMode_Read, 0, 16, cb);
    }
#ifdef __EMSCRIPTEN__
    wgpuInstanceProcessEvents(g_instance);
#else
    wgpuDevicePoll(g_device, false, nullptr);
#endif
}

// The submit worker: copies into wgpu staging (6-10 MB of prims, uploads and tile lists a frame, at ~2.3 GB/s), command
// encoding and submits took a fifth of the render thread. Jobs run in order, two at most in flight. Anything that reads
// GPU results or submits by itself drains it first (drain()). Off with PS2_SUBMIT_THREAD=0, when single-threaded
// (captures; PS2_SUBMIT_THREAD=2 turns it on there to test it) and while profiling.
struct Job {
    Arena arena;
    ParamRecords params;
    std::vector<Command> commands;
    std::vector<NativeDraw> natives;
    std::vector<Write> writes;
    bool present = false;
};
std::mutex g_job_mutex;
std::condition_variable g_job_cv;
std::deque<Job> g_jobs;
std::vector<Job> g_spare_jobs;
bool g_job_running = false, g_worker_started = false;

void run_job(Job &j) {
    for (const Write &w : j.writes) wgpuQueueWriteBuffer(g_queue, w.buffer, w.offset, w.bytes.data(), w.bytes.size());
    if (!j.present) {
        if (!j.commands.empty()) run_commands(j.arena, j.params, j.commands, j.natives, nullptr);
        return;
    }
    WGPUSurfaceTexture st = WGPU_SURFACE_TEXTURE_INIT;
    wgpuSurfaceGetCurrentTexture(g_surface, &st);
    if (st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessOptimal && st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessSuboptimal) {
        if (st.texture) wgpuTextureRelease(st.texture);
        run_commands(j.arena, j.params, j.commands, j.natives, nullptr);
        configure_surface();
        return;
    }
    WGPUTextureView target = wgpuTextureCreateView(st.texture, nullptr);
    run_commands(j.arena, j.params, j.commands, j.natives, target);
#ifndef __EMSCRIPTEN__
    wgpuSurfacePresent(g_surface);
#endif
    wgpuTextureViewRelease(target);
    wgpuTextureRelease(st.texture);
}

void submit_worker() {
#ifdef __linux__
    pthread_setname_np(pthread_self(), "gpusubmit");
#endif
    std::unique_lock lock(g_job_mutex);
    for (;;) {
        g_job_cv.wait(lock, [] { return !g_jobs.empty(); });
        Job j = std::move(g_jobs.front());
        g_jobs.pop_front();
        g_job_running = true;
        lock.unlock();
        run_job(j);
        j.arena.clear();
        j.params.clear();
        j.commands.clear();
        j.natives.clear();
        j.writes.clear();
        lock.lock();
        g_spare_jobs.push_back(std::move(j));
        g_job_running = false;
        g_job_cv.notify_all();
    }
}

bool worker_wanted() {
#ifdef __EMSCRIPTEN__
    return false;
#else
    static const char *e = std::getenv("PS2_SUBMIT_THREAD");  // 0: off, 2: also single-threaded (to test it)
    if (e && std::strcmp(e, "0") == 0) return false;
    return (queue::active() || (e && std::strcmp(e, "2") == 0)) && !g_profile_out;
#endif
}

void after_submit() {
    g_command_info.clear();
    ++g_serial;
    g_decoded_used = 0;
    g_decode_cache.clear();
    g_clut_loads = 0;
}

// Hands the pending commands and writes to the worker (render thread).
void enqueue(bool present) {
    if (!g_worker_started) {
        std::thread(submit_worker).detach();
        g_worker_started = true;
    }
    std::unique_lock lock(g_job_mutex);
    g_job_cv.wait(lock, [] { return g_jobs.size() < 2; });
    Job j;
    if (!g_spare_jobs.empty()) {
        j = std::move(g_spare_jobs.back());
        g_spare_jobs.pop_back();
    }
    std::swap(j.arena, g_arena);
    std::swap(j.params, g_param_records);
    std::swap(j.commands, g_commands);
    std::swap(j.natives, g_native_draws);
    g_native_draws.clear();
    g_native_emitted = 0;
    std::swap(j.writes, g_writes);
    j.present = present;
    g_jobs.push_back(std::move(j));
    g_job_cv.notify_all();
}

// Waits until the worker has submitted everything handed to it, including pending writes (render thread).
void drain() {
    if (!g_worker_started) return;
    if (!g_writes.empty()) enqueue(false);
    std::unique_lock lock(g_job_mutex);
    g_job_cv.wait(lock, [] { return g_jobs.empty() && !g_job_running; });
}

// CLUT loads and decodes write storage no render pass before them reads (a fresh CLUT slot, a fresh range of the decoded
// buffer; both are only reused after a submit) and read only what compute passes wrote (render passes never write VRAM):
// each moves ahead of the render-only native commands just before it, so the stream switches between compute and render
// passes less (every switch waits for the GPU to finish the pass before). Native commands left side by side merge.
void hoist_commands() {
    if (g_native_draws.empty()) return;
    static std::vector<Command> out;
    static std::vector<std::uint8_t> render;  // per out command: native draws without a write-back or check
    static std::vector<std::uint32_t> moved;  // old command index -> new (PS2_GPU_PROFILE's notes)
    out.clear();
    render.clear();
    moved.assign(g_commands.size(), 0);
    for (std::size_t i = 0; i < g_commands.size(); ++i) {
        const Command &c = g_commands[i];
        if (c.pipeline == kLoadClut || c.pipeline == kDecode) {
            std::size_t at = out.size();
            while (at && render[at - 1]) --at;
            g_hoisted += at != out.size();
            out.insert(out.begin() + static_cast<std::ptrdiff_t>(at), c);
            render.insert(render.begin() + static_cast<std::ptrdiff_t>(at), 0);
            if (g_profile_out)
                for (std::size_t k = 0; k < i; ++k) moved[k] += moved[k] >= at;
            moved[i] = static_cast<std::uint32_t>(at);
            continue;
        }
        bool only = c.pipeline == kNativeDraws;
        for (std::uint32_t k = c.x; only && k < c.x + c.y; ++k) only = !g_native_draws[k].writeback[0] && !g_native_draws[k].check;
        if (c.pipeline == kNativeDraws && !out.empty() && out.back().pipeline == kNativeDraws && out.back().x + out.back().y == c.x) {
            out.back().y += c.y;
            render.back() = render.back() && only;
        } else {
            out.push_back(c);
            render.push_back(only);
        }
        moved[i] = static_cast<std::uint32_t>(out.size() - 1);
    }
    for (CommandInfo &info : g_command_info) info.index = moved[info.index];
    g_commands.swap(out);
}

void submit(WGPUTextureView present_view = nullptr) {
    if (!present_view) g_worker_on = worker_wanted();
    if (g_native_draws.size() > g_native_emitted) emit_pre();  // native draws not in the stream yet read these
    emit_native();
    hoist_commands();
    if (g_commands.empty() && g_writes.empty() && !present_view) return;
    if (g_profile_out && !present_view && g_timestamps && frame_count() >= g_profile_from && frame_count() < g_profile_to) {
        drain();
        profile_submit();
        return;
    }
    if (g_worker_on && !present_view) {
        enqueue(false);
        after_submit();
        return;
    }
    drain();
    for (const Write &w : g_writes) wgpuQueueWriteBuffer(g_queue, w.buffer, w.offset, w.bytes.data(), w.bytes.size());
    g_writes.clear();
    if (!g_commands.empty() || present_view) run_commands(g_arena, g_param_records, g_commands, g_native_draws, present_view);
    g_commands.clear();
    g_native_draws.clear();
    g_native_emitted = 0;
    g_param_records.clear();
    g_arena.clear();
    after_submit();
}

void drain();

void read_back(WGPUBuffer source, std::uint64_t bytes, void *out, std::uint64_t offset = 0) {
    drain();
    WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
    wgpuCommandEncoderCopyBufferToBuffer(enc, source, offset, g_readback, 0, bytes);
    WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
    wgpuQueueSubmit(g_queue, 1, &cmd);
    wgpuCommandBufferRelease(cmd);
    wgpuCommandEncoderRelease(enc);
    bool done = false;
    WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
    cb.mode = WGPUCallbackMode_AllowProcessEvents;
    cb.callback = [](WGPUMapAsyncStatus status, WGPUStringView, void *flag, void *) {
        if (status != WGPUMapAsyncStatus_Success) std::fprintf(stderr, "[gpu] map failed %d\n", static_cast<int>(status));
        *static_cast<bool *>(flag) = true;
    };
    cb.userdata1 = &done;
    wgpuBufferMapAsync(g_readback, WGPUMapMode_Read, 0, bytes, cb);
    wait_until(done);
    const void *mapped = wgpuBufferGetConstMappedRange(g_readback, 0, bytes);
    if (mapped) std::memcpy(out, mapped, bytes);
    wgpuBufferUnmap(g_readback);
}

std::uint32_t make_setup(const State &st, std::uint64_t attr, std::uint32_t *w) {
    const Context &c = st.ctx[(attr >> 9) & 1u];
    std::uint32_t flags = 0;
    if (attr & 0x8u) flags |= 1u;
    if (attr & 0x10u) flags |= 2u;
    if (attr & 0x20u) flags |= 4u;
    if (attr & 0x40u) flags |= 8u;
    if (attr & 0x100u) flags |= 16u;
    if ((c.zbuf >> 32) & 1u) flags |= 32u;
    if (c.test & 1u) flags |= 64u;
    if ((c.test >> 14) & 1u) flags |= 128u;
    if ((c.test >> 15) & 1u) flags |= 256u;
    if ((c.test >> 16) & 1u) flags |= 512u;
    if (st.pabe & 1u) flags |= 1024u;
    if (st.colclamp & 1u) flags |= 2048u;
    if (c.fba & 1u) flags |= 4096u;
    if ((c.tex0 >> 34) & 1u) flags |= 8192u;
    if ((c.tex1 >> 5) & 1u) flags |= 16384u;
    if ((st.texa >> 15) & 1u) flags |= 32768u;
    const std::uint32_t zpsm = 0x30u | (static_cast<std::uint32_t>(c.zbuf >> 24) & 0xFu);
    w[0] = flags;
    w[1] = (static_cast<std::uint32_t>(c.frame) & 0x1FFu) * 32u;
    w[2] = static_cast<std::uint32_t>(c.frame >> 16) & 0x3Fu;
    w[3] = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu;
    w[4] = static_cast<std::uint32_t>(c.frame >> 32);
    w[5] = (static_cast<std::uint32_t>(c.zbuf) & 0x1FFu) * 32u;
    w[6] = zpsm;
    w[7] = (static_cast<std::uint32_t>(c.test >> 1) & 7u) | ((static_cast<std::uint32_t>(c.test >> 12) & 3u) << 4) |
           ((static_cast<std::uint32_t>(c.test >> 17) & 3u) << 8) | ((static_cast<std::uint32_t>(c.alpha) & 0xFFu) << 12) |
           ((static_cast<std::uint32_t>(c.tex0 >> 35) & 3u) << 20) | ((static_cast<std::uint32_t>(c.clamp) & 0xFu) << 24) |
           ((static_cast<std::uint32_t>(st.scanmsk) & 3u) << 28);
    w[8] = static_cast<std::uint32_t>(c.test >> 4) & 0xFFu;
    w[9] = static_cast<std::uint32_t>(c.alpha >> 32) & 0xFFu;
    w[10] = (static_cast<std::uint32_t>(c.scissor) & 0x7FFu) | ((static_cast<std::uint32_t>(c.scissor >> 16) & 0x7FFu) << 16);
    w[11] = (static_cast<std::uint32_t>(c.scissor >> 32) & 0x7FFu) | ((static_cast<std::uint32_t>(c.scissor >> 48) & 0x7FFu) << 16);
    w[12] = static_cast<std::uint32_t>(c.tex0) & 0x3FFFu;
    w[13] = static_cast<std::uint32_t>(c.tex0 >> 14) & 0x3Fu;
    w[14] = static_cast<std::uint32_t>(c.tex0 >> 20) & 0x3Fu;
    w[15] = std::min<std::uint32_t>(static_cast<std::uint32_t>(c.tex0 >> 26) & 0xFu, 10u) | (std::min<std::uint32_t>(static_cast<std::uint32_t>(c.tex0 >> 30) & 0xFu, 10u) << 8);
    w[16] = static_cast<std::uint32_t>(c.tex0 >> 51) & 0xFu;
    w[17] = static_cast<std::uint32_t>(c.tex0 >> 56) & 0x1Fu;
    w[18] = (static_cast<std::uint32_t>(c.clamp >> 4) & 0x3FFu) | ((static_cast<std::uint32_t>(c.clamp >> 14) & 0x3FFu) << 16);
    w[19] = (static_cast<std::uint32_t>(c.clamp >> 24) & 0x3FFu) | ((static_cast<std::uint32_t>(c.clamp >> 34) & 0x3FFu) << 16);
    w[20] = (static_cast<std::uint32_t>(st.texa) & 0xFFu) | ((static_cast<std::uint32_t>(st.texa >> 32) & 0xFFu) << 8);
    w[21] = static_cast<std::uint32_t>(st.fogcol) & 0xFFFFFFu;
    w[22] = g_clut_slot;
    w[23] = z_max(zpsm);
    w[24] = 0xFFFFFFFFu;
    // Mipmapping (TEX1.MXL > 0): LCM | MXL << 1 | MMIN << 4 | L << 7 | K << 16, then TBP | TBW << 16 for levels 1-6.
    const std::uint32_t mxl = std::min<std::uint32_t>(static_cast<std::uint32_t>(c.tex1 >> 2) & 7u, 6u);
    w[25] = mxl ? (static_cast<std::uint32_t>(c.tex1) & 1u) | (mxl << 1) | ((static_cast<std::uint32_t>(c.tex1 >> 6) & 7u) << 4) |
                      ((static_cast<std::uint32_t>(c.tex1 >> 19) & 3u) << 7) | ((static_cast<std::uint32_t>(c.tex1 >> 32) & 0xFFFu) << 16)
                : 0u;
    for (std::uint32_t n = 1; n < 7; ++n) {
        const std::uint64_t m = n < 4 ? c.miptbp1 >> ((n - 1) * 20) : c.miptbp2 >> ((n - 4) * 20);
        w[25 + n] = mip_levels(w) >= n ? (static_cast<std::uint32_t>(m) & 0x3FFFu) | ((static_cast<std::uint32_t>(m >> 14) & 0x3Fu) << 16) : 0u;
    }
    return flags;
}

bool texel_rect(const std::uint32_t *setup, const Vertex *v, int count, std::uint32_t prim, bool fst, int rect[4]) {
    const int tw = 1 << (setup[15] & 0xFFu), th = 1 << (setup[15] >> 8);
    float u0 = 1e30f, v0 = 1e30f, u1 = -1e30f, v1 = -1e30f;
    for (int i = 0; i < count; ++i) {
        float u, t;
        if (fst) {
            u = static_cast<float>(v[i].u) / 16.0f;
            t = static_cast<float>(v[i].v) / 16.0f;
        } else {
            const float q = prim == 6 ? v[count - 1].q : v[i].q;
            if (!(q > 0.0f) || !(v[0].q > 0.0f) || !(v[count - 1].q > 0.0f)) return false;
            u = v[i].s / q * static_cast<float>(tw);
            t = v[i].t / q * static_cast<float>(th);
        }
        if (!std::isfinite(u) || !std::isfinite(t)) return false;
        u0 = std::min(u0, u);
        u1 = std::max(u1, u);
        v0 = std::min(v0, t);
        v1 = std::max(v1, t);
    }
    const auto axis = [](std::uint32_t mode, float lo, float hi, int size, std::uint32_t clamp, int &a, int &b) {
        a = static_cast<int>(std::floor(lo)) - 1;
        b = static_cast<int>(std::ceil(hi)) + 1;
        switch (mode) {
        case 0:
            if (a < 0 || b >= size) {
                a = 0;
                b = size - 1;
            }
            return true;
        case 1:
            a = std::clamp(a, 0, size - 1);
            b = std::clamp(b, 0, size - 1);
            return true;
        case 2: {
            const int minv = static_cast<int>(clamp & 0x3FFu), maxv = static_cast<int>(clamp >> 16);
            a = std::clamp(a, minv, std::max(minv, maxv));
            b = std::clamp(b, minv, std::max(minv, maxv));
            return true;
        }
        default: return false;
        }
    };
    int ua, ub, va, vb;
    if (!axis((setup[7] >> 24) & 3u, u0, u1, tw, setup[18], ua, ub) || !axis((setup[7] >> 26) & 3u, v0, v1, th, setup[19], va, vb)) return false;
    rect[0] = std::max(ua, 0);
    rect[1] = std::max(va, 0);
    rect[2] = std::max(ub, 0);
    rect[3] = std::max(vb, 0);
    return true;
}

bool shares_frame(const std::uint32_t *setup, const Batch &b) {
    const auto wide = [](std::uint32_t psm) { return psm == PSMCT32 || psm == PSMCT24 || psm == PSMT8H || psm == PSMT4HL || psm == PSMT4HH; };
    return setup[12] == b.fbp && setup[13] == b.fbw && (setup[14] == b.fpsm || (wide(setup[14]) && wide(b.fpsm)));
}

// Whether any of the batch's first `limit` primitives drew over the texel rectangle.
bool drawn_under(const Batch &b, const int rect[4], std::size_t limit = ~std::size_t{0}) {
    const auto hits = [&](int x0, int y0, int x1, int y1) { return rect[0] <= x1 && x0 <= rect[2] && rect[1] <= y1 && y0 <= rect[3]; };
    const std::size_t prims = std::min(limit, b.boxes.size() / 2);
    if (!prims) return false;
    if (prims > 64) return hits(b.minx, b.miny, b.maxx, b.maxy);
    for (std::size_t i = 0; i < prims; ++i) {
        const std::uint32_t lo = b.boxes[i * 2], hi = b.boxes[i * 2 + 1];
        if (hits(static_cast<int>(lo & 0xFFFFu), static_cast<int>(lo >> 16), static_cast<int>(hi & 0xFFFFu), static_cast<int>(hi >> 16))) return true;
    }
    return false;
}

void attrs(std::uint32_t *rec, int n, const Vertex &v, bool fst, const Vertex *color) {
    const Vertex &c = color ? *color : v;
    rec[12 + n] = c.r | (static_cast<std::uint32_t>(c.g) << 8) | (static_cast<std::uint32_t>(c.b) << 16) | (static_cast<std::uint32_t>(c.a) << 24);
    rec[15 + n * 3] = f2u(fst ? static_cast<float>(v.u) : v.s);
    rec[16 + n * 3] = f2u(fst ? static_cast<float>(v.v) : v.t);
    rec[17 + n * 3] = f2u(fst ? 1.0f : v.q);
    rec[11] |= static_cast<std::uint32_t>(v.f) << (8 * n);
}

// ---- Native renderer, stage 1 (decomp/notes/native-renderer.md §5.2, runtime/src/native.hpp) ----
// Side by side: the world batches VU1 runs are also drawn by a render pipeline (native.wgsl) into a colour + depth
// target of their own; the emulated path draws exactly as before. A run of native batches starts by importing the
// emulated frame and Z buffer (what the GS holds before the run) and ends at the next emulated draw. PS2_NATIVE_DUMP=
// frame,dir writes the first run that starts at or after that frame, before and after, from both paths (raw files for
// remaster/natdiff.py).

struct NativeTarget {
    WGPUTexture color = nullptr, depth = nullptr, alpha = nullptr;
    WGPUTextureView color_view = nullptr, depth_view = nullptr, alpha_view = nullptr;
    std::uint32_t width = 0, height = 0;
};

// Replace mode, tiles (§7.3), and the hardware GS renderer's target cache: one target per frame buffer (with the Z buffer
// it was bound with; z false: none), kept coherent with VRAM per tile (tiles_bind_to). Tile bitsets, two words per row:
// native-newer colour and Z, VRAM-newer, and what the emulated primitives of the pending batch read and write (applied
// when the batch goes into the stream, tiles_apply); the last three per buffer, [0] the frame, [1] the Z buffer, which
// other targets can alias apart (the glow drawn over the Z buffer leaves the frame's colour in the target).
// A hardware batch reading its own target (the glow's feedback) draws into the shadow, a second colour + alpha pair,
// while it reads the target, then the two trade places (hw_flush): the shadow equals the target but in dirty (GS
// pixels x0 y0 x1 y1; empty: x0 > x1), the bounding box of what went into the target since, which the batch first
// copies over (a draw in its own pass, no copy between passes).
struct Binding {
    NativeTarget target, shadow;  // the shadow: colour and alpha only (the Z buffer stays with the target), made on first use
    int dirty[4] = {1, 1, 0, 0};
    // the tile write-back's bindings, per colour texture (binding_group: made when encoded, encoding thread only)
    WGPUBindGroup group[2] = {};
    WGPUTextureView group_view[2] = {};
    std::uint64_t group_gen[2] = {};
    std::uint32_t fbp = 0, fbw = 0, fpsm = 0, zbp = 0, zpsm = 0, rows = 0;
    bool z = false;
    std::uint32_t tx = 0, ty = 0;  // tiles across (<= 128) and down (<= 128)
    std::uint64_t tc[128][2] = {}, tz[128][2] = {}, tv[2][128][2] = {}, pr[2][128][2] = {}, pw[2][128][2] = {};
    std::uint64_t newer[2] = {};  // rows whose tc or tz may have a bit set (bit y), so the others are skipped
    bool pending = false;
    std::vector<std::uint32_t> list;  // tiles waiting for a write-back (x | y << 8 | flags << 16)
    std::uint64_t bound_lo[2] = {}, bound_hi[2] = {};  // VRAM bytes of the frame and Z pages
    std::uint64_t used = 0;  // last made current (g_nat.clock)
};

struct Native {
    bool on = false, replace = false, check = false, plight = false, hw_interp = false;
    std::uint32_t adc_back = 0;
    WGPUShaderModule module = nullptr;
    WGPUPipelineLayout pipeline_layout = nullptr;
    WGPUBindGroupLayout writeback_layout = nullptr;
    WGPUBindGroup writeback_group = nullptr;
    WGPUComputePipeline writeback = nullptr;
    std::uint32_t rx0 = 0, ry0 = 0, rx1 = 0, ry1 = 0;  // replace: the samples the run's batches may have drawn
    bool zwritten = false;
    std::unordered_map<std::uint32_t, WGPURenderPipeline> pipelines;
    NativeTarget target;
    bool open = false, in_kick = false;
    std::uint32_t kick_prims = 0;
    std::uint64_t frame = 0;
    long long dump_frame = -1;
    std::string dump_dir;
    int dump_state = 0;  // 0 waiting, 1 this run is dumped, 2 written
    std::uint32_t fbp = 0, fbw = 0, fpsm = 0, zbp = 0, zpsm = 0, dump_from = 0;
    std::vector<std::uint8_t> pre_rgba;
    std::vector<std::uint32_t> pre_z;
    std::uint64_t runs = 0, batches = 0, drawn = 0, draws = 0, triangles = 0, isolated = 0, oracle_batches = 0, prim_mismatch = 0, cross_batch = 0;
    std::uint64_t writebacks = 0, tag_prim = 0;
    // what the run round trip costs: samples imported and written back, and why each run ended
    std::uint64_t imported = 0, written = 0, frames = 0, closes[6] = {};
    // replace mode, tiles (§7.3): the target cache, each target kept coherent with VRAM per tile
    bool tiles = false;
    WGPUComputePipeline writeback_tiles = nullptr;
    std::vector<std::unique_ptr<Binding>> bindings;
    Binding *cur = nullptr;  // the target native and hardware draws go into
    // kSource: group 1 of the render pipelines, the colour and alpha of kSources targets (source_group); source, a
    // 1 x 1 pair, fills the slots not used (none_group: every slot)
    NativeTarget source;
    WGPUBindGroupLayout source_layout = nullptr;
    WGPUBindGroup none_group = nullptr;
    std::map<std::array<WGPUTextureView, kSources + 1>, WGPUBindGroup> source_groups;  // per colour view of each slot, the Z source's depth
    WGPUPipelineLayout render_layout = nullptr;
    std::uint64_t sourced = 0, swapped = 0, blitted = 0;  // setups read from a target, batches drawn into the shadow, samples copied to it
    std::uint64_t zsourced = 0;  // setups read from a target's depth (kSourceZ)
    // transfers: tiles one target holds newer moved into another target's view of the same memory in another format,
    // instead of a write-back and an import (xfer_plan); group 1 of the transfer pipelines per colour view of the target
    // read (xfer_group); samples per source view kind, destination view kind (0 CT32 frame, 1 Z24 frame, 2 Z24 Z buffer)
    WGPUBindGroupLayout xfer_layout = nullptr;
    WGPUPipelineLayout xfer_pipeline_layout = nullptr;
    std::map<WGPUTextureView, WGPUBindGroup> xfer_groups;
    std::uint64_t xfer_tiles = 0, xfer_dead = 0, xfer_by[3][3] = {};
    std::uint64_t overwritten = 0;  // sprites whose tiles needed no import
    std::uint64_t clock = 0, made = 0, rebased = 0, retired = 0, switches = 0;
    std::uint64_t imports = 0, tile_writebacks = 0;
    // samples written back per cause (what made them leave the target): kByEmulated .. kByFlush
    int cause = 0;
    std::uint64_t written_by[6] = {};
    // texture-read write-backs per TEX0 PSM | target frame PSM << 8 | tile flags << 16 | the batch's own target << 20 |
    // TBP0, TBW the target's frame << 21 | its Z buffer << 22
    std::uint32_t read_key = 0, read_tbp = 0, read_tbw = 0;
    std::map<std::uint32_t, std::uint64_t> read_detail;
    // PS2_GS_HW: primitives per path (kHwOk: hardware) and, for the rejects, per detail (ALPHA, FBMSK, PSM, FBW)
    std::uint64_t hw_prims[kHwReasons] = {};
    std::map<std::uint32_t, std::uint64_t> hw_detail[kHwReasons];
    std::uint64_t programs[32] = {};  // messages drawn per program (characters: per pass)
    std::map<std::string, std::uint64_t> unsupported;
} g_nat;

constexpr std::uint32_t kNativeSourceZ = 524288u, kNativeRtHires = 262144u, kNativePlain = 131072u, kNativeSourced = 65536u, kNativeDecoded = 32768u, kNativeBlit = 16384u, kNativePremul = 8192u, kNativeHw = 4096u, kNativeTiles = 2048u, kNativeAlpha = 1024u, kNativeImport = 512u, kNativeColor = 256u, kNativeZWrite = 128u, kNativeConstant = 16u;

// GS ALPHA (Cv = ((A - B) * C >> 7) + D; A, B, D: 0 Cs, 1 Cd, 2 zero; C: 0 As, 1 Ad, 2 FIX) as fixed-function blending,
// with the shader's alpha output As / 128 (§4.3). 0: not expressible without the destination alpha (C = Ad) or not seen.
// kBlendDst (Cd·C): the shader outputs C/256 and blends Dst·src + Src·dst (= 2·Cd·C/256), so C up to 255 needs no clamp.
// kBlendDstAlpha (0211, Cs·Ad + Cd): DstAlpha under the A/128 storage of the colour target's alpha (§4.3).
// kBlendSub (0x24 with FIX: (Cs - Cd)·FIX): Subtract with the constant as both factors, so only for FIX up to 128.
enum NativeBlend : std::uint32_t { kBlendNone = 1, kBlendKeep, kBlendZero, kBlendLerp, kBlendAdd, kBlendSrc, kBlendDst, kBlendRevSub, kBlendDstAlpha, kBlendSub };

std::uint32_t native_blend(std::uint32_t alpha, bool abe, std::uint32_t fix = 256) {
    if (!abe) return kBlendNone;
    const std::uint32_t a = alpha & 3u, b = (alpha >> 2) & 3u, c = (alpha >> 4) & 3u, d = (alpha >> 6) & 3u;
    if (a == b) return d == 0 ? kBlendNone : d == 1 ? kBlendKeep : kBlendZero;
    if (c == 1) return a == 0 && b == 2 && d == 1 ? kBlendDstAlpha : 0;
    if (a == 0 && b == 1 && d == 1) return kBlendLerp;
    if (a == 0 && b == 2 && d == 1) return kBlendAdd;
    if (a == 0 && b == 2 && d == 2) return kBlendSrc;
    if (a == 1 && b == 2 && d == 2) return kBlendDst;
    if (a == 2 && b == 0 && d == 1) return kBlendRevSub;
    if (a == 0 && b == 1 && c == 2 && d == 2 && fix <= 128) return kBlendSub;
    return 0;
}

// key: blend (bits 0-3), FIX factor (16), depth compare (bits 5-6: always, gequal, greater), Z write (128), colour (256),
// the import (512), alpha (1024: the frame's alpha, As | FBA, into the r8uint target, unblended as the GS writes it),
// decoded (32768: gs.wgsl DECODED, every level of the draw's texture is in decoded[])
WGPURenderPipeline native_pipeline(std::uint32_t key) {
    if (const auto it = g_nat.pipelines.find(key); it != g_nat.pipelines.end()) return it->second;
    if (key == kNativeBlit) {  // a target's colour and alpha to its shadow (native_blit_fs), the scissor rect of it
        WGPUColorTargetState targets[2] = {WGPU_COLOR_TARGET_STATE_INIT, WGPU_COLOR_TARGET_STATE_INIT};
        targets[0].format = WGPUTextureFormat_RGBA8Unorm;
        targets[1].format = WGPUTextureFormat_R8Uint;
        WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
        fs.module = g_nat.module;
        fs.entryPoint = view("native_blit_fs");
        fs.targetCount = 2;
        fs.targets = targets;
        WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
        ds.format = WGPUTextureFormat_Depth32Float;
        ds.depthWriteEnabled = WGPUOptionalBool_False;
        ds.depthCompare = WGPUCompareFunction_Always;
        WGPURenderPipelineDescriptor rd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
        rd.layout = g_nat.render_layout;
        rd.vertex.module = g_nat.module;
        rd.vertex.entryPoint = view("native_full_vs");
        rd.primitive.topology = WGPUPrimitiveTopology_TriangleList;
        rd.depthStencil = &ds;
        rd.fragment = &fs;
        WGPURenderPipeline p = wgpuDeviceCreateRenderPipeline(g_device, &rd);
        if (!p) std::fprintf(stderr, "[native] pipeline %x not created\n", key);
        return g_nat.pipelines[key] = p;
    }
    const bool import = key & kNativeImport;
    // a tile import of the frame (kNativeColor) or the Z buffer (kNativeZWrite) alone; neither: both
    const bool import_color = import && (key & (kNativeColor | kNativeZWrite)) != kNativeZWrite, import_z = import && (key & (kNativeColor | kNativeZWrite)) != kNativeColor;
    const std::uint32_t blend = key & 15u;
    // kNativePremul: the shader multiplies Cs by its factor (Cs·C with C past 1), the hardware takes it as is
    const WGPUBlendFactor f = (key & kNativePremul) ? WGPUBlendFactor_One : (key & kNativeConstant) ? WGPUBlendFactor_Constant : WGPUBlendFactor_SrcAlpha;
    const WGPUBlendFactor nf = (key & kNativeConstant) ? WGPUBlendFactor_OneMinusConstant : WGPUBlendFactor_OneMinusSrcAlpha;
    WGPUBlendState bs = WGPU_BLEND_STATE_INIT;
    bs.alpha.operation = WGPUBlendOperation_Add;
    bs.alpha.srcFactor = WGPUBlendFactor_One;
    bs.alpha.dstFactor = WGPUBlendFactor_Zero;
    bs.color.operation = WGPUBlendOperation_Add;
    bs.color.srcFactor = WGPUBlendFactor_One;
    bs.color.dstFactor = WGPUBlendFactor_Zero;
    switch (blend) {
    case kBlendLerp: bs.color.srcFactor = f, bs.color.dstFactor = nf; break;
    case kBlendAdd: bs.color.srcFactor = f, bs.color.dstFactor = WGPUBlendFactor_One; break;
    case kBlendSrc: bs.color.srcFactor = f; break;
    case kBlendDst: bs.color.srcFactor = WGPUBlendFactor_Dst, bs.color.dstFactor = WGPUBlendFactor_Src; break;
    case kBlendDstAlpha: bs.color.srcFactor = WGPUBlendFactor_DstAlpha, bs.color.dstFactor = WGPUBlendFactor_One; break;
    case kBlendRevSub: bs.color.operation = WGPUBlendOperation_ReverseSubtract, bs.color.srcFactor = f, bs.color.dstFactor = WGPUBlendFactor_One; break;
    case kBlendSub: bs.color.operation = WGPUBlendOperation_Subtract, bs.color.srcFactor = f, bs.color.dstFactor = WGPUBlendFactor_Constant; break;
    case kBlendZero: bs.color.srcFactor = WGPUBlendFactor_Zero; break;
    default: break;
    }
    WGPUColorTargetState color = WGPU_COLOR_TARGET_STATE_INIT;
    color.format = WGPUTextureFormat_RGBA8Unorm;
    // the colour target's alpha holds min(A, 128) / 128 for DstAlpha (§4.3): written with the frame's alpha
    color.writeMask = import ? (import_color ? WGPUColorWriteMask_All : WGPUColorWriteMask_None)
                             : ((key & kNativeColor) && blend != kBlendKeep ? WGPUColorWriteMask_Red | WGPUColorWriteMask_Green | WGPUColorWriteMask_Blue
                                                                             : WGPUColorWriteMask_None) |
                                   ((key & kNativeAlpha) ? WGPUColorWriteMask_Alpha : WGPUColorWriteMask_None);
    if (!import && blend != kBlendNone && blend != kBlendKeep) color.blend = &bs;
    WGPUColorTargetState targets[2] = {color, WGPU_COLOR_TARGET_STATE_INIT};
    targets[1].format = WGPUTextureFormat_R8Uint;
    targets[1].writeMask = import_color || (!import && (key & kNativeAlpha)) ? WGPUColorWriteMask_All : WGPUColorWriteMask_None;
    WGPUConstantEntry constants[8] = {WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT};
    constants[0].key = view("SCALE");
    constants[0].value = static_cast<double>(g_sx);
    constants[1].key = view("SCALE_Y");
    constants[1].value = static_cast<double>(g_sy);
    constants[2].key = view("SOURCE");
    constants[2].value = (key & kNativeSourced) ? 1.0 : 0.0;
    constants[3].key = view("RT_HIRES");
    constants[3].value = (key & kNativeRtHires) ? 1.0 : 0.0;
    constants[4].key = view("DECODED");
    constants[4].value = (key & kNativeDecoded) ? 1.0 : 0.0;
    constants[5].key = view("PLAIN");
    constants[5].value = (key & kNativePlain) ? 1.0 : 0.0;
    constants[6].key = view("SETUP_PRM");
    constants[6].value = 1.0;
    constants[7].key = view("SOURCE_Z");
    constants[7].value = (key & kNativeSourceZ) ? 1.0 : 0.0;
    WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
    fs.module = g_nat.module;
    fs.entryPoint = view(import ? "native_import_fs" : (key & kNativeHw) ? "hw_fs" : "native_fs");
    fs.constantCount = !import && (key & kNativeHw) ? 8 : 2;
    fs.constants = constants;
    fs.targetCount = 2;
    fs.targets = targets;
    WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
    ds.format = WGPUTextureFormat_Depth32Float;
    ds.depthWriteEnabled = import ? (import_z ? WGPUOptionalBool_True : WGPUOptionalBool_False) : (key & kNativeZWrite) ? WGPUOptionalBool_True : WGPUOptionalBool_False;
    const std::uint32_t cmp = (key >> 5) & 3u;
    ds.depthCompare = import || cmp == 0 ? WGPUCompareFunction_Always : cmp == 1 ? WGPUCompareFunction_GreaterEqual : WGPUCompareFunction_Greater;
    WGPURenderPipelineDescriptor rd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    rd.layout = g_nat.render_layout;
    rd.vertex.module = g_nat.module;
    const bool full = import && !(key & kNativeTiles);  // the import of a whole run, or of a tile list (instanced)
    rd.vertex.entryPoint = view(full ? "native_full_vs" : import ? "native_tile_vs" : (key & kNativeHw) ? "hw_vs" : "native_vs");
    rd.vertex.constantCount = full ? 0 : 2;
    rd.vertex.constants = full ? nullptr : constants;
    rd.primitive.topology = WGPUPrimitiveTopology_TriangleList;
    rd.depthStencil = &ds;
    rd.fragment = &fs;
    WGPURenderPipeline p = wgpuDeviceCreateRenderPipeline(g_device, &rd);
    if (!p) std::fprintf(stderr, "[native] pipeline %x not created\n", key);
    g_nat.pipelines[key] = p;
    return p;
}

// A transfer's pipeline (native.wgsl native_xfer_fs), into a target's frame (colour and alpha) or its Z buffer, over a
// tile list.
enum XferInto : std::uint32_t { kXferFrame, kXferZ };
constexpr std::uint32_t kNativeXfer = 1u << 16;  // above the render pipelines' key bits (kNativeDecoded)

WGPURenderPipeline xfer_pipeline(XferInto into) {
    const std::uint32_t key = kNativeXfer | into;
    if (const auto it = g_nat.pipelines.find(key); it != g_nat.pipelines.end()) return it->second;
    WGPUColorTargetState targets[2] = {WGPU_COLOR_TARGET_STATE_INIT, WGPU_COLOR_TARGET_STATE_INIT};
    targets[0].format = WGPUTextureFormat_RGBA8Unorm;
    targets[1].format = WGPUTextureFormat_R8Uint;
    targets[0].writeMask = targets[1].writeMask = into == kXferZ ? WGPUColorWriteMask_None : WGPUColorWriteMask_All;
    WGPUConstantEntry constants[2] = {WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT};
    constants[0].key = view("SCALE");
    constants[0].value = static_cast<double>(g_sx);
    constants[1].key = view("SCALE_Y");
    constants[1].value = static_cast<double>(g_sy);
    WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
    fs.module = g_nat.module;
    fs.entryPoint = view("native_xfer_fs");
    fs.constantCount = 2;
    fs.constants = constants;
    fs.targetCount = 2;
    fs.targets = targets;
    WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
    ds.format = WGPUTextureFormat_Depth32Float;
    ds.depthWriteEnabled = into == kXferZ ? WGPUOptionalBool_True : WGPUOptionalBool_False;
    ds.depthCompare = WGPUCompareFunction_Always;
    WGPURenderPipelineDescriptor rd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    rd.layout = g_nat.xfer_pipeline_layout;
    rd.vertex.module = g_nat.module;
    rd.vertex.entryPoint = view("native_tile_vs");
    rd.vertex.constantCount = 2;
    rd.vertex.constants = constants;
    rd.primitive.topology = WGPUPrimitiveTopology_TriangleList;
    rd.depthStencil = &ds;
    rd.fragment = &fs;
    WGPURenderPipeline p = wgpuDeviceCreateRenderPipeline(g_device, &rd);
    if (!p) std::fprintf(stderr, "[native] transfer pipeline %u not created\n", into);
    return g_nat.pipelines[key] = p;
}

// replace: the write-back's bindings (native.wgsl native_writeback): VRAM, the swizzle tables, params, the target
WGPUBindGroup writeback_group(const NativeTarget &t) {
    WGPUBindGroupEntry e[7];
    for (WGPUBindGroupEntry &x : e) x = WGPU_BIND_GROUP_ENTRY_INIT;
    const WGPUBuffer buffers[4] = {g_vram, g_tables, g_params, g_data};  // data: the tile lists
    for (int i = 0; i < 4; ++i) {
        e[i].binding = static_cast<std::uint32_t>(i);
        e[i].buffer = buffers[i];
        e[i].size = i == 2 ? kParamStride : WGPU_WHOLE_SIZE;
    }
    e[4].binding = 9;
    e[4].textureView = t.color_view;
    e[5].binding = 10;
    e[5].textureView = t.depth_view;
    e[6].binding = 11;
    e[6].textureView = t.alpha_view;
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = g_nat.writeback_layout;
    d.entryCount = 7;
    d.entries = e;
    return wgpuDeviceCreateBindGroup(g_device, &d);
}

std::uint64_t g_group_gen = 1;  // rebuild_group: the buffers the write-back groups bind changed

void native_writeback_group() {
    ++g_group_gen;
    if (!g_nat.writeback_layout || !g_nat.target.color || !g_vram) return;
    if (g_nat.writeback_group) wgpuBindGroupRelease(g_nat.writeback_group);
    g_nat.writeback_group = g_data ? writeback_group(g_nat.target) : nullptr;
}

// A cached target's write-back group for draw d's views (the target's colour texture when the write-back was recorded:
// the shadow may have traded places since), made when first encoded after the buffers changed (encoding thread only).
WGPUBindGroup binding_group(Binding &b, const NativeDraw &d) {
    int k = b.group_view[0] == d.color ? 0 : b.group_view[1] == d.color ? 1 : b.group_gen[0] <= b.group_gen[1] ? 0 : 1;
    if (b.group[k] && b.group_view[k] == d.color && b.group_gen[k] == g_group_gen) return b.group[k];
    if (b.group[k]) wgpuBindGroupRelease(b.group[k]);
    NativeTarget t;
    t.color_view = d.color, t.depth_view = d.depth, t.alpha_view = d.alpha;
    b.group[k] = writeback_group(t);
    b.group_view[k] = d.color;
    b.group_gen[k] = g_group_gen;
    return b.group[k];
}

// Group 1 of a hardware batch's draws: the colour and alpha of the targets in its source slots and the depth of its Z
// source (kSourceZ; none: the 1 x 1 textures), kept until a target is freed (render thread).
WGPUBindGroup source_group(const NativeTarget *const (&slots)[kSources], const NativeTarget *z = nullptr) {
    const std::array<WGPUTextureView, kSources + 1> key{slots[0] ? slots[0]->color_view : nullptr, slots[1] ? slots[1]->color_view : nullptr,
                                                        z ? z->depth_view : nullptr};
    if (!key[0] && !key[1] && !key[2]) return g_nat.none_group;
    WGPUBindGroup &g = g_nat.source_groups[key];
    if (g) return g;
    WGPUBindGroupEntry e[kSources * 2 + 1];
    for (std::uint32_t i = 0; i < kSources; ++i) {
        const NativeTarget &t = slots[i] ? *slots[i] : g_nat.source;
        for (std::uint32_t k = 0; k < 2; ++k) {
            e[i * 2 + k] = WGPU_BIND_GROUP_ENTRY_INIT;
            e[i * 2 + k].binding = i * 2 + k;
            e[i * 2 + k].textureView = k ? t.alpha_view : t.color_view;
        }
    }
    e[kSources * 2] = WGPU_BIND_GROUP_ENTRY_INIT;
    e[kSources * 2].binding = kSources * 2;
    e[kSources * 2].textureView = (z ? *z : g_nat.source).depth_view;
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = g_nat.source_layout;
    d.entryCount = kSources * 2 + 1;
    d.entries = e;
    return g = wgpuDeviceCreateBindGroup(g_device, &d);
}

// Drops the source groups that bind texture view v (its target is about to be freed; everything queued is submitted).
void forget_source(WGPUTextureView v) {
    if (!v) return;
    std::erase_if(g_nat.source_groups, [v](const auto &e) {
        if (std::find(e.first.begin(), e.first.end(), v) == e.first.end()) return false;
        if (e.second) wgpuBindGroupRelease(e.second);
        return true;
    });
    if (const auto it = g_nat.xfer_groups.find(v); it != g_nat.xfer_groups.end()) {
        wgpuBindGroupRelease(it->second);
        g_nat.xfer_groups.erase(it);
    }
}

// Group 1 of a transfer out of target views t (native.wgsl xfer_*): its colour, depth and alpha, kept until the target
// is freed (render thread).
WGPUBindGroup xfer_group(const NativeTarget &t) {
    WGPUBindGroup &g = g_nat.xfer_groups[t.color_view];
    if (g) return g;
    WGPUBindGroupEntry e[3];
    const WGPUTextureView views[3] = {t.color_view, t.depth_view, t.alpha_view};
    for (std::uint32_t i = 0; i < 3; ++i) {
        e[i] = WGPU_BIND_GROUP_ENTRY_INIT;
        e[i].binding = 5u + i;
        e[i].textureView = views[i];
    }
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = g_nat.xfer_layout;
    d.entryCount = 3;
    d.entries = e;
    return g = wgpuDeviceCreateBindGroup(g_device, &d);
}

void free_target(NativeTarget &t) {
    for (WGPUTextureView v : {t.color_view, t.depth_view, t.alpha_view})
        if (v) wgpuTextureViewRelease(v);
    for (WGPUTexture x : {t.color, t.depth, t.alpha})
        if (x) wgpuTextureRelease(x);
    t = NativeTarget{};
}

void make_target(NativeTarget &t, std::uint32_t width, std::uint32_t height) {
    WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
    td.usage = WGPUTextureUsage_RenderAttachment | WGPUTextureUsage_CopySrc | WGPUTextureUsage_TextureBinding;
    td.dimension = WGPUTextureDimension_2D;
    td.size = WGPUExtent3D{width, height, 1};
    td.format = WGPUTextureFormat_RGBA8Unorm;
    t.color = wgpuDeviceCreateTexture(g_device, &td);
    td.format = WGPUTextureFormat_Depth32Float;
    t.depth = wgpuDeviceCreateTexture(g_device, &td);
    td.format = WGPUTextureFormat_R8Uint;
    t.alpha = wgpuDeviceCreateTexture(g_device, &td);
    t.color_view = wgpuTextureCreateView(t.color, nullptr);
    t.depth_view = wgpuTextureCreateView(t.depth, nullptr);
    t.alpha_view = wgpuTextureCreateView(t.alpha, nullptr);
    t.width = width;
    t.height = height;
}

void native_target(std::uint32_t width, std::uint32_t height) {
    NativeTarget &t = g_nat.target;
    if (t.color && t.width == width && t.height == height) return;
    if (t.color) {  // commands already queued draw into the old one and the write-back group binds it: submitted first
        emit_all();
        submit();
        drain();
        free_target(t);
    }
    make_target(t, width, height);
    native_writeback_group();
}

// Z max and the depth of one Z unit for a Z buffer format: depth32float holds Z / 2^bits exactly (§4.3).
void native_depth(std::uint32_t zpsm, std::uint32_t &zmax, float &scale) {
    zmax = z_max(zpsm);
    scale = zpsm == PSMZ24 ? 1.0f / 16777216.0f : zmax == 0xFFFFu ? 1.0f / 65536.0f : 1.0f / 4294967296.0f;
}

void encode_native(WGPUCommandEncoder enc, const Command &c, const std::vector<NativeDraw> &draws) {
    const NativeDraw *d = draws.data() + c.x;
    const std::uint32_t count = c.y;
    if (!count) return;
    bool checks = false;
    for (std::uint32_t i = 0; i < count; ++i) checks = checks || d[i].check;
    if (checks) {
        WGPUComputePassDescriptor cd = WGPU_COMPUTE_PASS_DESCRIPTOR_INIT;
        cd.timestampWrites = prof_slot("native-check", c.x);
        WGPUComputePassEncoder pass = wgpuCommandEncoderBeginComputePass(enc, &cd);
        wgpuComputePassEncoderSetPipeline(pass, g_native_check);
        for (std::uint32_t i = 0; i < count; ++i) {
            if (!d[i].check) continue;
            const std::uint32_t offset = d[i].param * kParamStride;
            wgpuComputePassEncoderSetBindGroup(pass, 0, g_native_group, 1, &offset);
            wgpuComputePassEncoderDispatchWorkgroups(pass, d[i].check, 1, 1);
        }
        wgpuComputePassEncoderEnd(pass);
        wgpuComputePassEncoderRelease(pass);
    }
    // render passes over the target, broken by the write-backs (a compute pass each)
    WGPURenderPassEncoder rp = nullptr;
    WGPUTextureView view = nullptr;
    WGPURenderPipeline current = nullptr;
    WGPUBindGroup source = nullptr;
    const WGPURenderPipeline import = g_prof_on ? native_pipeline(kNativeImport) : nullptr;
    ProfPass *prof_pass = nullptr;  // PS2_GPU_PROFILE: a = draws, b = instances (the import draws are instanced over tiles)
    const auto end = [&] {
        prof_pass = nullptr;
        if (!rp) return;
        wgpuRenderPassEncoderEnd(rp);
        wgpuRenderPassEncoderRelease(rp);
        rp = nullptr;
    };
    for (std::uint32_t i = 0; i < count; ++i) {
        const std::uint32_t offset = d[i].param * kParamStride;
        if (d[i].writeback[0]) {
            end();
            WGPUComputePassDescriptor cd = WGPU_COMPUTE_PASS_DESCRIPTOR_INIT;
            cd.timestampWrites = prof_slot(d[i].compute ? "native-compute" : "native-writeback", c.x + i,
                                           d[i].writeback[0] * d[i].writeback[1] * std::max(d[i].writeback[2], 1u), 0);
            WGPUComputePassEncoder pass = wgpuCommandEncoderBeginComputePass(enc, &cd);
            ++g_compute_passes;
            wgpuComputePassEncoderSetPipeline(pass, d[i].compute ? d[i].compute : g_nat.writeback);
            wgpuComputePassEncoderSetBindGroup(pass, 0, d[i].binding ? binding_group(*d[i].binding, d[i]) : g_nat.writeback_group, 1, &offset);
            wgpuComputePassEncoderDispatchWorkgroups(pass, d[i].writeback[0], d[i].writeback[1], std::max(d[i].writeback[2], 1u));
            wgpuComputePassEncoderEnd(pass);
            wgpuComputePassEncoderRelease(pass);
            continue;
        }
        if (!d[i].pipeline) continue;
        const bool split = import && d[i].pipeline == import;  // PS2_GPU_PROFILE: the tile imports get passes of their own
        if (rp && (d[i].color != view || split)) end();
        if (!rp) {
            WGPURenderPassColorAttachment colors[2] = {WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT, WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT};
            colors[0].view = d[i].color;
            colors[1].view = d[i].alpha;
            for (WGPURenderPassColorAttachment &a : colors) {
                a.loadOp = WGPULoadOp_Load;
                a.storeOp = WGPUStoreOp_Store;
            }
            WGPURenderPassDepthStencilAttachment depth = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
            depth.view = d[i].depth;
            depth.depthLoadOp = WGPULoadOp_Load;
            depth.depthStoreOp = WGPUStoreOp_Store;
            WGPURenderPassDescriptor rd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
            rd.colorAttachmentCount = 2;
            rd.colorAttachments = colors;
            rd.depthStencilAttachment = &depth;
            rd.timestampWrites = prof_slot(split ? "native-import" : "native-render", c.x + i);
            prof_pass = g_prof_on && rd.timestampWrites ? &g_prof_passes.back() : nullptr;
            rp = wgpuCommandEncoderBeginRenderPass(enc, &rd);
            ++g_render_passes;
            view = d[i].color;
            current = nullptr;
            source = nullptr;
        }
        if (const WGPUBindGroup g = d[i].source ? d[i].source : g_nat.none_group; g != source) {
            wgpuRenderPassEncoderSetBindGroup(rp, 1, g, 0, nullptr);
            source = g;
        }
        if (d[i].pipeline != current) {
            wgpuRenderPassEncoderSetPipeline(rp, d[i].pipeline);
            current = d[i].pipeline;
        }
        wgpuRenderPassEncoderSetBindGroup(rp, 0, g_native_group, 1, &offset);
        wgpuRenderPassEncoderSetScissorRect(rp, d[i].scissor[0], d[i].scissor[1], d[i].scissor[2], d[i].scissor[3]);
        const WGPUColor constant{d[i].constant, d[i].constant, d[i].constant, d[i].constant};
        wgpuRenderPassEncoderSetBlendConstant(rp, &constant);
        wgpuRenderPassEncoderDraw(rp, d[i].vertices, d[i].instances, 0, 0);
        if (prof_pass) {
            ++prof_pass->a;
            prof_pass->b += d[i].instances;
        }
        if (split) end();
    }
    end();
}

void read_texture(WGPUTexture texture, WGPUTextureAspect aspect, std::vector<std::uint8_t> &out) {
    const NativeTarget &t = g_nat.target;
    const std::uint32_t row = (t.width * 4 + 255) & ~255u;
    WGPUBuffer buffer = make_buffer(static_cast<std::uint64_t>(row) * t.height, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
    WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
    WGPUTexelCopyTextureInfo src = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    src.texture = texture;
    src.aspect = aspect;
    WGPUTexelCopyBufferInfo dst = WGPU_TEXEL_COPY_BUFFER_INFO_INIT;
    dst.buffer = buffer;
    dst.layout.bytesPerRow = row;
    dst.layout.rowsPerImage = t.height;
    const WGPUExtent3D size{t.width, t.height, 1};
    wgpuCommandEncoderCopyTextureToBuffer(enc, &src, &dst, &size);
    WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
    wgpuQueueSubmit(g_queue, 1, &cmd);
    wgpuCommandBufferRelease(cmd);
    wgpuCommandEncoderRelease(enc);
    bool done = false;
    WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
    cb.mode = WGPUCallbackMode_AllowProcessEvents;
    cb.callback = [](WGPUMapAsyncStatus, WGPUStringView, void *flag, void *) { *static_cast<bool *>(flag) = true; };
    cb.userdata1 = &done;
    wgpuBufferMapAsync(buffer, WGPUMapMode_Read, 0, static_cast<std::uint64_t>(row) * t.height, cb);
    wait_until(done);
    out.assign(static_cast<std::size_t>(t.width) * t.height * 4, 0);
    if (const auto *p = static_cast<const std::uint8_t *>(wgpuBufferGetConstMappedRange(buffer, 0, static_cast<std::uint64_t>(row) * t.height)))
        for (std::uint32_t y = 0; y < t.height; ++y) std::memcpy(out.data() + static_cast<std::size_t>(y) * t.width * 4, p + static_cast<std::size_t>(y) * row, t.width * 4);
    wgpuBufferUnmap(buffer);
    wgpuBufferRelease(buffer);
}

// The emulated frame and Z buffer of the run, at the native target's resolution (sample k of GS pixel (x, y) at
// (x * SCALE + k % SCALE, y * SCALE_Y + k / SCALE), gs.wgsl raster()).
void frame_images(std::vector<std::uint8_t> &rgba, std::vector<std::uint32_t> &z) {
    wait_idle();
    std::vector<std::uint32_t> vram(static_cast<std::size_t>(kMemorySize / 4) * g_samples);
    read_back(g_vram, vram.size() * 4, vram.data());
    const NativeTarget &t = g_nat.target;
    rgba.assign(static_cast<std::size_t>(t.width) * t.height * 4, 0);
    z.assign(static_cast<std::size_t>(t.width) * t.height, 0);
    std::uint32_t zmax;
    float scale;
    native_depth(g_nat.zpsm, zmax, scale);
    for (std::uint32_t py = 0; py < t.height; ++py)
        for (std::uint32_t px = 0; px < t.width; ++px) {
            const std::uint32_t x = px / g_sx, y = py / g_sy, k = (py % g_sy) * g_sx + px % g_sx;
            const std::uint32_t c = vram[(pixel_address(g_nat.fpsm, g_nat.fbp, g_nat.fbw, x, y) >> 2) * g_samples + k];
            const std::uint32_t za = pixel_address(g_nat.zpsm, g_nat.zbp, g_nat.fbw, x, y);
            const std::uint32_t zw = vram[(za >> 2) * g_samples + k] >> (zmax == 0xFFFFu ? (za & 2u) * 8u : 0u);
            const std::size_t i = static_cast<std::size_t>(py) * t.width + px;
            std::memcpy(rgba.data() + i * 4, &c, 4);
            z[i] = zw & zmax;
        }
}

void write_raw(const std::string &path, const void *data, std::size_t bytes) {
    if (std::FILE *f = std::fopen(path.c_str(), "wb")) {
        std::fwrite(data, 1, bytes, f);
        std::fclose(f);
    }
}

std::vector<std::uint32_t> native_check_counts() {
    std::vector<std::uint32_t> c(16 + 16 * 16, 0);
    if (g_native_checks) {
        drain();
        read_back(g_native_checks, c.size() * 4, c.data());
    }
    return c;
}

void native_dump() {
    std::vector<std::uint8_t> emu_rgba, nat_rgba, nat_depth;
    std::vector<std::uint32_t> emu_z;
    frame_images(emu_rgba, emu_z);
    read_texture(g_nat.target.color, WGPUTextureAspect_All, nat_rgba);
    read_texture(g_nat.target.depth, WGPUTextureAspect_DepthOnly, nat_depth);
    std::uint32_t zmax;
    float scale;
    native_depth(g_nat.zpsm, zmax, scale);
    std::vector<std::uint32_t> nat_z(nat_depth.size() / 4);
    for (std::size_t i = 0; i < nat_z.size(); ++i) {
        float d;
        std::memcpy(&d, nat_depth.data() + i * 4, 4);
        nat_z[i] = static_cast<std::uint32_t>(std::min(std::llround(static_cast<double>(d) / scale), static_cast<long long>(zmax)));
    }
    const std::string &dir = g_nat.dump_dir;
    write_raw(dir + "/pre.rgba", g_nat.pre_rgba.data(), g_nat.pre_rgba.size());
    write_raw(dir + "/pre.z", g_nat.pre_z.data(), g_nat.pre_z.size() * 4);
    write_raw(dir + "/emu.rgba", emu_rgba.data(), emu_rgba.size());
    write_raw(dir + "/emu.z", emu_z.data(), emu_z.size() * 4);
    write_raw(dir + "/nat.rgba", nat_rgba.data(), nat_rgba.size());
    write_raw(dir + "/nat.z", nat_z.data(), nat_z.size() * 4);
    const std::vector<std::uint32_t> checks = native_check_counts();
    if (std::FILE *f = std::fopen((dir + "/meta.json").c_str(), "w")) {
        std::fprintf(f, "{\"width\":%u,\"height\":%u,\"sx\":%u,\"sy\":%u,\"frame\":%u,\"fbp\":%u,\"fbw\":%u,\"fpsm\":%u,\"zbp\":%u,\"zpsm\":%u,\"zmax\":%u,",
                     g_nat.target.width, g_nat.target.height, g_sx, g_sy, g_nat.dump_from, g_nat.fbp, g_nat.fbw, g_nat.fpsm, g_nat.zbp, g_nat.zpsm, zmax);
        std::fprintf(f, "\"runs\":%llu,\"batches\":%llu,\"drawn\":%llu,\"draws\":%llu,\"triangles\":%llu,\"isolated\":%llu,\"oracle_batches\":%llu,"
                        "\"prim_mismatch\":%llu,\"cross_batch\":%llu,\"unsupported\":{",
                     static_cast<unsigned long long>(g_nat.runs), static_cast<unsigned long long>(g_nat.batches), static_cast<unsigned long long>(g_nat.drawn),
                     static_cast<unsigned long long>(g_nat.draws), static_cast<unsigned long long>(g_nat.triangles), static_cast<unsigned long long>(g_nat.isolated),
                     static_cast<unsigned long long>(g_nat.oracle_batches), static_cast<unsigned long long>(g_nat.prim_mismatch),
                     static_cast<unsigned long long>(g_nat.cross_batch));
        bool first = true;
        for (const auto &[reason, n] : g_nat.unsupported) {
            std::fprintf(f, "%s\"%s\":%llu", first ? "" : ",", reason.c_str(), static_cast<unsigned long long>(n));
            first = false;
        }
        std::fprintf(f, "},\"checks\":[");
        for (std::size_t i = 0; i < checks.size(); ++i) std::fprintf(f, "%s%u", i ? "," : "", checks[i]);
        std::fprintf(f, "]}\n");
        std::fclose(f);
    }
    std::fprintf(stderr, "[native] frame %u: dump written to %s\n", g_nat.dump_from, dir.c_str());
}

// replace: the run's samples go back to compute VRAM (native.wgsl native_writeback, only the words that changed), in
// the command stream before whatever ended the run
void native_writeback() {
    if (g_nat.rx0 >= g_nat.rx1 || g_nat.ry0 >= g_nat.ry1) return;
    std::uint32_t zmax;
    float scale;
    native_depth(g_nat.zpsm, zmax, scale);
    NativeDraw d;
    d.param = push_params({g_nat.fbp, g_nat.fbw, g_nat.fpsm, g_nat.zbp, g_nat.zpsm, g_nat.rx0, g_nat.ry0, g_nat.rx1, g_nat.ry1, g_nat.zwritten ? 1u : 0u, 0u, 0u,
                           0u, zmax, f2u(scale), 0u});
    d.writeback[0] = (g_nat.rx1 - g_nat.rx0 + 7) / 8;
    d.writeback[1] = (g_nat.ry1 - g_nat.ry0 + 7) / 8;
    g_nat.written += static_cast<std::uint64_t>(g_nat.rx1 - g_nat.rx0) * (g_nat.ry1 - g_nat.ry0);
    g_native_draws.push_back(d);
    emit_all();  // the uploads and CLUT loads queued during the run go first: its draws read them
    const int x0 = static_cast<int>(g_nat.rx0 / g_sx), y0 = static_cast<int>(g_nat.ry0 / g_sy);
    const int x1 = static_cast<int>((g_nat.rx1 - 1) / g_sx), y1 = static_cast<int>((g_nat.ry1 - 1) / g_sy);
    mark_rendered(g_nat.fbp, g_nat.fbw, g_nat.fpsm, x0, y0, x1, y1);
    if (g_nat.zwritten) mark_rendered(g_nat.zbp, g_nat.fbw, g_nat.zpsm, x0, y0, x1, y1);
    ++g_nat.writebacks;
}

void native_close(int why) {
    g_nat.open = false;
    ++g_nat.closes[why];
    if (g_nat.replace) native_writeback();
    if (g_nat.dump_state != 1) return;
    native_dump();
    g_nat.dump_state = 2;
}

// replace: whether VRAM range r holds samples an open run has drawn into its target and not written back yet
bool native_overlaps(const Range &r) {
    if (!g_nat.on || !g_nat.replace || !g_nat.open || g_nat.rx0 >= g_nat.rx1) return false;
    const int x0 = static_cast<int>(g_nat.rx0 / g_sx), y0 = static_cast<int>(g_nat.ry0 / g_sy);
    const int x1 = static_cast<int>((g_nat.rx1 - 1) / g_sx), y1 = static_cast<int>((g_nat.ry1 - 1) / g_sy);
    if (pages(g_nat.fbp, g_nat.fbw, g_nat.fpsm, x0, y0, x1, y1).overlaps(r.lo, r.hi)) return true;
    return g_nat.zwritten && pages(g_nat.zbp, g_nat.fbw, g_nat.zpsm, x0, y0, x1, y1).overlaps(r.lo, r.hi);
}

// Anything else that reads or writes VRAM ends the run first (an emulated draw, a copy, a download, the display;
// uploads and CLUT loads only when they overlap it, queue_pre).
void native_sync(int why = kCloseSync) {
    if (g_nat.on && g_nat.open && !g_nat.in_kick) native_close(why);
}

// ---- Replace mode, tiles (decomp/notes/native-renderer.md §7.3), and the hardware GS renderer's target cache (PCSX2's
// model). A target holds one frame (+ Z) buffer and stays alive across switches, kept coherent with compute VRAM per tile
// of kTilePx x kTilePx GS pixels and written back only where something else reads or writes VRAM. A tile is native-newer
// (colour and/or Z: the target holds draws VRAM lacks) or VRAM-newer (an emulated draw, upload, copy or another target's
// draw changed it since the target had it), never both. A draw imports the VRAM-newer tiles under it and marks them
// native-newer (a native batch: its whole scissor, the CPU does not know where its triangles land); the other targets
// first write back what they hold newer there and, where it draws, mark it VRAM-newer (tiles_claim). Any other access to
// a frame or Z page first writes back the native-newer tiles it touches and, if it writes, marks them VRAM-newer.
// Emulated primitives only note their tiles; their batch applies them when it goes into the stream (emit_all).
// PS2_NATIVE_RUNS=1: stage 1's round trip per run instead.
constexpr std::uint32_t kTilePx = 16;
constexpr std::size_t kBindings = 16;  // ponytail: LRU over a fixed count; a VRAM budget if targets get big
enum : std::uint8_t { kTileColor = 1, kTileZ = 2 };

std::uint64_t tile_samples(const Binding &b, std::uint32_t x, std::uint32_t y) {
    const std::uint32_t w = b.target.width / g_sx;
    return static_cast<std::uint64_t>(std::min(kTilePx, w - x * kTilePx)) * std::min(kTilePx, b.rows - y * kTilePx) * g_samples;
}

// The write-back of the tiles in b.list, next in the stream of native draws.
void tiles_writeback(Binding &b) {
    if (b.list.empty()) return;
    std::uint32_t zmax;
    float scale;
    native_depth(b.zpsm, zmax, scale);
    const std::uint32_t at = arena_append(b.list.data(), b.list.size() * 4);
    NativeDraw d;
    d.param = push_params({b.fbp, b.fbw, b.fpsm, b.zbp, b.zpsm, at, 0u, b.target.width, b.target.height, 0u, 0u, 0u, 0u, zmax, f2u(scale), 0u});
    d.compute = g_nat.writeback_tiles;
    d.binding = &b;
    d.color = b.target.color_view;
    d.depth = b.target.depth_view;
    d.alpha = b.target.alpha_view;
    d.writeback[0] = kTilePx * g_sx / 8;
    d.writeback[1] = kTilePx * g_sy / 8;
    d.writeback[2] = static_cast<std::uint32_t>(b.list.size());
    g_native_draws.push_back(d);
    std::uint32_t x0 = ~0u, y0 = ~0u, x1 = 0, y1 = 0;
    bool z = false;
    for (std::uint32_t e : b.list) {
        const std::uint32_t x = e & 0xFFu, y = (e >> 8) & 0xFFu;
        x0 = std::min(x0, x), y0 = std::min(y0, y), x1 = std::max(x1, x), y1 = std::max(y1, y);
        z = z || ((e >> 16) & kTileZ);
        g_nat.written += tile_samples(b, x, y);
    }
    const int px0 = static_cast<int>(x0 * kTilePx), py0 = static_cast<int>(y0 * kTilePx);
    const int px1 = static_cast<int>(x1 * kTilePx + kTilePx - 1), py1 = static_cast<int>(y1 * kTilePx + kTilePx - 1);
    mark_rendered(b.fbp, b.fbw, b.fpsm, px0, py0, px1, py1);
    if (z) mark_rendered(b.zbp, b.fbw, b.zpsm, px0, py0, px1, py1);
    ++g_nat.tile_writebacks;
    b.list.clear();
}

// Clips a tile rect to the binding; false if nothing is left.
bool tiles_clip(const Binding &b, int &x0, int &y0, int &x1, int &y1) {
    x0 = std::max(x0, 0), y0 = std::max(y0, 0);
    x1 = std::min(x1, static_cast<int>(b.tx) - 1), y1 = std::min(y1, static_cast<int>(b.ty) - 1);
    return x0 <= x1 && y0 <= y1;
}

// Bits x0..x1 of a 128-bit row.
void row_mask(int x0, int x1, std::uint64_t m[2]) {
    for (int w = 0; w < 2; ++w) {
        const int lo = std::max(x0 - w * 64, 0), hi = std::min(x1 - w * 64, 63);
        m[w] = lo > hi ? 0ull : hi - lo == 63 ? ~0ull : ((1ull << (hi - lo + 1)) - 1) << lo;
    }
}

// Row y's native-newer tiles, colour under mc and Z under mz, go on the write-back list and stop being native-newer.
void take_newer(Binding &b, int y, const std::uint64_t mc[2], const std::uint64_t mz[2]) {
    if (!((b.newer[y >> 6] >> (y & 63)) & 1u)) return;
    for (int w = 0; w < 2; ++w) {
        const std::uint64_t c = b.tc[y][w] & mc[w], z = b.tz[y][w] & mz[w];
        std::uint64_t bits = c | z;
        while (bits) {
            const int bit = __builtin_ctzll(bits);
            bits &= bits - 1;
            const std::uint32_t flags = ((c >> bit) & 1u ? kTileColor : 0u) | ((z >> bit) & 1u ? kTileZ : 0u);
            const std::uint64_t n = tile_samples(b, static_cast<std::uint32_t>(w * 64 + bit), static_cast<std::uint32_t>(y));
            g_nat.written_by[g_nat.cause] += n;
            if (g_nat.cause == kByTexture) g_nat.read_detail[g_nat.read_key | b.fpsm << 8 | flags << 16 | (&b == g_batch.binding ? 1u << 20 : 0u) |
                                     (g_nat.read_tbp == b.fbp && g_nat.read_tbw == b.fbw ? 1u << 21 : 0u) | (g_nat.read_tbp == b.zbp && g_nat.read_tbw == b.fbw ? 1u << 22 : 0u)] += n;
            b.list.push_back(static_cast<std::uint32_t>(w * 64 + bit) | static_cast<std::uint32_t>(y) << 8 | flags << 16);
        }
        b.tc[y][w] &= ~c;
        b.tz[y][w] &= ~z;
    }
    if (!(b.tc[y][0] | b.tc[y][1] | b.tz[y][0] | b.tz[y][1])) b.newer[y >> 6] &= ~(1ull << (y & 63));
}

// Tiles [x0, x1] x [y0, y1] of these buffers (kTileColor, kTileZ), now: the native-newer ones go on the write-back
// list; with mark they become VRAM-newer.
void tiles_touch(Binding &b, int x0, int y0, int x1, int y1, bool mark, std::uint8_t buffers = kTileColor | kTileZ) {
    if (!tiles_clip(b, x0, y0, x1, y1)) return;
    const std::uint64_t none[2] = {};
    std::uint64_t m[2];
    row_mask(x0, x1, m);
    for (int y = y0; y <= y1; ++y) {
        take_newer(b, y, buffers & kTileColor ? m : none, buffers & kTileZ ? m : none);
        for (int k = 0; k < 2 && mark; ++k)
            if (buffers & (1u << k)) b.tv[k][y][0] |= m[0], b.tv[k][y][1] |= m[1];
    }
}

// The same for an emulated primitive: noted, applied with its batch (tiles_apply).
void tiles_pend(Binding &b, int x0, int y0, int x1, int y1, bool write, std::uint8_t buffer) {
    if (!tiles_clip(b, x0, y0, x1, y1)) return;
    std::uint64_t (&p)[128][2] = (write ? b.pw : b.pr)[buffer == kTileZ];
    for (int y = y0; y <= y1; ++y) {
        std::uint64_t m[2];
        row_mask(x0, x1, m);
        p[y][0] |= m[0], p[y][1] |= m[1];
    }
    b.pending = true;
}

void tiles_apply(Binding &b) {
    if (!b.pending) return;
    b.pending = false;
    for (std::uint32_t y = 0; y < b.ty; ++y) {
        const std::uint64_t mc[2] = {b.pr[0][y][0] | b.pw[0][y][0], b.pr[0][y][1] | b.pw[0][y][1]};
        const std::uint64_t mz[2] = {b.pr[1][y][0] | b.pw[1][y][0], b.pr[1][y][1] | b.pw[1][y][1]};
        if (!(mc[0] | mc[1] | mz[0] | mz[1])) continue;
        take_newer(b, static_cast<int>(y), mc, mz);
        for (int k = 0; k < 2; ++k) {
            b.tv[k][y][0] |= b.pw[k][y][0], b.tv[k][y][1] |= b.pw[k][y][1];
            b.pr[k][y][0] = b.pr[k][y][1] = b.pw[k][y][0] = b.pw[k][y][1] = 0;
        }
    }
}

// VRAM bytes r: the tile rect of each frame and Z page of binding b it overlaps, to f(x0, y0, x1, y1, buffer) (kTileColor:
// a frame page, kTileZ: a Z page).
template <class F> void tiles_pages(const Binding &b, const Range &r, F &&f) {
    if (!r.overlaps(b.bound_lo[0], b.bound_hi[0]) && !r.overlaps(b.bound_lo[1], b.bound_hi[1])) return;
    for (int buffer = 0; buffer < 2; ++buffer) {
        const std::uint64_t base = b.bound_lo[buffer], end = b.bound_hi[buffer];
        if (!r.overlaps(base, end)) continue;
        std::uint32_t pw, ph;
        page_size(buffer ? b.zpsm : b.fpsm, pw, ph);
        const std::uint64_t per_row = std::max<std::uint32_t>(1, b.fbw * 64 / pw);
        const std::uint64_t p0 = (std::max(r.lo, base) - base) / 8192, p1 = (std::min(r.hi, end) - base + 8191) / 8192;
        const int tw = static_cast<int>(pw / kTilePx), th = static_cast<int>(ph / kTilePx);
        for (std::uint64_t p = p0; p < p1; ++p) {
            const int px = static_cast<int>(p % per_row), py = static_cast<int>(p / per_row);
            f(px * tw, py * th, px * tw + tw - 1, py * th + th - 1, buffer ? kTileZ : kTileColor);
        }
    }
}

void tiles_range(Binding &b, const Range &r, bool mark) {
    if (!mark && !(b.newer[0] | b.newer[1])) return;  // nothing native-newer to write back, nothing to mark
    tiles_pages(b, r, [&](int x0, int y0, int x1, int y1, std::uint8_t buffer) { tiles_touch(b, x0, y0, x1, y1, mark, buffer); });
}

void tiles_reset(Binding &b) {
    std::memset(b.tc, 0, sizeof b.tc);
    std::memset(b.tz, 0, sizeof b.tz);
    std::memset(b.pr, 0, sizeof b.pr);
    std::memset(b.pw, 0, sizeof b.pw);
    std::memset(b.tv, 0, sizeof b.tv);
    b.newer[0] = b.newer[1] = 0;
    for (std::uint32_t y = 0; y < b.ty; ++y)  // every tile VRAM-newer
        for (auto &v : b.tv) row_mask(0, static_cast<int>(b.tx) - 1, v[y]);
    b.pending = false;
}

// Writes back every native-newer tile of b (it stays cached).
void tiles_flush(Binding &b) {
    tiles_apply(b);
    g_nat.cause = kByFlush;
    tiles_touch(b, 0, 0, static_cast<int>(b.tx) - 1, static_cast<int>(b.ty) - 1, false);
    tiles_writeback(b);
}

// Every cached target at once.
void tiles_apply() {
    g_nat.cause = kByEmulated;
    for (const auto &b : g_nat.bindings) tiles_apply(*b);
}
void tiles_writeback() {
    for (const auto &b : g_nat.bindings) tiles_writeback(*b);
}
void tiles_flush() {
    for (const auto &b : g_nat.bindings) tiles_flush(*b);
}
void tiles_reset() {
    for (const auto &b : g_nat.bindings) tiles_reset(*b);
}
void tiles_read(const Range &r, const Binding *skip = nullptr, const Binding *skip2 = nullptr) {
    g_nat.cause = kByTexture;
    for (const auto &b : g_nat.bindings)
        if (b.get() != skip && b.get() != skip2) tiles_range(*b, r, false);
}
bool tiles_queued() {
    for (const auto &b : g_nat.bindings)
        if (b->pending || !b->list.empty()) return true;
    return false;
}

// A draw into binding x's GS pixels [x0, x1] x [y0, y1] reads its frame and (zte) Z there (the import) and writes the
// frame (and Z): the other targets write back what they hold newer on those pages, and where it writes becomes VRAM-newer.
void tiles_claim(Binding &x, int x0, int y0, int x1, int y1, bool zte, bool zwrite) {
    if (g_nat.bindings.size() < 2) return;
    g_nat.cause = kByClaim;
    const Range fb = pages(x.fbp, x.fbw, x.fpsm, x0, y0, x1, y1), z = x.z && zte ? pages(x.zbp, x.fbw, x.zpsm, x0, y0, x1, y1) : Range{};
    for (const auto &b : g_nat.bindings) {
        if (b.get() == &x) continue;
        tiles_range(*b, fb, true);
        tiles_range(*b, z, zwrite);
    }
}

// The tiles and VRAM pages binding b covers, rows GS lines down (rows past the old ones are VRAM-newer).
void tiles_cover(Binding &b, std::uint32_t rows) {
    const std::uint32_t ty = (rows + kTilePx - 1) / kTilePx;
    for (std::uint32_t y = b.ty; y < ty; ++y)
        for (auto &v : b.tv) row_mask(0, static_cast<int>(b.tx) - 1, v[y]);
    b.ty = std::max(b.ty, ty);
    b.rows = std::max(b.rows, rows);
    for (int buffer = 0; buffer < 2; ++buffer) {
        if (buffer && !b.z) {
            b.bound_lo[1] = b.bound_hi[1] = 0;
            continue;
        }
        std::uint32_t pw, ph;
        page_size(buffer ? b.zpsm : b.fpsm, pw, ph);
        const std::uint64_t per_row = std::max<std::uint32_t>(1, b.fbw * 64 / pw);
        b.bound_lo[buffer] = static_cast<std::uint64_t>(buffer ? b.zbp : b.fbp) * 256;
        b.bound_hi[buffer] = b.bound_lo[buffer] + per_row * ((b.rows + ph - 1) / ph) * 8192;
    }
}

// Drops binding b: what it holds newer goes back to VRAM, and its textures are released once everything queued that
// uses them is submitted.
void tiles_retire(Binding &b) {
    emit_all();
    tiles_flush(b);
    submit();
    drain();
    for (WGPUTextureView v : {b.target.color_view, b.shadow.color_view, b.target.depth_view}) forget_source(v);
    free_target(b.target);
    free_target(b.shadow);
    for (WGPUBindGroup g : b.group)
        if (g) wgpuBindGroupRelease(g);
    if (g_nat.cur == &b) g_nat.cur = nullptr;
    std::erase_if(g_nat.bindings, [&](const std::unique_ptr<Binding> &p) { return p.get() == &b; });
    ++g_nat.retired;
}

// The cached target of a frame buffer (fbp, fbw, fpsm), made current: with Z buffer (zbp, zpsm) when z, otherwise
// whichever it has, at least rows GS lines high. A new one imports lazily (every tile VRAM-newer); one with another Z
// buffer writes back and takes the new one; one too short is made again. The caller puts what is queued for the old
// binding into the stream first.
void tiles_bind_to(std::uint32_t fbp, std::uint32_t fbw, std::uint32_t fpsm, std::uint32_t zbp, std::uint32_t zpsm, std::uint32_t rows, bool z) {
    rows = std::min(rows, 8192u / g_sy);  // the device's texture size limit
    Binding *b = nullptr;
    for (const auto &p : g_nat.bindings)
        if (p->fbp == fbp && p->fbw == fbw && p->fpsm == fpsm) b = p.get();
    if (b && rows * g_sy > b->target.height) {
        tiles_retire(*b);
        b = nullptr;
    }
    if (!b) {
        if (g_nat.bindings.size() >= kBindings)
            tiles_retire(**std::min_element(g_nat.bindings.begin(), g_nat.bindings.end(), [](const auto &l, const auto &r) { return l->used < r->used; }));
        auto made = std::make_unique<Binding>();
        b = made.get();
        const std::uint32_t width = std::clamp<std::uint32_t>(fbw * 64u, 64u, 2048u) * g_sx;
        make_target(b->target, width, std::min(std::max(rows, 512u), 8192u / g_sy) * g_sy);  // taller: fewer remakes
        b->fbp = fbp, b->fbw = fbw, b->fpsm = fpsm, b->zbp = zbp, b->zpsm = zpsm, b->z = z;
        b->tx = (width / g_sx + kTilePx - 1) / kTilePx;
        tiles_cover(*b, rows);
        tiles_reset(*b);
        g_nat.bindings.push_back(std::move(made));
        ++g_nat.made;
        ++g_nat.runs;
    } else {
        if (z && (!b->z || b->zbp != zbp || b->zpsm != zpsm)) {
            tiles_flush(*b);
            b->zbp = zbp, b->zpsm = zpsm, b->z = true;
            tiles_cover(*b, rows);
            tiles_reset(*b);
            ++g_nat.rebased;
        } else if (rows > b->rows) {
            tiles_cover(*b, rows);
        }
    }
    b->used = ++g_nat.clock;
    if (g_nat.cur != b) ++g_nat.switches;
    g_nat.cur = b;
}

void tiles_bind(const Context &c) {
    const std::uint32_t fbp = (static_cast<std::uint32_t>(c.frame) & 0x1FFu) * 32u, fbw = static_cast<std::uint32_t>(c.frame >> 16) & 0x3Fu;
    const std::uint32_t fpsm = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu, zbp = (static_cast<std::uint32_t>(c.zbuf) & 0x1FFu) * 32u;
    const std::uint32_t zpsm = 0x30u | (static_cast<std::uint32_t>(c.zbuf >> 24) & 0xFu);
    tiles_bind_to(fbp, fbw, fpsm, zbp, zpsm, std::clamp<std::uint32_t>((static_cast<std::uint32_t>(c.scissor >> 48) & 0x7FFu) + 1u, 1u, 2048u), true);
}

// The import of binding b's VRAM-newer tiles in list (x | y << 8 | buffers << 16), next in the stream of native draws:
// one draw per set of buffers (both, the frame, the Z buffer).
// Pixels [x0, x1] x [y0, y1] of binding b's target changed: its shadow lacks them.
void mark_dirty(Binding &b, int x0, int y0, int x1, int y1) {
    if (!b.shadow.color) return;
    x0 = std::max(x0, 0), y0 = std::max(y0, 0);
    x1 = std::min(x1, static_cast<int>(b.target.width / g_sx) - 1), y1 = std::min(y1, static_cast<int>(b.target.height / g_sy) - 1);
    if (x0 > x1 || y0 > y1) return;
    int *d = b.dirty;
    if (d[0] > d[2]) d[0] = x0, d[1] = y0, d[2] = x1, d[3] = y1;
    else d[0] = std::min(d[0], x0), d[1] = std::min(d[1], y0), d[2] = std::max(d[2], x1), d[3] = std::max(d[3], y1);
}

void tiles_import(Binding &b, const std::vector<std::uint32_t> &list) {
    if (list.empty()) return;
    std::uint32_t zmax;
    float scale;
    native_depth(b.zpsm, zmax, scale);
    static std::vector<std::uint32_t> part;
    for (const std::uint32_t buffers : {kTileColor | kTileZ, +kTileColor, +kTileZ}) {
        part.clear();
        for (std::uint32_t e : list)
            if ((e >> 16) == buffers) part.push_back(e);
        if (part.empty()) continue;
        NativeDraw d;
        d.pipeline = native_pipeline(kNativeImport | kNativeTiles | (buffers == kTileColor ? kNativeColor : buffers == kTileZ ? kNativeZWrite : 0u));
        d.color = b.target.color_view;
        d.depth = b.target.depth_view;
        d.alpha = b.target.alpha_view;
        d.param = push_params({b.fbp, b.fbw, b.fpsm, b.zbp, b.zpsm, arena_append(part.data(), part.size() * 4), 0u, b.target.width, b.target.height, buffers, 0u, 0u, 0u,
                               zmax, f2u(scale), 0u});
        d.vertices = 6;
        d.instances = static_cast<std::uint32_t>(part.size());
        d.scissor[2] = b.target.width;
        d.scissor[3] = b.target.height;
        g_native_draws.push_back(d);
    }
    const int t = static_cast<int>(kTilePx);
    for (std::uint32_t e : list) {
        g_nat.imported += tile_samples(b, e & 0xFFu, (e >> 8) & 0xFFu);
        if (e >> 16 != kTileZ) mark_dirty(b, static_cast<int>(e & 0xFFu) * t, static_cast<int>((e >> 8) & 0xFFu) * t, static_cast<int>(e & 0xFFu) * t + t - 1, static_cast<int>((e >> 8) & 0xFFu) * t + t - 1);
    }
    ++g_nat.imports;
}

// Binding b's tiles [x0, x1] x [y0, y1] about to be drawn, reading or writing these buffers (kTileColor, kTileZ) and
// writing writes: their VRAM-newer ones go on list for the import (x | y << 8 | buffers << 16), but for those in over
// (x0 y0 x1 y1), which the draw overwrites whole in the buffers over_buffers, and they all become native-newer for what
// the draws write.
void tiles_take(Binding &b, int x0, int y0, int x1, int y1, std::uint8_t buffers, std::uint8_t writes, std::vector<std::uint32_t> &list,
                const int *over = nullptr, std::uint8_t over_buffers = 0) {
    if (!tiles_clip(b, x0, y0, x1, y1)) return;
    std::uint64_t m[2], over_mask[2] = {};
    row_mask(x0, x1, m);
    if (over) row_mask(over[0], over[2], over_mask);
    for (int y = y0; y <= y1; ++y) {
        const bool in = over && y >= over[1] && y <= over[3];
        const std::uint64_t skip[2] = {in ? over_mask[0] : 0ull, in ? over_mask[1] : 0ull};
        for (int w = 0; w < 2; ++w) {
            std::uint64_t take[2] = {};
            for (int k = 0; k < 2; ++k) {
                if (!(buffers & (1u << k))) continue;
                if (over_buffers & (1u << k)) b.tv[k][y][w] &= ~(m[w] & skip[w]);
                take[k] = b.tv[k][y][w] & m[w];
                b.tv[k][y][w] &= ~m[w];
            }
            std::uint64_t bits = take[0] | take[1];
            while (bits) {
                const int bit = __builtin_ctzll(bits);
                bits &= bits - 1;
                const std::uint32_t flags = ((take[0] >> bit) & 1u ? kTileColor : 0u) | ((take[1] >> bit) & 1u ? kTileZ : 0u);
                list.push_back(static_cast<std::uint32_t>(w * 64 + bit) | static_cast<std::uint32_t>(y) << 8 | flags << 16);
            }
            if (writes & kTileColor) b.tc[y][w] |= m[w];
            if (writes & kTileZ) b.tz[y][w] |= m[w];
        }
        if (writes & (kTileColor | kTileZ)) b.newer[y >> 6] |= 1ull << (y & 63);
    }
}

// A native batch drawing into the current target's scissor samples [sx0, sx1) x [sy0, sy1) with these writes: the other
// targets give up those pages, the VRAM-newer tiles there come in, then they are native-newer.
void tiles_draw(std::uint32_t sx0, std::uint32_t sy0, std::uint32_t sx1, std::uint32_t sy1, std::uint8_t writes) {
    Binding &b = *g_nat.cur;
    const int x0 = static_cast<int>(sx0 / g_sx), y0 = static_cast<int>(sy0 / g_sy), x1 = static_cast<int>((sx1 - 1) / g_sx), y1 = static_cast<int>((sy1 - 1) / g_sy);
    tiles_claim(b, x0, y0, x1, y1, true, writes & kTileZ);
    tiles_writeback();
    if (writes & kTileColor) mark_dirty(b, x0, y0, x1, y1);
    static std::vector<std::uint32_t> list;
    list.clear();
    const int t = static_cast<int>(kTilePx);
    tiles_take(b, x0 / t, y0 / t, x1 / t, y1 / t, kTileColor | kTileZ, writes, list);
    tiles_import(b, list);  // ahead of the batch's draws, which are pushed after it
}

// An emulated primitive with setup w and box [minx, maxx] x [miny, maxy] (gpu::draw): what it reads of the cached targets
// must be written back before its batch runs, what it writes becomes VRAM-newer there.
void tiles_emulated(const std::uint32_t *w, std::uint32_t flags, int minx, int miny, int maxx, int maxy, const Range &tex, const Range *levels, std::uint32_t mips) {
    if ((flags & 64u) && (w[7] & 7u) == 0 && ((w[7] >> 4) & 3u) == 0) return;  // ATST NEVER + AFAIL KEEP: no access
    const int t = static_cast<int>(kTilePx);
    Range fb, z;  // the pages, when a target's own buffer is not the one drawn
    bool fb_set = false, z_set = false;
    const bool zte = flags & 512u, zwrite = zte && !(flags & 32u);
    for (const auto &p : g_nat.bindings) {
        Binding &b = *p;
        // the frame (blending reads it)
        const auto pend = [&](bool write) { return [&b, write](int x0, int y0, int x1, int y1, std::uint8_t buffer) { tiles_pend(b, x0, y0, x1, y1, write, buffer); }; };
        if (w[1] == b.fbp && w[2] == b.fbw && w[3] == b.fpsm) {
            tiles_pend(b, minx / t, miny / t, maxx / t, maxy / t, true, kTileColor);
        } else {
            if (!fb_set) fb = pages(w[1], w[2], w[3], minx, miny, maxx, maxy), fb_set = true;
            tiles_pages(b, fb, pend(true));
        }
        if (zte) {
            if (!b.z || w[5] != b.zbp || w[6] != b.zpsm || w[2] != b.fbw) {
                if (!z_set) z = pages(w[5], w[2], w[6], minx, miny, maxx, maxy), z_set = true;
                tiles_pages(b, z, pend(zwrite));
            } else {
                tiles_pend(b, minx / t, miny / t, maxx / t, maxy / t, zwrite, kTileZ);
            }
        }
        if (flags & 2u)
            for (std::uint32_t n = 0; n <= mips; ++n) tiles_pages(b, n ? levels[n] : tex, pend(false));
    }
}

// Any other access: VRAM bytes r are read (and, with write, written) outside the native path; the native draws and
// write-backs it needs go into the stream with the caller's flush_all / emit_all.
void tiles_access(const Range &r, bool write, int cause) {
    g_nat.cause = cause;
    for (const auto &b : g_nat.bindings) {
        tiles_range(*b, r, write);
        tiles_writeback(*b);
    }
}

bool native_bound() { return !g_nat.bindings.empty(); }
bool native_tiles() { return g_nat.tiles; }

void native_display(const DisplaySource &src) {
    if (!native_bound()) return native_sync();
    tiles_access(pages(src.fbp, src.fbw, src.psm, 0, 0, static_cast<int>(src.fbw * 64) - 1, static_cast<int>(src.dby + 2 * src.height)), false, kByDisplay);
}

void native_open(const State &st) {
    std::uint64_t attr = st.prim;
    if (!(st.prmodecont & 1u)) attr = (st.prim & 7u) | (st.prmode & ~7ull);
    const Context &c = st.ctx[(attr >> 9) & 1u];
    g_nat.fbp = (static_cast<std::uint32_t>(c.frame) & 0x1FFu) * 32u;
    g_nat.fbw = static_cast<std::uint32_t>(c.frame >> 16) & 0x3Fu;
    g_nat.fpsm = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu;
    g_nat.zbp = (static_cast<std::uint32_t>(c.zbuf) & 0x1FFu) * 32u;
    g_nat.zpsm = 0x30u | (static_cast<std::uint32_t>(c.zbuf >> 24) & 0xFu);
    const std::uint32_t width = std::clamp<std::uint32_t>(g_nat.fbw * 64u, 64u, 2048u) * g_sx;
    const std::uint32_t height = std::clamp<std::uint32_t>((static_cast<std::uint32_t>(c.scissor >> 48) & 0x7FFu) + 1u, 1u, 2048u) * g_sy;
    native_target(width, height);
    emit_all();
    g_nat.rx0 = g_nat.ry0 = ~0u;
    g_nat.rx1 = g_nat.ry1 = 0;
    g_nat.zwritten = false;
    if (g_nat.dump_state == 0 && g_nat.dump_frame >= 0 && g_nat.frame >= static_cast<std::uint64_t>(g_nat.dump_frame)) {
        frame_images(g_nat.pre_rgba, g_nat.pre_z);
        g_nat.dump_state = 1;
        g_nat.dump_from = static_cast<std::uint32_t>(g_nat.frame);
    }
    std::uint32_t zmax;
    float scale;
    native_depth(g_nat.zpsm, zmax, scale);
    const std::uint32_t param = push_params({g_nat.fbp, g_nat.fbw, g_nat.fpsm, g_nat.zbp, g_nat.zpsm, 0u, 0u, width, height, 0u, 0u, 0u, 0u, zmax, f2u(scale), 0u});
    NativeDraw d;
    d.pipeline = native_pipeline(kNativeImport);
    d.color = g_nat.target.color_view;
    d.depth = g_nat.target.depth_view;
    d.alpha = g_nat.target.alpha_view;
    d.param = param;
    d.vertices = 3;
    d.scissor[2] = width;
    d.scissor[3] = height;
    g_native_draws.push_back(d);
    emit_native();
    g_nat.imported += static_cast<std::uint64_t>(width) * height;
    g_nat.open = true;
    ++g_nat.runs;
}

void native_record(const State &st, const std::uint8_t *payload, std::uint32_t bytes, std::uint32_t pass) {
    native::Batch b;
    std::memcpy(&b, payload, sizeof b);
    const bool character = native::character(b.program);
    g_nat.in_kick = false;
    const std::uint32_t kick_prims = g_nat.kick_prims;
    g_nat.kick_prims = 0;
    ++g_nat.batches;
    // a character record: registers, constants, input, then each XGKICK's output (the oracle of pass `pass`)
    const std::size_t char_in = (native::kCharRegQwords + native::kCharMemQwords + native::char_input_qwords(b.program, b.n)) * 16;
    const bool oracle = (b.flags & native::kOracle) && (!character || pass < b.kicks);
    const std::size_t body = sizeof b + static_cast<std::size_t>(b.nad) * 16;
    const std::size_t record = character ? char_in + static_cast<std::size_t>(b.kicks) * b.n * 48
                                         : (native::kRegQwords * 4 + static_cast<std::size_t>(b.n) * native::kVertexWords * (oracle ? 2 : 1)) * 4;
    const auto unsupported = [](const char *why) { ++g_nat.unsupported[why]; };
    if (bytes < body + record) return unsupported("short record");
    if (drawdbg::enabled() && drawdbg::skipped(st)) {  // framedbg isolation skipped the batch's emulated draw
        ++g_nat.isolated;
        return;
    }
    std::uint64_t attr = st.prim;
    if (!(st.prmodecont & 1u)) attr = (st.prim & 7u) | (st.prmode & ~7ull);
    const std::uint32_t prim = static_cast<std::uint32_t>(st.prim) & 7u;
    const Context &c = st.ctx[(attr >> 9) & 1u];
    if (!g_nat.replace && !character && (b.tags[1] & (1u << 14)) && ((b.tags[1] >> 15) & 0x7FFu) != (static_cast<std::uint32_t>(st.prim) & 0x7FFu)) ++g_nat.tag_prim;
    if (g_nat.tiles) {
        // the emulated primitives before this batch go first, with the write-backs they need; then the binding
        if (!g_batch.prims.empty() || tiles_queued()) emit_all();
        tiles_bind(c);
    } else if (g_nat.open && g_nat.replace) {  // a run draws into one frame and Z buffer, at most as high as its target
        const std::uint32_t fbp = (static_cast<std::uint32_t>(c.frame) & 0x1FFu) * 32u, fbw = static_cast<std::uint32_t>(c.frame >> 16) & 0x3Fu;
        const std::uint32_t fpsm = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu, zbp = (static_cast<std::uint32_t>(c.zbuf) & 0x1FFu) * 32u;
        const std::uint32_t zpsm = 0x30u | (static_cast<std::uint32_t>(c.zbuf >> 24) & 0xFu);
        const std::uint32_t rows = ((static_cast<std::uint32_t>(c.scissor >> 48) & 0x7FFu) + 1u) * g_sy;
        if (fbp != g_nat.fbp || fbw != g_nat.fbw || fpsm != g_nat.fpsm || zbp != g_nat.zbp || zpsm != g_nat.zpsm || rows > g_nat.target.height) native_close(kCloseTarget);
    }
    if (!g_nat.tiles && !g_nat.open) native_open(st);
    std::uint32_t w[kSetupWords];
    const std::uint32_t flags = make_setup(st, attr, w);
    if (prim < 3 || prim > 5) return unsupported("primitive");
    if (flags & 128u) return unsupported("DATE");
    if ((flags & 8u) && (flags & 1024u)) return unsupported("PABE");
    const std::uint32_t fbmsk = w[4] & 0xFFFFFFu, amsk = w[4] >> 24;
    if (fbmsk && fbmsk != 0xFFFFFFu) return unsupported("FBMSK");
    if (amsk && amsk != 0xFFu) return unsupported("FBMSK alpha");
    if (w[3] != PSMCT32 && w[3] != PSMCT24) return unsupported("frame format");
    std::uint32_t blend = native_blend(static_cast<std::uint32_t>(c.alpha) & 0xFFu, flags & 8u);
    if (!blend) return unsupported("blend");
    if (fbmsk == 0xFFFFFFu) blend = kBlendKeep;
    const bool zte = flags & 512u;
    const std::uint32_t ztst = (w[7] >> 8) & 3u;
    if (zte && ztst == 0) return unsupported("ZTST never");
    const std::uint32_t cmp = !zte || ztst == 1 ? 0u : ztst == 2 ? 1u : 2u;
    const bool zwrite = zte && !(flags & 32u);
    // the alpha test: pass pixels, then (AFAIL not KEEP) fail pixels in a second draw (PCSX2's split, §4.4)
    struct Split {
        std::uint32_t split;
        bool color, zwrite, alpha;
    } splits[2];
    int count = 0;
    const std::uint32_t atst = w[7] & 7u, afail = (w[7] >> 4) & 3u;
    const bool alpha = !amsk && w[3] == PSMCT32;
    if (!(flags & 64u) || atst == 1) {
        splits[count++] = {0, true, zwrite, alpha};
    } else {
        if (atst != 0) splits[count++] = {1, true, zwrite, alpha};
        if (afail == 1 || afail == 3) splits[count++] = {2, true, false, alpha && afail == 1};
        else if (afail == 2) splits[count++] = {2, false, zwrite, false};
    }
    if (!count) return unsupported("alpha test never");
    const NativeTarget &t = g_nat.tiles ? g_nat.cur->target : g_nat.target;
    const std::uint32_t sx0 = std::min((w[10] & 0xFFFFu) * g_sx, t.width), sx1 = std::min(((w[10] >> 16) + 1) * g_sx, t.width);
    const std::uint32_t sy0 = std::min((w[11] & 0xFFFFu) * g_sy, t.height), sy1 = std::min(((w[11] >> 16) + 1) * g_sy, t.height);
    if (sx0 >= sx1 || sy0 >= sy1) return unsupported("scissor");
    if (g_nat.tiles && (flags & 2u)) {  // a texture a target holds newer than VRAM (render to texture): write it back
        for (std::uint32_t n = 0; n <= mip_levels(w); ++n) tiles_read(level_range(w, n));
        tiles_writeback();
    } else if (g_nat.replace && (flags & 2u) && g_nat.rx0 < g_nat.rx1) {
        // a texture the run has drawn into (still only in the target): write the run back first
        const int x0 = static_cast<int>(g_nat.rx0 / g_sx), y0 = static_cast<int>(g_nat.ry0 / g_sy);
        const int x1 = static_cast<int>((g_nat.rx1 - 1) / g_sx), y1 = static_cast<int>((g_nat.ry1 - 1) / g_sy);
        const Range fb = pages(g_nat.fbp, g_nat.fbw, g_nat.fpsm, x0, y0, x1, y1), z = pages(g_nat.zbp, g_nat.fbw, g_nat.zpsm, x0, y0, x1, y1);
        for (std::uint32_t n = 0; n <= mip_levels(w); ++n) {
            const Range r = level_range(w, n);
            if (fb.overlaps(r.lo, r.hi) || (g_nat.zwritten && z.overlaps(r.lo, r.hi))) {
                native_close(kCloseTexture);
                native_open(st);
                break;
            }
        }
    }
    if (g_nat.tiles) {
        bool color = false;
        for (int i = 0; i < count; ++i) color = color || splits[i].color || splits[i].alpha;
        tiles_draw(sx0, sy0, sx1, sy1, static_cast<std::uint8_t>((color ? kTileColor : 0) | (zwrite ? kTileZ : 0)));
    }
    g_nat.rx0 = std::min(g_nat.rx0, sx0);
    g_nat.ry0 = std::min(g_nat.ry0, sy0);
    g_nat.rx1 = std::max(g_nat.rx1, sx1);
    g_nat.ry1 = std::max(g_nat.ry1, sy1);
    g_nat.zwritten = g_nat.zwritten || zwrite;
    const std::uint32_t setup_at = arena_append(w, sizeof w);
    // a character's passes share one copy of the record (replace: one message draws them all)
    static const std::uint8_t *last_payload = nullptr;
    static std::uint32_t last_at = 0, last_seq = ~0u, last_frame = ~0u;
    static std::uint64_t last_serial = ~0ull;
    const bool shared = character && payload == last_payload && b.seq == last_seq && b.frame == last_frame && g_serial == last_serial;
    const std::uint32_t regs_at = shared ? last_at : arena_append(payload + body, record);
    last_payload = payload, last_at = regs_at, last_seq = b.seq, last_frame = b.frame, last_serial = g_serial;
    if (flags & 2u) {  // later uploads over these textures must wait for the native draws (as for the emulated ones)
        for (std::uint32_t n = 0; n <= mip_levels(w); ++n) {
            const Range r = level_range(w, n);
            bool known = false;
            for (const Range &k : g_batch_reads) known = known || (k.lo <= r.lo && r.hi <= k.hi);
            if (!known) g_batch_reads.push_back(r);
        }
    }
    const std::uint32_t tris = prim == 3 ? b.n / 3 : b.n >= 2 ? b.n - 2 : 0;
    std::uint32_t zmax;
    float scale;
    native_depth(w[6], zmax, scale);
    // 16: the alpha output is the stored alpha, not a blend factor; 32: Cd·C as C/256 (64: C = FIX)
    const std::uint32_t csel = (static_cast<std::uint32_t>(c.alpha) >> 4) & 3u;
    const bool factor_as = csel == 0 && (blend == kBlendLerp || blend == kBlendAdd || blend == kBlendSrc || blend == kBlendRevSub);
    const std::uint32_t pflags = (g_nat.plight ? 1u : 0u) | ((flags & 1u) ? 2u : 0u) | (oracle ? 4u : 0u) | (g_nat.hw_interp ? 8u : 0u) | (factor_as ? 0u : 16u) |
                                 (blend == kBlendDst ? 32u : 0u) | (blend == kBlendDst && csel == 2 ? 64u : 0u);
    const std::uint32_t ofx = static_cast<std::uint32_t>(c.xyoffset) & 0xFFFFu, ofy = static_cast<std::uint32_t>(c.xyoffset >> 32) & 0xFFFFu;
    for (int i = 0; i < count; ++i) {
        NativeDraw d;
        d.param = push_params({regs_at, b.program, b.n, character ? pass : b.nad, setup_at, ofx, ofy, t.width, t.height, splits[i].split, prim, pflags, 0u, zmax, f2u(scale),
                               g_nat.adc_back});
        std::uint32_t key = blend | (cmp << 5) | (splits[i].zwrite ? kNativeZWrite : 0u) | (splits[i].color ? kNativeColor : 0u) | (splits[i].alpha ? kNativeAlpha : 0u);
        if (((c.alpha >> 4) & 3u) == 2u) key |= kNativeConstant;
        d.pipeline = native_pipeline(key);
        d.color = t.color_view;
        d.depth = t.depth_view;
        d.alpha = t.alpha_view;
        d.vertices = tris * 3;
        d.check = i == 0 && oracle && g_nat.check ? (b.n + 63) / 64 : 0;
        d.scissor[0] = sx0;
        d.scissor[1] = sy0;
        d.scissor[2] = sx1 - sx0;
        d.scissor[3] = sy1 - sy0;
        d.constant = static_cast<double>((c.alpha >> 32) & 0xFFu) / 128.0;
        if (d.vertices || d.check) g_native_draws.push_back(d);
        ++g_nat.draws;
    }
    ++g_nat.drawn;
    ++g_nat.programs[b.program & 31u];
    g_nat.triangles += tris;
    if (oracle && prim != 3) {
        // the GS's triangles for this kick against the strip breaks of the VU1 output (XYZF2 bit 15)
        const std::uint8_t *out = character ? payload + body + char_in + static_cast<std::size_t>(pass) * b.n * 48
                                            : payload + body + (native::kRegQwords * 4 + static_cast<std::size_t>(b.n) * native::kVertexWords) * 4;
        std::uint32_t expected = 0, cross = 0;
        for (std::uint32_t k = 0; k < b.n; ++k) {
            std::uint32_t xyzw;
            std::memcpy(&xyzw, out + k * 48 + 32 + 12, 4);
            if ((xyzw >> 15) & 1u) continue;
            if (k >= 2) ++expected;
            else ++cross;
        }
        ++g_nat.oracle_batches;
        if (expected + cross != kick_prims) ++g_nat.prim_mismatch;
        g_nat.cross_batch += cross;
    }
}

// ---- Hardware GS renderer, step 1 (PS2_GS_HW=1): emulated triangles and sprites drawn by the render pipeline (native.wgsl
// hw_vs, hw_fs) into the native target, kept coherent with VRAM per tile as the native batches are. What it cannot draw
// (DATE, PABE, partial FBMSK, blends the hardware cannot express, other frame formats, lines, points, F_RT_HIRES
// sprites) stays on the compute raster, which writes back what it needs first (tiles_emulated).

// Whether the hardware path can draw a setup (the same tests as native_record): kHwOk, or why not.
std::uint8_t hw_setup(const std::uint32_t *w) {
    const std::uint32_t flags = w[0], fbmsk = w[4] & 0xFFFFFFu, amsk = w[4] >> 24;
    if (flags & 128u) return kHwDate;
    if ((flags & 8u) && (flags & 1024u)) return kHwPabe;
    if (fbmsk && fbmsk != 0xFFFFFFu) return kHwFbmsk;
    if (amsk && amsk != 0xFFu) return kHwAmsk;
    if (w[3] != PSMCT32 && w[3] != PSMCT24 && w[3] != PSMZ24) return kHwFormat;  // Z24 as a frame: CT24's colour, Z's swizzle
    if (w[2] == 0 || w[2] * 64u > 2048u) return kHwWidth;
    const std::uint32_t blend = native_blend((w[7] >> 12) & 0xFFu, flags & 8u, w[9]);
    if (!blend || (blend == kBlendSub && !(flags & 2048u))) return kHwBlend;  // a negative difference wraps without COLCLAMP
    if ((flags & 512u) && ((w[7] >> 8) & 3u) == 0) return kHwZNever;
    if ((flags & 64u) && (w[7] & 7u) == 0 && ((w[7] >> 4) & 3u) == 0) return kHwANever;
    return kHwOk;
}

// A hardware primitive's frame and Z buffer: its cached target is made current (what is queued for the old one goes into
// the stream first when the binding changes; the pending batch keeps its own target).
void hw_bind(const std::uint32_t *w) {
    const std::uint32_t rows = std::clamp<std::uint32_t>((w[11] >> 16) + 1u, 1u, 2048u);
    const bool z = w[0] & 512u;
    const Binding *c = g_nat.cur;
    if (c && w[1] == c->fbp && w[2] == c->fbw && w[3] == c->fpsm && (!z || (c->z && w[5] == c->zbp && w[6] == c->zpsm)) && rows <= c->rows) return;
    emit_all();
    tiles_bind_to(w[1], w[2], w[3], w[5], w[6], rows, z);
}

// The texel rect (r: x0 y0 x1 y1) each setup's texture is read in, if only FST sprites read it, with the filter's margin
// and the wrap mode applied; ok false otherwise (or under REGION_REPEAT, or a REPEAT that wraps).
struct TexelRect {
    int r[4] = {1 << 30, 1 << 30, -1, -1};
    bool ok = true;
};

void texel_rects(std::uint32_t prims, std::vector<TexelRect> &out) {
    const Batch &b = g_batch;
    out.assign(b.setups.size() / kSetupWords, TexelRect{});
    for (std::uint32_t i = 0; i < prims; ++i) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        const std::uint32_t *w = b.setups.data() + rec[0] * kSetupWords;
        TexelRect &t = out[rec[0]];
        if (!t.ok || !(w[0] & 2u)) continue;
        if (rec[1] != 1 || !(w[0] & 16u)) {
            t.ok = false;
            continue;
        }
        float uv[6];
        std::memcpy(uv, rec + 15, sizeof uv);
        int q[4] = {static_cast<int>(std::floor(std::min(uv[0], uv[3]) / 16.0f)) - 1, static_cast<int>(std::floor(std::min(uv[1], uv[4]) / 16.0f)) - 1,
                    static_cast<int>(std::ceil(std::max(uv[0], uv[3]) / 16.0f)) + 1, static_cast<int>(std::ceil(std::max(uv[1], uv[4]) / 16.0f)) + 1};
        for (int a = 0; a < 2; ++a) {  // u, then v
            const std::uint32_t mode = (w[7] >> (24 + 2 * a)) & 3u, size = 1u << ((w[15] >> (8 * a)) & 0xFFu), region = w[18 + a];
            const int lo = mode == 2 ? static_cast<int>(region & 0x3FFu) : 0, hi = mode == 2 ? static_cast<int>(region >> 16) : static_cast<int>(size) - 1;
            if (mode == 3 || (mode == 0 && (q[a] < 0 || q[a + 2] > hi))) t.ok = false;
            q[a] = std::clamp(q[a], lo, hi), q[a + 2] = std::clamp(q[a + 2], lo, hi);
        }
        t.r[0] = std::min(t.r[0], q[0]), t.r[1] = std::min(t.r[1], q[1]), t.r[2] = std::max(t.r[2], q[2]), t.r[3] = std::max(t.r[3], q[3]);
    }
}

// The targets a texture with setup w and texel rect t is read from instead of VRAM (kSource): a CT32 / CT24 texture at a
// target's frame (same TBP0, TBW; CT24 only from a CT32 one, whose alpha the target holds), no mipmaps. Read inside the
// target, or through VRAM's pages (kSourcePages, native.wgsl source_texel): a texel past the buffer width is the one a
// page row down, and the rows past the target's are those of the target that starts on the page there (y[1]).
struct Source {
    Binding *y[kSources] = {};
    int r[kSources][4] = {};  // the GS pixels read of each
    std::uint32_t flags = 0;
};

Binding *frame_at(std::uint32_t fbp, std::uint32_t fbw, std::uint32_t tpsm) {
    for (const auto &p : g_nat.bindings)
        if (p->fbp == fbp && p->fbw == fbw && (p->fpsm == PSMCT32 || (p->fpsm == PSMCT24 && tpsm == PSMCT24))) return p.get();
    return nullptr;
}

bool source_of(const std::uint32_t *w, const TexelRect &t, Source &s) {
    if (!t.ok || t.r[2] < 0 || (w[0] & kReplaced) || mip_levels(w) || (w[14] != PSMCT32 && w[14] != PSMCT24)) return false;
    Binding *y = frame_at(w[12], w[13], w[14]);
    if (!y) return false;
    const int cols = static_cast<int>(y->target.width / g_sx), rows = static_cast<int>(std::min(y->rows, y->target.height / g_sy));
    s = Source{};
    s.y[0] = y;
    if (t.r[2] < cols && t.r[3] < rows) return std::copy(t.r, t.r + 4, s.r[0]), true;
    const int width = static_cast<int>(w[13]) * 64, wrap = t.r[2] >= width ? 32 : 0, bottom = t.r[3] + wrap;
    if (!width || cols < width || t.r[2] >= 2 * width) return false;
    s.flags = kSourcePages;
    s.r[0][0] = wrap ? 0 : t.r[0], s.r[0][1] = t.r[1], s.r[0][2] = wrap ? width - 1 : t.r[2], s.r[0][3] = std::min(bottom, rows - 1);
    if (bottom < rows) return true;
    if (static_cast<std::uint32_t>(rows) != y->rows || rows % 32 || rows / 32 > 127 || t.r[1] >= rows) return false;
    Binding *z = frame_at(w[12] + static_cast<std::uint32_t>(rows / 32) * w[13] * 32, w[13], w[14]);
    if (!z || static_cast<int>(z->target.width / g_sx) < width || bottom - rows >= static_cast<int>(std::min(z->rows, z->target.height / g_sy))) return false;
    s.y[1] = z;
    s.flags |= static_cast<std::uint32_t>(rows / 32) << kSourceSplit;
    s.r[1][0] = s.r[0][0], s.r[1][1] = 0, s.r[1][2] = s.r[0][2], s.r[1][3] = bottom - rows;
    return true;
}

// The target whose Z buffer a texture with setup w and texel rect t is read from (kSourceZ), or none: a Z24 texture at a
// target's Z24 Z buffer (same TBP0, TBW) that holds tiles of the rect newer than VRAM (of the targets sharing that Z
// buffer, the one holding the most), no mipmaps, its frame not on those pages (tiles_read skips the target). Texels past
// the Z buffer's tiles read VRAM. Nothing newer: the whole texture reads VRAM.
Binding *z_source_of(const std::uint32_t *w, const TexelRect &t) {
    if (!t.ok || t.r[2] < 0 || (w[0] & kReplaced) || mip_levels(w) || w[14] != PSMZ24) return nullptr;
    Binding *best = nullptr;
    int most = 0;
    const int k = static_cast<int>(kTilePx);
    for (const auto &p : g_nat.bindings) {
        Binding &y = *p;
        if (!y.z || y.zpsm != PSMZ24 || y.zbp != w[12] || y.fbw != w[13]) continue;
        if (region(w[12], w[13], w[14], t.r[0], t.r[1], t.r[2], t.r[3]).overlaps(y.bound_lo[0], y.bound_hi[0])) continue;
        int x0 = t.r[0] / k, y0 = t.r[1] / k, x1 = t.r[2] / k, y1 = t.r[3] / k, n = 0;
        if (!tiles_clip(y, x0, y0, x1, y1)) continue;
        std::uint64_t m[2];
        row_mask(x0, x1, m);
        for (int ty = y0; ty <= y1; ++ty) n += __builtin_popcountll(y.tz[ty][0] & m[0]) + __builtin_popcountll(y.tz[ty][1] & m[1]);
        if (n > most) best = &y, most = n;
    }
    return best;
}

// The tiles (over: x0 y0 x1 y1) a sprite overwrites whole, every sample's colour and alpha (and Z, when it writes Z), so
// they need no import: no blend, alpha test, DATE, write mask, scan mask or Z test but ALWAYS. One GS pixel of slack.
bool overwritten(const std::uint32_t *rec, const std::uint32_t *w, const Binding &x, int over[4]) {
    const std::uint32_t f = w[0], m = w[7];
    if (rec[1] != 1 || (f & (8u | 128u)) || (w[4] & 0xFFFFFFu) || ((w[4] >> 24) && x.fpsm == PSMCT32) || ((m >> 28) & 3u)) return false;
    if ((f & 64u) && (m & 7u) != 1u) return false;
    if ((f & 512u) && ((m >> 8) & 3u) != 1u) return false;
    const float x0 = u2f(rec[4]), y0 = u2f(rec[5]), x1 = x0 + u2f(rec[6]), y1 = y0 + u2f(rec[7]);
    if (!(std::isfinite(x0) && std::isfinite(y0) && std::isfinite(x1) && std::isfinite(y1))) return false;
    const int t = static_cast<int>(kTilePx);
    const int px0 = std::max(static_cast<int>(std::ceil(std::min(x0, x1))) + 1, static_cast<int>(w[10] & 0xFFFFu));
    const int px1 = std::min(static_cast<int>(std::ceil(std::max(x0, x1))) - 2, static_cast<int>(w[10] >> 16));
    const int py0 = std::max(static_cast<int>(std::ceil(std::min(y0, y1))) + 1, static_cast<int>(w[11] & 0xFFFFu));
    const int py1 = std::min(static_cast<int>(std::ceil(std::max(y0, y1))) - 2, static_cast<int>(w[11] >> 16));
    over[0] = (px0 + t - 1) / t, over[1] = (py0 + t - 1) / t, over[2] = (px1 + 1) / t - 1, over[3] = (py1 + 1) / t - 1;
    if (px0 < 0 || py0 < 0) return false;
    g_nat.overwritten += over[0] <= over[2] && over[1] <= over[3];
    return over[0] <= over[2] && over[1] <= over[3];
}

// Binding b's shadow (colour and alpha, as its target), the whole of it dirty.
void make_shadow(Binding &b) {
    WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
    td.usage = WGPUTextureUsage_RenderAttachment | WGPUTextureUsage_CopySrc | WGPUTextureUsage_TextureBinding;
    td.size = WGPUExtent3D{b.target.width, b.target.height, 1};
    td.format = WGPUTextureFormat_RGBA8Unorm;
    b.shadow.color = wgpuDeviceCreateTexture(g_device, &td);
    td.format = WGPUTextureFormat_R8Uint;
    b.shadow.alpha = wgpuDeviceCreateTexture(g_device, &td);
    b.shadow.color_view = wgpuTextureCreateView(b.shadow.color, nullptr);
    b.shadow.alpha_view = wgpuTextureCreateView(b.shadow.alpha, nullptr);
    b.shadow.width = b.target.width;
    b.shadow.height = b.target.height;
    mark_dirty(b, 0, 0, static_cast<int>(b.target.width / g_sx) - 1, static_cast<int>(b.target.height / g_sy) - 1);
}

// ---- Transfers: memory drawn both as a Z24 buffer and as a CT32 frame (the glow drawn over the Z buffer, a pass drawing
// one frame as CT32 and as Z24) moves between the targets that view it GPU-side, converted, instead of one target's
// write-back to VRAM and the other's import. A view: a target's frame (0) or Z buffer (1) as a CT32 frame (kind 0), a Z24
// frame (1) or a Z24 Z buffer (2). Views of one base pointer and buffer width share their pages; a Z format places
// pixel (x, y) of a page where CT32 places (x ^ 32, y ^ 16), so tile (x, y) where CT32 has tile (x ^ 2, y ^ 1). Z24
// keeps the top byte of each word: transfers out of a Z24 view take it from VRAM, which holds it (no CT32 target holds
// those tiles newer), and transfers out of a CT32 frame into a Z24 view leave the frame's alpha there.
int view_kind(const Binding &b, int k) {
    if (!k) return b.fpsm == PSMCT32 ? 0 : b.fpsm == PSMZ24 ? 1 : -1;
    return b.z && b.zpsm == PSMZ24 ? 2 : -1;
}
std::uint32_t view_bp(const Binding &b, int k) { return k ? b.zbp : b.fbp; }
std::uint64_t (&view_newer(Binding &b, int k))[128][2] { return k ? b.tz : b.tc; }

// A row of tile bits with x ^ 2 (the other half of each page's four tiles).
std::uint64_t swap_halves(std::uint64_t v) {
    constexpr std::uint64_t m = 0x3333333333333333ull;
    return ((v & m) << 2) | ((v >> 2) & m);
}

// A hardware primitive's tiles_take: tile rect, buffers it reads or writes and writes, and the tiles it overwrites.
struct PrimTake {
    int x0, y0, x1, y1;
    std::uint8_t buffers, writes;
    bool over;
    int o[4];
};

// The transfers into one view of the batch's target from one view of another target, over a tile list.
struct XferGroup {
    Binding *y;
    int ky, kx;
    bool remap;
    std::vector<std::uint32_t> tiles;
};
std::vector<XferGroup> g_xfers;

// The tiles the batch's primitives (takes) will import into target x (tiles_take's walk on a copy of its VRAM-newer
// bits) that another target holds newer in a view of the same memory in another format: they move into x instead
// (xfer_emit), newer there. The other target keeps its copy, equal to x's until x draws over it (tiles_claim then
// marks it VRAM-newer); a source of the batch has imported what it reads by then (hw_flush). Those x overwrites whole
// before reading them are dead in the other target, which stops holding them newer without a write-back (tiles_claim's),
// unless x writes 24 of their 32 bits and the other holds the top byte (a CT32 frame's alpha under a Z24 view).
void xfer_plan(Binding &x, bool zuse, const std::vector<PrimTake> &takes) {
    g_xfers.clear();
    struct Alias {
        Binding *y;
        int ky, kx;
        bool remap, kill;
    } al[8];
    int n = 0;
    for (int kx = 0; kx < 2; ++kx) {
        const int xk = view_kind(x, kx);
        if (xk < 0 || (kx && !zuse)) continue;
        for (const auto &p : g_nat.bindings) {
            Binding &y = *p;
            if (&y == &x || y.fbw != x.fbw) continue;
            for (int ky = 0; ky < 2 && n < 8; ++ky) {
                const int yk = view_kind(y, ky);
                if (yk < 0 || (!xk && !yk) || view_bp(y, ky) != view_bp(x, kx)) continue;
                al[n++] = {&y, ky, kx, !xk != !yk, yk != 0 || xk == 0};
            }
        }
    }
    if (!n) return;
    int lo = 128, hi = -1;
    for (const PrimTake &p : takes) {
        int x0 = p.x0, y0 = p.y0, x1 = p.x1, y1 = p.y1;
        if (tiles_clip(x, x0, y0, x1, y1)) lo = std::min(lo, y0), hi = std::max(hi, y1);
    }
    // nothing to move unless an alias holds newer some tile of those rows that x has VRAM-newer (what it imports)
    bool any = false;
    for (int i = 0; i < n && !any; ++i)
        for (int ty = lo; ty <= hi && !any; ++ty)
            for (int w = 0; w < 2; ++w) {
                const std::uint64_t theirs = view_newer(*al[i].y, al[i].ky)[al[i].remap ? ty ^ 1 : ty][w];
                any = any || (x.tv[al[i].kx][ty][w] & (al[i].remap ? swap_halves(theirs) : theirs));
            }
    if (!any) return;
    static std::uint64_t tv[2][128][2], need[2][128][2], dead[2][128][2];
    for (int k = 0; k < 2; ++k)
        for (int y = lo; y <= hi; ++y)
            for (int w = 0; w < 2; ++w) tv[k][y][w] = x.tv[k][y][w], need[k][y][w] = dead[k][y][w] = 0;
    for (const PrimTake &p : takes) {
        int x0 = p.x0, y0 = p.y0, x1 = p.x1, y1 = p.y1;
        if (!tiles_clip(x, x0, y0, x1, y1)) continue;
        for (int y = y0; y <= y1; ++y) {
            std::uint64_t m[2], skip[2] = {};
            row_mask(x0, x1, m);
            if (p.over && y >= p.o[1] && y <= p.o[3]) row_mask(p.o[0], p.o[2], skip);
            for (int w = 0; w < 2; ++w)
                for (int k = 0; k < 2; ++k) {
                    if (!(p.buffers & (1u << k))) continue;
                    if (p.writes & (1u << k)) dead[k][y][w] |= tv[k][y][w] & m[w] & skip[w], tv[k][y][w] &= ~(m[w] & skip[w]);
                    need[k][y][w] |= tv[k][y][w] & m[w];
                    tv[k][y][w] &= ~m[w];
                }
        }
    }
    for (int i = 0; i < n; ++i) {
        const Alias &a = al[i];
        XferGroup *g = nullptr;
        for (XferGroup &e : g_xfers)
            if (e.y == a.y && e.ky == a.ky && e.kx == a.kx) g = &e;
        for (int ty = lo; ty <= hi; ++ty) {
            const int my = a.remap ? ty ^ 1 : ty;
            for (int w = 0; w < 2; ++w) {
                std::uint64_t &theirs = view_newer(*a.y, a.ky)[my][w];
                if (const std::uint64_t kill = a.kill ? dead[a.kx][ty][w] & (a.remap ? swap_halves(theirs) : theirs) : 0) {
                    theirs &= ~(a.remap ? swap_halves(kill) : kill);
                    g_nat.xfer_dead += static_cast<std::uint64_t>(__builtin_popcountll(kill));
                }
                const std::uint64_t hit = need[a.kx][ty][w] & (a.remap ? swap_halves(theirs) : theirs);
                if (!hit) continue;
                if (!g) g = &g_xfers.emplace_back(XferGroup{a.y, a.ky, a.kx, a.remap, {}});
                need[a.kx][ty][w] &= ~hit;
                theirs &= ~(a.remap ? swap_halves(hit) : hit);
                x.tv[a.kx][ty][w] &= ~hit;
                view_newer(x, a.kx)[ty][w] |= hit;
                x.newer[ty >> 6] |= 1ull << (ty & 63);
                for (std::uint64_t bits = hit; bits; bits &= bits - 1)
                    g->tiles.push_back(static_cast<std::uint32_t>(w * 64 + __builtin_ctzll(bits)) | static_cast<std::uint32_t>(ty) << 8);
            }
        }
    }
}

// The planned transfers into target x, next in the stream of native draws: one draw per group, an instance per tile.
// The word goes to view kx of x at (base, width, PSMCT32 or PSMZ32) of the destination pixel.
void xfer_emit(Binding &x) {
    std::uint32_t zmax;
    float scale;
    native_depth(PSMZ24, zmax, scale);
    const int t = static_cast<int>(kTilePx);
    for (const XferGroup &g : g_xfers) {
        const Binding &y = *g.y;
        const int from = view_kind(y, g.ky), into = view_kind(x, g.kx);
        NativeDraw d;
        d.pipeline = xfer_pipeline(into == 2 ? kXferZ : kXferFrame);
        d.source = xfer_group(y.target);
        d.color = x.target.color_view;
        d.depth = x.target.depth_view;
        d.alpha = x.target.alpha_view;
        d.param = push_params({static_cast<std::uint32_t>(from), static_cast<std::uint32_t>(into), g.remap ? 1u : 0u, view_bp(x, g.kx), x.fbw,
                               arena_append(g.tiles.data(), g.tiles.size() * 4), into ? PSMZ32 : PSMCT32, x.target.width, x.target.height,
                               y.target.width, std::min(y.ty * kTilePx * g_sy, y.target.height), 0u, 0u, zmax, f2u(scale), 0u});
        d.vertices = 6;
        d.instances = static_cast<std::uint32_t>(g.tiles.size());
        d.scissor[2] = x.target.width;
        d.scissor[3] = x.target.height;
        g_native_draws.push_back(d);
        for (std::uint32_t e : g.tiles) {
            const int tx = static_cast<int>(e & 0xFFu), ty = static_cast<int>(e >> 8);
            g_nat.xfer_by[from][into] += tile_samples(x, e & 0xFFu, e >> 8);
            if (into != 2) mark_dirty(x, tx * t, ty * t, tx * t + t - 1, ty * t + t - 1);
            // a CT32 frame's alpha went into VRAM's top bytes under a Z24 view
            if (!from && into) mark_rendered(view_bp(x, g.kx), x.fbw, PSMZ24, tx * t, ty * t, tx * t + t - 1, ty * t + t - 1);
        }
        g_nat.xfer_tiles += g.tiles.size();
    }
}

void hw_flush() {
    Batch &b = g_batch;
    Binding &x = *b.binding;
    const std::uint32_t prims = static_cast<std::uint32_t>(b.prims.size() / kPrimWords);
    const std::uint32_t setups = static_cast<std::uint32_t>(b.setups.size() / kSetupWords);
    // what the textures read of any target goes back to VRAM first, but a texture on a target's frame is read from that
    // target (kSources of them per batch): only the other targets give those pages back. The other targets give up the
    // pages drawn here.
    static std::vector<TexelRect> rects;
    texel_rects(prims, rects);
    Binding *src[kSources] = {};
    int sr[kSources][4];
    for (auto &r : sr) r[0] = r[1] = 1 << 30, r[2] = r[3] = -1;
    Binding *zsrc = nullptr;  // the Z source (kSourceZ) and the GS pixels read of it
    int zr[4] = {1 << 30, 1 << 30, -1, -1};
    bool zuse = false;  // a primitive reads or writes Z (ZTE with ZTST ALWAYS and ZMSK does neither)
    for (std::uint32_t i = 0; i < setups; ++i) {
        std::uint32_t *w = b.setups.data() + i * kSetupWords;
        zuse = zuse || ((w[0] & 512u) && (!(w[0] & 32u) || ((w[7] >> 8) & 3u) != 1u));
        if (!(w[0] & 2u)) continue;
        g_nat.read_key = w[14], g_nat.read_tbp = w[12], g_nat.read_tbw = w[13];
        if (Binding *y = z_source_of(w, rects[i]); y && y != &x && (!zsrc || zsrc == y)) {
            const int *r = rects[i].r;
            zsrc = y;
            w[0] |= kSource | kSourceZ;
            w[26] = (y->target.width / g_sx) | std::min(y->ty * kTilePx, y->target.height / g_sy) << 16;
            zr[0] = std::min(zr[0], r[0]), zr[1] = std::min(zr[1], r[1]), zr[2] = std::max(zr[2], r[2]), zr[3] = std::max(zr[3], r[3]);
            tiles_read(region(w[12], w[13], w[14], r[0], r[1], r[2], r[3]), y);
            ++g_nat.zsourced;
            continue;
        }
        Source so;
        std::uint32_t slot = 0;  // a split source (two targets) takes both slots, in order
        bool fits = source_of(w, rects[i], so);
        if (fits && so.y[1]) fits = (!src[0] || src[0] == so.y[0]) && (!src[1] || src[1] == so.y[1]);
        else if (fits) {
            while (slot < kSources && src[slot] && src[slot] != so.y[0]) ++slot;
            fits = slot < kSources;
        }
        if (fits) {
            for (std::uint32_t k = 0; k < kSources && so.y[k]; ++k) {
                src[slot + k] = so.y[k];
                int *u = sr[slot + k];
                const int *r = so.r[k];
                u[0] = std::min(u[0], r[0]), u[1] = std::min(u[1], r[1]), u[2] = std::max(u[2], r[2]), u[3] = std::max(u[3], r[3]);
            }
            w[0] |= kSource | (slot ? kSourceSlot : 0u) | so.flags;
            // the other targets on those pages give back what they hold newer: of a paged read, the whole texture's at
            // once (what a later upload there would take tile run by tile run, a compute pass each)
            const int *r = rects[i].r;
            tiles_read(so.flags ? level_range(w, 0) : region(w[12], w[13], w[14], r[0], r[1], r[2], r[3]), so.y[0], so.y[1]);
            ++g_nat.sourced;
            continue;
        }
        for (std::uint32_t n = 0; n <= mip_levels(w); ++n) tiles_read(level_range(w, n));
    }
    // the tiles each primitive reads and writes: the Z buffer only when it tests or writes Z
    const int t = static_cast<int>(kTilePx);
    static std::vector<PrimTake> takes;
    takes.resize(prims);
    for (std::uint32_t i = 0; i < prims; ++i) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        const std::uint32_t *w = b.setups.data() + rec[0] * kSetupWords;
        const bool zte = w[0] & 512u, zwrite = zte && !(w[0] & 32u), ztest = zte && ((w[7] >> 8) & 3u) != 1u;
        const std::uint8_t z = (ztest || zwrite) && x.z ? kTileZ : 0, zw = zwrite && x.z ? kTileZ : 0;
        PrimTake &p = takes[i];
        p = {static_cast<int>(rec[2] & 0xFFFFu) / t, static_cast<int>(rec[2] >> 16) / t, static_cast<int>(rec[3] & 0xFFFFu) / t, static_cast<int>(rec[3] >> 16) / t,
             static_cast<std::uint8_t>(kTileColor | z), static_cast<std::uint8_t>(kTileColor | zw), false, {}};
        p.over = overwritten(rec, w, x, p.o);
    }
    // what other targets hold newer of those tiles in another format comes over GPU-side; the rest of the pages drawn
    // goes back to VRAM
    xfer_plan(x, zuse, takes);
    // the VRAM-newer tiles the sources read come into them before the batch's pages are claimed: the batch reads what
    // they hold then, which a transfer or an overwrite of their other views leaves in place
    tiles_writeback();
    static std::vector<std::uint32_t> list;
    list.clear();
    bool self = false;  // the batch reads its own target: it draws into the shadow
    for (std::uint32_t k = 0; k < kSources && src[k]; ++k) {
        self = self || src[k] == &x;
        tiles_take(*src[k], sr[k][0] / t, sr[k][1] / t, sr[k][2] / t, sr[k][3] / t, kTileColor, 0, list);
        tiles_import(*src[k], list);
        list.clear();
    }
    if (zsrc) {
        tiles_take(*zsrc, zr[0] / t, zr[1] / t, zr[2] / t, zr[3] / t, kTileZ, 0, list);
        tiles_import(*zsrc, list);
        list.clear();
    }
    tiles_claim(x, b.minx, b.miny, b.maxx, b.maxy, zuse, b.zwrite);
    tiles_writeback();
    xfer_emit(x);
    // the VRAM-newer tiles under the primitives come into the target, which then holds them newer
    for (const PrimTake &p : takes) tiles_take(x, p.x0, p.y0, p.x1, p.y1, p.buffers, p.writes, list, p.over ? p.o : nullptr, p.writes);
    tiles_import(x, list);
    const NativeTarget *slots[kSources] = {};
    std::uint32_t own = 0;
    for (std::uint32_t k = 0; k < kSources; ++k) {
        slots[k] = src[k] ? &src[k]->target : nullptr;
        if (src[k] == &x) own = k;
    }
    const WGPUBindGroup source = source_group(slots, zsrc ? &zsrc->target : nullptr);
    NativeTarget tg = x.target;  // what the draws go into
    if (self) {  // the shadow first gets what the target has newer (in the draws' pass)
        if (!x.shadow.color) make_shadow(x);
        tg.color = x.shadow.color, tg.color_view = x.shadow.color_view, tg.alpha = x.shadow.alpha, tg.alpha_view = x.shadow.alpha_view;
        const int *dr = x.dirty;
        if (dr[0] <= dr[2]) {
            NativeDraw d;
            d.pipeline = native_pipeline(kNativeBlit);
            d.color = tg.color_view;
            d.depth = tg.depth_view;
            d.alpha = tg.alpha_view;
            d.source = source;
            d.param = push_params({0u, 0u, 0u, 0u, 0u, 0u, 0u, tg.width, tg.height, own, 0u, 0u, 0u, 0u, 0u, 0u});
            d.vertices = 3;
            d.scissor[0] = static_cast<std::uint32_t>(dr[0]) * g_sx;
            d.scissor[1] = static_cast<std::uint32_t>(dr[1]) * g_sy;
            d.scissor[2] = static_cast<std::uint32_t>(dr[2] - dr[0] + 1) * g_sx;
            d.scissor[3] = static_cast<std::uint32_t>(dr[3] - dr[1] + 1) * g_sy;
            g_native_draws.push_back(d);
            g_nat.blitted += static_cast<std::uint64_t>(d.scissor[2]) * d.scissor[3];
        }
        x.dirty[0] = 1, x.dirty[2] = 0;
        ++g_nat.swapped;
    }
    emit_native();  // the write-backs and the import go ahead of the decodes, which may read what they wrote back
    std::uint32_t zmax;
    float scale;
    native_depth(x.zpsm, zmax, scale);
    plan_decodes(prims, true);
    const std::uint32_t prim_offset = arena_append(b.prims.data(), b.prims.size() * 4);
    const std::uint32_t setup_offset = arena_append(b.setups.data(), b.setups.size() * 4);
    emit_decodes(setup_offset);
    // one draw (or two: the alpha test's pass and fail pixels) per run of primitives with one setup and kind
    for (std::uint32_t i = 0; i < prims;) {
        const std::uint32_t *rec = b.prims.data() + i * kPrimWords;
        std::uint32_t n = 1;
        while (i + n < prims && b.prims[(i + n) * kPrimWords] == rec[0] && b.prims[(i + n) * kPrimWords + 1] == rec[1]) ++n;
        const std::uint32_t *w = b.setups.data() + rec[0] * kSetupWords;
        const std::uint32_t flags = w[0], alpha = (w[7] >> 12) & 0xFFu;
        std::uint32_t blend = native_blend(alpha, flags & 8u, w[9]);
        if ((w[4] & 0xFFFFFFu) == 0xFFFFFFu) blend = kBlendKeep;
        const bool zte = flags & 512u, zwrite = zte && !(flags & 32u);
        const std::uint32_t ztst = (w[7] >> 8) & 3u, cmp = !zte || ztst == 1 ? 0u : ztst == 2 ? 1u : 2u;
        const bool amsk = (w[4] >> 24) != 0, frame_alpha = !amsk && w[3] == PSMCT32;
        const bool decoded = (flags & 2u) && w[24] != 0xFFFFFFFFu && !(flags & (kReplaced | kRtHires | kSource));  // gs.wgsl DECODED
        struct Split {
            std::uint32_t split;
            bool color, zwrite, alpha;
        } splits[2];
        int count = 0;
        const std::uint32_t atst = w[7] & 7u, afail = (w[7] >> 4) & 3u;
        if (!(flags & 64u) || atst == 1) {
            splits[count++] = {0, true, zwrite, frame_alpha};
        } else {
            if (atst != 0) splits[count++] = {1, true, zwrite, frame_alpha};
            if (afail == 1 || afail == 3) splits[count++] = {2, true, false, frame_alpha && afail == 1};
            else if (afail == 2) splits[count++] = {2, false, zwrite, false};
        }
        const std::uint32_t csel = (alpha >> 4) & 3u;
        const bool factor_as = csel == 0 && (blend == kBlendLerp || blend == kBlendAdd || blend == kBlendSrc || blend == kBlendRevSub);
        // 128 / 256: the GS's floor instead of the hardware's rounding (native.wgsl shade_frag); 512: the factor is FIX
        const bool floors = blend == kBlendLerp || blend == kBlendAdd || blend == kBlendSrc || blend == kBlendSub;
        const bool premul = blend == kBlendAdd || blend == kBlendSrc || blend == kBlendRevSub;  // Cs·C (+ Cd): C up to 255/128 exactly
        const std::uint32_t pflags = (factor_as ? 0u : 16u) | (blend == kBlendDst ? 32u : 0u) | (blend == kBlendDst && csel == 2 ? 64u : 0u) |
                                     (floors ? 128u : blend == kBlendRevSub ? 256u : 0u) | (csel == 2 ? 512u : 0u) | (premul ? 1024u : 0u);
        const std::uint32_t sx0 = std::min((w[10] & 0xFFFFu) * g_sx, tg.width), sx1 = std::min(((w[10] >> 16) + 1) * g_sx, tg.width);
        const std::uint32_t sy0 = std::min((w[11] & 0xFFFFu) * g_sy, tg.height), sy1 = std::min(((w[11] >> 16) + 1) * g_sy, tg.height);
        for (int k = 0; k < count && sx0 < sx1 && sy0 < sy1; ++k) {
            NativeDraw d;
            d.param = push_params({prim_offset + i * kPrimWords, n, 0u, rec[1], setup_offset + rec[0] * kSetupWords, 0u, 0u, tg.width, tg.height, splits[k].split, 0u, pflags,
                                   0u, zmax, f2u(scale), 0u});
            std::memcpy(g_param_records[d.param].data() + 32, w, kSetupWords * 4);  // gs.wgsl SETUP_PRM
            std::uint32_t key = kNativeHw | blend | (cmp << 5) | (splits[k].zwrite ? kNativeZWrite : 0u) | (splits[k].color ? kNativeColor : 0u) |
                                (splits[k].alpha ? kNativeAlpha : 0u);
            if (premul) key |= kNativePremul;
            else if (csel == 2u) key |= kNativeConstant;
            if (decoded) key |= kNativeDecoded;
            else if ((flags & (2u | kSource | kReplaced)) == (2u | kSource)) key |= kNativeSourced;  // gs.wgsl SOURCE
            else if (!(flags & 2u)) key |= kNativePlain;  // native.wgsl PLAIN
            if ((flags & kRtHires) && rec[1] == 1) key |= kNativeRtHires;  // gs.wgsl RT_HIRES: sprites only (hw_fs)
            if (flags & kSourceZ) key |= kNativeSourceZ;
            d.pipeline = native_pipeline(key);
            d.color = tg.color_view;
            d.depth = tg.depth_view;
            d.alpha = tg.alpha_view;
            d.vertices = n * (rec[1] == 1 ? 6u : 3u);
            d.scissor[0] = sx0;
            d.scissor[1] = sy0;
            d.scissor[2] = sx1 - sx0;
            d.scissor[3] = sy1 - sy0;
            d.constant = static_cast<double>(w[9]) / 128.0;
            d.source = source;
            g_native_draws.push_back(d);
            ++g_nat.draws;
        }
        g_nat.triangles += n;
        i += n;
    }
    emit_native();
    if (self) {  // the shadow, now with the draws, becomes the target; the old one lacks only what they drew
        std::swap(x.target.color, x.shadow.color), std::swap(x.target.color_view, x.shadow.color_view);
        std::swap(x.target.alpha, x.shadow.alpha), std::swap(x.target.alpha_view, x.shadow.alpha_view);
    }
    mark_dirty(x, b.minx, b.miny, b.maxx, b.maxy);
    ++g_nat.drawn;
    mark_rendered(b.fbp, b.fbw, b.fpsm, b.minx, b.miny, b.maxx, b.maxy);
    if (b.zwrite) mark_rendered(b.zbp, b.fbw, b.zpsm, b.minx, b.miny, b.maxx, b.maxy);
    b.prims.clear();
    b.setups.clear();
    b.boxes.clear();
    b.dbg_draws.clear();
    g_batch_reads.clear();
    b.key = ~0ull;
    b.hw = false;
    b.binding = nullptr;
    b.minx = b.miny = 1 << 30;
    b.maxx = b.maxy = -1;
}

bool native_init() {
    const auto on = [](const char *name) {
        const char *e = std::getenv(name);
        return e && *e && *e != '0';
    };
    g_hw = on("PS2_GS_HW");
    g_nat.on = native::active() || g_hw;
    if (!g_nat.on) return true;
    g_nat.replace = native::replace() || g_hw;
    g_nat.check = on("PS2_NATIVE_CHECK") && !g_nat.replace;
    g_nat.plight = on("PS2_NATIVE_PLIGHT");
    if (const char *e = std::getenv("PS2_NATIVE_INTERP")) g_nat.hw_interp = !std::strcmp(e, "hw");  // the hardware's attribute interpolation
    if (const char *e = std::getenv("PS2_NATIVE_ADC_BACK")) g_nat.adc_back = static_cast<std::uint32_t>(std::atoi(e));
    if (const char *e = std::getenv("PS2_NATIVE_DUMP")) {
        char dir[512] = {};
        long long frame = -1;
        if (std::sscanf(e, "%lld,%511s", &frame, dir) == 2) {
            g_nat.dump_frame = frame;
            g_nat.dump_dir = dir;
        }
    }
    g_native_checks = make_buffer(4096, WGPUBufferUsage_Storage | WGPUBufferUsage_CopySrc | WGPUBufferUsage_CopyDst);
    const std::vector<std::uint8_t> zero(4096, 0);
    wgpuQueueWriteBuffer(g_queue, g_native_checks, 0, zero.data(), zero.size());
    // as the compute layout, with the stages each binding is used in (the vertex shader reads only params and data)
    WGPUBindGroupLayoutEntry le[9] = {};
    const WGPUBufferBindingType types[9] = {WGPUBufferBindingType_Storage, WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Uniform,
                                            WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Storage, WGPUBufferBindingType_Storage,
                                            WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Storage, WGPUBufferBindingType_Storage};
    const WGPUShaderStage fc = WGPUShaderStage_Fragment | WGPUShaderStage_Compute, all = fc | WGPUShaderStage_Vertex;
    const WGPUShaderStage stages[9] = {fc, fc, all, all, fc, fc, WGPUShaderStage_Compute, fc, WGPUShaderStage_Compute};
    for (int i = 0; i < 9; ++i) {
        le[i] = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        le[i].binding = static_cast<std::uint32_t>(i);
        le[i].visibility = stages[i];
        le[i].buffer.type = types[i];
        le[i].buffer.hasDynamicOffset = i == 2;
        le[i].buffer.minBindingSize = i == 2 ? kParamStride : 0;
    }
    WGPUBindGroupLayoutDescriptor ld = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    ld.entryCount = 9;
    ld.entries = le;
    g_native_layout = wgpuDeviceCreateBindGroupLayout(g_device, &ld);
    WGPUPipelineLayoutDescriptor pld = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    pld.bindGroupLayoutCount = 1;
    pld.bindGroupLayouts = &g_native_layout;
    g_nat.pipeline_layout = wgpuDeviceCreatePipelineLayout(g_device, &pld);
    {  // the sources (kSource): group 1 of the render pipelines, kSources colour + alpha pairs and a depth (kSourceZ); 1 x 1
       // textures fill the slots not used
        WGPUBindGroupLayoutEntry se[kSources * 2 + 1];
        const WGPUTextureSampleType types[2] = {WGPUTextureSampleType_UnfilterableFloat, WGPUTextureSampleType_Uint};
        const WGPUTextureFormat formats[2] = {WGPUTextureFormat_RGBA8Unorm, WGPUTextureFormat_R8Uint};
        WGPUTexture *textures[2] = {&g_nat.source.color, &g_nat.source.alpha};
        WGPUTextureView *views[2] = {&g_nat.source.color_view, &g_nat.source.alpha_view};
        g_nat.source.width = g_nat.source.height = 1;
        for (std::uint32_t i = 0; i < kSources * 2; ++i) {
            se[i] = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
            se[i].binding = i;
            se[i].visibility = WGPUShaderStage_Fragment;
            se[i].texture.sampleType = types[i & 1u];
            se[i].texture.viewDimension = WGPUTextureViewDimension_2D;
        }
        for (int i = 0; i < 2; ++i) {
            WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
            td.usage = WGPUTextureUsage_TextureBinding;
            td.size = WGPUExtent3D{1, 1, 1};
            td.format = formats[i];
            *textures[i] = wgpuDeviceCreateTexture(g_device, &td);
            *views[i] = wgpuTextureCreateView(*textures[i], nullptr);
        }
        se[kSources * 2] = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        se[kSources * 2].binding = kSources * 2;
        se[kSources * 2].visibility = WGPUShaderStage_Fragment;
        se[kSources * 2].texture.sampleType = WGPUTextureSampleType_Depth;
        se[kSources * 2].texture.viewDimension = WGPUTextureViewDimension_2D;
        {
            WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
            td.usage = WGPUTextureUsage_TextureBinding;
            td.size = WGPUExtent3D{1, 1, 1};
            td.format = WGPUTextureFormat_Depth32Float;
            g_nat.source.depth = wgpuDeviceCreateTexture(g_device, &td);
            g_nat.source.depth_view = wgpuTextureCreateView(g_nat.source.depth, nullptr);
        }
        WGPUBindGroupLayoutDescriptor sld = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
        sld.entryCount = kSources * 2 + 1;
        sld.entries = se;
        g_nat.source_layout = wgpuDeviceCreateBindGroupLayout(g_device, &sld);
        const NativeTarget *none[kSources] = {&g_nat.source};
        g_nat.none_group = source_group(none);  // the 1 x 1 pair in every slot
        const WGPUBindGroupLayout layouts[2] = {g_native_layout, g_nat.source_layout};
        WGPUPipelineLayoutDescriptor rld = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
        rld.bindGroupLayoutCount = 2;
        rld.bindGroupLayouts = layouts;
        g_nat.render_layout = wgpuDeviceCreatePipelineLayout(g_device, &rld);
        // transfers: group 1 the colour, depth and alpha of the target read (native.wgsl xfer_*)
        WGPUBindGroupLayoutEntry xe[3] = {WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT, WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT, WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT};
        const WGPUTextureSampleType xtypes[3] = {WGPUTextureSampleType_UnfilterableFloat, WGPUTextureSampleType_Depth, WGPUTextureSampleType_Uint};
        for (std::uint32_t i = 0; i < 3; ++i) {
            xe[i].binding = 5u + i;
            xe[i].visibility = WGPUShaderStage_Fragment;
            xe[i].texture.sampleType = xtypes[i];
            xe[i].texture.viewDimension = WGPUTextureViewDimension_2D;
        }
        WGPUBindGroupLayoutDescriptor xld = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
        xld.entryCount = 3;
        xld.entries = xe;
        g_nat.xfer_layout = wgpuDeviceCreateBindGroupLayout(g_device, &xld);
        const WGPUBindGroupLayout xlayouts[2] = {g_native_layout, g_nat.xfer_layout};
        rld.bindGroupLayouts = xlayouts;
        g_nat.xfer_pipeline_layout = wgpuDeviceCreatePipelineLayout(g_device, &rld);
    }
    // gs.wgsl's source_texel stub gives way to native.wgsl's
    std::string code = std::string(kGsShader) + "\n" + kNativeShader;
    code.replace(code.find("fn source_texel("), 16, "fn source_texel_stub(");
    WGPUShaderSourceWGSL source = WGPU_SHADER_SOURCE_WGSL_INIT;
    source.code = view(code.c_str());
    WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
    md.nextInChain = &source.chain;
    g_nat.module = wgpuDeviceCreateShaderModule(g_device, &md);
    WGPUComputePipelineDescriptor cd = WGPU_COMPUTE_PIPELINE_DESCRIPTOR_INIT;
    cd.layout = g_nat.pipeline_layout;
    cd.compute.module = g_nat.module;
    cd.compute.entryPoint = view("native_check");
    g_native_check = wgpuDeviceCreateComputePipeline(g_device, &cd);
    // the write-back: VRAM, tables, params and the target's three textures
    WGPUBindGroupLayoutEntry we[7];
    for (WGPUBindGroupLayoutEntry &x : we) {
        x = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        x.visibility = WGPUShaderStage_Compute;
    }
    for (int i = 0; i < 4; ++i) {
        we[i].binding = static_cast<std::uint32_t>(i);
        we[i].buffer.type = types[i];
        we[i].buffer.hasDynamicOffset = i == 2;
        we[i].buffer.minBindingSize = i == 2 ? kParamStride : 0;
    }
    const WGPUTextureSampleType samples[3] = {WGPUTextureSampleType_UnfilterableFloat, WGPUTextureSampleType_Depth, WGPUTextureSampleType_Uint};
    for (int i = 0; i < 3; ++i) {
        we[4 + i].binding = 9u + static_cast<std::uint32_t>(i);
        we[4 + i].texture.sampleType = samples[i];
        we[4 + i].texture.viewDimension = WGPUTextureViewDimension_2D;
    }
    ld.entryCount = 7;
    ld.entries = we;
    g_nat.writeback_layout = wgpuDeviceCreateBindGroupLayout(g_device, &ld);
    pld.bindGroupLayouts = &g_nat.writeback_layout;
    WGPUConstantEntry constants[2] = {WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT};
    constants[0].key = view("SCALE");
    constants[0].value = static_cast<double>(g_sx);
    constants[1].key = view("SCALE_Y");
    constants[1].value = static_cast<double>(g_sy);
    cd.layout = wgpuDeviceCreatePipelineLayout(g_device, &pld);
    cd.compute.entryPoint = view("native_writeback");
    cd.compute.constantCount = 2;
    cd.compute.constants = constants;
    g_nat.writeback = wgpuDeviceCreateComputePipeline(g_device, &cd);
    cd.compute.entryPoint = view("native_writeback_tiles");
    g_nat.writeback_tiles = wgpuDeviceCreateComputePipeline(g_device, &cd);
    g_nat.tiles = g_nat.replace && (g_hw || !on("PS2_NATIVE_RUNS"));
    if (!g_nat.module || !g_native_check || !g_nat.writeback || !g_nat.writeback_tiles || !native_pipeline(kNativeImport) ||
        !native_pipeline(kNativeImport | kNativeTiles) || (g_hw && (!xfer_pipeline(kXferFrame) || !xfer_pipeline(kXferZ)))) {
        std::fprintf(stderr, "[native] shader or pipelines not created; native drawing off\n");
        g_nat.on = g_hw = false;
        return false;
    }
    return true;
}

void native_stats() {
    if (!g_nat.on) return;
    std::fprintf(stderr, "[native] %llu runs, %llu batches: %llu drawn (%llu draws, %llu triangles), %llu skipped by isolation",
                 static_cast<unsigned long long>(g_nat.runs), static_cast<unsigned long long>(g_nat.batches), static_cast<unsigned long long>(g_nat.drawn),
                 static_cast<unsigned long long>(g_nat.draws), static_cast<unsigned long long>(g_nat.triangles), static_cast<unsigned long long>(g_nat.isolated));
    for (const auto &[reason, n] : g_nat.unsupported) std::fprintf(stderr, ", %llu %s", static_cast<unsigned long long>(n), reason.c_str());
    if (g_nat.replace) std::fprintf(stderr, "; %llu write-backs", static_cast<unsigned long long>(g_nat.writebacks));
    else std::fprintf(stderr, "; vertex tag PRIM differs from the GS's in %llu", static_cast<unsigned long long>(g_nat.tag_prim));
    const double frames = static_cast<double>(std::max<std::uint64_t>(g_nat.frames, 1));
    std::fprintf(stderr, "\n[native] drawn per program:");
    for (std::uint32_t i = 0; i < 32; ++i)
        if (g_nat.programs[i]) std::fprintf(stderr, " %u:%llu", i, static_cast<unsigned long long>(g_nat.programs[i]));
    const double per = static_cast<double>(std::max<std::uint64_t>(g_nat.frames, 1));
    if (g_nat.tiles)
        std::fprintf(stderr, "\n[native] tiles: %llu targets made, %llu re-bound to another Z buffer, %llu retired, %zu cached; per frame %.1f switches, %.1f imports, "
                             "%.1f write-backs; %.1f commands hoisted, %.0f compute and %.0f render passes",
                     static_cast<unsigned long long>(g_nat.made), static_cast<unsigned long long>(g_nat.rebased), static_cast<unsigned long long>(g_nat.retired),
                     g_nat.bindings.size(), static_cast<double>(g_nat.switches) / per, static_cast<double>(g_nat.imports) / per,
                     static_cast<double>(g_nat.tile_writebacks) / per, static_cast<double>(g_hoisted) / per, static_cast<double>(g_compute_passes) / per,
                     static_cast<double>(g_render_passes) / per);
    if (g_hw) {
        static const char *const kNames[kHwReasons] = {"hardware", "DATE", "PABE", "FBMSK", "FBMSK alpha", "frame format", "frame width", "blend", "ZTST never",
                                                       "ATST never", "lines/points"};
        std::fprintf(stderr, "\n[native] hw primitives per frame:");
        for (int r = 0; r < kHwReasons; ++r) {
            if (!g_nat.hw_prims[r]) continue;
            std::fprintf(stderr, " %s %.1f", kNames[r], static_cast<double>(g_nat.hw_prims[r]) / per);
            if (g_nat.hw_detail[r].empty()) continue;
            std::vector<std::pair<std::uint64_t, std::uint32_t>> top;
            for (const auto &[v, n] : g_nat.hw_detail[r]) top.emplace_back(n, v);
            std::sort(top.rbegin(), top.rend());
            std::fprintf(stderr, " (");
            for (std::size_t k = 0; k < std::min<std::size_t>(top.size(), 4); ++k) std::fprintf(stderr, "%s%x: %.1f", k ? ", " : "", top[k].second, static_cast<double>(top[k].first) / per);
            std::fprintf(stderr, ")");
        }
    }
    if (g_nat.tiles) {
        static const char *const kBy[] = {"emulated", "texture", "claim", "display", "access", "flush"};
        std::fprintf(stderr, "\n[native] source: %.1f textures a frame read from a target, %.1f batches into the shadow, %.0f samples copied to it; %.1f sprites overwrite whole tiles",
                     static_cast<double>(g_nat.sourced) / per, static_cast<double>(g_nat.swapped) / per, static_cast<double>(g_nat.blitted) / per,
                     static_cast<double>(g_nat.overwritten) / per);
        std::fprintf(stderr, "\n[native] transfers per frame: %.1f tiles (%.1f overwritten), %.1f textures read from a target's depth; samples by view (CT32 frame, Z24 frame, Z24 Z buffer > that):",
                     static_cast<double>(g_nat.xfer_tiles) / per, static_cast<double>(g_nat.xfer_dead) / per, static_cast<double>(g_nat.zsourced) / per);
        static const char *const kViews[] = {"C", "F", "Z"};
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (g_nat.xfer_by[i][j]) std::fprintf(stderr, " %s>%s %.0f", kViews[i], kViews[j], static_cast<double>(g_nat.xfer_by[i][j]) / per);
        std::fprintf(stderr, "\n[native] written back per frame by cause:");
        for (int k = 0; k < 6; ++k) std::fprintf(stderr, " %s %.0f", kBy[k], static_cast<double>(g_nat.written_by[k]) / per);
        std::fprintf(stderr, "\n[native] texture-read write-backs (tpsm|fpsm<<8|flags<<16|own<<20|at frame<<21|at Z<<22):");
        for (const auto &[k, n] : g_nat.read_detail) std::fprintf(stderr, " %x: %.0f", k, static_cast<double>(n) / per);
    }
    std::fprintf(stderr, "\n[native] per frame (%llu frames): %.2f runs, %.0f samples imported, %.0f written back; runs ended by: draw %llu, copy/download/display %llu, "
                         "upload %llu, target %llu, texture %llu, vblank %llu",
                 static_cast<unsigned long long>(g_nat.frames), static_cast<double>(g_nat.runs) / frames, static_cast<double>(g_nat.imported) / frames,
                 static_cast<double>(g_nat.written) / frames, static_cast<unsigned long long>(g_nat.closes[0]), static_cast<unsigned long long>(g_nat.closes[1]),
                 static_cast<unsigned long long>(g_nat.closes[2]), static_cast<unsigned long long>(g_nat.closes[3]), static_cast<unsigned long long>(g_nat.closes[4]),
                 static_cast<unsigned long long>(g_nat.closes[5]));
    std::fprintf(stderr, "\n");
    if (g_nat.check) {
        const std::vector<std::uint32_t> c = native_check_counts();
        std::fprintf(stderr, "[native] check: %u batches, %u vertices; mismatches X %u Y %u Z %u F %u ADC(window 0/1/2) %u/%u/%u S %u T %u Q %u RGBA %u, "
                             "vertices with any %u; GS triangle count differs in %llu of %llu batches, %llu kicks continue the previous batch's strip\n",
                     c[13], c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], static_cast<unsigned long long>(g_nat.prim_mismatch),
                     static_cast<unsigned long long>(g_nat.oracle_batches), static_cast<unsigned long long>(g_nat.cross_batch));
        for (std::uint32_t i = 0; i < std::min<std::uint32_t>(c[12], 16u); ++i) {
            const std::uint32_t *m = c.data() + 16 + i * 16;
            std::fprintf(stderr, "[native]   bits %03x prog %u k %u: xy %08x/%08x z %06x/%08x f %02x/%08x s %08x/%08x t %08x/%08x q %08x/%08x rgba %08x/%08x\n", m[0],
                         m[1] & 0xFFu, m[1] >> 8, m[2], m[3], m[4], m[5], m[6], m[7], m[8], m[9], m[10], m[11], m[12], m[13], m[14], m[15]);
        }
    }
}

}

Mode mode() { return g_mode; }

bool init(Mode m) {
    if (m == Mode::off) return false;
#ifdef __EMSCRIPTEN__
    g_instance = wgpuCreateInstance(nullptr);
#else
    WGPUInstanceExtras extras = {};
    extras.chain.sType = static_cast<WGPUSType>(WGPUSType_InstanceExtras);
    extras.backends = WGPUInstanceBackend_Primary;
    WGPUInstanceDescriptor id = WGPU_INSTANCE_DESCRIPTOR_INIT;
    id.nextInChain = &extras.chain;
    g_instance = wgpuCreateInstance(&id);
#endif
    if (!g_instance) return false;
    WGPUAdapter adapter = nullptr;
    bool adapter_done = false;
    WGPURequestAdapterOptions options = WGPU_REQUEST_ADAPTER_OPTIONS_INIT;
    options.powerPreference = std::getenv("PS2_GPU_LOW_POWER") ? WGPUPowerPreference_LowPower : WGPUPowerPreference_HighPerformance;
    options.forceFallbackAdapter = std::getenv("PS2_GPU_FALLBACK") != nullptr;
    WGPURequestAdapterCallbackInfo acb = WGPU_REQUEST_ADAPTER_CALLBACK_INFO_INIT;
    acb.mode = WGPUCallbackMode_AllowSpontaneous;
    acb.callback = [](WGPURequestAdapterStatus status, WGPUAdapter a, WGPUStringView, void *out, void *done) {
        if (status == WGPURequestAdapterStatus_Success) *static_cast<WGPUAdapter *>(out) = a;
        *static_cast<bool *>(done) = true;
    };
    acb.userdata1 = &adapter;
    acb.userdata2 = &adapter_done;
    wgpuInstanceRequestAdapter(g_instance, &options, acb);
    while (!adapter_done) pump();
    if (!adapter) {
        std::fprintf(stderr, "[gpu] no adapter\n");
        return false;
    }
    WGPUAdapterInfo info = WGPU_ADAPTER_INFO_INIT;
    if (wgpuAdapterGetInfo(adapter, &info) == WGPUStatus_Success) {
        std::fprintf(stderr, "[gpu] %.*s (%.*s) %.*s %.*s\n", static_cast<int>(info.device.length), info.device.data, static_cast<int>(info.description.length), info.description.data,
                     static_cast<int>(info.vendor.length), info.vendor.data, static_cast<int>(info.architecture.length), info.architecture.data);
        wgpuAdapterInfoFreeMembers(info);
    }
    WGPULimits supported = WGPU_LIMITS_INIT;
    wgpuAdapterGetLimits(adapter, &supported);
    WGPULimits limits = WGPU_LIMITS_INIT;
    limits.maxStorageBufferBindingSize = supported.maxStorageBufferBindingSize;
    limits.maxBufferSize = supported.maxBufferSize;
    WGPUDeviceDescriptor dd = WGPU_DEVICE_DESCRIPTOR_INIT;
    dd.requiredLimits = &limits;
    const WGPUFeatureName timestamp_feature = WGPUFeatureName_TimestampQuery;
    g_timestamps = wgpuAdapterHasFeature(adapter, WGPUFeatureName_TimestampQuery);
    if (g_timestamps) {
        dd.requiredFeatureCount = 1;
        dd.requiredFeatures = &timestamp_feature;
    }
    dd.uncapturedErrorCallbackInfo.callback = on_error;
    bool device_done = false;
    WGPURequestDeviceCallbackInfo dcb = WGPU_REQUEST_DEVICE_CALLBACK_INFO_INIT;
    dcb.mode = WGPUCallbackMode_AllowSpontaneous;
    dcb.callback = [](WGPURequestDeviceStatus status, WGPUDevice d, WGPUStringView message, void *out, void *done) {
        if (status == WGPURequestDeviceStatus_Success) *static_cast<WGPUDevice *>(out) = d;
        else std::fprintf(stderr, "[gpu] device: %.*s\n", static_cast<int>(message.length), message.data);
        *static_cast<bool *>(done) = true;
    };
    dcb.userdata1 = &g_device;
    dcb.userdata2 = &device_done;
    wgpuAdapterRequestDevice(adapter, &dd, dcb);
    while (!device_done) pump();
    g_adapter = adapter;
    if (!g_device) return false;
    g_queue = wgpuDeviceGetQueue(g_device);

    if (const char *spec = std::getenv("PS2_GPU_PROFILE")) {
        char path[512] = {};
        unsigned long long a = 0, z = 0;
        if (std::sscanf(spec, "%llu,%llu,%511s", &a, &z, path) == 3) {
            g_profile_out = std::fopen(path, "w");
            g_profile_from = a;
            g_profile_to = z;
        }
    }
    if (const char *scale = std::getenv("PS2_SCALE")) {
        g_sx = g_sy = std::clamp<std::uint32_t>(static_cast<std::uint32_t>(std::atoi(scale)), 1u, 4u);
        if (const char *y = std::strchr(scale, 'x')) g_sy = std::clamp<std::uint32_t>(static_cast<std::uint32_t>(std::atoi(y + 1)), 1u, 6u);
    }
    g_samples = g_sx * g_sy;
    g_rows = g_sy > g_sx ? g_sy / 2 : g_sx;
    g_copy_words = (1u << 20) * g_samples;
    g_tiles_per_row = (2048 * static_cast<int>(g_sx) + 15) / 16;
    const int tile_rows = (2048 * static_cast<int>(g_sy) + 15) / 16;
    g_tile_count.assign(static_cast<std::size_t>(g_tiles_per_row) * tile_rows, 0);
    g_tile_fill.assign(static_cast<std::size_t>(g_tiles_per_row) * tile_rows, 0);
    g_field_words = (1u << 19) * g_sx * g_rows;
    g_vram = make_buffer(static_cast<std::uint64_t>(kMemorySize) * g_samples, WGPUBufferUsage_Storage | WGPUBufferUsage_CopySrc | WGPUBufferUsage_CopyDst);
    std::vector<std::uint32_t> tables;
    swizzle_tables(tables);
    g_tables = make_buffer(tables.size() * 4, WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst);
    wgpuQueueWriteBuffer(g_queue, g_tables, 0, tables.data(), tables.size() * 4);
    g_clut = make_buffer(static_cast<std::uint64_t>(kClutSlots) * kClutEntries * 4, WGPUBufferUsage_Storage | WGPUBufferUsage_CopySrc | WGPUBufferUsage_CopyDst);
    g_scratch = make_buffer((static_cast<std::uint64_t>(g_copy_words) + 2ull * g_field_words) * 4, WGPUBufferUsage_Storage | WGPUBufferUsage_CopySrc);
    g_cache = make_buffer(static_cast<std::uint64_t>(kCacheWords) * 4, WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst);
    g_decoded = make_buffer((static_cast<std::uint64_t>(kDecodedWords) + (texpack::packing() ? kReplWords : 0u)) * 4,
                            WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst);
    if (const char *decode = std::getenv("PS2_DECODE")) g_decode = std::atoi(decode) != 0;
    g_cache_copy.assign(kCacheWords, 0);
    g_readback = make_buffer(static_cast<std::uint64_t>(g_copy_words) * 4, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
    if (g_timestamps) {
        WGPUQuerySetDescriptor qd = WGPU_QUERY_SET_DESCRIPTOR_INIT;
        qd.type = WGPUQueryType_Timestamp;
        qd.count = 2;
        g_queries = wgpuDeviceCreateQuerySet(g_device, &qd);
        g_query_resolve = make_buffer(16, WGPUBufferUsage_QueryResolve | WGPUBufferUsage_CopySrc);
        g_query_read = make_buffer(16, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
    }

    WGPUBindGroupLayoutEntry le[8] = {};
    const WGPUBufferBindingType types[8] = {WGPUBufferBindingType_Storage, WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Uniform,
                                            WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Storage, WGPUBufferBindingType_Storage,
                                            WGPUBufferBindingType_ReadOnlyStorage, WGPUBufferBindingType_Storage};
    for (int i = 0; i < 8; ++i) {
        le[i] = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        le[i].binding = static_cast<std::uint32_t>(i);
        le[i].visibility = WGPUShaderStage_Compute;
        le[i].buffer.type = types[i];
        le[i].buffer.hasDynamicOffset = i == 2;
        le[i].buffer.minBindingSize = i == 2 ? kParamStride : 0;
    }
    WGPUBindGroupLayoutDescriptor ld = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    ld.entryCount = 8;
    ld.entries = le;
    g_layout = wgpuDeviceCreateBindGroupLayout(g_device, &ld);
    WGPUPipelineLayoutDescriptor pld = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    pld.bindGroupLayoutCount = 1;
    pld.bindGroupLayouts = &g_layout;
    g_pipeline_layout = wgpuDeviceCreatePipelineLayout(g_device, &pld);

    WGPUShaderSourceWGSL source = WGPU_SHADER_SOURCE_WGSL_INIT;
    source.code = view(kGsShader);
    WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
    md.nextInChain = &source.chain;
    WGPUShaderModule module = wgpuDeviceCreateShaderModule(g_device, &md);
    // Profiling only: PS2_RASTER_DIAG=bits skips parts of the raster (gs.wgsl DIAG); unset, the constant is not passed.
    const char *diag = std::getenv("PS2_RASTER_DIAG");
    for (int i = 0; i < kPipelines; ++i) {
        if (i == kRasterHi && g_samples == 1) continue;
        WGPUComputePipelineDescriptor cd = WGPU_COMPUTE_PIPELINE_DESCRIPTOR_INIT;
        cd.layout = g_pipeline_layout;
        cd.compute.module = module;
        cd.compute.entryPoint = view(kEntryPoints[i]);
        WGPUConstantEntry constants[4] = {WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT, WGPU_CONSTANT_ENTRY_INIT};
        std::size_t n = 0;
        constants[n].key = view("SCALE");
        constants[n++].value = static_cast<double>(g_sx);
        constants[n].key = view("SCALE_Y");
        constants[n++].value = static_cast<double>(g_sy);
        if (i == kRasterHi) {
            constants[n].key = view("RT_HIRES");
            constants[n++].value = 1.0;
        }
        if (diag && (i == kRaster || i == kRasterHi)) {
            constants[n].key = view("DIAG");
            constants[n++].value = static_cast<double>(std::strtoul(diag, nullptr, 0));
        }
        cd.compute.constantCount = n;
        cd.compute.constants = constants;
        g_pipelines[i] = wgpuDeviceCreateComputePipeline(g_device, &cd);
        if (!g_pipelines[i]) return false;
    }
    wgpuShaderModuleRelease(module);
    native_init();
    ensure_capacity();
    g_mode = m;
    return true;
}

// Texture pack: a texture keyed from uploaded data (not a render target) that the pack replaces samples the pack's
// pixels, 2^scale times larger, from the persistent part of the decoded buffer (setup word 24 = offset, 26 = scale;
// mipmapping off). Keys and dumps need nothing from the GPU.
void replace_texture(const State &st, SetupCache &cache) {
    static std::unordered_map<std::uint64_t, std::pair<std::uint32_t, std::uint32_t>> replaced;
    static std::uint32_t used = 0;
    std::uint32_t *w = cache.setup;
    const std::uint32_t tw = w[15] & 0xFFu, th = w[15] >> 8;
    if (rendered(w[12], w[13], w[14], 0, 0, (1 << tw) - 1, (1 << th) - 1)) return;
    const std::uint64_t key = texpack::key(st);
    if (!key || !texpack::packing() || ((w[7] >> 24) & 3u) == 3u || ((w[7] >> 26) & 3u) == 3u) return;
    auto it = replaced.find(key);
    if (it == replaced.end()) {
        std::uint32_t scale = 0;
        const std::vector<std::uint32_t> px = texpack::replacement(key, tw, th, scale);
        if (px.empty()) return;
        if (used + px.size() > kReplWords) {
            // Full, usually after a few maps: start the region over. At most every 600 frames, so a scene that needs
            // more than the region keeps the textures it has instead of reloading every frame.
            // ponytail: drops everything at once; per-texture LRU if a scene ever needs more than the region.
            static std::uint64_t last_reset = 0;
            if (frame_count() - last_reset < 600 || px.size() > kReplWords) return;
            flush();  // commands recorded so far read the old contents
            replaced.clear();
            used = 0;
            last_reset = frame_count();
            std::fprintf(stderr, "[texpack] replacement memory full (%u MB), starting over at frame %llu\n", kReplWords >> 18,
                         static_cast<unsigned long long>(last_reset));
        }
        queue_write(g_decoded, (static_cast<std::uint64_t>(kDecodedWords) + used) * 4, px.data(), px.size() * 4);
        it = replaced.emplace(key, std::make_pair(kDecodedWords + used, scale)).first;
        used += static_cast<std::uint32_t>(px.size());
    }
    w[0] |= kReplaced;
    cache.flags = w[0];
    w[24] = it->second.first;
    w[25] = 0;
    w[26] = it->second.second;
    cache.mips = 0;
}

void draw(const State &st, const Vertex *v, int count, texcache::Run run) {
    if (g_nat.on) {  // an emulated primitive: inside a native batch's XGKICK, or the end of a run of native batches
        if (g_nat.in_kick) ++g_nat.kick_prims;
        else if (g_nat.open) native_close(kCloseDraw);
    }
    if (g_image.active && !g_image.pending.empty()) flush_image();
    std::uint64_t attr = st.prim;
    if (!(st.prmodecont & 1u)) attr = (st.prim & 7u) | (st.prmode & ~7ull);
    const std::uint32_t prim = static_cast<std::uint32_t>(st.prim) & 7u;
    const Context &c = st.ctx[(attr >> 9) & 1u];
    SetupCache &cache = g_setup_cache;
    if (cache.generation != g_setup_generation || cache.attr != attr || cache.clut != g_clut_slot) {
        cache.generation = g_setup_generation;
        cache.attr = attr;
        cache.clut = g_clut_slot;
        const std::uint32_t *w = cache.setup;
        cache.flags = make_setup(st, attr, cache.setup);
        cache.key = static_cast<std::uint64_t>(w[1]) | (static_cast<std::uint64_t>(w[2]) << 14) | (static_cast<std::uint64_t>(w[3]) << 20) |
                    (static_cast<std::uint64_t>(w[5]) << 26) | (static_cast<std::uint64_t>(w[6]) << 40);
        cache.mips = 0;
        if (cache.flags & 2u) {
            cache.tex = level_range(w, 0);
            cache.mips = mip_levels(w);
            for (std::uint32_t n = 1; n <= cache.mips; ++n) cache.levels[n] = level_range(w, n);
            if (texpack::active()) replace_texture(st, cache);
        }
        cache.hw = g_hw ? hw_setup(cache.setup) : kHwOk;
    }
    // ZTST NEVER, or ATST NEVER with AFAIL KEEP: the primitive writes nothing, and would only end a hardware batch
    if (cache.hw == kHwZNever || cache.hw == kHwANever) return void(++g_nat.hw_prims[cache.hw]);
    // Scale > 1: a sprite sampling a render target in a direct format (g_rt_pages, or drawn by the batch still pending)
    // may read its samples on the fine grid (gs.wgsl F_RT_HIRES; the shader keeps 1:1 copies per sample). Uploaded
    // textures hold one value per texel and keep the native path (bilinear between texels, not between equal samples).
    if (g_samples > 1 && prim == 6 && (cache.flags & 2u) && !(cache.flags & kReplaced)) {
        std::uint32_t *w = cache.setup;
        const std::uint32_t psm = w[14];
        bool rt = false;
        int rect[4];
        if ((psm <= PSMCT16 || psm == PSMCT16S || psm >= PSMZ32) && texel_rect(w, v, count, prim, cache.flags & 16u, rect)) {
            Batch &b = g_batch;
            if (!b.prims.empty()) batch_ranges();
            std::uint32_t pw, ph;
            page_size(psm, pw, ph);
            const std::uint64_t per_row = std::max<std::uint32_t>(1, w[13] * 64 / pw);
            rt = true;  // every page under the texel rectangle
            for (int py = rect[1] / static_cast<int>(ph); rt && py <= rect[3] / static_cast<int>(ph); ++py)
                for (int px = rect[0] / static_cast<int>(pw); rt && px <= rect[2] / static_cast<int>(pw); ++px) {
                    const std::uint64_t at = static_cast<std::uint64_t>(w[12]) * 256 + (static_cast<std::uint64_t>(px) + static_cast<std::uint64_t>(py) * per_row) * 8192;
                    rt = g_rt_pages[(at >> 13) & 511u] ||
                         (!b.prims.empty() && (b.fb_range.overlaps(at, at + 8192) || (b.zwrite && b.z_range.overlaps(at, at + 8192))));
                }
        }
        w[0] = rt ? w[0] | kRtHires : w[0] & ~kRtHires;
        cache.flags = w[0];
    }
    const std::uint32_t *setup = cache.setup;
    const std::uint32_t flags = cache.flags;
    const bool fst = flags & 16u, iip = flags & 1u;
    const int ofx = static_cast<int>(c.xyoffset & 0xFFFFu), ofy = static_cast<int>((c.xyoffset >> 32) & 0xFFFFu);
    const int scax0 = static_cast<int>(setup[10] & 0xFFFFu), scax1 = static_cast<int>(setup[10] >> 16);
    const int scay0 = static_cast<int>(setup[11] & 0xFFFFu), scay1 = static_cast<int>(setup[11] >> 16);
    const auto sx = [&](const Vertex &p) { return (static_cast<float>(p.x) - static_cast<float>(ofx)) / 16.0f; };
    const auto sy = [&](const Vertex &p) { return (static_cast<float>(p.y) - static_cast<float>(ofy)) / 16.0f; };
    const float samples = static_cast<float>(g_sx), samples_y = static_cast<float>(g_sy);
    const auto first = [&](float lo) { return static_cast<int>(std::floor(std::ceil(lo * samples) / samples)); };
    const auto first_y = [&](float lo) { return static_cast<int>(std::floor(std::ceil(lo * samples_y) / samples_y)); };

    std::uint32_t rec[kPrimWords] = {};
    int minx, miny, maxx, maxy;
    switch (prim) {
    case 3: case 4: case 5: {
        if (count < 3) return;
        const float x0 = sx(v[0]), y0 = sy(v[0]), x1 = sx(v[1]), y1 = sy(v[1]), x2 = sx(v[2]), y2 = sy(v[2]);
        const float area = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
        if (area == 0.0f) return;
        minx = std::max(scax0, first(std::min({x0, x1, x2})));
        maxx = std::min(scax1, static_cast<int>(std::ceil(std::max({x0, x1, x2}))) - 1);
        miny = std::max(scay0, first_y(std::min({y0, y1, y2})));
        maxy = std::min(scay1, static_cast<int>(std::ceil(std::max({y0, y1, y2}))) - 1);
        rec[1] = 0;
        const float xy[6] = {x0, y0, x1, y1, x2, y2};
        for (int i = 0; i < 6; ++i) rec[4 + i] = f2u(xy[i]);
        rec[10] = f2u(1.0f / area);
        const float sg = area > 0.0f ? 1.0f : -1.0f;
        const auto inclusive = [&](float ax, float ay, float bx, float by) {
            const float gx = (ay - by) * sg, gy = (bx - ax) * sg;
            return gx > 0.0f || (gx == 0.0f && gy > 0.0f);
        };
        rec[27] = (inclusive(x1, y1, x2, y2) ? 1u : 0u) | (inclusive(x2, y2, x0, y0) ? 2u : 0u) | (inclusive(x0, y0, x1, y1) ? 4u : 0u);
        for (int i = 0; i < 3; ++i) attrs(rec, i, v[i], fst, iip ? nullptr : &v[2]);
        rec[24] = v[0].z;
        rec[25] = f2u(static_cast<float>(static_cast<std::int64_t>(v[1].z) - static_cast<std::int64_t>(v[0].z)));
        rec[26] = f2u(static_cast<float>(static_cast<std::int64_t>(v[2].z) - static_cast<std::int64_t>(v[0].z)));
        break;
    }
    case 6: {
        const float x0 = sx(v[0]), y0 = sy(v[0]), x1 = sx(v[1]), y1 = sy(v[1]);
        minx = std::max(scax0, static_cast<int>(std::ceil(std::min(x0, x1))));
        maxx = std::min(scax1, static_cast<int>(std::ceil(std::max(x0, x1))) - 1);
        miny = std::max(scay0, static_cast<int>(std::ceil(std::min(y0, y1))));
        maxy = std::min(scay1, static_cast<int>(std::ceil(std::max(y0, y1))) - 1);
        rec[1] = 1;
        rec[4] = f2u(x0);
        rec[5] = f2u(y0);
        rec[6] = f2u(x1 - x0);
        rec[7] = f2u(y1 - y0);
        attrs(rec, 0, v[0], fst, nullptr);
        attrs(rec, 1, v[1], fst, nullptr);
        rec[24] = v[1].z;
        break;
    }
    case 1: case 2: {
        const float x0 = sx(v[0]), y0 = sy(v[0]), x1 = sx(v[1]), y1 = sy(v[1]);
        const int steps = static_cast<int>(std::max(std::fabs(x1 - x0), std::fabs(y1 - y0)));
        minx = std::max(scax0, static_cast<int>(std::floor(std::min(x0, x1))) - 1);
        maxx = std::min(scax1, static_cast<int>(std::ceil(std::max(x0, x1))) + 1);
        miny = std::max(scay0, static_cast<int>(std::floor(std::min(y0, y1))) - 1);
        maxy = std::min(scay1, static_cast<int>(std::ceil(std::max(y0, y1))) + 1);
        rec[1] = 2;
        rec[4] = f2u(x0);
        rec[5] = f2u(y0);
        rec[6] = f2u(x1);
        rec[7] = f2u(y1);
        rec[8] = static_cast<std::uint32_t>(steps);
        attrs(rec, 0, v[0], fst, iip ? nullptr : &v[1]);
        attrs(rec, 1, v[1], fst, nullptr);
        rec[24] = v[0].z;
        rec[25] = f2u(static_cast<float>(static_cast<std::int64_t>(v[1].z) - static_cast<std::int64_t>(v[0].z)));
        break;
    }
    case 0: {
        const int x = static_cast<int>(sx(v[0])), y = static_cast<int>(sy(v[0]));
        minx = maxx = x;
        miny = maxy = y;
        if (x < scax0 || x > scax1 || y < scay0 || y > scay1) return;
        rec[1] = 3;
        rec[4] = static_cast<std::uint32_t>(x);
        rec[5] = static_cast<std::uint32_t>(y);
        attrs(rec, 0, v[0], fst, nullptr);
        rec[24] = v[0].z;
        break;
    }
    default:
        return;
    }
    minx = std::max(minx, 0);
    miny = std::max(miny, 0);
    maxx = std::min(maxx, 2047);
    maxy = std::min(maxy, 2047);
    if (minx > maxx || miny > maxy) return;

    // the hardware GS renderer: triangles and sprites of a setup it can draw; a sprite that scales a render target at
    // scale > 1 (F_RT_HIRES) stays emulated
    const std::uint8_t why = cache.hw != kHwOk ? cache.hw : prim < 3 || prim > 6 ? kHwPrim : kHwOk;
    const bool hw = g_hw && why == kHwOk;
    if (g_hw) {
        ++g_nat.hw_prims[why];
        const std::uint32_t detail = why == kHwBlend ? ((setup[7] >> 12) & 0xFFu) | setup[9] << 8 : why == kHwFbmsk || why == kHwAmsk ? setup[4] : why == kHwFormat ? setup[3]
                                   : why == kHwWidth ? setup[2] : why == kHwPrim ? prim : ~0u;
        if (detail != ~0u) ++g_nat.hw_detail[why][detail];
    }
    // a switch between the two paths ends the batch first: the tile state an emulated primitive notes (tiles_emulated)
    // must not reach a hardware batch's flush, which marks its tiles native-newer
    if (!g_batch.prims.empty() && g_batch.hw != hw) emit_all();
    if (hw) hw_bind(setup);
    else if (native_bound()) tiles_emulated(setup, flags, minx, miny, maxx, maxy, cache.tex, cache.levels, (flags & 2u) ? cache.mips : 0u);
    Batch &b = g_batch;
    const bool zte = flags & 512u;
    const std::uint64_t key = cache.key | (hw ? 1ull << 62 : 0ull);
    if (b.key != ~0ull && b.key != key) emit_all();
    const Range &tex = cache.tex;
    if (flags & 2u) {
        if (!b.prims.empty()) {
            batch_ranges();
            const auto written = [&](const Range &t) { return t.overlaps(b.fb_range.lo, b.fb_range.hi) || (b.zwrite && t.overlaps(b.z_range.lo, b.z_range.hi)); };
            int rect[4];
            if (written(tex)) {
                if (!texel_rect(setup, v, count, prim, fst, rect)) {
                    emit_all();
                } else {
                    // Within a texcache run the texture reads the run's starting state: only primitives batched before
                    // the run began must have landed first.
                    const Range used = region(setup[12], setup[13], setup[14], rect[0], rect[1], rect[2], rect[3]);
                    const bool cached = run == texcache::Run::same;
                    const bool frame = shares_frame(setup, b) ? drawn_under(b, rect, cached ? b.run_start : ~std::size_t{0})
                                                              : !cached && used.overlaps(b.fb_range.lo, b.fb_range.hi);
                    if (frame || (b.zwrite && used.overlaps(b.z_range.lo, b.z_range.hi))) emit_all();
                }
            }
            for (std::uint32_t n = 1; n <= cache.mips && !b.prims.empty(); ++n)
                if (written(cache.levels[n])) emit_all();
        }
    }
    if (b.prims.empty()) {
        b.run_start = 0;
        b.key = key;
        b.fbp = setup[1];
        b.fbw = setup[2];
        b.fpsm = setup[3];
        b.zbp = setup[5];
        b.zpsm = setup[6];
        b.zte = false;
        b.zwrite = false;
        b.rx1 = -2;
        b.hw = hw;
        b.binding = hw ? g_nat.cur : nullptr;
    }
    b.zte = b.zte || zte;
    b.zwrite = b.zwrite || (zte && !(flags & 32u));
    const std::size_t setups = b.setups.size() / kSetupWords;
    std::uint32_t setup_index;
    if (setups && std::memcmp(b.setups.data() + (setups - 1) * kSetupWords, setup, kSetupWords * 4) == 0) {
        setup_index = static_cast<std::uint32_t>(setups - 1);
    } else {
        setup_index = static_cast<std::uint32_t>(setups);
        b.setups.insert(b.setups.end(), setup, setup + kSetupWords);
    }
    if (flags & 2u) {
        for (std::uint32_t n = 0; n <= cache.mips; ++n) {
            const Range &t = n ? cache.levels[n] : tex;
            if (!g_batch_reads.empty() && g_batch_reads.back().lo == t.lo && g_batch_reads.back().hi == t.hi) continue;
            bool known = false;
            for (const Range &r : g_batch_reads) known = known || (r.lo <= t.lo && t.hi <= r.hi);
            if (!known) g_batch_reads.push_back(t);
        }
    }
    if (run != texcache::Run::same) b.run_start = b.boxes.size() / 2;
    rec[0] = setup_index;
    rec[2] = static_cast<std::uint32_t>(minx) | (static_cast<std::uint32_t>(miny) << 16);
    rec[3] = static_cast<std::uint32_t>(maxx) | (static_cast<std::uint32_t>(maxy) << 16);
    b.prims.insert(b.prims.end(), rec, rec + kPrimWords);
    if (drawdbg::enabled()) {
        if (const std::uint32_t id = drawdbg::current_draw(); id != ~0u) {
            if (!b.dbg_draws.empty() && b.dbg_draws.back().first == id) ++b.dbg_draws.back().second;
            else b.dbg_draws.emplace_back(id, 1u);
        }
    }
    b.boxes.push_back(rec[2]);
    b.boxes.push_back(rec[3]);
    b.minx = std::min(b.minx, minx);
    b.miny = std::min(b.miny, miny);
    b.maxx = std::max(b.maxx, maxx);
    b.maxy = std::max(b.maxy, maxy);
    if (b.prims.size() >= kPrimWords * 65536) emit_all();
}

void image_begin(const State &s) {
    flush_image();
    Image &im = g_image;
    const std::uint64_t buf = s.bitbltbuf, pos = s.trxpos, reg = s.trxreg;
    im = Image{};
    im.dbp = static_cast<std::uint32_t>(buf >> 32) & 0x3FFFu;
    im.dbw = static_cast<std::uint32_t>(buf >> 48) & 0x3Fu;
    im.dpsm = static_cast<std::uint32_t>(buf >> 56) & 0x3Fu;
    im.dsax = static_cast<std::uint32_t>(pos >> 32) & 0x7FFu;
    im.dsay = static_cast<std::uint32_t>(pos >> 48) & 0x7FFu;
    im.rrw = static_cast<std::uint32_t>(reg) & 0xFFFu;
    im.total = im.rrw * (static_cast<std::uint32_t>(reg >> 32) & 0xFFFu);
    im.bpp = bits_per_pixel(im.dpsm);
    im.id = ++g_image_ids ? g_image_ids : ++g_image_ids;
    im.active = im.total != 0;
    if (im.active) mark_uploaded(pages(im.dbp, im.dbw, im.dpsm, static_cast<int>(im.dsax), static_cast<int>(im.dsay), static_cast<int>(im.dsax + im.rrw) - 1, static_cast<int>(im.dsay + im.total / im.rrw) - 1));
}

void image_data(const std::uint8_t *data, std::size_t bytes) {
    Image &im = g_image;
    if (!im.active) return;
    if (im.pending.empty() && !im.lead_bits) {
        const std::uint64_t used = queue_upload(data, bytes, 0);
        const std::size_t whole = static_cast<std::size_t>(used / 8);
        if (im.done < im.total && whole < bytes) im.pending.assign(data + whole, data + bytes);
        im.lead_bits = static_cast<std::uint32_t>(used % 8);
        finish_image_if_done();
        return;
    }
    im.pending.insert(im.pending.end(), data, data + bytes);
}

void local_copy(const State &s) {
    const std::uint64_t buf = s.bitbltbuf, pos = s.trxpos, reg = s.trxreg;
    const std::uint32_t w = static_cast<std::uint32_t>(reg) & 0xFFFu, h = static_cast<std::uint32_t>(reg >> 32) & 0xFFFu;
    if (native_bound()) {  // the source is read, the destination written
        if (w && h) {
            tiles_access(pages(static_cast<std::uint32_t>(buf) & 0x3FFFu, static_cast<std::uint32_t>(buf >> 16) & 0x3Fu, static_cast<std::uint32_t>(buf >> 24) & 0x3Fu,
                               static_cast<int>(pos) & 0x7FF, static_cast<int>(pos >> 16) & 0x7FF, (static_cast<int>(pos) & 0x7FF) + static_cast<int>(w) - 1,
                               (static_cast<int>(pos >> 16) & 0x7FF) + static_cast<int>(h) - 1),
                         false);
            tiles_access(pages(static_cast<std::uint32_t>(buf >> 32) & 0x3FFFu, static_cast<std::uint32_t>(buf >> 48) & 0x3Fu, static_cast<std::uint32_t>(buf >> 56) & 0x3Fu,
                               static_cast<int>(pos >> 32) & 0x7FF, static_cast<int>(pos >> 48) & 0x7FF, (static_cast<int>(pos >> 32) & 0x7FF) + static_cast<int>(w) - 1,
                               (static_cast<int>(pos >> 48) & 0x7FF) + static_cast<int>(h) - 1),
                         true);
        }
    } else {
        native_sync();
    }
    flush_all();
    if (!w || !h) return;
    mark_rendered(static_cast<std::uint32_t>(buf >> 32) & 0x3FFFu, static_cast<std::uint32_t>(buf >> 48) & 0x3Fu, static_cast<std::uint32_t>(buf >> 56) & 0x3Fu,
                  static_cast<int>(pos >> 32) & 0x7FF, static_cast<int>(pos >> 48) & 0x7FF, (static_cast<int>(pos >> 32) & 0x7FF) + static_cast<int>(w) - 1,
                  (static_cast<int>(pos >> 48) & 0x7FF) + static_cast<int>(h) - 1);
    const std::uint32_t read = push_params({static_cast<std::uint32_t>(buf) & 0x3FFFu, static_cast<std::uint32_t>(buf >> 16) & 0x3Fu, static_cast<std::uint32_t>(buf >> 24) & 0x3Fu,
                                            static_cast<std::uint32_t>(pos) & 0x7FFu, static_cast<std::uint32_t>(pos >> 16) & 0x7FFu, w, h});
    const std::uint32_t write = push_params({static_cast<std::uint32_t>(buf >> 32) & 0x3FFFu, static_cast<std::uint32_t>(buf >> 48) & 0x3Fu, static_cast<std::uint32_t>(buf >> 56) & 0x3Fu,
                                             static_cast<std::uint32_t>(pos >> 32) & 0x7FFu, static_cast<std::uint32_t>(pos >> 48) & 0x7FFu, w, h,
                                             static_cast<std::uint32_t>(pos >> 59) & 3u});
    dispatch_linear(kCopyRead, w * h * g_samples, read);
    dispatch_linear(kCopyWrite, w * h * g_samples, write);
}

void load_clut(std::uint64_t tex0, std::uint64_t texclut) {
    flush_image();
    if (g_clut_loads + 2 >= kClutSlots) {
        emit_all();
        submit();
    }
    const std::uint32_t psm = static_cast<std::uint32_t>(tex0 >> 20) & 0x3Fu;
    const std::uint32_t cpsm = (static_cast<std::uint32_t>(tex0 >> 51) & 0xFu) == 0 ? PSMCT32 : static_cast<std::uint32_t>(tex0 >> 51) & 0xFu;
    const std::uint32_t next = (g_clut_slot + 1) % kClutSlots;
    const std::uint32_t tc = static_cast<std::uint32_t>(texclut);
    const std::uint32_t cbp = static_cast<std::uint32_t>(tex0 >> 37) & 0x3FFFu, csm = static_cast<std::uint32_t>(tex0 >> 55) & 1u;
    const std::uint32_t cbw = tc & 0x3Fu, cou = (tc >> 6) & 0x3Fu, cov = (tc >> 12) & 0x3FFu;
    PreOp op;
    op.clut = true;
    const std::uint32_t rec[10] = {g_clut_slot, next, cbp, cpsm, csm, static_cast<std::uint32_t>(tex0 >> 56) & 0x1Fu, (psm == PSMT8 || psm == PSMT8H) ? 1u : 0u, cbw, cou, cov};
    std::memcpy(op.rec, rec, sizeof rec);
    op.range = csm ? region(cbp, cbw, cpsm, static_cast<int>(cou * 16), static_cast<int>(cov), static_cast<int>(cou * 16 + 255), static_cast<int>(cov))
                   : region(cbp, 1, cpsm, 0, 0, 15, 15);
    queue_pre(op);
    std::array<std::uint64_t, 32> blocks = g_clut_blocks[g_clut_slot];
    std::uint64_t id = page_gens(op.range);
    for (int k = 2; k < 10; ++k) id = mix(id, rec[k]);  // not the slots
    const std::uint32_t csa = rec[5], first = csm ? csa : rec[6] ? 0u : csa & 15u, count = rec[6] ? 16u : 1u;
    for (std::uint32_t k = 0; k < count; ++k) blocks[(first + k) & 31u] = mix(id, k);
    g_clut_blocks[next] = blocks;
    g_clut_slot = next;
    ++g_clut_loads;
}


void flush() {
    native_sync(kCloseVblank);
    if (g_mode == Mode::off) return;
    flush_all();
    submit();
}

void wait_idle() {
    flush_all();
    submit();
    drain();
    bool done = false;
    WGPUQueueWorkDoneCallbackInfo cb = WGPU_QUEUE_WORK_DONE_CALLBACK_INFO_INIT;
    cb.mode = WGPUCallbackMode_AllowProcessEvents;
    cb.callback = [](WGPUQueueWorkDoneStatus, WGPUStringView, void *flag, void *) { *static_cast<bool *>(flag) = true; };
    cb.userdata1 = &done;
    wgpuQueueOnSubmittedWorkDone(g_queue, cb);
    wait_until(done);
}

struct PendingDownload {
    WGPUBuffer buffer = nullptr;
    std::uint64_t capacity = 0;
    std::uint8_t *memory = nullptr;
    std::uint32_t offset = 0, bytes = 0, serial = 0;
    std::atomic<bool> busy = false, ready = false;  // map callbacks may run on the submit worker
} g_pending;

void collect_download() {
    if (!g_pending.busy || !g_pending.ready) return;
    const void *mapped = wgpuBufferGetConstMappedRange(g_pending.buffer, 0, g_pending.bytes);
    if (mapped) std::memcpy(g_pending.memory + g_pending.offset, mapped, g_pending.bytes);
    wgpuBufferUnmap(g_pending.buffer);
    g_pending.busy = g_pending.ready = false;
}

bool download_async(std::uint8_t *memory, std::uint32_t offset, std::uint32_t bytes, std::uint32_t serial) {
    if (native_bound()) tiles_access(Range{offset, static_cast<std::uint64_t>(offset) + bytes}, false);
    else native_sync();
    collect_download();
    if (g_pending.busy) return false;
    if (g_pending.capacity < bytes) {
        if (g_pending.buffer) wgpuBufferRelease(g_pending.buffer);
        g_pending.capacity = bytes;
        g_pending.buffer = make_buffer(bytes, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
    }
    flush_all();
    if (g_samples != 1) dispatch_linear(kResolve, bytes / 4, push_params({offset / 4}));
    submit();
    drain();
    WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
    wgpuCommandEncoderCopyBufferToBuffer(enc, g_samples == 1 ? g_vram : g_scratch, offset, g_pending.buffer, 0, bytes);
    WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
    wgpuQueueSubmit(g_queue, 1, &cmd);
    wgpuCommandBufferRelease(cmd);
    wgpuCommandEncoderRelease(enc);
    g_pending.memory = memory;
    g_pending.offset = offset;
    g_pending.bytes = bytes;
    g_pending.serial = serial;
    g_pending.busy = true;
    WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
    cb.mode = WGPUCallbackMode_AllowProcessEvents;
    cb.callback = [](WGPUMapAsyncStatus status, WGPUStringView, void *, void *) {
        if (status == WGPUMapAsyncStatus_Success) g_pending.ready = true;
        else g_pending.busy = false;
    };
    wgpuBufferMapAsync(g_pending.buffer, WGPUMapMode_Read, 0, bytes, cb);
    return true;
}

bool finish_download(std::uint32_t serial) {
    if (!g_pending.busy || g_pending.serial != serial) return false;
    while (g_pending.busy && !g_pending.ready) pump();
    const bool done = g_pending.ready;
    collect_download();
    return done;
}

void download(std::uint8_t *memory, std::uint32_t offset, std::uint32_t bytes) {
    if (native_bound()) tiles_access(Range{offset, static_cast<std::uint64_t>(offset) + bytes}, false);
    else native_sync();
    flush_all();
    if (g_samples == 1) {
        submit();
        read_back(g_vram, bytes, memory + offset, offset);
        return;
    }
    dispatch_linear(kResolve, bytes / 4, push_params({offset / 4}));
    submit();
    read_back(g_scratch, bytes, memory + offset, offset);
}

void read_state(std::vector<std::uint32_t> &vram, std::uint32_t &scale, std::vector<std::uint32_t> &clut) {
    tiles_flush();
    native_sync();
    flush_all();
    submit();
    scale = g_sx == g_sy ? g_sx : g_sx | g_sy << 8;  // square scales keep the old single number
    vram.resize(static_cast<std::size_t>(kMemorySize / 4) * g_samples);
    read_back(g_vram, vram.size() * 4, vram.data());
    clut.resize(kClutEntries);
    read_back(g_clut, kClutEntries * 4, clut.data(), static_cast<std::uint64_t>(g_clut_slot) * kClutEntries * 4);
}

void write_state(const std::vector<std::uint32_t> &vram, std::uint32_t scale, const std::vector<std::uint32_t> &clut) {
    native_sync();
    wait_idle();
    tiles_reset();  // VRAM is replaced: what the targets hold is stale everywhere
    const std::size_t words = kMemorySize / 4;
    const std::uint32_t from_x = scale & 0xFFu, from_y = scale >> 8 ? scale >> 8 : from_x;
    const std::uint32_t from = from_x * from_y, to = g_samples;
    const bool same = from_x == g_sx && from_y == g_sy;
    std::fill(std::begin(g_drawn), std::end(g_drawn), same && to > 1 ? ~0u : 0u);
    std::fill(std::begin(g_rt_pages), std::end(g_rt_pages), same && to > 1);
    if (same && vram.size() == words * to) {
        wgpuQueueWriteBuffer(g_queue, g_vram, 0, vram.data(), vram.size() * 4);
    } else {
        std::vector<std::uint32_t> layers(words * to);
        for (std::size_t w = 0; w < words; ++w)
            for (std::uint32_t k = 0; k < to; ++k) layers[w * to + k] = vram[w * from];
        wgpuQueueWriteBuffer(g_queue, g_vram, 0, layers.data(), layers.size() * 4);
    }
    if (clut.size() >= kClutEntries) wgpuQueueWriteBuffer(g_queue, g_clut, static_cast<std::uint64_t>(g_clut_slot) * kClutEntries * 4, clut.data(), kClutEntries * 4);
    wait_idle();
}

void stats() {
    if (g_mode == Mode::off) return;
    drain();
    std::fprintf(stderr, "[gpu] %llu submits, dispatches:", static_cast<unsigned long long>(g_submits));
    for (int i = 0; i < kPipelines; ++i) std::fprintf(stderr, " %s %llu", kEntryPoints[i], static_cast<unsigned long long>(g_dispatches[i]));
    std::fprintf(stderr, "\n");
    native_stats();
}

void native_begin(const State &st) {
    if (!g_nat.on || g_nat.replace) return;  // replace: no XGKICK follows; the batch opens the run itself
    g_nat.in_kick = true;
    g_nat.kick_prims = 0;
    if (!g_nat.open) native_open(st);
}

void native_batch(const State &st, const std::uint8_t *payload, std::uint32_t bytes, std::uint32_t pass) {
    if (g_nat.on) native_record(st, payload, bytes, pass);
}

void native_vblank(std::uint64_t frame) {
    g_nat.frame = frame;
    ++g_nat.frames;
}

void configure_surface() {
    WGPUSurfaceConfiguration config = WGPU_SURFACE_CONFIGURATION_INIT;
    config.device = g_device;
    config.format = g_surface_format;
    config.usage = WGPUTextureUsage_RenderAttachment;
    config.width = std::max(g_surface_width, 1u);
    config.height = std::max(g_surface_height, 1u);
    config.presentMode = g_present_mode;
    config.alphaMode = WGPUCompositeAlphaMode_Auto;
    wgpuSurfaceConfigure(g_surface, &config);
}

bool attach_surface(const SurfaceTarget &target) {
    if (g_mode != Mode::primary || !g_device) return false;
    WGPUSurfaceDescriptor sd = WGPU_SURFACE_DESCRIPTOR_INIT;
#ifdef __EMSCRIPTEN__
    WGPUEmscriptenSurfaceSourceCanvasHTMLSelector canvas = WGPU_EMSCRIPTEN_SURFACE_SOURCE_CANVAS_HTML_SELECTOR_INIT;
    canvas.selector = view(target.selector ? target.selector : "#canvas");
    sd.nextInChain = &canvas.chain;
#else
    WGPUSurfaceSourceXlibWindow xlib = WGPU_SURFACE_SOURCE_XLIB_WINDOW_INIT;
    WGPUSurfaceSourceWaylandSurface wayland = WGPU_SURFACE_SOURCE_WAYLAND_SURFACE_INIT;
    if (target.kind == SurfaceTarget::X11) {
        xlib.display = target.display;
        xlib.window = target.window;
        sd.nextInChain = &xlib.chain;
    } else if (target.kind == SurfaceTarget::Wayland) {
        wayland.display = target.display;
        wayland.surface = target.surface;
        sd.nextInChain = &wayland.chain;
    } else {
        return false;
    }
#endif
    g_surface = wgpuInstanceCreateSurface(g_instance, &sd);
    if (!g_surface) return false;
    WGPUSurfaceCapabilities caps = WGPU_SURFACE_CAPABILITIES_INIT;
    if (wgpuSurfaceGetCapabilities(g_surface, g_adapter, &caps) != WGPUStatus_Success || !caps.formatCount) {
        wgpuSurfaceRelease(g_surface);
        g_surface = nullptr;
        return false;
    }
    g_surface_format = caps.formats[0];
    for (std::size_t i = 0; i < caps.formatCount; ++i)
        if (caps.formats[i] == WGPUTextureFormat_BGRA8Unorm || caps.formats[i] == WGPUTextureFormat_RGBA8Unorm) {
            g_surface_format = caps.formats[i];
            break;
        }
    g_present_mode = WGPUPresentMode_Fifo;
    for (const WGPUPresentMode wanted : {WGPUPresentMode_Immediate, WGPUPresentMode_Mailbox})
        for (std::size_t i = 0; i < caps.presentModeCount; ++i)
            if (caps.presentModes[i] == wanted) g_present_mode = wanted;
    wgpuSurfaceCapabilitiesFreeMembers(caps);
    g_surface_width = target.width;
    g_surface_height = target.height;
    configure_surface();

    WGPUShaderSourceWGSL source = WGPU_SHADER_SOURCE_WGSL_INIT;
    source.code = view(kBlitShader);
    WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
    md.nextInChain = &source.chain;
    WGPUShaderModule module = wgpuDeviceCreateShaderModule(g_device, &md);
    WGPUBindGroupLayoutEntry le[2] = {WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT, WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT};
    le[0].binding = 0;
    le[0].visibility = WGPUShaderStage_Fragment;
    le[0].buffer.type = WGPUBufferBindingType_ReadOnlyStorage;
    le[1].binding = 1;
    le[1].visibility = WGPUShaderStage_Fragment;
    le[1].buffer.type = WGPUBufferBindingType_Uniform;
    WGPUBindGroupLayoutDescriptor ld = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    ld.entryCount = 2;
    ld.entries = le;
    WGPUBindGroupLayout layout = wgpuDeviceCreateBindGroupLayout(g_device, &ld);
    WGPUPipelineLayoutDescriptor pld = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    pld.bindGroupLayoutCount = 1;
    pld.bindGroupLayouts = &layout;
    WGPUPipelineLayout pipeline_layout = wgpuDeviceCreatePipelineLayout(g_device, &pld);
    WGPUColorTargetState color = WGPU_COLOR_TARGET_STATE_INIT;
    color.format = g_surface_format;
    WGPUFragmentState fragment = WGPU_FRAGMENT_STATE_INIT;
    fragment.module = module;
    fragment.entryPoint = view("fs");
    fragment.targetCount = 1;
    fragment.targets = &color;
    WGPURenderPipelineDescriptor rd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    rd.layout = pipeline_layout;
    rd.vertex.module = module;
    rd.vertex.entryPoint = view("vs");
    rd.fragment = &fragment;
    g_blit = wgpuDeviceCreateRenderPipeline(g_device, &rd);
    wgpuShaderModuleRelease(module);
    wgpuPipelineLayoutRelease(pipeline_layout);
    g_blit_params = make_buffer(32, WGPUBufferUsage_Uniform | WGPUBufferUsage_CopyDst);
    WGPUBindGroupEntry be[2] = {WGPU_BIND_GROUP_ENTRY_INIT, WGPU_BIND_GROUP_ENTRY_INIT};
    be[0].binding = 0;
    be[0].buffer = g_scratch;
    be[0].size = WGPU_WHOLE_SIZE;
    be[1].binding = 1;
    be[1].buffer = g_blit_params;
    be[1].size = 32;
    WGPUBindGroupDescriptor bd = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    bd.layout = layout;
    bd.entryCount = 2;
    bd.entries = be;
    g_blit_group = wgpuDeviceCreateBindGroup(g_device, &bd);
    wgpuBindGroupLayoutRelease(layout);
    return g_blit != nullptr;
}

void resize_surface(std::uint32_t width, std::uint32_t height) {
    if (!g_surface || (width == g_surface_width && height == g_surface_height)) return;
    drain();
    g_surface_width = width;
    g_surface_height = height;
    configure_surface();
}

bool has_surface() { return g_surface != nullptr; }

bool present(const DisplaySource &src) {
    native_display(src);
    if (!g_surface) return false;
    g_worker_on = worker_wanted();
    flush_all();
    const std::uint32_t current = field_base(g_field), previous = field_base(g_field + 1);
    static const bool weave_off = std::getenv("PS2_NO_DEINTERLACE") != nullptr;
    // The game draws alternate fields half a line apart: with its field flag known (src.fielded) display() lines them up
    // exactly; otherwise blending them keeps the picture still (the original's look)
    const bool blend = src.halved && g_have_previous && g_last_width == src.width && g_last_height == src.height && !weave_off && !src.fielded;
    const std::uint32_t param = push_params({src.fbp, src.fbw, src.psm, src.dbx, src.dby, src.width, src.height, src.halved ? 1u : 0u, current, src.half ? 1u : 0u});
    g_commands.push_back({kDisplay, (src.width * g_sx + 7) / 8, (src.height * g_rows + 7) / 8, param});
    const float sw = static_cast<float>(g_surface_width), sh = static_cast<float>(g_surface_height);
    const float vw = std::min(sw, sh * display_aspect()), vh = vw / display_aspect();
    const std::uint32_t blit[8] = {src.width * g_sx, src.height * g_rows, current, previous, blend ? 1u : 0u, static_cast<std::uint32_t>(vw), static_cast<std::uint32_t>(vh), 0};
    queue_write(g_blit_params, 0, blit, sizeof blit);
    ++g_field;
    g_have_previous = true;
    g_last_width = src.width;
    g_last_height = src.height;
    if (g_worker_on) {
        enqueue(true);
        after_submit();
        return true;
    }
    drain();
    WGPUSurfaceTexture st = WGPU_SURFACE_TEXTURE_INIT;
    wgpuSurfaceGetCurrentTexture(g_surface, &st);
    if (st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessOptimal && st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessSuboptimal) {
        if (st.texture) wgpuTextureRelease(st.texture);
        submit();
        configure_surface();
        return true;
    }
    WGPUTextureView target = wgpuTextureCreateView(st.texture, nullptr);
    submit(target);
#ifndef __EMSCRIPTEN__
    wgpuSurfacePresent(g_surface);
#endif
    wgpuTextureViewRelease(target);
    wgpuTextureRelease(st.texture);
    return true;
}

double busy_ms() {
    if (!g_measured) return 0.0;
    return static_cast<double>(g_measured_ns) / static_cast<double>(g_measured) * static_cast<double>(g_total_passes) / 1e6;
}

struct Copy {
    WGPUBuffer buffer = nullptr;
    std::uint64_t size = 0, order = 0;
    std::uint32_t width = 0, height = 0;
    std::atomic<bool> busy = false, ready = false;  // map callbacks may run on the submit worker
};
Copy g_copies[3];
std::uint64_t g_copy_order = 0;

bool display_async(const DisplaySource &src, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height) {
    native_display(src);
#ifdef __EMSCRIPTEN__
    wgpuInstanceProcessEvents(g_instance);
#else
    wgpuDevicePoll(g_device, false, nullptr);
#endif
    Copy *newest = nullptr;
    for (Copy &c : g_copies)
        if (c.ready && (!newest || c.order > newest->order)) newest = &c;
    if (newest) {
        const std::uint64_t bytes = static_cast<std::uint64_t>(newest->width) * newest->height * 4;
        const void *mapped = wgpuBufferGetConstMappedRange(newest->buffer, 0, bytes);
        if (mapped) {
            rgba.resize(static_cast<std::size_t>(newest->width) * newest->height);
            std::memcpy(rgba.data(), mapped, bytes);
            width = newest->width;
            height = newest->height;
        }
        for (Copy &c : g_copies)
            if (c.ready && c.order <= newest->order) {
                wgpuBufferUnmap(c.buffer);
                c.ready = c.busy = false;
            }
        if (!mapped) newest = nullptr;
    }
    Copy *slot = nullptr;
    for (Copy &c : g_copies)
        if (!c.busy) slot = &c;
    if (slot) {
        const std::uint64_t bytes = static_cast<std::uint64_t>(src.width) * src.height * g_sx * g_rows * 4;
        if (slot->size < bytes) {
            if (slot->buffer) wgpuBufferRelease(slot->buffer);
            slot->size = bytes;
            slot->buffer = make_buffer(bytes, WGPUBufferUsage_MapRead | WGPUBufferUsage_CopyDst);
        }
        flush_all();
        const std::uint32_t param = push_params({src.fbp, src.fbw, src.psm, src.dbx, src.dby, src.width, src.height, src.halved ? 1u : 0u, 0u, src.half ? 1u : 0u});
        g_commands.push_back({kDisplay, (src.width * g_sx + 7) / 8, (src.height * g_rows + 7) / 8, param});
        submit();
        drain();
        WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(g_device, nullptr);
        wgpuCommandEncoderCopyBufferToBuffer(enc, g_scratch, 0, slot->buffer, 0, bytes);
        WGPUCommandBuffer cmd = wgpuCommandEncoderFinish(enc, nullptr);
        wgpuQueueSubmit(g_queue, 1, &cmd);
        wgpuCommandBufferRelease(cmd);
        wgpuCommandEncoderRelease(enc);
        slot->busy = true;
        slot->order = ++g_copy_order;
        slot->width = src.width * g_sx;
        slot->height = src.height * g_rows;
        WGPUBufferMapCallbackInfo cb = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
        cb.mode = WGPUCallbackMode_AllowProcessEvents;
        cb.callback = [](WGPUMapAsyncStatus status, WGPUStringView, void *copy, void *) {
            Copy &c = *static_cast<Copy *>(copy);
            if (status == WGPUMapAsyncStatus_Success) c.ready = true;
            else c.busy = false;
        };
        cb.userdata1 = slot;
        wgpuBufferMapAsync(slot->buffer, WGPUMapMode_Read, 0, bytes, cb);
    }
    return newest != nullptr;
}

bool display(const DisplaySource &src, std::vector<std::uint32_t> &rgba, std::uint32_t &width, std::uint32_t &height) {
    native_display(src);
    flush_all();
    const std::uint32_t param = push_params({src.fbp, src.fbw, src.psm, src.dbx, src.dby, src.width, src.height, src.halved ? 1u : 0u, 0u, src.half ? 1u : 0u});
    g_commands.push_back({kDisplay, (src.width * g_sx + 7) / 8, (src.height * g_rows + 7) / 8, param});
    submit();
    width = src.width * g_sx;
    height = src.height * g_rows;
    rgba.resize(static_cast<std::size_t>(width) * height);
    read_back(g_scratch, rgba.size() * 4, rgba.data());
    return true;
}

}
