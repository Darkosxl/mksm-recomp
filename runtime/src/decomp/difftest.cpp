// difftest call contexts (decomp/difftest): the Cpu at a decompiled function's entry plus a full snapshot of the
// memory a function can reach (RAM, scratchpad, VU0 code and data). One file per call, ~32 MB, raw:
//   header {magic "PS2DIFF1", addr, index, frame, sizeof(Cpu), RAM, SPR, VU0 sizes}, Cpu, RAM, SPR, VU0 code, VU0 data
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstring>
#include <memory>

namespace ps2 {

extern std::uint8_t g_vu0_code[4096];
extern std::uint8_t g_vu0_mem[4096];

namespace {

constexpr char kMagic[8] = {'P', 'S', '2', 'D', 'I', 'F', 'F', '1'};
constexpr std::uint32_t kVu0Size = 4096;

struct Header {
    char magic[8];
    std::uint32_t addr;
    std::uint32_t index;
    std::uint64_t frame;
    std::uint32_t cpu_size;
    std::uint32_t ram_size;
    std::uint32_t spr_size;
    std::uint32_t vu0_size;
};

struct Closer {
    void operator()(std::FILE *f) const { std::fclose(f); }
};

}

bool difftest_save(const std::string &path, const DecompFn &f, std::uint32_t index, const Cpu &c) {
    std::unique_ptr<std::FILE, Closer> out(std::fopen(path.c_str(), "wb"));
    if (!out) return false;
    Header h{};
    std::memcpy(h.magic, kMagic, sizeof kMagic);
    h.addr = f.addr;
    h.index = index;
    h.frame = frame_count();
    h.cpu_size = sizeof(Cpu);
    h.ram_size = kRamSize;
    h.spr_size = kScratchpadSize;
    h.vu0_size = kVu0Size;
    bool ok = std::fwrite(&h, sizeof h, 1, out.get()) == 1 && std::fwrite(&c, sizeof c, 1, out.get()) == 1 &&
              std::fwrite(g_ram, 1, kRamSize, out.get()) == kRamSize && std::fwrite(g_spr, 1, kScratchpadSize, out.get()) == kScratchpadSize &&
              std::fwrite(g_vu0_code, 1, kVu0Size, out.get()) == kVu0Size && std::fwrite(g_vu0_mem, 1, kVu0Size, out.get()) == kVu0Size;
    ok = std::fflush(out.get()) == 0 && ok;
    return ok;
}

bool difftest_load(const std::string &path, DiffContext &ctx, std::string &error) {
    std::unique_ptr<std::FILE, Closer> in(std::fopen(path.c_str(), "rb"));
    if (!in) {
        error = "cannot open";
        return false;
    }
    Header h{};
    if (std::fread(&h, sizeof h, 1, in.get()) != 1 || std::memcmp(h.magic, kMagic, sizeof kMagic) != 0) {
        error = "not a difftest context";
        return false;
    }
    if (h.cpu_size != sizeof(Cpu) || h.ram_size != kRamSize || h.spr_size != kScratchpadSize || h.vu0_size != kVu0Size) {
        error = "recorded by a build with another Cpu layout or memory sizes";
        return false;
    }
    ctx.addr = h.addr;
    ctx.index = h.index;
    ctx.frame = h.frame;
    ctx.ram.resize(kRamSize);
    ctx.spr.resize(kScratchpadSize);
    ctx.vu0_code.resize(kVu0Size);
    ctx.vu0_mem.resize(kVu0Size);
    if (std::fread(&ctx.cpu, sizeof ctx.cpu, 1, in.get()) != 1 || std::fread(ctx.ram.data(), 1, kRamSize, in.get()) != kRamSize ||
        std::fread(ctx.spr.data(), 1, kScratchpadSize, in.get()) != kScratchpadSize ||
        std::fread(ctx.vu0_code.data(), 1, kVu0Size, in.get()) != kVu0Size || std::fread(ctx.vu0_mem.data(), 1, kVu0Size, in.get()) != kVu0Size) {
        error = "truncated";
        return false;
    }
    return true;
}

void difftest_restore(const DiffContext &ctx) {
    std::memcpy(g_ram, ctx.ram.data(), kRamSize);
    std::memcpy(g_spr, ctx.spr.data(), kScratchpadSize);
    std::memcpy(g_vu0_code, ctx.vu0_code.data(), kVu0Size);
    std::memcpy(g_vu0_mem, ctx.vu0_mem.data(), kVu0Size);
}

void difftest_capture(DiffContext &ctx) {
    ctx.ram.assign(g_ram, g_ram + kRamSize);
    ctx.spr.assign(g_spr, g_spr + kScratchpadSize);
    ctx.vu0_code.assign(g_vu0_code, g_vu0_code + kVu0Size);
    ctx.vu0_mem.assign(g_vu0_mem, g_vu0_mem + kVu0Size);
}

}
