#include "vif.hpp"

#include "dmac.hpp"
#include "gs/drawdbg.hpp"
#include "gs/gif.hpp"
#include "gs/queue.hpp"
#include "hw.hpp"
#include "native.hpp"
#include "seamv.hpp"
#include "vu_micro.hpp"

#include "ps2/state.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

namespace ps2::vif {

namespace {

struct Unit {
    std::uint32_t stat = 0, err = 0, mark = 0, cycle = 0, mode = 0, num = 0, mask = 0, code = 0;
    std::uint32_t itops = 0, base = 0, ofst = 0, tops = 0, itop = 0, top = 0;
    std::uint32_t row[4] = {}, col[4] = {};
    bool dbf = false, stalled = false;
    std::vector<std::uint32_t> pending;
    std::uint32_t phase = 0;  // word position of pending[0] within its quadword in the VIF stream
};

Unit g_units[2];
Unit g_vu_side;
std::uint64_t g_commands[2][128];
std::uint8_t g_dry_run[16384];

// Seam V records (seamv.hpp): the VIF1 payload being run on the VU1 side and the guest address it was DMA'd from
thread_local const std::uint8_t *t_payload = nullptr, *t_payload_end = nullptr;
thread_local std::uint32_t t_source = ~0u, t_posted_source = ~0u;

bool on_vu_thread() { return gs::queue::role() == gs::queue::Role::Vu; }
bool shadow(int unit) { return unit == 1 && (gs::queue::vu_active() || null_sink()) && !on_vu_thread(); }
Unit &state(int unit) { return unit == 1 && on_vu_thread() ? g_vu_side : g_units[unit]; }

std::uint8_t *vu_data(int unit) { return unit ? g_vu1_mem : g_vu0_mem; }
std::uint32_t vu_qwords(int unit) { return unit ? 1024u : 256u; }

std::uint32_t element_bits(std::uint32_t vl) {
    switch (vl) {
    case 0: return 32;
    case 1: return 16;
    case 2: return 8;
    default: return 16;
    }
}

std::uint32_t unpack_words(std::uint32_t cmd, const Unit &u, std::uint32_t num) {
    const std::uint32_t vn = (cmd >> 26) & 3u, vl = (cmd >> 24) & 3u;
    const std::uint32_t cl = u.cycle & 0xFFu, wl = (u.cycle >> 8) & 0xFFu;
    std::uint32_t data = num;
    if (wl > cl && wl) data = (num / wl) * cl + std::min(num % wl, cl);
    const std::uint32_t bits = (vn == 3 && vl == 3) ? 16u : (vn + 1) * element_bits(vl);
    return (data * bits + 31) / 32;
}

// kind: 0 MSCAL, 1 MSCALF, 2 MSCNT
void run_vu(int unit, std::uint32_t address, int kind) {
    Unit &u = state(unit);
    if (unit == 1) {
        u.top = u.tops;
        u.itop = u.itops;
        u.dbf = !u.dbf;
        u.tops = u.base + (u.dbf ? u.ofst : 0);
        if (shadow(unit)) return;
        if (seamv::on()) seamv::program(kind, address, u.base, u.ofst, u.tops, u.top, u.itop, u.dbf);
        vu::flush_kicks();
        vu::set_tops(u.top, u.itop);
        if (native::active() && native::program(kind, u.top)) return;
        if (native::r14() && native::r14_defer(kind, address)) return;
    } else {
        u.itop = u.itops;
        vu::set_tops(0, u.itop);
    }
    vu::run(unit, address);
}

template <std::uint32_t Bits, std::uint32_t Components, bool Usn>
void unpack_fast(std::uint8_t *mem, std::uint32_t mask, std::uint32_t addr, std::uint32_t wl, std::uint32_t skip, const std::uint8_t *bytes, std::uint32_t num) {
    std::uint32_t cycle = 0;
    for (std::uint32_t n = 0; n < num; ++n) {
        std::uint32_t value[4];
        for (std::uint32_t j = 0; j < Components; ++j) {
            const std::size_t at = static_cast<std::size_t>(n) * Components + j;
            if constexpr (Bits == 32) {
                std::memcpy(&value[j], bytes + at * 4, 4);
            } else if constexpr (Bits == 16) {
                std::uint16_t h;
                std::memcpy(&h, bytes + at * 2, 2);
                value[j] = Usn ? h : static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(h)));
            } else {
                value[j] = Usn ? bytes[at] : static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(bytes[at])));
            }
        }
        if constexpr (Components == 1) {
            value[1] = value[2] = value[3] = value[0];
        } else if constexpr (Components == 2) {
            value[2] = value[0];
            value[3] = value[1];
        } else if constexpr (Components == 3) {
            value[3] = 0;
        }
        std::memcpy(mem + (addr & mask) * 16, value, 16);
        ++addr;
        if (++cycle >= wl) {
            addr += skip;
            cycle = 0;
        }
    }
}

