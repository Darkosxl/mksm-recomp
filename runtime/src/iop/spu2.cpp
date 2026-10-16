#include "spu2.hpp"

#include "hw.hpp"
#include "iop.hpp"
#include "kernel.hpp"

#include "ps2/state.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <vector>

namespace ps2::iop::spu2 {

namespace {

constexpr std::uint32_t kRamWords = 1u << 20;
constexpr std::uint32_t kRamMask = kRamWords - 1;
constexpr std::uint64_t kCyclesPerSample = 768;
constexpr unsigned kBatch = 32;
constexpr unsigned kInputFrames = 512;
constexpr std::uint32_t kInputBase[2] = {0x2000u, 0x2400u};
constexpr unsigned kSpuLine = 9;
constexpr std::uint32_t kRingWords = 0x200;
static_assert(kRingWords % kBatch == 0, "a batch must not straddle the ring end");

enum Phase { kOff, kAttack, kDecay, kSustain, kRelease };

struct Envelope {
    int counter = 0;
    std::int32_t level = 0;

    void step(int rate, bool decrease, bool exponential) {
        const int shift = rate >> 2;
        int cycles = 1 << std::max(0, shift - 11);
        if (exponential && !decrease && level > 0x6000) cycles *= 4;
        if (++counter < cycles) return;
        counter = 0;
        int delta = (decrease ? -8 + (rate & 3) : 7 - (rate & 3)) << std::max(0, 11 - shift);
        if (exponential && decrease) delta = delta * level / 0x8000;
        level = std::clamp(level + delta, 0, 0x7FFF);
    }
};

struct Voice {
    std::uint16_t voll = 0, volr = 0, pitch = 0, adsr1 = 0, adsr2 = 0;
    Envelope vol[2];
    std::uint32_t ssa = 0, lsax = 0, next = 0, block[2] = {};
    bool lsax_written = false, key_on = false, end = false;
    Phase phase = kOff;
    Envelope env;
    std::int16_t buffer[56] = {};
    std::int32_t s1 = 0, s2 = 0;
    std::uint32_t position = 0;
};

struct Transfer {
    std::uint32_t madr = 0, bytes = 0;
    int channel = -1;
};

struct Core {
    Voice voices[24];
    std::uint16_t attr = 0, admas = 0;
    std::uint32_t irqa = 0x800u, tsa = 0;
    std::uint16_t mvol[2] = {0x3FFF, 0x3FFF}, bvol[2] = {0x7FFF, 0x7FFF}, avol[2] = {0x7FFF, 0x7FFF}, evol[2] = {};
    bool irq = false;
    std::int16_t input[kInputFrames][2] = {};
    unsigned input_read = 0, input_count = 0;
    std::deque<Transfer> transfers;
    std::uint16_t regs[0x200] = {};
    // STATX (0x344): 0x80 = DMA ready, 0x400 = DMA busy until busy_until (the transfer's completion time).
    std::uint16_t statx = 0x80;
    std::uint64_t busy_until = 0;
    // Reverb coefficients 0x774-0x786 (+0x28 for core 1): vIIR, vCOMB1-4, vWALL, vAPF1, vAPF2, vLIN, vRIN; and the
    // work-area position (halfwords past ESA). The address registers (ESA 0x2E0, 0x2E4-0x33A, EEA 0x33C) live in regs[].
    std::uint16_t revb[10] = {};
    std::uint32_t revb_pos = 0;
};

// State that has no field of its own in the savestate layout rides in regs[] slots that only the voice registers
// (offsets 0x000-0x17F, never stored there) map to; states saved before these existed load them as zero, which is the
// idle value of each.
constexpr unsigned kShadowRevb = 0x00, kShadowRevbPos = 0x0A, kShadowStatx = 0x10, kShadowBusy = 0x12;

std::vector<std::uint16_t> g_ram(kRamWords);
Core g_cores[2];
// Per voice, outside the savestate layout: the ADPCM flags (header bits 8-10) of the two decoded blocks, rebuilt from
// SPU RAM on load, and the last three samples of the previous block for the interpolator (zero after a load).
std::uint8_t g_block_flags[2][24][2];
std::int16_t g_history[2][24][3];
std::uint64_t g_one_shot_ends = 0;

int core_of(const Voice &v) { return &v >= g_cores[1].voices ? 1 : 0; }
std::uint8_t *block_flags(const Voice &v) {
    const int c = core_of(v);
    return g_block_flags[c][&v - g_cores[c].voices];
}
std::int16_t *history(const Voice &v) {
    const int c = core_of(v);
    return g_history[c][&v - g_cores[c].voices];
}

// 4-point Gaussian interpolation table of the SPU (psx-spx, "4-Point Gaussian Interpolation"; same ROM on SPU2).
constexpr std::int16_t kGauss[512] = {
    -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001, -0x001,
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x001, 0x001, 0x001, 0x001, 0x002, 0x002, 0x002, 0x003, 0x003,
    0x003, 0x004, 0x004, 0x005, 0x005, 0x006, 0x007, 0x007, 0x008, 0x009, 0x009, 0x00A, 0x00B, 0x00C, 0x00D, 0x00E,
    0x00F, 0x010, 0x011, 0x012, 0x013, 0x015, 0x016, 0x018, 0x019, 0x01B, 0x01C, 0x01E, 0x020, 0x021, 0x023, 0x025,
    0x027, 0x029, 0x02C, 0x02E, 0x030, 0x033, 0x035, 0x038, 0x03A, 0x03D, 0x040, 0x043, 0x046, 0x049, 0x04D, 0x050,
    0x054, 0x057, 0x05B, 0x05F, 0x063, 0x067, 0x06B, 0x06F, 0x074, 0x078, 0x07D, 0x082, 0x087, 0x08C, 0x091, 0x096,
    0x09C, 0x0A1, 0x0A7, 0x0AD, 0x0B3, 0x0BA, 0x0C0, 0x0C7, 0x0CD, 0x0D4, 0x0DB, 0x0E3, 0x0EA, 0x0F2, 0x0FA, 0x101,
    0x10A, 0x112, 0x11B, 0x123, 0x12C, 0x135, 0x13F, 0x148, 0x152, 0x15C, 0x166, 0x171, 0x17B, 0x186, 0x191, 0x19C,
    0x1A8, 0x1B4, 0x1C0, 0x1CC, 0x1D9, 0x1E5, 0x1F2, 0x200, 0x20D, 0x21B, 0x229, 0x237, 0x246, 0x255, 0x264, 0x273,
    0x283, 0x293, 0x2A3, 0x2B4, 0x2C4, 0x2D6, 0x2E7, 0x2F9, 0x30B, 0x31D, 0x330, 0x343, 0x356, 0x36A, 0x37E, 0x392,
    0x3A7, 0x3BC, 0x3D1, 0x3E7, 0x3FC, 0x413, 0x42A, 0x441, 0x458, 0x470, 0x488, 0x4A0, 0x4B9, 0x4D2, 0x4EC, 0x506,
    0x520, 0x53B, 0x556, 0x572, 0x58E, 0x5AA, 0x5C7, 0x5E4, 0x601, 0x61F, 0x63E, 0x65C, 0x67C, 0x69B, 0x6BB, 0x6DC,
    0x6FD, 0x71E, 0x740, 0x762, 0x784, 0x7A7, 0x7CB, 0x7EF, 0x813, 0x838, 0x85D, 0x883, 0x8A9, 0x8D0, 0x8F7, 0x91E,
    0x946, 0x96F, 0x998, 0x9C1, 0x9EB, 0xA16, 0xA40, 0xA6C, 0xA98, 0xAC4, 0xAF1, 0xB1E, 0xB4C, 0xB7A, 0xBA9, 0xBD8,
    0xC07, 0xC38, 0xC68, 0xC99, 0xCCB, 0xCFD, 0xD30, 0xD63, 0xD97, 0xDCB, 0xE00, 0xE35, 0xE6B, 0xEA1, 0xED7, 0xF0F,
    0xF46, 0xF7F, 0xFB7, 0xFF1, 0x102A, 0x1065, 0x109F, 0x10DB, 0x1116, 0x1153, 0x118F, 0x11CD, 0x120B, 0x1249, 0x1288, 0x12C7,
    0x1307, 0x1347, 0x1388, 0x13C9, 0x140B, 0x144D, 0x1490, 0x14D4, 0x1517, 0x155C, 0x15A0, 0x15E6, 0x162C, 0x1672, 0x16B9, 0x1700,
    0x1747, 0x1790, 0x17D8, 0x1821, 0x186B, 0x18B5, 0x1900, 0x194B, 0x1996, 0x19E2, 0x1A2E, 0x1A7B, 0x1AC8, 0x1B16, 0x1B64, 0x1BB3,
    0x1C02, 0x1C51, 0x1CA1, 0x1CF1, 0x1D42, 0x1D93, 0x1DE5, 0x1E37, 0x1E89, 0x1EDC, 0x1F2F, 0x1F82, 0x1FD6, 0x202A, 0x207F, 0x20D4,
    0x2129, 0x217F, 0x21D5, 0x222C, 0x2282, 0x22DA, 0x2331, 0x2389, 0x23E1, 0x2439, 0x2492, 0x24EB, 0x2545, 0x259E, 0x25F8, 0x2653,
    0x26AD, 0x2708, 0x2763, 0x27BE, 0x281A, 0x2876, 0x28D2, 0x292E, 0x298B, 0x29E7, 0x2A44, 0x2AA1, 0x2AFF, 0x2B5C, 0x2BBA, 0x2C18,
    0x2C76, 0x2CD4, 0x2D33, 0x2D91, 0x2DF0, 0x2E4F, 0x2EAE, 0x2F0D, 0x2F6C, 0x2FCC, 0x302B, 0x308B, 0x30EA, 0x314A, 0x31AA, 0x3209,
    0x3269, 0x32C9, 0x3329, 0x3389, 0x33E9, 0x3449, 0x34A9, 0x3509, 0x3569, 0x35C9, 0x3629, 0x3689, 0x36E8, 0x3748, 0x37A8, 0x3807,
    0x3867, 0x38C6, 0x3926, 0x3985, 0x39E4, 0x3A43, 0x3AA2, 0x3B00, 0x3B5F, 0x3BBD, 0x3C1B, 0x3C79, 0x3CD7, 0x3D35, 0x3D92, 0x3DEF,
    0x3E4C, 0x3EA9, 0x3F05, 0x3F62, 0x3FBD, 0x4019, 0x4074, 0x40D0, 0x412A, 0x4185, 0x41DF, 0x4239, 0x4292, 0x42EB, 0x4344, 0x439C,
    0x43F4, 0x444C, 0x44A3, 0x44FA, 0x4550, 0x45A6, 0x45FC, 0x4651, 0x46A6, 0x46FA, 0x474E, 0x47A1, 0x47F4, 0x4846, 0x4898, 0x48E9,
    0x493A, 0x498A, 0x49D9, 0x4A29, 0x4A77, 0x4AC5, 0x4B13, 0x4B5F, 0x4BAC, 0x4BF7, 0x4C42, 0x4C8D, 0x4CD7, 0x4D20, 0x4D68, 0x4DB0,
    0x4DF7, 0x4E3E, 0x4E84, 0x4EC9, 0x4F0E, 0x4F52, 0x4F95, 0x4FD7, 0x5019, 0x505A, 0x509A, 0x50DA, 0x5118, 0x5156, 0x5194, 0x51D0,
    0x520C, 0x5247, 0x5281, 0x52BA, 0x52F3, 0x532A, 0x5361, 0x5397, 0x53CC, 0x5401, 0x5434, 0x5467, 0x5499, 0x54CA, 0x54FA, 0x5529,
    0x5558, 0x5585, 0x55B2, 0x55DE, 0x5609, 0x5632, 0x565B, 0x5684, 0x56AB, 0x56D1, 0x56F6, 0x571B, 0x573E, 0x5761, 0x5782, 0x57A3,
    0x57C3, 0x57E2, 0x57FF, 0x581C, 0x5838, 0x5853, 0x586D, 0x5886, 0x589E, 0x58B5, 0x58CB, 0x58E0, 0x58F4, 0x5907, 0x5919, 0x592A,
    0x593A, 0x5949, 0x5958, 0x5965, 0x5971, 0x597C, 0x5986, 0x598F, 0x5997, 0x599E, 0x59A4, 0x59A9, 0x59AD, 0x59B0, 0x59B2, 0x59B3,
};
std::uint16_t g_spdif_out = 0, g_spdif_mode = 0, g_spdif_media = 0;
std::vector<std::int16_t> g_audio;
bool g_record = false;
// PS2_DUMP_STEMS=path: 12-channel WAV beside PS2_DUMP_AUDIO with the mixer's inputs per sample: core 0 ADMA in L/R,
// core 1 ADMA in L/R (both before BVOL), core 0 voices dry L/R, core 1 voices dry L/R, core 0 reverb out L/R, core 1
// reverb out L/R (both before EVOL).
constexpr unsigned kStems = 12;
std::vector<std::int16_t> g_stems;
const char *g_stems_path = nullptr;
std::function<void(const std::int16_t *, std::size_t)> g_sink;
std::uint64_t g_next_tick = 0;
std::uint64_t g_statx_reads[2] = {};
bool g_tick_pending = false;

void check_irq(std::uint32_t address, std::uint32_t words) {
    for (Core &k : g_cores) {
        if (!(k.attr & 0x40u) || k.irq) continue;
        if (((k.irqa - address) & kRamMask) >= words) continue;
        k.irq = true;
        static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
        if (trace) std::fprintf(stderr, "[spu2] core %d irq at 0x%05X (access 0x%05X+%u) time %llu\n", static_cast<int>(&k - g_cores), k.irqa, address, words,
                                static_cast<unsigned long long>(kernel::now()));
        hw::raise_interrupt(kSpuLine);
    }
}

void decode_block(Voice &v, std::int16_t *out) {
    static const int kFilter[5][2] = {{0, 0}, {60, 0}, {115, -52}, {98, -55}, {122, -60}};
    const std::uint32_t at = v.next & kRamMask;
    const std::uint16_t header = g_ram[at];
    const int shift = header & 0xF, filter = std::min((header >> 4) & 0xF, 4);
    const unsigned flags = header >> 8;
    for (int i = 0; i < 28; ++i) {
        const std::uint16_t word = g_ram[(at + 1 + i / 4) & kRamMask];
        std::int32_t sample = static_cast<std::int16_t>(((word >> ((i & 3) * 4)) & 0xF) << 12) >> shift;
        sample += (v.s1 * kFilter[filter][0] + v.s2 * kFilter[filter][1] + 32) >> 6;
        sample = std::clamp(sample, -32768, 32767);
        v.s2 = v.s1;
        v.s1 = sample;
        out[i] = static_cast<std::int16_t>(sample);
    }
    v.block[out == v.buffer ? 0 : 1] = at;
    block_flags(v)[out == v.buffer ? 0 : 1] = static_cast<std::uint8_t>(flags & 7u);
    if ((flags & 4u) && !v.lsax_written) v.lsax = at;
    v.next = (flags & 1u) ? v.lsax : (at + 8) & kRamMask;
}

void key_on(Voice &v) {
    static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
    if (trace) {
        const int c = &v >= g_cores[1].voices ? 1 : 0;
        std::fprintf(stderr, "[spu2] core %d voice %d key on ssa 0x%05X pitch 0x%04X adsr %04X/%04X vol %04X/%04X time %llu\n", c,
                     static_cast<int>(&v - g_cores[c].voices), v.ssa, v.pitch, v.adsr1, v.adsr2, v.voll, v.volr,
                     static_cast<unsigned long long>(kernel::now()));
    }
    v.key_on = false;
    v.lsax_written = false;
    v.end = false;
    v.next = v.ssa;
    v.s1 = v.s2 = 0;
    v.position = 0;
    std::memset(history(v), 0, 3 * sizeof(std::int16_t));
    v.phase = kAttack;
    v.env = Envelope{};
    decode_block(v, v.buffer);
    decode_block(v, v.buffer + 28);
    check_irq(v.block[0], 8);
}

void update_envelope(Voice &v) {
    Envelope &e = v.env;
    switch (v.phase) {
    case kAttack:
        e.step((v.adsr1 >> 8) & 0x7F, false, v.adsr1 & 0x8000u);
        if (e.level >= 0x7FFF) v.phase = kDecay;
        break;
    case kDecay:
        e.step(((v.adsr1 >> 4) & 0xF) << 2, true, true);
        if (e.level <= ((v.adsr1 & 0xF) + 1) * 0x800) v.phase = kSustain;
        break;
    case kSustain:
        e.step((v.adsr2 >> 6) & 0x7F, v.adsr2 & 0x4000u, v.adsr2 & 0x8000u);
        break;
    case kRelease:
        e.step((v.adsr2 & 0x1F) << 2, true, v.adsr2 & 0x20u);
        if (e.level <= 0) v.phase = kOff;
        break;
    default:
        break;
    }
}

std::int32_t volume(std::uint16_t reg, Envelope &e) {
    if (!(reg & 0x8000u)) return static_cast<std::int16_t>(reg << 1);
    e.step(reg & 0x7F, reg & 0x2000u, reg & 0x4000u);
    return e.level;
}

std::int16_t clamp16(std::int32_t v) { return static_cast<std::int16_t>(std::clamp(v, -32768, 32767)); }

// gates: bit 0/1 = dry L/R (VMIXL/VMIXR), bit 2/3 = wet L/R (VMIXEL/VMIXER).
void render_voice(Voice &v, unsigned gates, std::int32_t (*dry)[2], std::int32_t (*wet)[2], std::int16_t *raw) {
    if (v.key_on) key_on(v);
    const std::uint32_t step = std::min<std::uint32_t>(v.pitch, 0x3FFFu);
    const bool sweep_l = v.voll & 0x8000u, sweep_r = v.volr & 0x8000u;
    const std::int32_t fixed_l = static_cast<std::int16_t>(v.voll << 1), fixed_r = static_cast<std::int16_t>(v.volr << 1);
    std::uint32_t position = v.position;
    for (unsigned n = 0; n < kBatch; ++n) {
        if (v.phase == kOff) break;
        // Gaussian interpolation over the four most recent samples (new = current, then old, older, oldest),
        // weighted by pitch counter bits 4-11.
        const int index = static_cast<int>(position >> 12), i = static_cast<int>((position >> 4) & 0xFFu);
        const std::int16_t *hist = history(v);
        const auto at = [&](int j) -> std::int32_t { return j >= 0 ? v.buffer[j] : hist[3 + j]; };
        const std::int32_t sample = (kGauss[0x0FF - i] * at(index - 3) >> 15) + (kGauss[0x1FF - i] * at(index - 2) >> 15) +
                                    (kGauss[0x100 + i] * at(index - 1) >> 15) + (kGauss[i] * at(index) >> 15);
        position += step;
        while ((position >> 12) >= 28) {
            // The current block is done: its end flag sets ENDX and jumps to the loop address (already decoded as the
            // next block); without the repeat flag the voice is released with its envelope at zero.
            const unsigned flags = block_flags(v)[0];
            if (flags & 1u) {
                v.end = true;
                if (!(flags & 2u)) {
                    v.phase = kRelease;
                    v.env.level = 0;
                    ++g_one_shot_ends;
                }
            }
            position -= 28u << 12;
            std::memcpy(history(v), v.buffer + 25, 3 * sizeof(std::int16_t));
            std::memmove(v.buffer, v.buffer + 28, 28 * sizeof(std::int16_t));
            v.block[0] = v.block[1];
            block_flags(v)[0] = block_flags(v)[1];
            v.position = position;
            check_irq(v.block[0], 8);
            decode_block(v, v.buffer + 28);
        }
        update_envelope(v);
        const std::int32_t out = sample * v.env.level >> 15;
        if (raw) raw[n] = clamp16(out);
        const std::int32_t l = out * (sweep_l ? volume(v.voll, v.vol[0]) : fixed_l) >> 15;
        const std::int32_t r = out * (sweep_r ? volume(v.volr, v.vol[1]) : fixed_r) >> 15;
        if (gates & 1u) dry[n][0] += l;
        if (gates & 2u) dry[n][1] += r;
        if (gates & 4u) wet[n][0] += l;
        if (gates & 8u) wet[n][1] += r;
    }
    v.position = position;
}

void feed_input(int core) {
    Core &k = g_cores[core];
    while (!k.transfers.empty() && k.input_count + 256 <= kInputFrames) {
        Transfer &t = k.transfers.front();
        const std::uint32_t chunk = std::min<std::uint32_t>(t.bytes, 1024);
        const std::uint32_t frames = std::max<std::uint32_t>(chunk / 4, 1);
        const std::uint8_t *src = ram_ptr(t.madr);
        for (std::uint32_t i = 0; i < frames; ++i) {
            std::int16_t l, r;
            std::memcpy(&l, src + i * 2, 2);
            std::memcpy(&r, src + chunk / 2 + i * 2, 2);
            const unsigned slot = (k.input_read + k.input_count + i) % kInputFrames;
            k.input[slot][0] = l;
            k.input[slot][1] = r;
            g_ram[kInputBase[core] + slot] = static_cast<std::uint16_t>(l);
            g_ram[kInputBase[core] + 0x200 + slot] = static_cast<std::uint16_t>(r);
        }
        k.input_count += frames;
        t.madr += chunk;
        t.bytes -= chunk;
        if (!t.bytes) {
            const int channel = t.channel;
            k.transfers.pop_front();
            if (channel >= 0) kernel::schedule(kernel::now() + 32, kernel::Job{kernel::kJobDmaDone, static_cast<std::uint32_t>(channel)});
        }
    }
}

// Next ADMA frame of a core, raw (as streamed to SPU RAM 0x2000/0x2400); silence when the ring has run dry.
void read_input(int core, std::int16_t &raw_l, std::int16_t &raw_r) {
    Core &k = g_cores[core];
    raw_l = raw_r = 0;
    if (!k.input_count) return;
    const unsigned slot = k.input_read;
    check_irq(kInputBase[core] + slot, 1);
    raw_l = k.input[slot][0];
    raw_r = k.input[slot][1];
    k.input_read = (k.input_read + 1) % kInputFrames;
    --k.input_count;
}

// MVOL is a volume/sweep register like VOLL/VOLR: fixed mode holds a 15-bit level (0x3FFF = full scale); sweeps are
// approximated at full scale. AVOL, BVOL and EVOL are plain signed 16-bit gains.
std::int32_t master(std::uint16_t reg) { return reg & 0x8000u ? 0x7FFF : static_cast<std::int16_t>(reg << 1); }
std::int32_t gain(std::int32_t sample, std::uint16_t vol) { return sample * static_cast<std::int16_t>(vol) >> 15; }

// 24-bit per-voice mask from a register pair: the lower address holds voices 0-15, the upper one voices 16-23.
std::uint32_t voice_mask(const Core &k, std::uint32_t off) {
    return k.regs[off >> 1] | (static_cast<std::uint32_t>(k.regs[(off + 2) >> 1] & 0xFFu) << 16);
}

// Each core streams every sample into fixed rings in SPU RAM, per core c at c*0x800: input L/R (core 1's input is core 0's
// output), voice 1, voice 3; at 0x1000+c*0x800: dry L/R, wet L/R. Those writes trip IRQA, and some games (Burnout 3:
// IRQA 0x400) use that as their audio clock. One range check per ring per batch keeps it cheap.
void write_rings(int core, const std::int16_t (*rings)[kBatch]) {
    const auto pos = static_cast<std::uint32_t>(g_next_tick / (kBatch * kCyclesPerSample) % (kRingWords / kBatch) * kBatch);
    for (std::uint32_t r = 0; r < 8; ++r) {
        const std::uint32_t at = (r < 4 ? 0u : 0x1000u) + core * 0x800u + (r & 3u) * kRingWords + pos;
        for (unsigned n = 0; n < kBatch; ++n) g_ram[at + n] = static_cast<std::uint16_t>(rings[r][n]);
        check_irq(at, kBatch);
    }
}

// ---- Reverb ------------------------------------------------------------------------------------------------------
// The SPU reverb as documented by psx-spx ("SPU Reverb Formula", "Reverb Buffer Resampling"; nocash), on SPU2 per core
// with halfword addresses: the work area is ESA..EEA (EEA's low 16 bits read as 0xFFFF), every address register is an
// offset from the current position, wrapped inside the area. The unit alternates left and right steps on successive
// 48 kHz samples, so each side runs at 24 kHz; input and output are resampled with the 39-tap half-band FIR below, and
// the position advances by one halfword after each right step. ATTR bit 7 only gates the writes to the work area; the
// unit keeps reading and producing output (psx-spx "Reverb Disable"). Reverb accesses do not trip IRQA here.

struct ReverbIo {
    std::int32_t in[2][64] = {}, out[2][64] = {};
    unsigned at = 0;
    bool right = false;
};
ReverbIo g_reverb_io[2];

// Non-zero taps of the psx-spx FIR: taps 0, 2, ... 18 (mirrored at 38, 36, ... 20) and the centre tap 19 = 0x4000.
constexpr std::int32_t kFirEven[10] = {-0x0001, 0x0002, -0x000A, 0x0023, -0x0067, 0x010A, -0x0268, 0x0534, -0x0B90, 0x2806};

std::int64_t fir(const std::int32_t *h, unsigned at) {
    std::int64_t acc = static_cast<std::int64_t>(h[(at - 19) & 63u]) * 0x4000;
    for (unsigned j = 0; j < 10; ++j) acc += static_cast<std::int64_t>(kFirEven[j]) * (h[(at - 2 * j) & 63u] + h[(at - 38 + 2 * j) & 63u]);
    return acc;
}

std::int32_t mul(std::int32_t a, std::int32_t v) { return static_cast<std::int32_t>(static_cast<std::int64_t>(a) * v >> 15); }

std::uint32_t revb_addr(const Core &k, std::uint32_t reg) { return ((k.regs[reg >> 1] & 0xFu) << 16) | k.regs[(reg + 2) >> 1]; }

// One reverb step for one side (0 = left, 1 = right) of a core, input already resampled to 24 kHz.
std::int32_t reverb_step(Core &k, std::uint32_t esa, std::uint32_t size, int side, std::int32_t x) {
    const auto at = [&](std::int64_t off) {
        std::int64_t rel = (static_cast<std::int64_t>(k.revb_pos) + off) % size;
        if (rel < 0) rel += size;
        return (esa + static_cast<std::uint32_t>(rel)) & kRamMask;
    };
    const auto rd = [&](std::int64_t off) -> std::int32_t { return static_cast<std::int16_t>(g_ram[at(off)]); };
    const bool enabled = k.attr & 0x80u;
    const auto wr = [&](std::int64_t off, std::int32_t v) {
        if (enabled) g_ram[at(off)] = static_cast<std::uint16_t>(clamp16(v));
    };
    const auto coef = [&](int i) -> std::int32_t { return static_cast<std::int16_t>(k.revb[i]); };
    const std::int32_t v_iir = coef(0), v_wall = coef(5), v_apf1 = coef(6), v_apf2 = coef(7);
    // Address registers per side: mSAME, dSAME, mDIFF, dDIFF (the other side's), mCOMB1-4, mAPF1, mAPF2.
    static const std::uint32_t kRegs[2][10] = {{0x2EC, 0x304, 0x30C, 0x328, 0x2F4, 0x2FC, 0x314, 0x31C, 0x32C, 0x334},
                                               {0x2F0, 0x308, 0x310, 0x324, 0x2F8, 0x300, 0x318, 0x320, 0x330, 0x338}};
    const std::uint32_t *r = kRegs[side];
    const std::int64_t m_same = revb_addr(k, r[0]), m_diff = revb_addr(k, r[2]);
    const std::int64_t m_apf1 = revb_addr(k, r[8]), m_apf2 = revb_addr(k, r[9]);
    const std::int64_t d_apf1 = revb_addr(k, 0x2E4), d_apf2 = revb_addr(k, 0x2E8);

    const std::int32_t in = mul(x, coef(8 + side));
    const std::int32_t same_prev = rd(m_same - 1), diff_prev = rd(m_diff - 1);
    const std::int32_t same = mul(in + mul(rd(revb_addr(k, r[1])), v_wall) - same_prev, v_iir) + same_prev;
    const std::int32_t diff = mul(in + mul(rd(revb_addr(k, r[3])), v_wall) - diff_prev, v_iir) + diff_prev;
    wr(m_same, same);
    wr(m_diff, diff);
    std::int32_t out = 0;
    for (int i = 0; i < 4; ++i) out += mul(rd(revb_addr(k, r[4 + i])), coef(1 + i));
    const std::int32_t apf1 = rd(m_apf1 - d_apf1), apf2 = rd(m_apf2 - d_apf2);
    out = clamp16(out - mul(apf1, v_apf1));
    wr(m_apf1, out);
    out = mul(out, v_apf1) + apf1;
    out = clamp16(out - mul(apf2, v_apf2));
    wr(m_apf2, out);
    out = mul(out, v_apf2) + apf2;
    return clamp16(out);
}

// Feeds one 48 kHz wet sample pair into a core's reverb and returns its 48 kHz output (before EVOL).
void reverb(int core, const std::int32_t wet[2], std::int32_t result[2]) {
    Core &k = g_cores[core];
    ReverbIo &io = g_reverb_io[core];
    const std::uint32_t esa = revb_addr(k, 0x2E0), eea = ((k.regs[0x33C >> 1] & 0xFu) << 16) | 0xFFFFu;
    result[0] = result[1] = 0;
    if (eea < esa) return;
    const std::uint32_t size = eea - esa + 1;
    if (k.revb_pos >= size) k.revb_pos = 0;
    io.in[0][io.at] = clamp16(wet[0]);
    io.in[1][io.at] = clamp16(wet[1]);
    const int side = io.right ? 1 : 0;
    const std::int32_t y = reverb_step(k, esa, size, side, clamp16(static_cast<std::int32_t>(fir(io.in[side], io.at) >> 15)));
    io.out[side][io.at] = y;
    io.out[side ^ 1][io.at] = 0;
    // Zero-stuffed upsampling: only every other tap meets a sample, so the gain is doubled.
    for (int s = 0; s < 2; ++s) result[s] = clamp16(static_cast<std::int32_t>(fir(io.out[s], io.at) >> 14));
    io.at = (io.at + 1) & 63u;
    if (io.right && ++k.revb_pos >= size) k.revb_pos = 0;
    io.right = !io.right;
}

// SPU2 signal flow, per 48 kHz sample (cf. PCSX2 Mixer.cpp, Play! Iop_SpuBase.cpp and the SPU2 register manual):
//   voices -> VMIXL/VMIXR -> dry sum, voices -> VMIXEL/VMIXER -> wet sum (each clamped to 16 bits);
//   per core, MMIX gates the voice sums, the ADMA input (x BVOL) and the external input into the dry and wet buses
//   (bits 11..0: voices dry L/R, wet L/R, input dry L/R, wet L/R, external dry L/R, wet L/R; core 0 has no external input);
//   core out = dry + reverb(wet) x EVOL (see reverb() above);
//   core 0 out x MVOL0 is core 1's external input (after AVOL1), and only core 1 out x MVOL1 reaches the DAC.
void tick() {
    std::int16_t out[kBatch * 2];
    std::int32_t dry[2][kBatch][2] = {}, wet[2][kBatch][2] = {};
    std::int16_t rings[2][8][kBatch] = {};
    std::int16_t stems[kBatch][kStems] = {};
    static const bool count = std::getenv("PS2_SPU2_COUNT") != nullptr;
    static std::uint64_t ticks = 0, active = 0, phases[5] = {};
    for (int c = 0; c < 2; ++c) {
        const Core &k = g_cores[c];
        const std::uint32_t mix[4] = {voice_mask(k, 0x188), voice_mask(k, 0x190), voice_mask(k, 0x18C), voice_mask(k, 0x194)};
        for (int i = 0; i < 24; ++i) {
            Voice &v = g_cores[c].voices[i];
            if (!v.key_on && v.phase == kOff) continue;
            if (count) {
                ++active;
                ++phases[v.phase];
            }
            unsigned gates = 0;
            for (unsigned g = 0; g < 4; ++g) gates |= ((mix[g] >> i) & 1u) << g;
            render_voice(v, gates, dry[c], wet[c], i == 1 ? rings[c][2] : i == 3 ? rings[c][3] : nullptr);
        }
    }
    for (unsigned n = 0; n < kBatch; ++n) {
        std::int32_t ext[2] = {};
        for (int c = 0; c < 2; ++c) {
            Core &k = g_cores[c];
            const std::int32_t vd[2] = {clamp16(dry[c][n][0]), clamp16(dry[c][n][1])};
            const std::int32_t vw[2] = {clamp16(wet[c][n][0]), clamp16(wet[c][n][1])};
            for (int s = 0; s < 2; ++s) {
                rings[c][4 + s][n] = static_cast<std::int16_t>(vd[s]);
                rings[c][6 + s][n] = static_cast<std::int16_t>(vw[s]);
            }
            std::int16_t raw[2];
            read_input(c, raw[0], raw[1]);
            if (!c) {
                rings[0][0][n] = raw[0];
                rings[0][1][n] = raw[1];
            }
            if (g_stems_path) {
                stems[n][c * 2] = raw[0];
                stems[n][c * 2 + 1] = raw[1];
                stems[n][4 + c * 2] = static_cast<std::int16_t>(vd[0]);
                stems[n][5 + c * 2] = static_cast<std::int16_t>(vd[1]);
            }
            const std::int32_t in[2] = {gain(raw[0], k.bvol[0]), gain(raw[1], k.bvol[1])};
            const unsigned mmix = k.regs[0x198 >> 1] & (c ? 0xFFFu : 0xFF0u);
            std::int32_t bus_dry[2], bus_wet[2];
            for (int s = 0; s < 2; ++s) {
                const unsigned l = s ? 0u : 1u;  // MMIX lists R before L within each pair
                bus_dry[s] = (mmix & (0x400u << l) ? vd[s] : 0) + (mmix & (0x40u << l) ? in[s] : 0) + (mmix & (0x4u << l) ? ext[s] : 0);
                bus_wet[s] = (mmix & (0x100u << l) ? vw[s] : 0) + (mmix & (0x10u << l) ? in[s] : 0) + (mmix & (0x1u << l) ? ext[s] : 0);
            }
            std::int32_t fx[2];
            reverb(c, bus_wet, fx);
            if (g_stems_path) {
                stems[n][8 + c * 2] = static_cast<std::int16_t>(fx[0]);
                stems[n][9 + c * 2] = static_cast<std::int16_t>(fx[1]);
            }
            for (int s = 0; s < 2; ++s) bus_dry[s] += gain(fx[s], k.evol[s]);
            for (int s = 0; s < 2; ++s) {
                const std::int16_t o = clamp16(bus_dry[s] * master(k.mvol[s]) >> 15);
                if (!c) {
                    rings[1][s][n] = o;
                    ext[s] = gain(o, g_cores[1].avol[s]);
                } else {
                    out[n * 2 + s] = o;
                }
            }
        }
    }
    if (g_stems_path) g_stems.insert(g_stems.end(), &stems[0][0], &stems[0][0] + kBatch * kStems);
    write_rings(0, rings[0]);
    write_rings(1, rings[1]);
    if (count && ++ticks % 15000 == 0)
        std::fprintf(stderr, "[spu2] %.1f voices per batch (attack %.1f decay %.1f sustain %.1f release %.1f)\n", static_cast<double>(active) / ticks,
                     static_cast<double>(phases[1]) / ticks, static_cast<double>(phases[2]) / ticks, static_cast<double>(phases[3]) / ticks, static_cast<double>(phases[4]) / ticks);
    if (g_record) g_audio.insert(g_audio.end(), out, out + kBatch * 2);
    if (g_sink) g_sink(out, kBatch);
    feed_input(0);
    feed_input(1);
    g_next_tick += kBatch * kCyclesPerSample;
    kernel::schedule(g_next_tick, kernel::Job{kernel::kJobSpuTick});
}

void keep_ticking() {
    if (g_tick_pending) return;
    g_tick_pending = true;
    g_next_tick = kernel::now() + kBatch * kCyclesPerSample;
    kernel::schedule(g_next_tick, kernel::Job{kernel::kJobSpuTick});
}

std::uint32_t set_hi(std::uint32_t address, std::uint32_t v) { return ((v & 0xFu) << 16) | (address & 0xFFFFu); }
std::uint32_t set_lo(std::uint32_t address, std::uint32_t v) { return (address & 0xF0000u) | (v & 0xFFFFu); }

std::uint32_t read_voice(Core &k, std::uint32_t off) {
    if (off < 0x180u) {
        const Voice &v = k.voices[off >> 4];
        switch (off & 0xFu) {
        case 0x0: return v.voll;
        case 0x2: return v.volr;
        case 0x4: return v.pitch;
        case 0x6: return v.adsr1;
        case 0x8: return v.adsr2;
        case 0xA: return static_cast<std::uint32_t>(v.env.level);
        case 0xC: return static_cast<std::uint32_t>(v.vol[0].level);
        default: return static_cast<std::uint32_t>(v.vol[1].level);
        }
    }
    const Voice &v = k.voices[(off - 0x1C0u) / 12];
    const std::uint32_t nax = (v.block[0] + 1 + (v.position >> 14)) & kRamMask;
    switch ((off - 0x1C0u) % 12) {
    case 0: return v.ssa >> 16;
    case 2: return v.ssa & 0xFFFFu;
    case 4: return v.lsax >> 16;
    case 6: return v.lsax & 0xFFFFu;
    case 8: return nax >> 16;
    default: return nax & 0xFFFFu;
    }
}

void write_voice(Core &k, std::uint32_t off, std::uint32_t value) {
    if (off < 0x180u) {
        Voice &v = k.voices[off >> 4];
        switch (off & 0xFu) {
        case 0x0:
            v.voll = static_cast<std::uint16_t>(value);
            if (!(value & 0x8000u)) v.vol[0].level = static_cast<std::int16_t>(value << 1);
            break;
        case 0x2:
            v.volr = static_cast<std::uint16_t>(value);
            if (!(value & 0x8000u)) v.vol[1].level = static_cast<std::int16_t>(value << 1);
            break;
        case 0x4: v.pitch = static_cast<std::uint16_t>(value); break;
        case 0x6: v.adsr1 = static_cast<std::uint16_t>(value); break;
        case 0x8: v.adsr2 = static_cast<std::uint16_t>(value); break;
        case 0xA: v.env.level = static_cast<std::int16_t>(value); break;
        default: break;
        }
        return;
    }
    Voice &v = k.voices[(off - 0x1C0u) / 12];
    switch ((off - 0x1C0u) % 12) {
    case 0: v.ssa = set_hi(v.ssa, value); break;
    case 2: v.ssa = set_lo(v.ssa, value); break;
    case 4: v.lsax = set_hi(v.lsax, value); v.lsax_written = true; break;
    case 6: v.lsax = set_lo(v.lsax, value); v.lsax_written = true; break;
    case 8: v.next = set_hi(v.next, value); break;
    default: v.next = set_lo(v.next, value); break;
    }
}

void key(Core &k, std::uint32_t mask, bool on) {
    for (int i = 0; i < 24; ++i) {
        if (!(mask & (1u << i))) continue;
        Voice &v = k.voices[i];
        if (on) v.key_on = true;
        else if (v.key_on) v.key_on = false;
        else if (v.phase != kOff) v.phase = kRelease;
    }
}

// The busy phase of a block transfer ends when its completion interrupt is due.
std::uint16_t statx(Core &k) {
    if ((k.statx & 0x400u) && kernel::now() >= k.busy_until) k.statx = static_cast<std::uint16_t>((k.statx | 0x80u) & ~0x400u);
    return k.statx;
}

// ADMAS cleared: the stream stops at once. Drop queued halves (no stale PCM, no late DMA-done) and clear the input
// ring and its SPU RAM image, as the hardware's input buffer is reset.
void stop_adma(int core) {
    Core &k = g_cores[core];
    static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
    if (trace && (k.input_count || !k.transfers.empty())) {
        std::uint32_t bytes = 0;
        for (const Transfer &t : k.transfers) bytes += t.bytes;
        std::fprintf(stderr, "[spu2] core %d ADMA stop: dropped %u ring frames, %zu queued transfers (%u bytes)\n", core, k.input_count,
                     k.transfers.size(), bytes);
    }
    k.transfers.clear();
    k.input_count = k.input_read = 0;
    std::memset(k.input, 0, sizeof k.input);
    std::fill_n(g_ram.begin() + kInputBase[core], 0x400u, std::uint16_t{0});
}

std::uint32_t read_core(int core, std::uint32_t off) {
    Core &k = g_cores[core];
    if (off < 0x180u || (off >= 0x1C0u && off < 0x2E0u)) return read_voice(k, off);
    switch (off) {
    case 0x19A: return k.attr;
    case 0x19C: return k.irqa >> 16;
    case 0x19E: return k.irqa & 0xFFFFu;
    case 0x1A8: return k.tsa >> 16;
    case 0x1AA: return k.tsa & 0xFFFFu;
    case 0x1B0: return k.admas;
    case 0x340:
    case 0x342: {
        std::uint32_t endx = 0;
        for (int i = 0; i < 24; ++i)
            if (k.voices[i].end) endx |= 1u << i;
        return off == 0x340 ? endx & 0xFFFFu : endx >> 16;
    }
    case 0x344: {
        static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
        if (trace) ++g_statx_reads[core];
        return statx(k);
    }
    default: return k.regs[off >> 1];
    }
}

void write_core(int core, std::uint32_t off, std::uint32_t value) {
    Core &k = g_cores[core];
    static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
    if (trace && off >= 0x180u && !(off >= 0x1C0u && off < 0x2E0u) && off != 0x1AC)
        std::fprintf(stderr, "[spu2] core %d reg 0x%03X = 0x%04X\n", core, off, value);
    if (off < 0x180u || (off >= 0x1C0u && off < 0x2E0u)) {
        write_voice(k, off, value);
        return;
    }
    k.regs[off >> 1] = static_cast<std::uint16_t>(value);
    switch (off) {
    case 0x19A: {
        // STATX follows the ATTR DMA mode (bits 4-5): leaving DMA mode while idle drops "ready", entering it raises it.
        // sceSdInit's cold reset writes ATTR 0 then 0x8000 and waits for (STATX & 0x7FF) == 0; the DMA ISR and the
        // stop path wait for 0x80 before they clear the mode bits (LIBSD 0x2864, 0x2498).
        const unsigned old_mode = (k.attr >> 4) & 3u, mode = (value >> 4) & 3u;
        k.attr = static_cast<std::uint16_t>(value);
        if (!(value & 0x40u)) k.irq = false;
        statx(k);
        if (!mode && !(k.statx & 0x400u)) k.statx &= static_cast<std::uint16_t>(~0x80u);
        else if (!old_mode && mode) k.statx |= 0x80u;
        break;
    }
    case 0x19C: k.irqa = set_hi(k.irqa, value); break;
    case 0x19E: k.irqa = set_lo(k.irqa, value); break;
    case 0x1A0: key(k, value, true); break;
    case 0x1A2: key(k, value << 16, true); break;
    case 0x1A4: key(k, value, false); break;
    case 0x1A6: key(k, value << 16, false); break;
    case 0x1A8: k.tsa = set_hi(k.tsa, value); break;
    case 0x1AA: k.tsa = set_lo(k.tsa, value); break;
    case 0x1AC:
        check_irq(k.tsa, 1);
        g_ram[k.tsa] = static_cast<std::uint16_t>(value);
        k.tsa = (k.tsa + 1) & kRamMask;
        break;
    case 0x2E0:
    case 0x2E2: k.revb_pos = 0; break;
    case 0x1B0:
        k.admas = static_cast<std::uint16_t>(value);
        if (!(value & (1u << core))) stop_adma(core);
        break;
    case 0x340:
        for (int i = 0; i < 16; ++i) k.voices[i].end = false;
        break;
    case 0x342:
        for (int i = 16; i < 24; ++i) k.voices[i].end = false;
        break;
    default: break;
    }
}

std::uint16_t *master_reg(int core, std::uint32_t off) {
    Core &k = g_cores[core];
    switch (off) {
    case 0x0: return &k.mvol[0];
    case 0x2: return &k.mvol[1];
    case 0x4: return &k.evol[0];
    case 0x6: return &k.evol[1];
    case 0x8: return &k.avol[0];
    case 0xA: return &k.avol[1];
    case 0xC: return &k.bvol[0];
    case 0xE: return &k.bvol[1];
    default: return off >= 0x14u && off <= 0x26u ? &k.revb[(off - 0x14u) >> 1] : nullptr;
    }
}

std::uint32_t read_global(std::uint32_t off) {
    switch (off) {
    case 0x7C0: return g_spdif_out;
    case 0x7C2: return (g_cores[0].irq ? 4u : 0u) | (g_cores[1].irq ? 8u : 0u);
    case 0x7C6: return g_spdif_mode;
    case 0x7C8: return g_spdif_media;
    default: return 0;
    }
}

bool write_global(std::uint32_t off, std::uint32_t value) {
    switch (off) {
    case 0x7C0: g_spdif_out = static_cast<std::uint16_t>(value); return true;
    case 0x7C6: g_spdif_mode = static_cast<std::uint16_t>(value); return true;
    case 0x7C8: g_spdif_media = static_cast<std::uint16_t>(value); return true;
    default: return false;
    }
}

}

void reset() {
    kernel::register_job(kernel::kJobSpuTick, [](const kernel::Job &) { tick(); });
    std::fill(g_ram.begin(), g_ram.end(), 0);
    for (Core &k : g_cores) k = Core{};
    for (ReverbIo &io : g_reverb_io) io = ReverbIo{};
    std::memset(g_block_flags, 0, sizeof g_block_flags);
    std::memset(g_history, 0, sizeof g_history);
    g_one_shot_ends = 0;
    g_spdif_out = g_spdif_mode = g_spdif_media = 0;
    g_audio.clear();
    g_record = std::getenv("PS2_DUMP_AUDIO") != nullptr;
    g_stems.clear();
    g_stems_path = std::getenv("PS2_DUMP_STEMS");
    g_next_tick = 0;
    g_tick_pending = false;
}

std::uint16_t *ram() { return g_ram.data(); }

std::uint32_t read(std::uint32_t a, unsigned size) {
    keep_ticking();
    const std::uint32_t off = a & 0x7FEu;
    std::uint32_t value = 0;
    if (off < 0x760u) value = read_core((off & 0x400u) ? 1 : 0, off & 0x3FEu);
    else if (off < 0x7B0u) {
        if (const std::uint16_t *reg = master_reg((off - 0x760u) / 0x28, (off - 0x760u) % 0x28)) value = *reg;
    } else value = read_global(off);
    if (size == 4) value |= read(a + 2, 2) << 16;
    return value;
}

void write(std::uint32_t a, std::uint32_t v, unsigned size) {
    keep_ticking();
    if (size == 4) {
        write(a, v & 0xFFFFu, 2);
        write(a + 2, v >> 16, 2);
        return;
    }
    const std::uint32_t off = a & 0x7FEu;
    v &= 0xFFFFu;
    if (off < 0x760u) {
        write_core((off & 0x400u) ? 1 : 0, off & 0x3FEu, v);
        return;
    }
    static const bool trace = std::getenv("PS2_TRACE_SPU2") != nullptr;
    if (trace) std::fprintf(stderr, "[spu2] reg 0x%03X = 0x%04X\n", off, v);
    std::uint16_t *reg = nullptr;
    if (off < 0x7B0u) reg = master_reg((off - 0x760u) / 0x28, (off - 0x760u) % 0x28);
    if (reg) *reg = static_cast<std::uint16_t>(v);
    else if (!write_global(off, v)) {
        static bool reported[0x400];
        if (!reported[off >> 1]) {
            reported[off >> 1] = true;
            std::fprintf(stderr, "[spu2] unhandled write 0x%03X = 0x%04X\n", off, v);
        }
    }
}

void dma(int core, std::uint32_t madr, std::uint32_t words, bool to_spu, int channel) {
    keep_ticking();
    Core &k = g_cores[core];
    if (to_spu && (k.admas & (1u << core))) {
        k.transfers.push_back(Transfer{madr, words * 4, channel});
        feed_input(core);
        return;
    }
    const std::uint32_t halfwords = words * 2;
    if (to_spu) check_irq(k.tsa, halfwords);
    for (std::uint32_t i = 0; i < halfwords; ++i) {
        std::uint16_t *spu = &g_ram[(k.tsa + i) & kRamMask];
        std::uint8_t *iop = ram_ptr(madr + i * 2);
        if (to_spu) std::memcpy(spu, iop, 2);
        else std::memcpy(iop, spu, 2);
    }
    k.tsa = (k.tsa + halfwords) & kRamMask;
    const std::uint64_t done = kernel::now() + 64 + words / 4;
    k.statx = static_cast<std::uint16_t>((k.statx & ~0x80u) | 0x400u);
    k.busy_until = done;
    if (channel >= 0) kernel::schedule(done, kernel::Job{kernel::kJobDmaDone, static_cast<std::uint32_t>(channel)});
}

void set_sink(std::function<void(const std::int16_t *, std::size_t)> sink) { g_sink = std::move(sink); }

void dump_voices() {
    std::fprintf(stderr, "[spu2] STATX reads: core 0 %llu, core 1 %llu; one-shot voice ends %llu\n",
                 static_cast<unsigned long long>(g_statx_reads[0]), static_cast<unsigned long long>(g_statx_reads[1]),
                 static_cast<unsigned long long>(g_one_shot_ends));
    for (int c = 0; c < 2; ++c)
        for (int i = 0; i < 24; ++i) {
            const Voice &v = g_cores[c].voices[i];
            if (v.phase == kOff && !v.end) continue;
            const std::uint16_t header = g_ram[v.block[0] & kRamMask];
            std::fprintf(stderr, "[spu2] core %d voice %d phase %d ssa 0x%05X lsax 0x%05X block 0x%05X flags %X next 0x%05X pitch 0x%04X env %d end %d\n", c, i,
                         static_cast<int>(v.phase), v.ssa, v.lsax, v.block[0], header >> 8, v.next, v.pitch, v.env.level, v.end ? 1 : 0);
        }
}

namespace {

void write_wav(const char *path, const std::vector<std::int16_t> &samples, std::uint32_t channels) {
    std::FILE *f = std::fopen(path, "wb");
    if (!f) return;
    const std::uint32_t bytes = static_cast<std::uint32_t>(samples.size() * 2);
    const std::uint32_t header[] = {0x46464952u, 36 + bytes, 0x45564157u, 0x20746D66u, 16, 0x00000001u | (channels << 16),
                                    48000, 48000 * 2 * channels, (2 * channels) | (16u << 16), 0x61746164u, bytes};
    std::fwrite(header, 4, sizeof header / 4, f);
    std::fwrite(samples.data(), 2, samples.size(), f);
    std::fclose(f);
}

}

void dump_audio(const char *path) {
    write_wav(path, g_audio, 2);
    if (g_stems_path) write_wav(g_stems_path, g_stems, kStems);
}

}

