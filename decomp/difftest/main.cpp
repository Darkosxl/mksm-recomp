// difftest: replays recorded calls of decompiled functions (decomp/README.md).
//
//   difftest [--keep-going] [--quiet] <context.ctx | directory>...
//
// For each context (written by ps2run with PS2_DIFFTEST_RECORD) it loads the Cpu and memory snapshot, runs the
// recompiled function, restores the snapshot, runs the decompiled one, and compares everything the call can change:
// every GPR (128 bits), HI/LO, SA, the FPU registers, FACC, FCR31, the VU0 registers, COP0, pc, the cycles charged
// (c.budget), and every byte of RAM, scratchpad and VU0 memory (a byte either run wrote differs from the snapshot or
// matches it; comparing the whole memory catches both). Every hook is off in both runs, so anything the function
// calls runs as recompiled code, the same both times. Exit status 1 when any call differs.
//
// The runs start with a large budget, so no preemption check fires: poll() placement is left to the scene gate.
// Calls that reach the kernel or hardware (syscalls, I/O registers) see an unbooted machine: replay is for functions
// whose effects are the CPU and memory.
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cinttypes>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

void register_generated_code();

namespace {

using namespace ps2;

constexpr std::int32_t kBudget = 1 << 30;
const char *kGpr[32] = {"zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
                        "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"};

struct Result {
    Cpu cpu;
    DiffContext memory;
    bool halted;
};

struct Field {
    std::string name;
    std::size_t offset, size;
};

std::vector<Field> cpu_fields() {
    std::vector<Field> f;
    auto add = [&](std::string name, std::size_t offset, std::size_t size) { f.push_back({std::move(name), offset, size}); };
    for (int i = 0; i < 32; ++i) add(std::string(kGpr[i]) + " (r" + std::to_string(i) + ")", offsetof(Cpu, r) + 16 * i, 16);
    add("hi", offsetof(Cpu, hi), 16);
    add("lo", offsetof(Cpu, lo), 16);
    add("sa", offsetof(Cpu, sa), 4);
    add("pc", offsetof(Cpu, pc), 4);
    add("budget (cycles charged)", offsetof(Cpu, budget), 4);
    add("base", offsetof(Cpu, base), 4);
    for (int i = 0; i < 32; ++i) add("f" + std::to_string(i), offsetof(Cpu, f) + 4 * i, 4);
    add("facc", offsetof(Cpu, facc), 4);
    add("fcr31", offsetof(Cpu, fcr31), 4);
    const std::size_t vu = offsetof(Cpu, vu0);
    for (int i = 0; i < 32; ++i) add("vf" + std::to_string(i), vu + offsetof(Vu0Regs, vf) + 16 * i, 16);
    add("vu0 acc", vu + offsetof(Vu0Regs, acc), 16);
    for (int i = 0; i < 16; ++i) add("vi" + std::to_string(i), vu + offsetof(Vu0Regs, vi) + 2 * i, 2);
    add("vu0 q", vu + offsetof(Vu0Regs, q), 4);
    add("vu0 p", vu + offsetof(Vu0Regs, p), 4);
    add("vu0 i", vu + offsetof(Vu0Regs, i), 4);
    add("vu0 r", vu + offsetof(Vu0Regs, r), 4);
    add("vu0 mac", vu + offsetof(Vu0Regs, mac), 4);
    add("vu0 status", vu + offsetof(Vu0Regs, status), 4);
    add("vu0 clip", vu + offsetof(Vu0Regs, clip), 4);
    add("vu0 cmsar0", vu + offsetof(Vu0Regs, cmsar0), 4);
    add("vu0 tpc", vu + offsetof(Vu0Regs, tpc), 4);
    for (int i = 0; i < 32; ++i) add("cop0 " + std::to_string(i), offsetof(Cpu, cop0) + 4 * i, 4);
    return f;
}

// most significant first, 32-bit groups
std::string hex(const void *p, std::size_t size) {
    const auto *b = static_cast<const std::uint8_t *>(p);
    std::string s;
    char part[4];
    for (std::size_t i = size; i-- > 0;) {
        std::snprintf(part, sizeof part, "%02x", b[i]);
        s += part;
        if (i && i % 4 == 0) s += '_';
    }
    return s;
}

std::size_t count_changed(const std::vector<std::uint8_t> &a, const std::vector<std::uint8_t> &b) {
    std::size_t n = 0;
    for (std::size_t i = 0; i < a.size(); ++i) n += a[i] != b[i];
    return n;
}

// compares one memory region; prints the first differing bytes and the differing ranges; returns the count
std::size_t compare_memory(const char *name, std::uint32_t base, const std::vector<std::uint8_t> &snapshot, const std::vector<std::uint8_t> &a,
                           const std::vector<std::uint8_t> &b, bool quiet) {
    std::size_t differ = 0, ranges = 0;
    for (std::size_t i = 0; i < a.size();) {
        if (a[i] == b[i]) {
            ++i;
            continue;
        }
        std::size_t end = i;
        while (end < a.size() && a[end] != b[end]) ++end;
        differ += end - i;
        if (!quiet && ranges++ < 8) {
            const std::size_t show = std::min<std::size_t>(end - i, 16);
            std::printf("    %s %08zX..%08zX (%zu bytes)  snapshot %s  recomp %s  decomp %s\n", name, base + i, base + end - 1, end - i,
                        hex(&snapshot[i], show).c_str(), hex(&a[i], show).c_str(), hex(&b[i], show).c_str());
        }
        i = end;
    }
    return differ;
}

Result run(const DiffContext &ctx, DecompFn *decompiled) {
    difftest_restore(ctx);
    g_cpu = ctx.cpu;
    g_cpu.budget = kBudget;
    if (decompiled) decomp_run(g_cpu, *decompiled, 1);
    else if (!run_at(g_cpu, ctx.addr, 1)) std::printf("    no translated code at %08X\n", ctx.addr);
    Result r{g_cpu, {}, halted()};
    difftest_capture(r.memory);
    return r;
}

bool replay(const std::string &path, bool quiet) {
    DiffContext ctx;
    std::string error;
    if (!difftest_load(path, ctx, error)) {
        std::printf("ERROR %s: %s\n", path.c_str(), error.c_str());
        return false;
    }
    DecompFn *f = decomp_find(ctx.addr);
    if (!f) {
        std::printf("ERROR %s: no decompiled function at %08X in this build\n", path.c_str(), ctx.addr);
        return false;
    }
    const std::string label = std::string(f->name) + " #" + std::to_string(ctx.index) + " (frame " + std::to_string(ctx.frame) + ")";
    const Result a = run(ctx, nullptr), b = run(ctx, f);
    if (a.halted || b.halted) {
        std::printf("ERROR %08X %s: the machine halted during the %s run\n", ctx.addr, label.c_str(), a.halted ? "recompiled" : "decompiled");
        return false;
    }

    std::vector<std::string> regs;
    for (const Field &fl : cpu_fields()) {
        const auto *pa = reinterpret_cast<const std::uint8_t *>(&a.cpu) + fl.offset;
        const auto *pb = reinterpret_cast<const std::uint8_t *>(&b.cpu) + fl.offset;
        if (std::memcmp(pa, pb, fl.size) == 0) continue;
        regs.push_back("    " + fl.name + ": recomp " + hex(pa, fl.size) + "  decomp " + hex(pb, fl.size) + "  (entry " +
                       hex(reinterpret_cast<const std::uint8_t *>(&ctx.cpu) + fl.offset, fl.size) + ")");
    }
    const bool memory_same = a.memory.ram == b.memory.ram && a.memory.spr == b.memory.spr && a.memory.vu0_code == b.memory.vu0_code &&
                             a.memory.vu0_mem == b.memory.vu0_mem;
    const std::int64_t cycles_a = kBudget - static_cast<std::int64_t>(a.cpu.budget), cycles_b = kBudget - static_cast<std::int64_t>(b.cpu.budget);
    const std::size_t wrote_a = count_changed(ctx.ram, a.memory.ram) + count_changed(ctx.spr, a.memory.spr);
    const std::size_t wrote_b = count_changed(ctx.ram, b.memory.ram) + count_changed(ctx.spr, b.memory.spr);
    const bool pass = regs.empty() && memory_same;
    std::printf("%s %08X %s: v0 %08X, cycles %" PRId64 "/%" PRId64 ", RAM bytes changed %zu/%zu (recomp/decomp)\n", pass ? "PASS" : "FAIL", ctx.addr,
                label.c_str(), a.cpu.r[2].w[0], cycles_a, cycles_b, wrote_a, wrote_b);
    if (pass) return true;
    if (!quiet) {
        if (!regs.empty()) std::printf("  %zu register fields differ (first: %s)\n", regs.size(), regs.front().substr(4, regs.front().find(':') - 4).c_str());
        for (std::size_t i = 0; i < regs.size() && i < 16; ++i) std::printf("%s\n", regs[i].c_str());
    }
    std::size_t bytes = compare_memory("ram", 0, ctx.ram, a.memory.ram, b.memory.ram, quiet);
    bytes += compare_memory("spr", kScratchpadBase, ctx.spr, a.memory.spr, b.memory.spr, quiet);
    bytes += compare_memory("vu0 code", 0x11000000u, ctx.vu0_code, a.memory.vu0_code, b.memory.vu0_code, quiet);
    bytes += compare_memory("vu0 data", 0x11004000u, ctx.vu0_mem, a.memory.vu0_mem, b.memory.vu0_mem, quiet);
    if (bytes) std::printf("  %zu memory bytes differ\n", bytes);
    return false;
}

}