using FastUnpack = void (*)(std::uint8_t *, std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t, const std::uint8_t *, std::uint32_t);

template <std::uint32_t Bits>
constexpr FastUnpack fast_pair(std::uint32_t components, bool usn) {
    switch (components) {
    case 1: return usn ? unpack_fast<Bits, 1, true> : unpack_fast<Bits, 1, false>;
    case 2: return usn ? unpack_fast<Bits, 2, true> : unpack_fast<Bits, 2, false>;
    case 3: return usn ? unpack_fast<Bits, 3, true> : unpack_fast<Bits, 3, false>;
    default: return usn ? unpack_fast<Bits, 4, true> : unpack_fast<Bits, 4, false>;
    }
}

constexpr FastUnpack kFastUnpack[4][4][2] = {
    {{fast_pair<32>(1, false), fast_pair<32>(1, true)}, {fast_pair<32>(2, false), fast_pair<32>(2, true)}, {fast_pair<32>(3, false), fast_pair<32>(3, true)}, {fast_pair<32>(4, false), fast_pair<32>(4, true)}},
    {{fast_pair<16>(1, false), fast_pair<16>(1, true)}, {fast_pair<16>(2, false), fast_pair<16>(2, true)}, {fast_pair<16>(3, false), fast_pair<16>(3, true)}, {fast_pair<16>(4, false), fast_pair<16>(4, true)}},
    {{fast_pair<8>(1, false), fast_pair<8>(1, true)}, {fast_pair<8>(2, false), fast_pair<8>(2, true)}, {fast_pair<8>(3, false), fast_pair<8>(3, true)}, {fast_pair<8>(4, false), fast_pair<8>(4, true)}},
    {{fast_pair<16>(1, false), fast_pair<16>(1, true)}, {fast_pair<16>(2, false), fast_pair<16>(2, true)}, {fast_pair<16>(3, false), fast_pair<16>(3, true)}, {fast_pair<16>(4, false), fast_pair<16>(4, true)}},
};

// V3 unpacks write the element that follows the vector into W (the VIF fetches past it), except where PCSX2's tested
// unpackers zero it; `align` is the word position of the first data word within its quadword.
bool v3_keeps_w(std::uint32_t vl, std::uint32_t n, std::uint32_t align) {
    switch (vl) {
    case 0: return (n & 1u) == (align & 1u);
    case 1: return !(n & 1u) || (((n + 1) >> 2) & 3u) != (align ? align : 4u) - 1;
    default: return n == 0 && (align & 1u);
    }
}

