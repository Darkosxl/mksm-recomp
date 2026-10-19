// size_t strlen(const char *s) at 0x00474EDC: newlib's R5900 strlen. From a 16-byte aligned s it tests 16 bytes at a
// time with MMI (PSUBB/PNOR/PAND), from an 8-byte aligned s 8 at a time with the 64-bit borrow trick, otherwise
// byte by byte; every path ends in the byte loop from the block that holds the NUL.
//
// The loops keep their state in locals and write it to the registers only where the machine can see it: at each
// preemption check (only reached when c.budget < 0) and at the end. What the original leaves in its scratch
// registers (v0, v1, a0-a3, t0, t1, with their upper 64 bits) is reproduced exactly: callers ignore it, but thread
// contexts and the state hash do not.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint64_t kOnes = 0x0101010101010101ull;  // built with ori/dsll in the original
constexpr std::uint64_t kHighs = 0x8080808080808080ull;

// every byte minus one, without borrows between bytes (PSUBB with 0x01 bytes)
std::uint64_t bytes_minus_one(std::uint64_t x) {
    std::uint64_t r = 0;
    for (int i = 0; i < 64; i += 8) r |= static_cast<std::uint64_t>(static_cast<std::uint8_t>((x >> i) - 1u)) << i;
    return r;
}

// d = (q - 0x01 bytes) & ~q, m = d & 0x80 bytes: m has the high bit set in exactly the zero bytes of q
void test16(const Reg128 &q, Reg128 &d, Reg128 &m) {
    for (int h = 0; h < 2; ++h) {
        d.d[h] = bytes_minus_one(q.d[h]) & ~q.d[h];
        m.d[h] = d.d[h] & kHighs;
    }
}

// 16 bytes at a time from p = a1 (16-byte aligned). Leaves a0 at the quadword holding the NUL.
bool scan16(Cpu &c) {
    std::uint32_t p = c.r[a1].w[0];
    Reg128 q, d, m;
    ld128(p & ~15u, q);
    test16(q, d, m);
    c.r[t0].d[0] = c.r[t0].d[1] = kOnes;   // pcpyld t0, v0, v0
    c.r[t1].d[0] = c.r[t1].d[1] = kHighs;  // pcpyld t1, a0, a0
    c.r[a0].d[0] = kHighs;
    c.r[v0] = m;
    c.r[v1].d[0] = m.d[1];                 // pcpyud v1, v0, t0
    c.r[v1].d[1] = kOnes;
    c.r[a2].d[0] = m.d[0] | m.d[1];
    tick(c, 18);
    if (m.d[0] | m.d[1]) {
        c.r[a0].d[0] = c.r[a1].d[0];
        return true;
    }
    p += 16;
    tick(c, 1);
    for (;;) { // 0x00474F5C
        ld128(p & ~15u, q);
        test16(q, d, m);
        tick(c, 9);
        if (m.d[0] | m.d[1]) break;
        p += 16;
        if (c.budget < 0) {
            c.r[v0] = d;
            c.r[v1].d[0] = 0;
            c.r[v1].d[1] = c.r[a2].d[1];   // pcpyud v1, a0, a2 takes a2's (untouched) upper half
            c.r[a0] = m;
            set32(c.r[a1], p);
            if (poll(c, 0x00474F5Cu)) return false;
        }
    }
    c.r[v0] = d;
    c.r[v1].d[0] = m.d[0] | m.d[1];
    c.r[v1].d[1] = c.r[a2].d[1];
    c.r[a0] = m;
    set32(c.r[a1], p);
    tick(c, 2);
    c.r[a0].d[0] = c.r[a1].d[0];
    return true;
}

// 8 bytes at a time from p = a1 (8 but not 16-byte aligned). Leaves a0 at the doubleword holding the NUL.
bool scan8(Cpu &c) {
    std::uint32_t p = c.r[a1].w[0];
    std::uint64_t x = ld64(p);
    std::uint64_t m = (x - kOnes) & ~x & kHighs;
    c.r[a0].d[0] = kHighs;
    c.r[v0].d[0] = m;
    c.r[v1].d[0] = ~x;
    tick(c, 14);
    if (m) {
        c.r[a0].d[0] = c.r[a1].d[0];
        return true;
    }
    c.r[a2].d[0] = kOnes;
    p += 8;
    tick(c, 8);
    for (;;) { // 0x00474FE0
        x = ld64(p);
        m = (x - kOnes) & ~x & kHighs;
        tick(c, 7);
        if (m) break;
        p += 8;
        if (c.budget < 0) {
            c.r[v0].d[0] = 0;
            c.r[v1].d[0] = ~x;
            set32(c.r[a1], p);
            if (poll(c, 0x00474FE0u)) return false;
        }
    }
    c.r[v0].d[0] = m;
    c.r[v1].d[0] = ~x;
    set32(c.r[a1], p);
    c.r[a0].d[0] = c.r[a1].d[0];
    tick(c, 1);
    return true;
}

// byte by byte from a0 (0x00475000); the length goes to v0
bool byte_loop(Cpu &c) {
    const std::uint32_t start = c.r[a3].w[0];
    std::uint32_t p = c.r[a0].w[0];
    bool moved = false;
    for (std::int8_t b; (b = rd<std::int8_t>(p)) != 0;) {
        tick(c, 6);
        ++p;
        moved = true;
        if (c.budget < 0) {
            c.r[v0].sd[0] = b;
            set32(c.r[a0], p);
            if (poll(c, 0x00475000u)) return false;
        }
    }
    tick(c, 6 + 2);
    if (moved) set32(c.r[a0], p);
    set32(c.r[v0], p - start);
    return true;
}

}

PS2_DECOMP(00474EDC, strlen) {
    const std::uint64_t s = c.r[a0].d[0];
    c.r[a3].d[0] = s; // the start, for the length at the end
    c.r[v0].d[0] = s & 7u;
    tick(c, 3);
    if ((s & 7u) == 0) {
        c.r[v1].d[0] = s & 15u;
        c.r[v0].d[0] = kOnes;
        c.r[a1].d[0] = s;
        tick(c, 10);
        if (!((s & 15u) ? scan8(c) : scan16(c))) return;
    }
    byte_loop(c);
}
