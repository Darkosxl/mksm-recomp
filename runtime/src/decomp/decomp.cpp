// Decompiled-function registry, PS2_DECOMP switches, the entry hook and the call helpers (ps2/decomp.hpp).
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

namespace ps2 {

namespace {

std::vector<DecompFn *> &registry() {
    static std::vector<DecompFn *> functions;
    return functions;
}

bool g_configured = false;

// the decompiled function running right now (decomp_run nests them)
struct Frame {
    std::uint32_t depth = 0;
    bool active = false;
    bool left = false; // control left the function: c.pc says where the machine goes on, no `jr ra`
};
Frame g_frame;

struct Recording {
    std::string dir;
    std::uint32_t count = 8, every = 1, skip = 0;
};
Recording g_recording;

// "off"/""/nullptr -> nothing; "all" -> every function; else comma-separated hex. Returns false on a bad token.
bool parse(const char *spec, bool &all, std::vector<std::uint32_t> &list) {
    all = false;
    list.clear();
    if (!spec || !*spec || !std::strcmp(spec, "off") || !std::strcmp(spec, "0")) return true;
    if (!std::strcmp(spec, "all") || !std::strcmp(spec, "on") || !std::strcmp(spec, "1")) {
        all = true;
        return true;
    }
    bool ok = true;
    const std::string text = spec;
    for (std::size_t at = 0; at <= text.size();) {
        const std::size_t end = std::min(text.find(',', at), text.size());
        const std::string token = text.substr(at, end - at);
        at = end + 1;
        if (token.empty()) continue;
        char *rest = nullptr;
        const unsigned long v = std::strtoul(token.c_str(), &rest, 16);
        if (*rest || v > 0xFFFFFFFFul) {
            std::fprintf(stderr, "[decomp] not a hex address: %s\n", token.c_str());
            ok = false;
            continue;
        }
        list.push_back(static_cast<std::uint32_t>(v));
    }
    return ok;
}

void warn_unknown(const char *what, const std::vector<std::uint32_t> &list) {
    for (std::uint32_t a : list)
        if (!decomp_find(a)) std::fprintf(stderr, "[decomp] %s lists %08X, which has no decompiled function\n", what, a);
}

std::uint32_t env_u32(const char *name, std::uint32_t fallback) {
    const char *v = std::getenv(name);
    return v && *v ? static_cast<std::uint32_t>(std::strtoul(v, nullptr, 10)) : fallback;
}

void record(Cpu &c, DecompFn &f) {
    const std::uint32_t n = f.entries++;
    if (n < g_recording.skip || (n - g_recording.skip) % g_recording.every) return;
    char name[32];
    std::snprintf(name, sizeof name, "/%08X_%04u.ctx", f.addr, f.recorded);
    if (difftest_save(g_recording.dir + name, f, f.recorded, c)) ++f.recorded;
    else std::fprintf(stderr, "[difftest] cannot write %s%s\n", g_recording.dir.c_str(), name);
    if (f.recorded >= g_recording.count) {
        std::fprintf(stderr, "[difftest] %08X %s: %u contexts recorded in %s\n", f.addr, f.name, f.recorded, g_recording.dir.c_str());
        f.record = false;
        f.on = f.enabled;
    }
}

bool came_back(Cpu &c, Ra ra) {
    if (c.pc == ra.pc) return true;
    g_frame.left = true;
    return false;
}

bool usable(const char *what) {
    if (g_frame.left) {
        std::fprintf(stderr, "[decomp] %s after control left the decompiled function\n", what);
        halt("decompiled function went on after control left it");
        return false;
    }
    return true;
}

}

DecompFn::DecompFn(std::uint32_t a, const char *n, Body b) : addr(a), name(n), body(b) { registry().push_back(this); }

const std::vector<DecompFn *> &decomp_functions() { return registry(); }

DecompFn *decomp_find(std::uint32_t addr) {
    for (DecompFn *f : registry())
        if (f->addr == addr) return f;
    return nullptr;
}

void decomp_configure(const char *spec) {
    g_configured = true;
    bool all = false;
    std::vector<std::uint32_t> list;
    parse(spec, all, list);
    warn_unknown("PS2_DECOMP", list);
    std::size_t on = 0;
    for (DecompFn *f : registry()) {
        f->enabled = all || std::find(list.begin(), list.end(), f->addr) != list.end();
        f->record = false;
        f->on = f->enabled;
        on += f->enabled;
    }
    g_recording = {};
    if (on) std::fprintf(stderr, "[decomp] %zu of %zu decompiled functions replace the recompiled code\n", on, registry().size());
}

void decomp_record(const char *dir, const char *funcs, std::uint32_t count, std::uint32_t every, std::uint32_t skip) {
    g_recording = {dir ? dir : "", std::max(1u, count), std::max(1u, every), skip};
    if (!g_recording.dir.empty()) {
        std::error_code error;
        std::filesystem::create_directories(g_recording.dir, error);
    }
    bool all = false;
    std::vector<std::uint32_t> list;
    parse(funcs ? funcs : "all", all, list);
    warn_unknown("PS2_DIFFTEST_FUNCS", list);
    std::size_t n = 0;
    for (DecompFn *f : registry()) {
        f->record = !g_recording.dir.empty() && (all || std::find(list.begin(), list.end(), f->addr) != list.end());
        f->entries = f->recorded = 0;
        f->on = f->enabled || f->record;
        n += f->record;
    }
    if (n) std::fprintf(stderr, "[difftest] recording up to %u contexts of %zu functions to %s\n", g_recording.count, n, g_recording.dir.c_str());
}

void decomp_configure_from_env() {
    decomp_configure(std::getenv("PS2_DECOMP"));
    if (const char *dir = std::getenv("PS2_DIFFTEST_RECORD"); dir && *dir)
        decomp_record(dir, std::getenv("PS2_DIFFTEST_FUNCS"), env_u32("PS2_DIFFTEST_COUNT", 8), env_u32("PS2_DIFFTEST_EVERY", 1),
                      env_u32("PS2_DIFFTEST_SKIP", 0));
}

bool decomp_enter(Cpu &c, DecompFn &f, std::uint32_t depth) {
    if (!g_configured) decomp_configure_from_env();
    if (f.record) record(c, f);
    if (!f.enabled) return false;
    decomp_run(c, f, depth);
    return true;
}

void decomp_run(Cpu &c, DecompFn &f, std::uint32_t depth) {
    const Frame outer = g_frame;
    g_frame = {depth, true, false};
    f.body(c);
    const bool left = g_frame.left;
    g_frame = outer;
    if (!left) c.pc = c.r[31].w[0]; // jr ra
}

bool call(Cpu &c, std::uint32_t target, Ra ra) {
    if (!usable("call")) return false;
    c.r[31].sd[0] = static_cast<std::int32_t>(ra.pc);
    const std::uint32_t depth = g_frame.depth;
    // the recompiled jal: too deep -> leave with c.pc = target, the run loop starts the callee afresh
    if (depth >= kMaxDepth) {
        c.pc = target;
        g_frame.left = true;
        return false;
    }
    if (!run_at(c, target, depth + 1u)) call(c, target, depth + 1u); // not main-program code: as a jal into a module
    return came_back(c, ra);
}

bool call_ptr(Cpu &c, std::uint32_t target, Ra ra) {
    if (!usable("call_ptr")) return false;
    c.r[31].sd[0] = static_cast<std::int32_t>(ra.pc);
    c.pc = target;
    call(c, target, g_frame.depth + 1u);
    return came_back(c, ra);
}

bool call(Cpu &c, std::uint32_t target) {
    const Reg128 saved = c.r[31];
    if (!call(c, target, Ra{kDecompReturn})) return false;
    c.r[31] = saved;
    return true;
}

void tail(Cpu &c, std::uint32_t target) {
    if (!usable("tail")) return;
    if (!run_at(c, target, g_frame.depth)) {
        c.pc = target;
        dispatch(c, 0, g_frame.depth);
    }
    g_frame.left = true;
}

void tail_ptr(Cpu &c, std::uint32_t target) {
    if (!usable("tail_ptr")) return;
    c.pc = target;
    dispatch(c, 0, g_frame.depth);
    g_frame.left = true;
}

bool poll_slow(Cpu &c, std::uint32_t resume) {
    if (!preempt(c)) return false;
    c.pc = resume | kUnwind;
    g_frame.left = true;
    return true;
}

}