void unpack(int unit, std::uint32_t cmd, const std::uint32_t *data, std::uint32_t align, std::size_t avail) {
    Unit &u = state(unit);
    const bool dry = shadow(unit);
    if (dry && u.mode != 2) {
        u.num = 0;
        return;
    }
    const std::uint32_t vn = (cmd >> 26) & 3u, vl = (cmd >> 24) & 3u;
    const bool masked = (cmd >> 28) & 1u;
    const bool usn = (cmd >> 14) & 1u;
    std::uint32_t num = (cmd >> 16) & 0xFFu;
    if (!num) num = 256;
    std::uint32_t addr = cmd & 0x3FFu;
    if (unit == 1 && ((cmd >> 15) & 1u)) addr += u.tops;
    if (unit == 1 && !dry && seamv::on()) {
        const auto *at = reinterpret_cast<const std::uint8_t *>(data);
        const std::uint32_t source = t_source != ~0u && at >= t_payload && at < t_payload_end ? t_source + static_cast<std::uint32_t>(at - t_payload) : ~0u;
        const std::uint32_t words = static_cast<std::uint32_t>(std::min<std::size_t>(unpack_words(cmd, u, num), avail));
        seamv::unpack(cmd, source, addr, num, u.cycle, u.mode, u.mask, u.tops, data, words);
    }
    const std::uint32_t cl = u.cycle & 0xFFu, wl = (u.cycle >> 8) & 0xFFu;
    const std::uint32_t components = vn + 1;
    const std::uint32_t bits = element_bits(vl);
    std::size_t bit_pos = 0;
    auto read_element = [&]() -> std::uint32_t {
        const std::size_t word = bit_pos / 32, shift = bit_pos % 32;
        std::uint32_t raw = word < avail ? data[word] >> shift : 0u;
        if (bits < 32) raw &= (1u << bits) - 1u;
        bit_pos += bits;
        if (bits == 16) return usn ? raw : static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(raw)));
        if (bits == 8) return usn ? raw : static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(raw)));
        return raw;
    };
    std::uint32_t cycle = 0;
    std::uint8_t *mem = dry ? g_dry_run : vu_data(unit);
    const std::uint32_t wrap = vu_qwords(unit);
    // the qwords the unpack can write: wl of every cl (or wl in a row when wl > cl)
    const std::uint32_t span = wl ? (num + wl - 1) / wl * std::max(cl, wl) : 1024u;
    const bool reach_kicks = unit == 1 && !dry && vu::kicks_reached(addr % wrap, span);
    if (!masked && u.mode == 0 && !(wl > cl) && !(vn == 3 && vl == 3) && vn != 2) {
        kFastUnpack[vl][vn][usn ? 1 : 0](mem, wrap - 1, addr, wl, cl - wl, reinterpret_cast<const std::uint8_t *>(data), num);
        for (std::uint32_t n = 0, cycle = 0; reach_kicks && n < num; ++n) {
            vu::vif_wrote(addr, 0xFu);
            ++addr;
            if (++cycle >= wl) {
                addr += cl - wl;
                cycle = 0;
            }
        }
        u.num = 0;
        return;
    }
    std::uint32_t consumed = 0;
    for (std::uint32_t n = 0; n < num; ++n) {
        const bool fill = wl > cl && cycle >= cl;
        std::uint32_t value[4] = {0, 0, 0, 0};
        if (!fill) {
            if (vn == 3 && vl == 3) {
                const std::uint32_t c = read_element() & 0xFFFFu;
                value[0] = (c & 0x1Fu) << 3;
                value[1] = ((c >> 5) & 0x1Fu) << 3;
                value[2] = ((c >> 10) & 0x1Fu) << 3;
                value[3] = ((c >> 15) & 1u) << 7;
            } else {
                for (std::uint32_t j = 0; j < components; ++j) value[j] = read_element();
                if (components == 1) value[1] = value[2] = value[3] = value[0];
                else if (components == 2) { value[2] = value[0]; value[3] = value[1]; }
                else if (components == 3 && v3_keeps_w(vl, consumed, align)) {
                    const std::size_t at = bit_pos;
                    value[3] = read_element();
                    bit_pos = at;
                }
            }
            ++consumed;
        }
        std::uint8_t *q = mem + (addr % wrap) * 16;
        const std::uint32_t mrow = std::min<std::uint32_t>(cycle, 3u);
        std::uint32_t lanes = 0;
        for (std::uint32_t j = 0; j < 4; ++j) {
            std::uint32_t m = masked ? (u.mask >> ((mrow * 4 + j) * 2)) & 3u : 0u;
            if (fill && m == 0) m = 1;
            std::uint32_t out;
            if (m == 3) continue;
            lanes |= 1u << j;
            if (m == 1) out = u.row[j];
            else if (m == 2) out = u.col[mrow];
            else if (u.mode == 1) out = value[j] + u.row[j];
            else if (u.mode == 2) { out = value[j] + u.row[j]; u.row[j] = out; }
            else out = value[j];
            std::memcpy(q + j * 4, &out, 4);
        }
        if (reach_kicks) vu::vif_wrote(addr % wrap, lanes);
        ++addr;
        ++cycle;
        if (cl >= wl) {
            if (cycle >= wl) {
                addr += cl - wl;
                cycle = 0;
            }
        } else if (cycle >= wl) {
            cycle = 0;
        }
    }
    u.num = 0;
}

