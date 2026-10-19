#pragma once

// VU0 macro mode (COP2) for decompiled functions: one helper per instruction, each calling the same ps2::vu
// implementation that the recompiled code calls (the COP2 emitters in recomp/codegen.cpp), so the VF registers, ACC,
// Q and the MAC/status flags come out bit-identical. Never compute VU0 math with host floats.
//
//   using namespace ps2::vu0;
//   lqc2(c, vf4, addr);                      // lqc2     vf4, 0(a0)
//   vmul(c, XYZ, vf5, vf4, vf5);             // vmul.xyz vf5, vf4, vf5
//   vaddbc(c, X, vf5, vf5, vf5, Lane::y);    // vaddy.x  vf5, vf5, vf5y
//   qmfc2(c, gpr::v0, vf5);                  // qmfc2    v0, vf5
//
// The field mask is the instruction's .xyzw suffix, encoded as in the instruction (X = 8, Y = 4, Z = 2, W = 1).
// Every op writes the same registers and flags as the original instruction, so a decompiled function that uses the
// original's VF registers leaves VU0 exactly as the recompiled one does.
#include "ps2/generated.hpp"

#include <cstdint>

namespace ps2::vu0 {

enum Vf : unsigned {
    vf0, vf1, vf2, vf3, vf4, vf5, vf6, vf7, vf8, vf9, vf10, vf11, vf12, vf13, vf14, vf15,
    vf16, vf17, vf18, vf19, vf20, vf21, vf22, vf23, vf24, vf25, vf26, vf27, vf28, vf29, vf30, vf31
};

// field masks (combine with |)
inline constexpr unsigned X = 8, Y = 4, Z = 2, W = 1, XY = X | Y, XYZ = X | Y | Z, XYZW = X | Y | Z | W;

// the broadcast lane of the bc forms (vaddy: Lane::y)
enum class Lane : unsigned { x, y, z, w };

inline std::uint32_t lane(const Cpu &c, Vf ft, Lane l) { return c.vu0.vf[ft].w[static_cast<unsigned>(l)]; }

// ---- transfers ----

// LQC2 / SQC2: the address is aligned down to 16 as the recompiled lq/sq do; a load into vf0 is read and dropped
inline void lqc2(Cpu &c, Vf ft, std::uint32_t addr) {
    if (ft) ld128(addr & ~15u, c.vu0.vf[ft]);
    else {
        Reg128 scratch;
        ld128(addr & ~15u, scratch);
    }
}
inline void sqc2(const Cpu &c, Vf fs, std::uint32_t addr) { st128(addr & ~15u, c.vu0.vf[fs]); }

// QMFC2 / QMTC2 without interlock (.ni, or a macro-only sequence); the .i forms wait for VU0 first
inline void qmfc2(Cpu &c, unsigned rt, Vf fs) {
    if (rt) c.r[rt] = c.vu0.vf[fs];
}
inline void qmtc2(Cpu &c, unsigned rt, Vf fd) {
    if (fd) c.vu0.vf[fd] = c.r[rt];
}
inline void qmfc2_i(Cpu &c, unsigned rt, Vf fs) {
    vu0_wait(c);
    qmfc2(c, rt, fs);
}
inline void qmtc2_i(Cpu &c, unsigned rt, Vf fd) {
    vu0_wait(c);
    qmtc2(c, rt, fd);
}

// The compiler's float4 gather before a QMTC2: the four words in GPRs x, y, z, w (MFC1'd floats) packed into t0 by
// PEXTLW t0, y, x; PEXTLW t1, w, z; PCPYLD t0, t1, t0. t0 = (x, y, z, w); t1 keeps (z, w, z.hi, w.hi) as the
// original leaves it.
inline void gather4(Cpu &c, unsigned x, unsigned y, unsigned z, unsigned w) {
    constexpr unsigned t0 = 8, t1 = 9;
    mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

// ---- arithmetic: fd = fs op ft, fs op ft.lane, fs op Q, fs op I ----

#define PS2_VU0_VEC(name, impl)                                                                                         \
    inline void v##name(Cpu &c, unsigned dest, Vf fd, Vf fs, Vf ft) { vu::impl(c.vu0, dest, fd, fs, ft); }              \
    inline void v##name##bc(Cpu &c, unsigned dest, Vf fd, Vf fs, Vf ft, Lane l) {                                       \
        vu::impl##bc(c.vu0, dest, fd, fs, lane(c, ft, l));                                                              \
    }                                                                                                                   \
    inline void v##name##q(Cpu &c, unsigned dest, Vf fd, Vf fs) { vu::impl##bc(c.vu0, dest, fd, fs, c.vu0.q); }        \
    inline void v##name##i(Cpu &c, unsigned dest, Vf fd, Vf fs) { vu::impl##bc(c.vu0, dest, fd, fs, c.vu0.i); }
PS2_VU0_VEC(add, add)
PS2_VU0_VEC(sub, sub)
PS2_VU0_VEC(mul, mul)
PS2_VU0_VEC(madd, madd)
PS2_VU0_VEC(msub, msub)
PS2_VU0_VEC(max, max)
PS2_VU0_VEC(mini, mini)
#undef PS2_VU0_VEC

// ---- arithmetic into ACC: ACC = fs op ft, ... ----

#define PS2_VU0_ACC(name, impl)                                                                                         \
    inline void v##name(Cpu &c, unsigned dest, Vf fs, Vf ft) { vu::impl(c.vu0, dest, fs, ft); }                        \
    inline void v##name##bc(Cpu &c, unsigned dest, Vf fs, Vf ft, Lane l) { vu::impl##bc(c.vu0, dest, fs, lane(c, ft, l)); } \
    inline void v##name##q(Cpu &c, unsigned dest, Vf fs) { vu::impl##bc(c.vu0, dest, fs, c.vu0.q); }                  \
    inline void v##name##i(Cpu &c, unsigned dest, Vf fs) { vu::impl##bc(c.vu0, dest, fs, c.vu0.i); }
PS2_VU0_ACC(adda, adda)
PS2_VU0_ACC(suba, suba)
PS2_VU0_ACC(mula, mula)
PS2_VU0_ACC(madda, madda)
PS2_VU0_ACC(msuba, msuba)
#undef PS2_VU0_ACC

// outer product: vopmula.xyz ACC, fs, ft then vopmsub.xyz fd, fs, ft gives fd = fs x ft
inline void vopmula(Cpu &c, Vf fs, Vf ft) { vu::opmula(c.vu0, fs, ft); }
inline void vopmsub(Cpu &c, Vf fd, Vf fs, Vf ft) { vu::opmsub(c.vu0, fd, fs, ft); }

// ---- moves and conversions (no flags) ----

inline void vmove(Cpu &c, unsigned dest, Vf ft, Vf fs) { vu::move(c.vu0, dest, ft, fs); }
inline void vmr32(Cpu &c, unsigned dest, Vf ft, Vf fs) { vu::mr32(c.vu0, dest, ft, fs); }
inline void vabs(Cpu &c, unsigned dest, Vf ft, Vf fs) { vu::abs(c.vu0, dest, ft, fs); }
// fraction: 0, 4, 12 or 15 (vftoi0 ... vftoi15)
inline void vftoi(Cpu &c, unsigned dest, Vf ft, Vf fs, int fraction) { vu::ftoi(c.vu0, dest, ft, fs, fraction); }
inline void vitof(Cpu &c, unsigned dest, Vf ft, Vf fs, int fraction) { vu::itof(c.vu0, dest, ft, fs, fraction); }

// ---- clip and the Q unit ----

inline void vclip(Cpu &c, Vf fs, Vf ft) { vu::clip(c.vu0, fs, ft); }
// Q = fs.fsf / ft.ftf, Q = sqrt(ft.ftf), Q = fs.fsf / sqrt(ft.ftf); vwaitq is a no-op here (Q is ready at once)
inline void vdiv(Cpu &c, Vf fs, Lane fsf, Vf ft, Lane ftf) { vu::div(c.vu0, lane(c, fs, fsf), lane(c, ft, ftf)); }
inline void vsqrt(Cpu &c, Vf ft, Lane ftf) { vu::sqrt(c.vu0, lane(c, ft, ftf)); }
inline void vrsqrt(Cpu &c, Vf fs, Lane fsf, Vf ft, Lane ftf) { vu::rsqrt(c.vu0, lane(c, fs, fsf), lane(c, ft, ftf)); }

}