int main(int argc, char **argv) {
    bool keep_going = false, quiet = false;
    std::vector<std::string> paths;
    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];
        if (arg == "--keep-going") keep_going = true;
        else if (arg == "--quiet") quiet = true;
        else if (std::filesystem::is_directory(arg)) {
            std::vector<std::string> found;
            for (const auto &e : std::filesystem::directory_iterator(arg))
                if (e.path().extension() == ".ctx") found.push_back(e.path().string());
            std::sort(found.begin(), found.end());
            paths.insert(paths.end(), found.begin(), found.end());
        } else paths.push_back(arg);
    }
    if (paths.empty()) {
        std::fprintf(stderr, "usage: difftest [--keep-going] [--quiet] <context.ctx | directory>...\n");
        return 2;
    }
    register_generated_code();
    decomp_configure("off"); // every hook off: both runs call recompiled code, and nothing is recorded
    std::size_t passed = 0, failed = 0;
    for (const std::string &p : paths) {
        if (replay(p, quiet)) ++passed;
        else {
            ++failed;
            if (!keep_going) break;
        }
    }
    std::printf("%zu passed, %zu failed%s\n", passed, failed, failed && !keep_going && passed + failed < paths.size() ? " (stopped at the first failure; --keep-going runs all)" : "");
    return failed ? 1 : 0;
}