std::uint32_t data_words(int unit, std::uint32_t cmd) {
    const Unit &u = state(unit);
    const std::uint32_t op = (cmd >> 24) & 0x7Fu;
    const std::uint32_t num = (cmd >> 16) & 0xFFu;
    switch (op) {
    case 0x20: return 1;
    case 0x30: case 0x31: return 4;
    case 0x4A: return (num ? num : 256u) * 2u;
    case 0x50: case 0x51: return ((cmd & 0xFFFFu) ? (cmd & 0xFFFFu) : 0x10000u) * 4u;
    default:
        if ((op & 0x60u) == 0x60u) return unpack_words(cmd, u, num ? num : 256u);
        return 0;
    }
}

void execute(int unit, std::uint32_t cmd, const std::uint32_t *data, std::uint32_t align, std::size_t avail) {
    Unit &u = state(unit);
    const std::uint32_t op = (cmd >> 24) & 0x7Fu, imm = cmd & 0xFFFFu, num = (cmd >> 16) & 0xFFu;
    u.code = cmd;
    if (!on_vu_thread()) ++g_commands[unit][op];
    // R14: a deferred body runs once the codes that follow its MSCNT stop being data for it (the colour UNPACK)
    if (native::g_r14_deferred && unit == 1 && !shadow(unit) && (op & 0x60u) != 0x60u && op != 0x00 && op != 0x01 && op != 0x20 && op != 0x30)
        native::r14_run();
    static const long long trace_frame = std::getenv("PS2_TRACE_GSFRAME") ? std::atoll(std::getenv("PS2_TRACE_GSFRAME")) : -1;
    if (unit == 1 && !shadow(unit) && trace_frame >= 0 && static_cast<long long>(ps2::frame_count()) == trace_frame && op != 0x50 && op != 0x51) {
        std::fprintf(stderr, "[vif] cmd %08x cycle %04x mode %u mask %08x tops %03x", cmd, u.cycle, u.mode, u.mask, u.tops);
        if ((op & 0x60u) == 0x60u) {
            std::fprintf(stderr, " unpack vn%u vl%u num %u addr %03x%s%s%s |", (cmd >> 26) & 3u, (cmd >> 24) & 3u, num ? num : 256u, cmd & 0x3FFu,
                         (cmd >> 14) & 1u ? " usn" : "", (cmd >> 15) & 1u ? " +tops" : "", (cmd >> 28) & 1u ? " masked" : "");
            const std::uint32_t words = std::min<std::uint32_t>(unpack_words(cmd, u, num ? num : 256u), 12u);
            for (std::uint32_t i = 0; i < words; ++i) std::fprintf(stderr, " %08x", data[i]);
        }
        std::fprintf(stderr, "\n");
    }
    switch (op) {
    case 0x00: break;
    case 0x01: u.cycle = imm; break;
    case 0x02: u.ofst = imm & 0x3FFu; u.dbf = false; u.tops = u.base; break;
    case 0x03: u.base = imm & 0x3FFu; break;
    case 0x04: u.itops = imm & 0x3FFu; break;
    case 0x05: u.mode = imm & 3u; break;
    case 0x06: gif::set_path3_masked((imm >> 15) & 1u); break;
    case 0x07: u.mark = imm; break;
    case 0x10: case 0x11: case 0x13:
        if (unit == 1 && !shadow(unit)) vu::flush_kicks();
        break;
    case 0x14: case 0x15:
        if (unit == 1 && !shadow(unit) && gs::drawdbg::enabled()) gs::drawdbg::vu1_start(imm * 8u, g_vu1_code);
        if (unit == 1 && !shadow(unit) && (native::active() || native::r14())) native::mscal(imm * 8u);
        run_vu(unit, imm * 8u, op == 0x15 ? 1 : 0);
        break;
    case 0x17: run_vu(unit, shadow(unit) ? 0u : vu::tpc(unit), 2); break;
    case 0x20: u.mask = data[0]; break;
    case 0x30: std::memcpy(u.row, data, 16); break;
    case 0x31: std::memcpy(u.col, data, 16); break;
    case 0x4A: {
        if (shadow(unit)) break;
        if (unit == 1) vu::flush_kicks();
        std::uint8_t *code = unit ? g_vu1_code : g_vu0_code;
        const std::uint32_t size = unit ? 16384u : 4096u;
        const std::uint32_t count = num ? num : 256u;
        bool changed = false;
        for (std::uint32_t i = 0; i < count; ++i) {
            std::uint8_t *at = code + ((imm * 8u + i * 8u) & (size - 1));
            if (std::memcmp(at, data + i * 2, 8) == 0) continue;
            std::memcpy(at, data + i * 2, 8);
            changed = true;
        }
        if (changed) vu::code_changed(unit);
        break;
    }
    case 0x50: case 0x51:
        if (shadow(unit)) gif::scan_signals(2, reinterpret_cast<const std::uint8_t *>(data), imm ? imm : 0x10000u);
        else gif::transfer(2, reinterpret_cast<const std::uint8_t *>(data), imm ? imm : 0x10000u);
        break;
    default:
        if ((op & 0x60u) == 0x60u) unpack(unit, cmd, data, align, avail);
        else std::fprintf(stderr, "[vif%d] unknown command 0x%08X\n", unit, cmd);
        break;
    }
    if ((cmd & 0x80000000u) && !(u.err & 1u)) {
        u.stat |= 0xC00u;
        u.stalled = true;
        if (!on_vu_thread()) hw::intc_raise(4u + static_cast<unsigned>(unit));
    }
}