namespace ps2::iop::spu2 {

void state(ps2::state::Stream &s) {
    s.tag("spu2");
    s.vec(g_ram);
    for (Core &k : g_cores) {
        if (s.hashing()) s.tag(&k == g_cores ? "spu2v0" : "spu2v1");  // hash sections only, to bisect
        s.pod(k.voices);
        if (s.loading())
            for (const Voice &v : k.voices)
                for (int i = 0; i < 2; ++i) block_flags(v)[i] = static_cast<std::uint8_t>((g_ram[v.block[i] & kRamMask] >> 8) & 7u);
        if (s.hashing()) s.tag(&k == g_cores ? "spu2c0" : "spu2c1");
        s.pod(k.attr);
        s.pod(k.admas);
        s.pod(k.irqa);
        s.pod(k.tsa);
        s.pod(k.mvol);
        s.pod(k.bvol);
        s.pod(k.avol);
        s.pod(k.evol);
        s.pod(k.irq);
        s.pod(k.input);
        s.pod(k.input_read);
        s.pod(k.input_count);
        s.deque(k.transfers, [&s](Transfer &t) {
            s.pod(t.madr);
            s.pod(t.bytes);
            s.pod(t.channel);
        });
        if (s.saving()) {
            k.regs[kShadowStatx] = k.statx;
            std::memcpy(&k.regs[kShadowRevb], k.revb, sizeof k.revb);
            k.regs[kShadowRevbPos] = static_cast<std::uint16_t>(k.revb_pos);
            k.regs[kShadowRevbPos + 1] = static_cast<std::uint16_t>(k.revb_pos >> 16);
            for (unsigned i = 0; i < 4; ++i) k.regs[kShadowBusy + i] = static_cast<std::uint16_t>(k.busy_until >> (16 * i));
        }
        s.pod(k.regs);
        k.statx = k.regs[kShadowStatx];
        std::memcpy(k.revb, &k.regs[kShadowRevb], sizeof k.revb);
        k.revb_pos = k.regs[kShadowRevbPos] | (static_cast<std::uint32_t>(k.regs[kShadowRevbPos + 1]) << 16);
        k.busy_until = 0;
        for (unsigned i = 0; i < 4; ++i) k.busy_until |= static_cast<std::uint64_t>(k.regs[kShadowBusy + i]) << (16 * i);
    }
    s.pod(g_spdif_out);
    s.pod(g_spdif_mode);
    s.pod(g_spdif_media);
    s.pod(g_next_tick);
    s.pod(g_tick_pending);
    if (s.loading()) {  // outside the savestate layout: start them as a fresh process does, so every load matches
        std::memset(g_history, 0, sizeof g_history);
        for (ReverbIo &io : g_reverb_io) io = ReverbIo{};
    }
}

}