std::size_t run(int unit, const std::uint32_t *words, std::size_t count, std::uint32_t phase) {
    Unit &u = state(unit);
    std::size_t pos = 0;
    while (pos < count && !u.stalled) {
        const std::uint32_t cmd = words[pos];
        const std::size_t start = pos + 1;
        const std::uint32_t need = data_words(unit, cmd);
        if (start + need > count) break;
        execute(unit, cmd, words + start, static_cast<std::uint32_t>(phase + start) & 3u, count - start);
        pos = start + need;
    }
    return pos;
}

void process(int unit) {
    Unit &u = state(unit);
    const std::size_t pos = run(unit, u.pending.data(), u.pending.size(), u.phase);
    u.pending.erase(u.pending.begin(), u.pending.begin() + static_cast<std::ptrdiff_t>(pos));
    u.phase = static_cast<std::uint32_t>(u.phase + pos) & 3u;
}

}

bool null_sink() {
    static const bool on = [] {
        const char *e = std::getenv("PS2_VU1_NULL");
        if (!e || !*e || *e == '0') return false;
        std::fprintf(stderr, "[vif] PS2_VU1_NULL: VIF1 is walked as a shadow only; VU1 and GIF paths 1/2 never run\n");
        return true;
    }();
    return on;
}

void posted_source(std::uint32_t guest) { t_posted_source = guest; }

void reset() {
    for (Unit &u : g_units) u = Unit{};
}

void reset_vu_side() { g_vu_side = Unit{}; }

void stats() {
    for (int u = 0; u < 2; ++u) {
        std::fprintf(stderr, "[vif%d]", u);
        for (int op = 0; op < 128; ++op)
            if (g_commands[u][op]) std::fprintf(stderr, " %02X:%llu", op, static_cast<unsigned long long>(g_commands[u][op]));
        std::fprintf(stderr, "\n");
    }
}

void transfer(int unit, const std::uint8_t *data, std::uint32_t qwc) {
    if (shadow(unit) && gs::queue::vu_active())
        gs::queue::vu().post(gs::queue::kVif1, qwc,
                             gs::drawdbg::enabled() ? gs::drawdbg::vif1_ra() : seamv::on() ? seamv::guest_address(data) : 0u, data, qwc * 16);
    if (unit == 1 && seamv::on() && !shadow(unit)) {
        t_payload = data;
        t_payload_end = data + static_cast<std::size_t>(qwc) * 16;
        t_source = !on_vu_thread() ? seamv::guest_address(data) : gs::drawdbg::enabled() ? ~0u : t_posted_source;
    }
    Unit &u = state(unit);
    if (u.pending.empty() && !u.stalled) {
        const auto *words = reinterpret_cast<const std::uint32_t *>(data);
        const std::size_t count = static_cast<std::size_t>(qwc) * 4;
        const std::size_t pos = run(unit, words, count, 0);
        if (pos < count) u.pending.assign(words + pos, words + count);
        u.phase = static_cast<std::uint32_t>(pos) & 3u;
        return;
    }
    const std::size_t old = u.pending.size();
    u.pending.resize(old + static_cast<std::size_t>(qwc) * 4);
    std::memcpy(u.pending.data() + old, data, static_cast<std::size_t>(qwc) * 16);
    if (unit == 1 && seamv::on() && !shadow(unit)) {  // a code left over from the last packet: its data starts in this one
        t_payload = reinterpret_cast<const std::uint8_t *>(u.pending.data() + old);
        t_payload_end = reinterpret_cast<const std::uint8_t *>(u.pending.data() + u.pending.size());
    }
    process(unit);
}

bool stalled(int unit) { return state(unit).stalled; }

std::uint32_t read(int unit, std::uint32_t reg) {
    const Unit &u = state(unit);
    switch (reg) {
    case 0x00: return u.stat | (u.dbf ? 0x80u : 0u);
    case 0x20: return u.err;
    case 0x30: return u.mark;
    case 0x40: return u.cycle;
    case 0x50: return u.mode;
    case 0x60: return u.num;
    case 0x70: return u.mask;
    case 0x80: return u.code;
    case 0x90: return u.itops;
    case 0xA0: return u.base;
    case 0xB0: return u.ofst;
    case 0xC0: return u.tops;
    case 0xD0: return u.itop;
    case 0xE0: return u.top;
    default:
        if (reg >= 0x100 && reg < 0x140) return u.row[(reg - 0x100) >> 4];
        if (reg >= 0x140 && reg < 0x180) return u.col[(reg - 0x140) >> 4];
        return 0;
    }
}

void write(int unit, std::uint32_t reg, std::uint32_t value) {
    if (shadow(unit) && gs::queue::vu_active()) gs::queue::vu().post(gs::queue::kVif1Write, reg, value, nullptr, 0);
    Unit &u = state(unit);
    switch (reg) {
    case 0x10:
        if (value & 1u) {
            u = Unit{};
        }
        if (value & 8u) {
            u.stat &= ~0x3F00u;
            if (u.stalled) {
                u.stalled = false;
                process(unit);
                if (!u.stalled && !on_vu_thread()) dmac::resume(unit);
            }
        }
        break;
    case 0x20: u.err = value; break;
    case 0x30: u.mark = value; break;
    default:
        if (reg >= 0x100 && reg < 0x140) u.row[(reg - 0x100) >> 4] = value;
        else if (reg >= 0x140 && reg < 0x180) u.col[(reg - 0x140) >> 4] = value;
        break;
    }
}

}

namespace ps2::vif {

void state(ps2::state::Stream &s) {
    s.tag("vif");
    // Hashing compares runs across thread layouts: "vif" is what the EE sees (VIF0, VIF1 or its emu-side shadow),
    // "vifvu" the VIF1 that feeds VU1 (g_vu_side only while the VU1 thread runs).
    const bool hashing = s.hashing();
    Unit *const units[3] = {&g_units[0], &g_units[1], hashing ? nullptr : &g_vu_side};
    for (Unit *u : units) {
        if (!u) {
            s.tag("vifvu");
            u = gs::queue::vu_active() ? &g_vu_side : &g_units[1];
        }
        s.pod(u->stat);
        s.pod(u->err);
        s.pod(u->mark);
        s.pod(u->cycle);
        s.pod(u->mode);
        s.pod(u->num);
        s.pod(u->mask);
        s.pod(u->code);
        s.pod(u->itops);
        s.pod(u->base);
        s.pod(u->ofst);
        s.pod(u->tops);
        s.pod(u->itop);
        s.pod(u->top);
        s.pod(u->row);
        s.pod(u->col);
        s.pod(u->dbf);
        s.pod(u->stalled);
        s.vec(u->pending);
    }
    // A state saved without the VU1 thread has a blank VU-side VIF1 (it never ran); with the thread on, that blank copy
    // would drive VU1 (CYCLE/MASK/ROW/ERR all zero) instead of the VIF1 the game set up, so seed it from VIF1.
    if (s.loading() && gs::queue::vu_active()) {
        const Unit &v = g_vu_side;
        const bool blank = !(v.stat | v.err | v.mark | v.cycle | v.mode | v.num | v.mask | v.code | v.itops | v.base | v.ofst | v.tops |
                             v.itop | v.top | v.row[0] | v.row[1] | v.row[2] | v.row[3] | v.col[0] | v.col[1] | v.col[2] | v.col[3]) &&
                           v.pending.empty();
        if (blank) g_vu_side = g_units[1];
    }
}

}
