#include "ps2/vu_ops.hpp"

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_7AA97847560D280F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0B28;
L_07F8: { ++fl.t; set_vi(i3, vu::top()); }
L_0800: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i1, v); } }
L_0808: { ++fl.t; }
L_0810: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0818: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0820: { ++fl.t; set_vi(i1, i12 & i1); }
L_0828: { ++fl.t; set_vi(i2, i10 + 0u); }
L_0830: { ++fl.t; pend = 0u == i1; }
L_0838: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0878; }
L_0840: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0848: { ++fl.t; set_vi(i4, i1 + 1u); }
L_0850: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } n9 = vfix(vload(f9)); }
L_0858: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0860: { ++fl.t; }
L_0868: { ++fl.t; pend = 0u != i4; }
L_0870: { ++fl.t; { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f9, 16); set_vi(i2, i2 + 1u); } }
    if (pend) { pend = false; goto L_0850; }
L_0878: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i4, v); } }
L_0880: { ++fl.t; }
L_0888: { ++fl.t; }
L_0890: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } n9 = vfix(vload(f9)); }
L_0898: { ++fl.t; set_vi(i4, i12 & i4); }
L_08A0: { ++fl.t; set_vi(i4, i4 + i4); }
L_08A8: { ++fl.t; set_vi(i4, i4 + i3); }
L_08B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } }
L_08B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } n10 = vfix(vload(f10)); }
L_08C0: { ++fl.t; const v4u uv = vitof(vload(f15), 0); { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f9, 16); set_vi(i2, i2 + 1u); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(f11)); }
L_08C8: { ++fl.t; const v4u uv = vitof(vload(f10), 12); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(f10)); }
L_08D0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n11[0])); vstore(facc, uv); nacc = uv; }
L_08D8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n11[1])); vstore(facc, uv); nacc = uv; }
L_08E0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n11[2])); vstore(facc, uv); nacc = uv; }
L_08E8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); set_vi(i5, f15.w[3]); vstore(f17, uv); }
L_08F0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n11[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); nacc = uv; }
L_08F8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n11[1])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, uv); nacc = uv; }
L_0900: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n11[2])); f12.w[0] = f10.w[0]; f12.w[1] = f10.w[1]; f12.w[2] = f10.w[2]; f12.w[3] = f10.w[3]; vstore(facc, uv); n12 = vfix(vload(f12)); nacc = uv; }
L_0908: { ++fl.t; const std::uint32_t uclip = clip_value(r, f17, f17.w[3]); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } r.clip = uclip; fl.set_clip(uclip, fl.t); n10 = vfix(vload(f10)); }
L_0910: { ++fl.t; const v4u uv = vitof(vload(f15), 0); vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(f11)); }
L_0918: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f13.w[0] = f12.w[0]; f13.w[1] = f12.w[1]; f13.w[2] = f12.w[2]; f13.w[3] = f12.w[3]; vstore(f9, uv); n13 = vfix(vload(f13)); n9 = uv; }
L_0920: { ++fl.t; const v4u uv = vitof(vload(f10), 12); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(f10)); }
L_0928: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n11[0])); set_vi(i1, i1 + 32767u); vstore(facc, uv); nacc = uv; }
L_0930: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n11[1])); set_vi(i1, i5 | i1); vstore(facc, uv); nacc = uv; }
L_0938: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n11[2])); set_vi(i5, f15.w[3]); vstore(facc, uv); nacc = uv; }
L_0940: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 7u); } vstore(f17, uv); }
L_0948: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } }
L_0950: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n11[0])); f12.w[0] = f10.w[0]; f12.w[1] = f10.w[1]; f12.w[2] = f10.w[2]; f12.w[3] = f10.w[3]; vstore(facc, uv); n12 = vfix(vload(f12)); nacc = uv; }
L_0958: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n11[1])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n10 = vfix(vload(f10)); nacc = uv; }
L_0960: { ++fl.t; const std::uint32_t uclip = clip_value(r, f17, f17.w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0968: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n11[2])); vstore(facc, uv); nacc = uv; }
L_0970: { ++fl.t; const v4u uv = vitof(vload(f15), 0); { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(f11)); }
L_0978: { ++fl.t; const v4u uv = vitof(vload(f10), 12); set_vi(i2, i2 + 9u); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(f10)); }
L_0980: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0988: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f9, uv); n9 = uv; }
L_0990: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n11[0])); set_vi(i1, i5 | i1); vstore(facc, uv); nacc = uv; }
L_0998: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n11[1])); set_vi(i5, f15.w[3]); vstore(facc, uv); nacc = uv; }
L_09A0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n11[2])); { std::uint8_t *q = qword(mem, i2 + 4294967292u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_09A8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); pend = i3 == i4; vstore(f17, uv); }
L_09B0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n11[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_0A28; }
L_09B8: { ++fl.t; const v4u uv = vmuln(n13, vfix(vsplat(r.q))); set_vi(i2, i2 + 3u); vstore(f16, uv); }
L_09C0: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_09C8: { ++fl.t; const std::uint32_t uclip = clip_value(r, f17, f17.w[3]); f13.w[0] = f12.w[0]; f13.w[1] = f12.w[1]; f13.w[2] = f12.w[2]; f13.w[3] = f12.w[3]; r.clip = uclip; fl.set_clip(uclip, fl.t); n13 = vfix(vload(f13)); }
L_09D0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n11[1])); f12.w[0] = f10.w[0]; f12.w[1] = f10.w[1]; f12.w[2] = f10.w[2]; f12.w[3] = f10.w[3]; vstore(facc, uv); n12 = vfix(vload(f12)); nacc = uv; }
L_09D8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n11[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n10 = vfix(vload(f10)); nacc = uv; }
L_09E0: { ++fl.t; const v4u uv = vitof(vload(f15), 0); { std::uint8_t *q = qword(mem, i2 + 4294967284u); std::memcpy(q, &f16, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(f11)); }
L_09E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_09F0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f9, uv); n9 = uv; }
L_09F8: { ++fl.t; const v4u uv = vitof(vload(f10), 12); set_vi(i1, i5 | i1); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(f10)); }
L_0A00: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n11[0])); set_vi(i5, f15.w[3]); vstore(facc, uv); nacc = uv; }
L_0A08: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n11[1])); { std::uint8_t *q = qword(mem, i2 + 4294967292u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_0A10: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n11[2])); { std::uint8_t *q = qword(mem, i2 + 4294967286u); std::memcpy(q + 0, &f14.w[0], 4); std::memcpy(q + 4, &f14.w[1], 4); std::memcpy(q + 8, &f14.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_0A18: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); pend = i3 != i4; vstore(f17, uv); }
L_0A20: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n11[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_09B8; }
L_0A28: { ++fl.t; const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(f14, uv); }
L_0A30: { ++fl.t; }
L_0A38: { ++fl.t; }
L_0A40: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vfix(vload(f13)); }
L_0A48: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n11[1])); vstore(facc, uv); nacc = uv; }
L_0A50: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n11[2])); vstore(facc, uv); nacc = uv; }
L_0A58: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0A60: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f9, uv); n9 = uv; }
L_0A68: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967289u); std::memcpy(q + 0, &f13.w[0], 4); std::memcpy(q + 4, &f13.w[1], 4); std::memcpy(q + 8, &f13.w[2], 4); } vstore(f13, uv); n13 = uv; }
L_0A70: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vfix(vload(f12)); }
L_0A78: { ++fl.t; const std::uint32_t uclip = clip_value(r, f17, f17.w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0A80: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &f13, 16); } }
L_0A88: { ++fl.t; }
L_0A90: { ++fl.t; }
L_0A98: { ++fl.t; }
L_0AA0: { ++fl.t; }
L_0AA8: { ++fl.t; }
L_0AB0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967287u); std::memcpy(q, &f14, 16); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0AB8: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0AC0: { ++fl.t; set_vi(i1, i1 + 32767u); }
L_0AC8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n10, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q + 0, &f12.w[0], 4); std::memcpy(q + 4, &f12.w[1], 4); std::memcpy(q + 8, &f12.w[2], 4); } vstore(f12, uv); n12 = uv; }
L_0AD0: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); set_vi(i5, i5 | i1); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vfix(vload(f10)); }
L_0AD8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967295u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967293u); std::memcpy(q, &f12, 16); } }
L_0AE8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967295u); std::memcpy(q + 0, &f10.w[0], 4); std::memcpy(q + 4, &f10.w[1], 4); std::memcpy(q + 8, &f10.w[2], 4); } }
L_0AF0: { ++fl.t; pend = 0u == i14; }
L_0AF8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B10; }
L_0B00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 354u); pendj = true; }
L_0B08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B10: { ++fl.t; vu::kick(1, i10); }
L_0B18: { ++fl.t; ending = true; }
L_0B20: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = 2856u; return; }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; }
    if (pend) { pend = false; goto L_07F8; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, 2872u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_986FA6930F793B40(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    goto L_0008;
L_0008: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0010: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f9, q, 16); } }
L_0020: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f8, q, 16); } }
L_0028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f7, q, 16); } }
L_0030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f6, q, 16); } }
L_0038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[2], q + 8, 4); } }
L_0040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_0060: { ++fl.t; set_vi(i2, 0u + 32u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; r.tpc = 104u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; vu::interpret(1, 104u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; vu::interpret(1, jpc);
    return;
}

void vu1_9CD852F42CC3E58D(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0778;
L_04E8: { ++fl.t; set_vi(i3, vu::top()); }
L_04F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_04F8: { ++fl.t; }
L_0500: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0508: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0510: { ++fl.t; set_vi(i2, i12 & i2); }
L_0518: { ++fl.t; set_vi(i1, i10 + 0u); }
L_0520: { ++fl.t; pend = 0u == i2; }
L_0528: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0568; }
L_0530: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0538: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0540: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_0548: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0550: { ++fl.t; }
L_0558: { ++fl.t; pend = 0u != i4; }
L_0560: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f5, 16); set_vi(i1, i1 + 1u); } }
    if (pend) { pend = false; goto L_0540; }
L_0568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0570: { ++fl.t; }
L_0578: { ++fl.t; }
L_0580: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_0588: { ++fl.t; set_vi(i2, i12 & i2); }
L_0590: { ++fl.t; set_vi(i2, i2 + i2); }
L_0598: { ++fl.t; set_vi(i2, i2 + i3); }
L_05A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } n9 = vfix(vload(f9)); }
L_05A8: { ++fl.t; }
L_05B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f5, 16); set_vi(i1, i1 + 1u); } }
L_05B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_05C0: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_05C8: { ++fl.t; const v4u uv = vitof(vload(f5), 12); vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_05D0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); vstore(facc, uv); nacc = uv; }
L_05D8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_05E0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_05E8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f8, uv); n8 = uv; }
L_05F0: { ++fl.t; }
L_05F8: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0600: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_0608: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f8.w[3]); fl.end_q(r, qb, 6u); } }
L_0610: { ++fl.t; const v4u uv = vitof(vload(f5), 12); vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_0618: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); vstore(facc, uv); nacc = uv; }
L_0620: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 5u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_0630: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f11.w[0] = f6.w[0]; f11.w[1] = f6.w[1]; f11.w[2] = f6.w[2]; f11.w[3] = f6.w[3]; vstore(f10, uv); n11 = vfix(vload(f11)); n10 = uv; }
L_0638: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0640: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0648: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_0650: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f10.w[3]); fl.end_q(r, qb, 7u); } vstore(f11, uv); n11 = uv; }
L_0658: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); { std::uint8_t *q = qword(mem, i1 + 8u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0660: { ++fl.t; const v4u uv = vitof(vload(f5), 12); pend = i3 == i2; vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_0668: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); set_vi(i1, i1 + 9u); vstore(facc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_06C0; }
L_0670: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 4294967287u); std::memcpy(q, &f11, 16); } vstore(facc, uv); nacc = uv; }
L_0678: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_0680: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f11.w[0] = f6.w[0]; f11.w[1] = f6.w[1]; f11.w[2] = f6.w[2]; f11.w[3] = f6.w[3]; vstore(f7, uv); n11 = vfix(vload(f11)); }
L_0688: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n10, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0698: { ++fl.t; const v4u uv = vitof(vload(f9), 0); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_06A0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } vstore(f11, uv); n11 = uv; }
L_06A8: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); set_vi(i1, i1 + 3u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_06B0: { ++fl.t; const v4u uv = vitof(vload(f5), 12); pend = i3 != i2; vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_06B8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); f10.w[0] = f7.w[0]; f10.w[1] = f7.w[1]; f10.w[2] = f7.w[2]; vstore(facc, uv); n10 = vfix(vload(f10)); nacc = uv; }
    if (pend) { pend = false; goto L_0670; }
L_06C0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); vstore(facc, uv); nacc = uv; }
L_06C8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); vstore(facc, uv); nacc = uv; }
L_06D0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f9, uv); n9 = uv; }
L_06D8: { ++fl.t; }
L_06E0: { ++fl.t; }
L_06E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n10, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06F0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 5u); } }
L_06F8: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; }
L_0710: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967287u); std::memcpy(q, &f11, 16); } vstore(f11, uv); n11 = uv; }
L_0718: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967292u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0720: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n5, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } vstore(f11, uv); n11 = uv; }
L_0728: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0730: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967293u); std::memcpy(q, &f11, 16); } }
L_0738: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967295u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } }
L_0740: { ++fl.t; pend = 0u == i14; }
L_0748: { ++fl.t; }
    if (pend) { pend = false; goto L_0760; }
L_0750: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 236u); pendj = true; }
L_0758: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0760: { ++fl.t; vu::kick(1, i10); }
L_0768: { ++fl.t; ending = true; }
L_0770: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = 1912u; return; }
L_0778: { ++fl.t; pend = true; }
L_0780: { ++fl.t; }
    if (pend) { pend = false; goto L_04E8; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, 1928u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_9CD8DF116F71B163(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 f18 = r.vf[18];
    Reg128 f19 = r.vf[19];
    Reg128 f20 = r.vf[20];
    Reg128 f21 = r.vf[21];
    Reg128 f22 = r.vf[22];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u n16 = vfix(vload(f16));
    v4u n17 = vfix(vload(f17));
    v4u n18 = vfix(vload(f18));
    v4u n19 = vfix(vload(f19));
    v4u n20 = vfix(vload(f20));
    v4u n21 = vfix(vload(f21));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3C50;
L_3778: { ++fl.t; set_vi(i3, vu::top()); }
L_3780: { ++fl.t; set_vi(i13, 0u + 32767u); }
L_3788: { ++fl.t; r.i = 1065353216u; }
L_3790: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i1, v); } }
L_3798: { ++fl.t; set_vi(i10, i3 + 196u); }
L_37A0: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_37A8: { ++fl.t; set_vi(i2, i10 + 0u); }
L_37B0: { ++fl.t; set_vi(i1, i12 & i1); }
L_37B8: { ++fl.t; set_vi(i13, i13 + 1u); }
L_37C0: { ++fl.t; pend = 0u == i1; }
L_37C8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
    if (pend) { pend = false; goto L_3808; }
L_37D0: { ++fl.t; set_vi(i3, i3 - 1u); }
L_37D8: { ++fl.t; set_vi(i4, i1 + 1u); }
L_37E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f13, q, 16); set_vi(i3, i3 + 1u); } n13 = vfix(vload(f13)); }
L_37E8: { ++fl.t; set_vi(i4, i4 - 1u); }
L_37F0: { ++fl.t; }
L_37F8: { ++fl.t; pend = 0u != i4; }
L_3800: { ++fl.t; { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f13, 16); set_vi(i2, i2 + 1u); } }
    if (pend) { pend = false; goto L_37E0; }
L_3808: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i4, v); } }
L_3810: { ++fl.t; }
L_3818: { ++fl.t; }
L_3820: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f13, q, 16); set_vi(i3, i3 + 1u); } n13 = vfix(vload(f13)); }
L_3828: { ++fl.t; set_vi(i4, i12 & i4); }
L_3830: { ++fl.t; set_vi(i4, i4 + i4); }
L_3838: { ++fl.t; set_vi(i4, i4 + i3); }
L_3840: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f14, q, 16); set_vi(i3, i3 + 1u); } n14 = vfix(vload(f14)); }
L_3848: { ++fl.t; const v4u uv = vitof(vload(f14), 0); set_vi(i5, f14.w[3]); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vfix(vload(f12)); }
L_3850: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n12[0])); vstore(facc, uv); nacc = uv; }
L_3858: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n12[1])); vstore(facc, uv); nacc = uv; }
L_3860: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n12[2])); vstore(facc, uv); nacc = uv; }
L_3868: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f19, uv); n19 = uv; }
L_3870: { ++fl.t; }
L_3878: { ++fl.t; const v4u uv = vsubn(n12, n8); { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f13, 16); set_vi(i2, i2 + 1u); } vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3880: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n12[0])); { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(facc, uv); n17 = vfix(vload(f17)); nacc = uv; }
L_3888: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n12[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_3890: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n12[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, uv); nacc = uv; }
L_3898: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); efu(r, 112u, f14, 2u); vstore(f18, uv); n18 = uv; }
L_38A0: { ++fl.t; }
L_38A8: { ++fl.t; const v4u uv = vitof(vload(f17), 0); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f17, q, 16); set_vi(i3, i3 + 1u); } vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); n12 = vfix(vload(f12)); }
L_38B0: { ++fl.t; const v4u uv = vmuln(n11, v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f14, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(f14)); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_38B8: { ++fl.t; const std::uint32_t uclip = clip_value(r, f18, f18.w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_38C0: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n12, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_38C8: { ++fl.t; const v4u uv = vitof(vload(f17), 12); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_38D0: { ++fl.t; const v4u uv = vitof(vload(f14), 0); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); }
L_38D8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_38E0: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(f11.w[1])); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_38E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_38F0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n14[0])); f19.w[0] = r.p; vstore(facc, uv); n19 = vfix(vload(f19)); nacc = uv; }
L_38F8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n14[1])); vstore(facc, uv); nacc = uv; }
L_3900: { ++fl.t; const v4u uv = vmax(vload(f18), vsplat(f11.w[0])); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_3908: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n14[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(facc, uv); nacc = uv; }
L_3910: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n8[3])); set_vi(i1, i1 + 32767u); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3918: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, i1 | i5); vstore(f19, uv); n19 = uv; }
L_3920: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); set_vi(i1, i1 & i13); vstore(f18, uv); n18 = vfix(vload(f18)); }
L_3928: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n14[0])); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q, &f17, 16); } vstore(facc, uv); nacc = uv; }
L_3930: { ++fl.t; const v4u uv = vsubn(n14, n8); { const std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3938: { ++fl.t; const v4u uv = vaddn(n15, vsplat(n16[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3940: { ++fl.t; const v4u uv = vsubn(n9, n12); set_vi(i5, f18.w[3]); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3948: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n14[1])); set_vi(i1, i5 | i1); vstore(facc, uv); nacc = uv; }
L_3950: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n14[2])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); f18.w[3] = v; } vstore(facc, uv); n18 = vfix(vload(f18)); nacc = uv; }
L_3958: { ++fl.t; const v4u uv = vmax(vload(f14), vsplat(0u)); efu(r, 112u, f21, 2u); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n14 = vfix(vload(f14)); }
L_3960: { ++fl.t; const v4u uv = vitof(vload(f17), 0); f15.w[0] = f12.w[0]; f15.w[1] = f12.w[1]; f15.w[2] = f12.w[2]; vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); n12 = vfix(vload(f12)); }
L_3968: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f17, q, 16); set_vi(i3, i3 + 1u); } vstore(f20, uv); n17 = vfix(vload(f17)); n20 = uv; }
L_3970: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q, &f18, 16); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3978: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n14[0])); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3980: { ++fl.t; const v4u uv = vmuln(n11, v4u{0u, 0u, 0u, 0x3F800000u}); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3988: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n12, vfix(vsplat(r.q))); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3990: { ++fl.t; const v4u uv = vitof(vload(f17), 12); set_vi(i5, f14.w[3]); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3998: { ++fl.t; const std::uint32_t uclip = clip_value(r, f20, f20.w[3]); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f14, q, 16); set_vi(i3, i3 + 1u); } r.clip = uclip; fl.set_clip(uclip, fl.t); n14 = vfix(vload(f14)); }
L_39A0: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n9[3])); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_39A8: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(f11.w[1])); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_39B0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); f19.w[0] = r.p; vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_39B8: { ++fl.t; const v4u uv = vitof(vload(f14), 0); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_39C0: { ++fl.t; const v4u uv = vaddn(n15, n21); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_39C8: { ++fl.t; const v4u uv = vmax(vload(f18), vsplat(f11.w[0])); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_39D0: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n8[3])); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_39D8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n20[0])); vstore(facc, uv); nacc = uv; }
L_39E0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); set_vi(i2, i2 + 9u); vstore(facc, uv); nacc = uv; }
L_39E8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(facc, uv); nacc = uv; }
L_39F0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f19, uv); n19 = uv; }
L_39F8: { ++fl.t; const v4u uv = vsubn(n9, n12); set_vi(i1, i1 | i5); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3A00: { ++fl.t; const v4u uv = vsubn(n20, n8); set_vi(i1, i1 & i13); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_3A08: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &f17, 16); } vstore(f18, uv); n18 = vfix(vload(f18)); }
L_3A10: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_3A18: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); { const std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(facc, uv); n17 = vfix(vload(f17)); nacc = uv; }
L_3A20: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); efu(r, 112u, f22, 2u); vstore(facc, uv); nacc = uv; }
L_3A28: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); set_vi(i5, f18.w[3]); vstore(f21, uv); n21 = uv; }
L_3A30: { ++fl.t; const v4u uv = vaddn(n15, vsplat(n16[0])); set_vi(i1, i5 | i1); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3A38: { ++fl.t; const v4u uv = vmuln(n11, v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); f18.w[3] = v; } vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3A40: { ++fl.t; const v4u uv = vitof(vload(f17), 0); f15.w[0] = f12.w[0]; f15.w[1] = f12.w[1]; f15.w[2] = f12.w[2]; vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); n12 = vfix(vload(f12)); }
L_3A48: { ++fl.t; const std::uint32_t uclip = clip_value(r, f21, f21.w[3]); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f17, q, 16); set_vi(i3, i3 + 1u); } r.clip = uclip; fl.set_clip(uclip, fl.t); n17 = vfix(vload(f17)); }
L_3A50: { ++fl.t; const v4u uv = vmax(vload(f20), vsplat(0u)); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n20 = vfix(vload(f20)); }
L_3A58: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n12, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q, &f18, 16); } vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3A60: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); set_vi(i5, f14.w[3]); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3A68: { ++fl.t; const v4u uv = vitof(vload(f17), 12); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3A70: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n20[0])); set_vi(i1, i1 + 32767u); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3A78: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(f11.w[1])); pend = i3 == i4; vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_3A80: { ++fl.t; const v4u uv = vsubn(n9, n12); set_vi(i1, i1 | i5); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_3B68; }
L_3A88: { ++fl.t; const v4u uv = vftoi(vload(f14), 0); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f14, q, 16); set_vi(i3, i3 + 1u); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); n20 = vfix(vload(f20)); }
L_3A90: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n9[3])); set_vi(i1, i1 & i13); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3A98: { ++fl.t; const v4u uv = vmax(vload(f18), vsplat(f11.w[0])); f19.w[0] = r.p; vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n19 = vfix(vload(f19)); n18 = vfix(vload(f18)); }
L_3AA0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); set_vi(i2, i2 + 3u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3AA8: { ++fl.t; const v4u uv = vitof(vload(f14), 0); { std::uint8_t *q = qword(mem, i2 + 4294967285u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3AB0: { ++fl.t; const v4u uv = vaddn(n15, n21); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3AB8: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n8[3])); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3AC0: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &f17, 16); } vstore(f18, uv); n18 = vfix(vload(f18)); }
L_3AC8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n20[0])); vstore(facc, uv); nacc = uv; }
L_3AD0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); vstore(facc, uv); nacc = uv; }
L_3AD8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); vstore(facc, uv); nacc = uv; }
L_3AE0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i5, f18.w[3]); vstore(f19, uv); n19 = uv; }
L_3AE8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); set_vi(i1, i5 | i1); vstore(facc, uv); nacc = uv; }
L_3AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(facc, uv); nacc = uv; }
L_3AF8: { ++fl.t; const v4u uv = vsubn(n20, n8); { const std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3B00: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_3B08: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); f18.w[3] = v; } vstore(f21, uv); n18 = vfix(vload(f18)); n21 = uv; }
L_3B10: { ++fl.t; const v4u uv = vaddn(n15, vsplat(n16[0])); f15.w[0] = f12.w[0]; f15.w[1] = f12.w[1]; f15.w[2] = f12.w[2]; vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n15 = vfix(vload(f15)); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3B18: { ++fl.t; const v4u uv = vitof(vload(f17), 0); efu(r, 112u, f22, 2u); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vfix(vload(f12)); }
L_3B20: { ++fl.t; const v4u uv = vmuln(n11, v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f17, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n17 = vfix(vload(f17)); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3B28: { ++fl.t; const std::uint32_t uclip = clip_value(r, f21, f21.w[3]); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q, &f18, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3B30: { ++fl.t; const v4u uv = vmax(vload(f20), vsplat(0u)); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n20 = vfix(vload(f20)); }
L_3B38: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n12, vfix(vsplat(r.q))); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3B40: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); set_vi(i5, f14.w[3]); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3B48: { ++fl.t; const v4u uv = vitof(vload(f17), 12); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3B50: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n20[0])); set_vi(i1, i1 + 32767u); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3B58: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(f11.w[1])); pend = i3 != i4; vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_3B60: { ++fl.t; const v4u uv = vsubn(n9, n12); set_vi(i1, i1 | i5); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_3A88; }
L_3B68: { ++fl.t; }
L_3B70: { ++fl.t; const v4u uv = vftoi(vload(f14), 0); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3B78: { ++fl.t; const v4u uv = vmax(vload(f18), vsplat(f11.w[0])); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vfix(vload(f18)); }
L_3B80: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n9[3])); f19.w[0] = r.p; vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3B88: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967288u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3B90: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); vstore(f18, uv); n18 = vfix(vload(f18)); }
L_3B98: { ++fl.t; const v4u uv = vaddn(n15, n14); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3BA0: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n8[3])); set_vi(i1, i1 & i13); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3BA8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967293u); std::memcpy(q, &f17, 16); } }
L_3BB0: { ++fl.t; set_vi(i3, f18.w[3]); }
L_3BB8: { ++fl.t; set_vi(i1, i3 | i1); }
L_3BC0: { ++fl.t; const v4u uv = vaddn(n15, vsplat(n16[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); f18.w[3] = v; } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vfix(vload(f18)); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3BC8: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); { std::uint8_t *q = qword(mem, i2 + 4294967295u); std::memcpy(q, &f18, 16); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vfix(vload(f18)); }
L_3BD0: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n18[0])); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3BD8: { ++fl.t; }
L_3BE0: { ++fl.t; }
L_3BE8: { ++fl.t; const v4u uv = vftoi(vload(f14), 0); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vfix(vload(f13)); }
L_3BF0: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n9[3])); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3BF8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967291u); std::memcpy(q + 0, &f13.w[0], 4); std::memcpy(q + 4, &f13.w[1], 4); std::memcpy(q + 8, &f13.w[2], 4); } }
L_3C00: { ++fl.t; const v4u uv = vaddn(n12, n14); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3C08: { ++fl.t; const v4u uv = vftoi(vload(f14), 0); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vfix(vload(f12)); }
L_3C10: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(q + 0, &f12.w[0], 4); std::memcpy(q + 4, &f12.w[1], 4); std::memcpy(q + 8, &f12.w[2], 4); } }
L_3C18: { ++fl.t; pend = 0u == i14; }
L_3C20: { ++fl.t; }
    if (pend) { pend = false; goto L_3C38; }
L_3C28: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 1927u); pendj = true; }
L_3C30: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3C38: { ++fl.t; vu::kick(1, i10); }
L_3C40: { ++fl.t; ending = true; }
L_3C48: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = 15440u; return; }
L_3C50: { ++fl.t; pend = true; }
L_3C58: { ++fl.t; }
    if (pend) { pend = false; goto L_3778; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, 15456u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_9CF88329BFEA8820(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    goto L_3FF8;
L_0000: { ++fl.t; set_vi(i13, 0u + 32767u); }
L_0008: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0010: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f9, q, 16); } }
L_0020: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f8, q, 16); } }
L_0028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f7, q, 16); } }
L_0030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f6, q, 16); } }
L_0038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[2], q + 8, 4); } }
L_0040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_0060: { ++fl.t; set_vi(i2, 0u + 32u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; r.tpc = 104u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; vu::interpret(1, 104u);
    return;
L_3FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vi[2] = i2; r.vi[12] = i12; r.vi[13] = i13; vu::interpret(1, jpc);
    return;
}

void vu1_9F1A7CBCB76DB203(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f31 = r.vf[31];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    goto L_0B40;
L_0B40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f31, q, 16); } }
L_0B48: { ++fl.t; set_vi(i13, 0u + 32767u); }
L_0B50: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0B58: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 16u) + 12, 2); set_vi(i14, v); } }
L_0B60: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(q, &f31, 16); } }
L_0B68: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0B70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f6.w[3], q + 12, 4); } }
L_0B78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[3], q + 12, 4); } }
L_0B80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0B88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0B90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0B98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_0BA0: { ++fl.t; set_vi(i13, i13 + 1u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.tpc = 2984u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; vu::interpret(1, 2984u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_9F379B16580FC7A8(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 f18 = r.vf[18];
    Reg128 f19 = r.vf[19];
    Reg128 f20 = r.vf[20];
    Reg128 f21 = r.vf[21];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u n16 = vfix(vload(f16));
    v4u n17 = vfix(vload(f17));
    v4u n18 = vfix(vload(f18));
    v4u n19 = vfix(vload(f19));
    v4u n20 = vfix(vload(f20));
    v4u n21 = vfix(vload(f21));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3288;
L_3288: { ++fl.t; set_vi(i3, vu::top()); }
L_3290: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i1, v); } }
L_3298: { ++fl.t; r.i = 1065353216u; }
L_32A0: { ++fl.t; set_vi(i10, i3 + 196u); }
L_32A8: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_32B0: { ++fl.t; set_vi(i1, i12 & i1); }
L_32B8: { ++fl.t; set_vi(i2, i10 + 0u); }
L_32C0: { ++fl.t; pend = 0u == i1; }
L_32C8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
    if (pend) { pend = false; goto L_3308; }
L_32D0: { ++fl.t; set_vi(i3, i3 - 1u); }
L_32D8: { ++fl.t; set_vi(i4, i1 + 1u); }
L_32E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f11, q, 16); set_vi(i3, i3 + 1u); } n11 = vfix(vload(f11)); }
L_32E8: { ++fl.t; set_vi(i4, i4 - 1u); }
L_32F0: { ++fl.t; }
L_32F8: { ++fl.t; pend = 0u != i4; }
L_3300: { ++fl.t; { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f11, 16); set_vi(i2, i2 + 1u); } }
    if (pend) { pend = false; goto L_32E0; }
L_3308: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i4, v); } }
L_3310: { ++fl.t; }
L_3318: { ++fl.t; }
L_3320: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f11, q, 16); set_vi(i3, i3 + 1u); } n11 = vfix(vload(f11)); }
L_3328: { ++fl.t; set_vi(i4, i12 & i4); }
L_3330: { ++fl.t; set_vi(i4, i4 + i4); }
L_3338: { ++fl.t; set_vi(i4, i4 + i3); }
L_3340: { ++fl.t; { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &f11, 16); set_vi(i2, i2 + 1u); } }
L_3348: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f11, q, 16); set_vi(i3, i3 + 1u); } n11 = vfix(vload(f11)); }
L_3350: { ++fl.t; const v4u uv = vitof(vload(f11), 0); { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n17 = vfix(vload(f17)); }
L_3358: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n17[0])); vstore(facc, uv); nacc = uv; }
L_3360: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n17[1])); vstore(facc, uv); nacc = uv; }
L_3368: { ++fl.t; const v4u uv = vsubn(n17, n8); vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3370: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n17[2])); vstore(facc, uv); nacc = uv; }
L_3378: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f18, uv); n18 = uv; }
L_3380: { ++fl.t; efu(r, 112u, f11, 2u); }
L_3388: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n17[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n15 = vfix(vload(f15)); nacc = uv; }
L_3390: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n17[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f18.w[3]); fl.end_q(r, qb, 6u); } vstore(facc, uv); nacc = uv; }
L_3398: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n17[2])); vstore(facc, uv); nacc = uv; }
L_33A0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); vstore(f17, uv); n17 = uv; }
L_33A8: { ++fl.t; }
L_33B0: { ++fl.t; const v4u uv = vitof(vload(f15), 12); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_33B8: { ++fl.t; const std::uint32_t uclip = clip_value(r, f17, f17.w[3]); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f17, q, 16); set_vi(i3, i3 + 1u); } r.clip = uclip; fl.set_clip(uclip, fl.t); n17 = vfix(vload(f17)); }
L_33C0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n18, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_33C8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_33D0: { ++fl.t; const v4u uv = vitof(vload(f20), 0); f20.w[0] = r.p; vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n11 = vfix(vload(f11)); }
L_33D8: { ++fl.t; const v4u uv = vitof(vload(f17), 0); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_33E0: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q, &f15, 16); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_33E8: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n8[3])); vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_33F0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n17[0])); vstore(facc, uv); nacc = uv; }
L_33F8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n17[1])); vstore(facc, uv); nacc = uv; }
L_3400: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n17[2])); vstore(facc, uv); nacc = uv; }
L_3408: { ++fl.t; const v4u uv = vsubn(n17, n8); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3410: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } vstore(f18, uv); n20 = vfix(vload(f20)); n18 = uv; }
L_3418: { ++fl.t; const v4u uv = vsubn(n9, n11); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &f15.w[0], 4); std::memcpy(q + 4, &f15.w[1], 4); std::memcpy(q + 8, &f15.w[2], 4); } vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3420: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n17[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n15 = vfix(vload(f15)); nacc = uv; }
L_3428: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n17[1])); efu(r, 112u, f13, 2u); vstore(facc, uv); nacc = uv; }
L_3430: { ++fl.t; const v4u uv = vaddn(n14, vsplat(n16[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f18.w[3]); fl.end_q(r, qb, 7u); } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3438: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n17[2])); vstore(facc, uv); nacc = uv; }
L_3440: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); vstore(f13, uv); n13 = uv; }
L_3448: { ++fl.t; const v4u uv = vitof(vload(f20), 0); f14.w[0] = f11.w[0]; f14.w[1] = f11.w[1]; f14.w[2] = f11.w[2]; vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); n11 = vfix(vload(f11)); }
L_3450: { ++fl.t; const v4u uv = vitof(vload(f15), 12); set_vi(i5, f11.w[3]); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_3458: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vfix(vload(f17)); }
L_3460: { ++fl.t; const std::uint32_t uclip = clip_value(r, f13, f13.w[3]); set_vi(i1, i1 + 32767u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3468: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n18, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f20, q, 16); set_vi(i3, i3 + 1u); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3470: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); set_vi(i5, i5 | i1); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n17[0])); { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3480: { ++fl.t; const v4u uv = vsubn(n9, n11); f21.w[0] = r.p; vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3488: { ++fl.t; const v4u uv = vitof(vload(f20), 0); set_vi(i2, i2 + 9u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3490: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &f15, 16); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_3498: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n9[3])); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n8[3])); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n17[0])); vstore(facc, uv); nacc = uv; }
L_34B0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n17[1])); vstore(facc, uv); nacc = uv; }
L_34B8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n17[2])); set_vi(i5, f17.w[3]); vstore(facc, uv); nacc = uv; }
L_34C0: { ++fl.t; const v4u uv = vsubn(n17, n8); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } vstore(f18, uv); n20 = vfix(vload(f20)); n18 = uv; }
L_34D0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n17[0])); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q + 0, &f15.w[0], 4); std::memcpy(q + 4, &f15.w[1], 4); std::memcpy(q + 8, &f15.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_34D8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n15 = vfix(vload(f15)); nacc = uv; }
L_34E0: { ++fl.t; const v4u uv = vaddn(n19, vsplat(n16[0])); efu(r, 112u, f21, 2u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_34E8: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n17[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f18.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_34F0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f21, uv); n21 = uv; }
L_34F8: { ++fl.t; const v4u uv = vitof(vload(f15), 12); f19.w[0] = f14.w[0]; f19.w[1] = f14.w[1]; f19.w[2] = f14.w[2]; vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n15 = vfix(vload(f15)); }
L_3500: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); set_vi(i5, i5 | i1); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vfix(vload(f17)); }
L_3508: { ++fl.t; const v4u uv = vitof(vload(f20), 0); f14.w[0] = f11.w[0]; f14.w[1] = f11.w[1]; f14.w[2] = f11.w[2]; vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); n11 = vfix(vload(f11)); }
L_3510: { ++fl.t; const std::uint32_t uclip = clip_value(r, f21, f21.w[3]); { std::uint8_t *q = qword(mem, i2 + 4294967292u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3518: { ++fl.t; const v4u uv = vaddn(n19, n13); pend = i3 == i4; vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n18, vfix(vsplat(r.q))); set_vi(i5, f20.w[3]); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_35E8; }
L_3528: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f13, q, 16); set_vi(i3, i3 + 1u); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vfix(vload(f13)); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3530: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n17[0])); set_vi(i2, i2 + 3u); vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3538: { ++fl.t; const v4u uv = vsubn(n9, n11); f21.w[0] = r.p; vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3540: { ++fl.t; const v4u uv = vftoi(vload(f20), 0); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3548: { ++fl.t; const v4u uv = vitof(vload(f13), 0); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); }
L_3550: { ++fl.t; const v4u uv = vmuln(n19, vsplat(n9[3])); set_vi(i1, i1 + 32767u); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3558: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n8[3])); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &f15, 16); } vstore(f19, vsel(vload(f19), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3560: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 4294967285u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_3568: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n17[0])); set_vi(i5, i5 | i1); vstore(facc, uv); nacc = uv; }
L_3570: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n17[1])); vstore(facc, uv); nacc = uv; }
L_3578: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n17[2])); { std::uint8_t *q = qword(mem, i2 + 4294967292u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_3580: { ++fl.t; const v4u uv = vsubn(n17, n8); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3588: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q + 0, &f15.w[0], 4); std::memcpy(q + 4, &f15.w[1], 4); std::memcpy(q + 8, &f15.w[2], 4); } vstore(f18, uv); n18 = uv; }
L_3590: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n17[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f15, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n15 = vfix(vload(f15)); nacc = uv; }
L_3598: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } vstore(facc, uv); n20 = vfix(vload(f20)); nacc = uv; }
L_35A0: { ++fl.t; const v4u uv = vaddn(n19, vsplat(n16[0])); efu(r, 112u, f21, 2u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_35A8: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n17[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f18.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_35B0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); vstore(f21, uv); n21 = uv; }
L_35B8: { ++fl.t; const v4u uv = vitof(vload(f15), 12); f19.w[0] = f14.w[0]; f19.w[1] = f14.w[1]; f19.w[2] = f14.w[2]; vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n15 = vfix(vload(f15)); }
L_35C0: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vfix(vload(f17)); }
L_35C8: { ++fl.t; const v4u uv = vitof(vload(f20), 0); f14.w[0] = f11.w[0]; f14.w[1] = f11.w[1]; f14.w[2] = f11.w[2]; vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); n11 = vfix(vload(f11)); }
L_35D0: { ++fl.t; const std::uint32_t uclip = clip_value(r, f21, f21.w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_35D8: { ++fl.t; const v4u uv = vaddn(n19, n13); pend = i3 != i4; vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_35E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n18, vfix(vsplat(r.q))); set_vi(i5, f13.w[3]); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_3528; }
L_35E8: { ++fl.t; }
L_35F0: { ++fl.t; }
L_35F8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n17[0])); f17.w[0] = r.p; vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3600: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n8[3])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3608: { ++fl.t; const v4u uv = vaddn(n17, vsplat(n16[0])); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3610: { ++fl.t; const v4u uv = vsubn(n9, n11); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3618: { ++fl.t; const v4u uv = vftoi(vload(f20), 0); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3620: { ++fl.t; const v4u uv = vmuln(n13, vsplat(n9[3])); vstore(f13, vsel(vload(f13), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3628: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n17 = vfix(vload(f17)); }
L_3630: { ++fl.t; const v4u uv = vaddn(n14, n13); { std::uint8_t *q = qword(mem, i2 + 4294967288u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3638: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n17[0])); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3640: { ++fl.t; const v4u uv = vftoi(vload(f20), 0); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3648: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n9[3])); vstore(f12, vsel(vload(f12), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3650: { ++fl.t; }
L_3658: { ++fl.t; }
L_3660: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3668: { ++fl.t; const v4u uv = vaddn(n11, n12); { std::uint8_t *q = qword(mem, i2 + 4294967291u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3670: { ++fl.t; const v4u uv = vftoi(vload(f18), 4); { std::uint8_t *q = qword(mem, i2 + 4294967293u); std::memcpy(q, &f15, 16); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_3678: { ++fl.t; const v4u uv = vftoi(vload(f20), 0); set_vi(i1, i1 + 32767u); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_3680: { ++fl.t; set_vi(i5, i5 | i1); }
L_3688: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967295u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_3690: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967295u); std::memcpy(q + 0, &f15.w[0], 4); std::memcpy(q + 4, &f15.w[1], 4); std::memcpy(q + 8, &f15.w[2], 4); } }
L_3698: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967294u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } }
L_36A0: { ++fl.t; pend = 0u == i14; }
L_36A8: { ++fl.t; }
    if (pend) { pend = false; goto L_36C0; }
L_36B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 1752u); pendj = true; }
L_36B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_36C0: { ++fl.t; vu::kick(1, i10); }
L_36C8: { ++fl.t; ending = true; }
L_36D0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = 14040u; return; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, 14040u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_9F9B02704433656D(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 facc = r.acc;
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u n16 = vfix(vload(f16));
    v4u n17 = vfix(vload(f17));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    goto L_3FF8;
L_0000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f8, q, 16); } n8 = vfix(vload(f8)); }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f10, q, 16); } n10 = vfix(vload(f10)); }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f12, q, 16); } n12 = vfix(vload(f12)); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f13, q, 16); } n13 = vfix(vload(f13)); }
L_0020: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f14, q, 16); } n14 = vfix(vload(f14)); }
L_0028: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n10[0])); { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f11, q, 16); } vstore(facc, uv); n11 = vfix(vload(f11)); nacc = uv; }
L_0030: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n10[1])); vstore(facc, uv); nacc = uv; }
L_0038: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n10[2])); vstore(facc, uv); nacc = uv; }
L_0040: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n10[3])); vstore(f6, uv); }
L_0048: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n11[0])); { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f9, q, 16); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_0050: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n11[1])); vstore(facc, uv); nacc = uv; }
L_0058: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n11[2])); vstore(facc, uv); nacc = uv; }
L_0060: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n11[3])); vstore(f7, uv); }
L_0068: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n9[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(facc, uv); n17 = vfix(vload(f17)); nacc = uv; }
L_0070: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n9[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f16.w[0], q + 0, 4); std::memcpy(&f16.w[1], q + 4, 4); std::memcpy(&f16.w[2], q + 8, 4); } vstore(facc, uv); n16 = vfix(vload(f16)); nacc = uv; }
L_0078: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f15.w[0], q + 0, 4); std::memcpy(&f15.w[1], q + 4, 4); std::memcpy(&f15.w[2], q + 8, 4); } vstore(facc, uv); n15 = vfix(vload(f15)); nacc = uv; }
L_0080: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n9[3])); vstore(f5, uv); }
L_0088: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n11[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0090: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n11[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0098: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n11[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00A0: { ++fl.t; const v4u uv = vmaddn(nacc, v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n11[3])); vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00A8: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n10[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00B0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n10[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00B8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n10[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00C0: { ++fl.t; const v4u uv = vmaddn(nacc, v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n10[3])); vstore(f10, vsel(vload(f10), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00C8: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n9[0])); { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f17, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vfix(vload(f17)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00D0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n9[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00D8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n9[2])); set_vi(i1, 0u + 32767u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00E0: { ++fl.t; const v4u uv = vmaddn(nacc, v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n9[3])); { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&f4, q, 16); } vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_00E8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n17[0])); { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&f3.w[0], q + 0, 4); std::memcpy(&f3.w[1], q + 4, 4); std::memcpy(&f3.w[2], q + 8, 4); } vstore(facc, uv); nacc = uv; }
L_00F0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&f2.w[0], q + 0, 4); std::memcpy(&f2.w[1], q + 4, 4); std::memcpy(&f2.w[2], q + 8, 4); } vstore(facc, uv); nacc = uv; }
L_00F8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&f1.w[0], q + 0, 4); std::memcpy(&f1.w[1], q + 4, 4); std::memcpy(&f1.w[2], q + 8, 4); } vstore(facc, uv); nacc = uv; ending = true; }
L_0100: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n17[3])); r.i = 1258291455u; vstore(f8, uv); n8 = uv; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; r.tpc = 264u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; vu::interpret(1, 264u);
    return;
L_3FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[1] = i1; vu::interpret(1, jpc);
    return;
}

void vu1_A243C0B19495F572(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i10 = r.vi[10];
    goto L_3C38;
L_3C38: { ++fl.t; vu::kick(1, i10); }
L_3C40: { ++fl.t; ending = true; }
L_3C48: { ++fl.t; }
    if (ending) { r.tpc = 15440u; return; }
    vu::interpret(1, 15440u);
    return;
dispatch:
    vu::interpret(1, jpc);
    return;
}

void vu1_B268A7C458B6D044(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_04E8;
L_04E8: { ++fl.t; set_vi(i3, vu::top()); }
L_04F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_04F8: { ++fl.t; }
L_0500: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0508: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0510: { ++fl.t; set_vi(i2, i12 & i2); }
L_0518: { ++fl.t; set_vi(i1, i10 + 0u); }
L_0520: { ++fl.t; pend = 0u == i2; }
L_0528: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0568; }
L_0530: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0538: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0540: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_0548: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0550: { ++fl.t; }
L_0558: { ++fl.t; pend = 0u != i4; }
L_0560: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f5, 16); set_vi(i1, i1 + 1u); } }
    if (pend) { pend = false; goto L_0540; }
L_0568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0570: { ++fl.t; }
L_0578: { ++fl.t; }
L_0580: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_0588: { ++fl.t; set_vi(i2, i12 & i2); }
L_0590: { ++fl.t; set_vi(i2, i2 + i2); }
L_0598: { ++fl.t; set_vi(i2, i2 + i3); }
L_05A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } n9 = vfix(vload(f9)); }
L_05A8: { ++fl.t; }
L_05B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f5, 16); set_vi(i1, i1 + 1u); } }
L_05B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } n5 = vfix(vload(f5)); }
L_05C0: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_05C8: { ++fl.t; const v4u uv = vitof(vload(f5), 12); vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_05D0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); vstore(facc, uv); nacc = uv; }
L_05D8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_05E0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_05E8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f8, uv); n8 = uv; }
L_05F0: { ++fl.t; }
L_05F8: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0600: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_0608: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f8.w[3]); fl.end_q(r, qb, 6u); } }
L_0610: { ++fl.t; const v4u uv = vitof(vload(f5), 12); vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_0618: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); vstore(facc, uv); nacc = uv; }
L_0620: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 5u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_0630: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f11.w[0] = f6.w[0]; f11.w[1] = f6.w[1]; f11.w[2] = f6.w[2]; f11.w[3] = f6.w[3]; vstore(f10, uv); n11 = vfix(vload(f11)); n10 = uv; }
L_0638: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0640: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0648: { ++fl.t; const v4u uv = vitof(vload(f9), 0); vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_0650: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f10.w[3]); fl.end_q(r, qb, 7u); } vstore(f11, uv); n11 = uv; }
L_0658: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); { std::uint8_t *q = qword(mem, i1 + 8u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0660: { ++fl.t; const v4u uv = vitof(vload(f5), 12); pend = i3 == i2; vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_0668: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); set_vi(i1, i1 + 9u); vstore(facc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_06C0; }
L_0670: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); { std::uint8_t *q = qword(mem, i1 + 4294967287u); std::memcpy(q, &f11, 16); } vstore(facc, uv); nacc = uv; }
L_0678: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n9 = vfix(vload(f9)); nacc = uv; }
L_0680: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f11.w[0] = f6.w[0]; f11.w[1] = f6.w[1]; f11.w[2] = f6.w[2]; f11.w[3] = f6.w[3]; vstore(f7, uv); n11 = vfix(vload(f11)); }
L_0688: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n10, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmax(vload(f5), vload(f5)); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f5, q, 16); set_vi(i3, i3 + 1u); } vstore(f6, uv); n5 = vfix(vload(f5)); n6 = vfix(vload(f6)); }
L_0698: { ++fl.t; const v4u uv = vitof(vload(f9), 0); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 12, &f9.w[3], 4); } vstore(f9, vsel(vload(f9), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vfix(vload(f9)); }
L_06A0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } vstore(f11, uv); n11 = uv; }
L_06A8: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); set_vi(i1, i1 + 3u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_06B0: { ++fl.t; const v4u uv = vitof(vload(f5), 12); pend = i3 != i2; vstore(f5, vsel(vload(f5), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vfix(vload(f5)); }
L_06B8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n9[0])); f10.w[0] = f7.w[0]; f10.w[1] = f7.w[1]; f10.w[2] = f7.w[2]; vstore(facc, uv); n10 = vfix(vload(f10)); nacc = uv; }
    if (pend) { pend = false; goto L_0670; }
L_06C0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n9[1])); vstore(facc, uv); nacc = uv; }
L_06C8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n9[2])); vstore(facc, uv); nacc = uv; }
L_06D0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f9, uv); n9 = uv; }
L_06D8: { ++fl.t; }
L_06E0: { ++fl.t; }
L_06E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n10, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06F0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f9.w[3]); fl.end_q(r, qb, 5u); } }
L_06F8: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; }
L_0710: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967287u); std::memcpy(q, &f11, 16); } vstore(f11, uv); n11 = uv; }
L_0718: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n9, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967292u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0720: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n5, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } vstore(f11, uv); n11 = uv; }
L_0728: { ++fl.t; const v4u uv = vftoi(vload(f8), 4); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0730: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967293u); std::memcpy(q, &f11, 16); } }
L_0738: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967295u); std::memcpy(q + 0, &f8.w[0], 4); std::memcpy(q + 4, &f8.w[1], 4); std::memcpy(q + 8, &f8.w[2], 4); } }
L_0740: { ++fl.t; pend = 0u == i14; }
L_0748: { ++fl.t; }
    if (pend) { pend = false; goto L_0760; }
L_0750: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 236u); pendj = true; }
L_0758: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0760: { ++fl.t; vu::kick(1, i10); }
L_0768: { ++fl.t; ending = true; }
L_0770: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = 1912u; return; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, 1912u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_B7F6B0712B514FD5(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    goto L_0E50;
L_0E50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 20u); std::memcpy(&f13, q, 16); } }
L_0E58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 21u); std::memcpy(&f14, q, 16); } }
L_0E60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 22u); std::memcpy(&f15, q, 16); } }
L_0E68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 19u); std::memcpy(&f12, q, 16); } }
L_0E70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(&f11, q, 16); } }
L_0E78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f10, q, 16); } }
L_0E80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 16u); std::memcpy(&f9, q, 16); } }
L_0E88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f8, q, 16); } }
L_0E90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f7, q, 16); } }
L_0E98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f6, q, 16); } }
L_0EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f5, q, 16); } }
L_0EA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0EB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } }
L_0EC8: { ++fl.t; set_vi(i2, 0u + 1u); }
L_0ED0: { ++fl.t; r.i = 1258291455u; }
L_0ED8: { ++fl.t; set_vi(i1, 0u + 32767u); }
L_0EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 23u); std::memcpy(&f16, q, 16); } ending = true; }
L_0EE8: { ++fl.t; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; r.tpc = 3824u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, 3824u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, jpc);
    return;
}

void vu1_B8C270361E6E41FF(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f31 = r.vf[31];
    std::uint16_t i14 = r.vi[14];
    goto L_3210;
L_3210: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f31, q, 16); } }
L_3218: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 16u) + 12, 2); set_vi(i14, v); } }
L_3220: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_3228: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&f9, q, 16); } }
L_3230: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f8, q, 16); } }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f10, q, 16); } }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f7, q, 16); } }
L_3248: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f6, q, 16); } }
L_3250: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f5, q, 16); } }
L_3258: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_3260: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_3268: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_3270: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } }
L_3278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(q, &f31, 16); } ending = true; }
L_3280: { ++fl.t; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[14] = i14; r.tpc = 12936u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[14] = i14; vu::interpret(1, 12936u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_BCD6F3210E5C1670(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 f18 = r.vf[18];
    Reg128 f19 = r.vf[19];
    Reg128 f20 = r.vf[20];
    Reg128 f21 = r.vf[21];
    Reg128 f22 = r.vf[22];
    Reg128 f23 = r.vf[23];
    Reg128 f24 = r.vf[24];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n6 = vfix(vload(f6));
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u n16 = vfix(vload(f16));
    v4u n17 = vfix(vload(f17));
    v4u n18 = vfix(vload(f18));
    v4u n19 = vfix(vload(f19));
    v4u n20 = vfix(vload(f20));
    v4u n21 = vfix(vload(f21));
    v4u n22 = vfix(vload(f22));
    v4u n23 = vfix(vload(f23));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    goto L_2220;
L_1C68: { ++fl.t; set_vi(i6, vu::top()); }
L_1C70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i1, v); } }
L_1C78: { ++fl.t; }
L_1C80: { ++fl.t; }
L_1C88: { ++fl.t; set_vi(i4, i6 + 195u); }
L_1C90: { ++fl.t; set_vi(i1, i2 & i1); }
L_1C98: { ++fl.t; set_vi(i5, i4 + 0u); }
L_1CA0: { ++fl.t; pend = 0u == i1; }
L_1CA8: { ++fl.t; set_vi(i6, i6 + 1u); }
    if (pend) { pend = false; goto L_1CE0; }
L_1CB0: { ++fl.t; set_vi(i6, i6 - 1u); }
L_1CB8: { ++fl.t; set_vi(i7, i1 + 1u); }
L_1CC0: { ++fl.t; set_vi(i7, i7 - 1u); }
L_1CC8: { ++fl.t; set_vi(i6, i6 + 1u); }
L_1CD0: { ++fl.t; pend = 0u != i7; }
L_1CD8: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f0, 16); set_vi(i5, i5 + 1u); } }
    if (pend) { pend = false; goto L_1CC0; }
L_1CE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_1CE8: { ++fl.t; }
L_1CF0: { ++fl.t; }
L_1CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f18, q, 16); set_vi(i6, i6 + 1u); } n18 = vfix(vload(f18)); }
L_1D00: { ++fl.t; set_vi(i7, i2 & i7); }
L_1D08: { ++fl.t; set_vi(i7, i7 + i7); }
L_1D10: { ++fl.t; set_vi(i7, i7 + i6); }
L_1D18: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f18, 16); set_vi(i5, i5 + 1u); } }
L_1D20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f18, q, 16); set_vi(i6, i6 + 1u); } n18 = vfix(vload(f18)); }
L_1D28: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n18[0])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[2], q + 8, 4); std::memcpy(&f19.w[3], q + 12, 4); set_vi(i6, i6 + 1u); } vstore(facc, uv); n19 = vfix(vload(f19)); nacc = uv; }
L_1D30: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n18[1])); vstore(facc, uv); nacc = uv; }
L_1D38: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n18[2])); vstore(facc, uv); nacc = uv; }
L_1D40: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(0x3F800000u)); vstore(f20, uv); n20 = uv; }
L_1D48: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n18[0])); { const Reg128 m = f19; f19.w[1] = m.w[2]; f19.w[2] = m.w[3]; } vstore(facc, uv); n19 = vfix(vload(f19)); nacc = uv; }
L_1D50: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n18[1])); vstore(facc, uv); nacc = uv; }
L_1D58: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n18[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, uv); nacc = uv; }
L_1D60: { ++fl.t; const std::uint32_t uclip = clip_value(r, f20, f20.w[3]); set_vi(i8, f19.w[0]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D68: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const Reg128 m = f19; f20.w[0] = m.w[1]; f20.w[1] = m.w[2]; } vstore(f19, uv); n20 = vfix(vload(f20)); n19 = uv; }
L_1D70: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n18[0])); set_vi(i8, i8 & i3); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n18[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D80: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n18[2])); { const Reg128 m = f18; f20.w[2] = m.w[3]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D88: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(0x3F800000u)); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D90: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n20[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D98: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DA0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n20[2])); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DA8: { ++fl.t; const v4u uv = vmuln(n20, n18); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DB0: { ++fl.t; const v4u uv = vaddn(n21, vsplat(n21[1])); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DB8: { ++fl.t; const v4u uv = vaddn(n21, vsplat(n21[2])); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DC0: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n21[0])); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DC8: { ++fl.t; const v4u uv = vaddn(n20, n20); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DD0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 2u); } }
L_1DD8: { ++fl.t; const v4u uv = vsubn(n18, n20); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f20, q, 16); set_vi(i6, i6 + 1u); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DE0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); f19.w[0] = f18.w[0]; f19.w[2] = f18.w[2]; vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1DE8: { ++fl.t; f19.w[1] = f0.w[1]; n19 = vfix(vload(f19)); }
L_1DF0: { ++fl.t; }
L_1DF8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n20[0])); set_vi(i8, i8 + 32767u); vstore(facc, uv); nacc = uv; }
L_1E00: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[1])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[2], q + 8, 4); std::memcpy(&f22.w[3], q + 12, 4); set_vi(i6, i6 + 1u); } vstore(facc, uv); n22 = vfix(vload(f22)); nacc = uv; }
L_1E08: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[2])); efu(r, 115u, f19, 2u); vstore(facc, uv); nacc = uv; }
L_1E10: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(0x3F800000u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f23, uv); n23 = uv; }
L_1E18: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n20[0])); set_vi(i1, i1 + 32767u); vstore(facc, uv); nacc = uv; }
L_1E20: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); { const Reg128 m = f22; f22.w[1] = m.w[2]; f22.w[2] = m.w[3]; } vstore(facc, uv); n22 = vfix(vload(f22)); nacc = uv; }
L_1E28: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); set_vi(i8, i8 | i1); vstore(facc, uv); nacc = uv; }
L_1E30: { ++fl.t; const std::uint32_t uclip = clip_value(r, f23, f23.w[3]); { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1E38: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i8, f22.w[0]); vstore(f19, uv); n19 = uv; }
L_1E40: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n20[0])); { const Reg128 m = f22; f22.w[0] = m.w[1]; f22.w[1] = m.w[2]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E48: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[1])); set_vi(i5, i5 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E50: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n20[2])); set_vi(i8, i8 & i3); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E58: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(0x3F800000u)); { const Reg128 m = f20; f22.w[2] = m.w[3]; } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E60: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n22[0])); set_vi(i8, i8 + 32767u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n22[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E70: { ++fl.t; const v4u uv = vftoi(vload(f21), 4); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); }
L_1E78: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n22[2])); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E80: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f23.w[0], 4); std::memcpy(q + 4, &f23.w[1], 4); std::memcpy(q + 8, &f23.w[2], 4); } }
L_1E88: { ++fl.t; const v4u uv = vmuln(n22, n20); f23.w[1] = f18.w[1]; f23.w[2] = f18.w[2]; vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E90: { ++fl.t; f23.w[0] = f0.w[0]; n23 = vfix(vload(f23)); }
L_1E98: { ++fl.t; const v4u uv = vaddn(n21, vsplat(n21[1])); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1EA0: { ++fl.t; efu(r, 115u, f23, 2u); }
L_1EA8: { ++fl.t; const v4u uv = vaddn(n21, vsplat(n21[2])); f14.w[3] = r.p; vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n14 = vfix(vload(f14)); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = vmuln(n22, vsplat(n21[0])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f5, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; }
L_1EC8: { ++fl.t; const v4u uv = vmuln(n18, vsplat(n14[3])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1ED0: { ++fl.t; const v4u uv = vaddn(n21, n21); set_vi(i1, i1 + 32767u); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1ED8: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } }
L_1EE0: { ++fl.t; set_vi(i8, i8 | i1); }
L_1EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_1EF0: { ++fl.t; const v4u uv = vsubn(n20, n22); f21.w[0] = f18.w[0]; f21.w[1] = f18.w[1]; f21.w[2] = f18.w[2]; vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f20, q, 16); set_vi(i6, i6 + 1u); } n20 = vfix(vload(f20)); }
L_1F00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[2], q + 8, 4); std::memcpy(&f23.w[3], q + 12, 4); set_vi(i6, i6 + 1u); } n23 = vfix(vload(f23)); }
L_1F08: { ++fl.t; const v4u uv = vmuln(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(f14, vsel(vload(f14), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1F10: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); f19.w[0] = f18.w[0]; f19.w[2] = f18.w[2]; vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F18: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n20[0])); f19.w[1] = f0.w[1]; vstore(facc, uv); n19 = vfix(vload(f19)); nacc = uv; }
L_1F20: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[1])); set_vi(i8, f23.w[0]); vstore(facc, uv); nacc = uv; }
L_1F28: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[2])); set_vi(i8, i8 & i3); vstore(facc, uv); nacc = uv; }
L_1F30: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(0x3F800000u)); vstore(f24, uv); }
L_1F38: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n20[0])); { const Reg128 m = f23; f23.w[1] = m.w[2]; f23.w[2] = m.w[3]; } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_1F40: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); set_vi(i5, i5 + 3u); vstore(facc, uv); nacc = uv; }
L_1F48: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); efu(r, 115u, f19, 2u); vstore(facc, uv); nacc = uv; }
L_1F50: { ++fl.t; const std::uint32_t uclip = clip_value(r, f24, f24.w[3]); set_vi(i8, i8 + 32767u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1F58: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const Reg128 m = f23; f23.w[0] = m.w[1]; f23.w[1] = m.w[2]; } vstore(f19, uv); n23 = vfix(vload(f23)); n19 = uv; }
L_1F60: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n20[0])); { const Reg128 m = f20; f23.w[2] = m.w[3]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F68: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[1])); f20.w[3] = r.p; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F70: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n20[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F78: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F80: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n23[0])); set_vi(i8, i8 | i1); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F88: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n23[1])); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F90: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n23[2])); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1F98: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n20[3])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f5, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n21 = vsel(n21, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1FA0: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n21[0])); vstore(facc, uv); nacc = uv; }
L_1FA8: { ++fl.t; const v4u uv = vftoi(vload(f22), 4); vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_1FB0: { ++fl.t; const v4u uv = vmuln(n23, n20); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1FB8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n21[1])); vstore(facc, uv); nacc = uv; }
L_1FC0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n21[2])); vstore(facc, uv); nacc = uv; }
L_1FC8: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f24.w[0], 4); std::memcpy(q + 4, &f24.w[1], 4); std::memcpy(q + 8, &f24.w[2], 4); } }
L_1FD0: { ++fl.t; }
L_1FD8: { ++fl.t; const v4u uv = vaddn(n22, vsplat(n22[1])); f24.w[1] = f18.w[1]; f24.w[2] = f18.w[2]; vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1FE0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(0x3F800000u)); f24.w[0] = f0.w[0]; vstore(f21, uv); n21 = uv; }
L_1FE8: { ++fl.t; }
L_1FF0: { ++fl.t; }
L_1FF8: { ++fl.t; const v4u uv = vaddn(n22, vsplat(n22[2])); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2000: { ++fl.t; efu(r, 115u, f24, 2u); }
L_2008: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n14[3])); vstore(f21, uv); n21 = uv; }
L_2010: { ++fl.t; f14.w[3] = r.p; n14 = vfix(vload(f14)); }
L_2018: { ++fl.t; const v4u uv = vmuln(n23, vsplat(n22[0])); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2020: { ++fl.t; }
L_2028: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967287u); std::memcpy(q, &f21, 16); } }
L_2030: { ++fl.t; const v4u uv = vmuln(n18, vsplat(n14[3])); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2038: { ++fl.t; const v4u uv = vaddn(n23, n23); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2040: { ++fl.t; }
L_2048: { ++fl.t; }
L_2050: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f19.w[3]); fl.end_q(r, qb, 7u); } }
L_2058: { ++fl.t; f21.w[0] = f18.w[0]; f21.w[1] = f18.w[1]; f21.w[2] = f18.w[2]; n21 = vfix(vload(f21)); }
L_2060: { ++fl.t; const v4u uv = vsubn(n20, n23); pend = i6 != i7; vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2068: { ++fl.t; }
    if (pend) { pend = false; goto L_1EF8; }
L_2070: { ++fl.t; const v4u uv = vmuln(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f5, 16); } vstore(f14, vsel(vload(f14), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2078: { ++fl.t; }
L_2080: { ++fl.t; }
L_2088: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n19, vfix(vsplat(r.q))); f19.w[0] = f18.w[0]; f19.w[2] = f18.w[2]; vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2090: { ++fl.t; }
L_2098: { ++fl.t; f19.w[1] = f0.w[1]; n19 = vfix(vload(f19)); }
L_20A0: { ++fl.t; const v4u uv = vftoi(vload(f20), 4); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); }
L_20A8: { ++fl.t; efu(r, 115u, f19, 2u); }
L_20B0: { ++fl.t; }
L_20B8: { ++fl.t; }
L_20C0: { ++fl.t; }
L_20C8: { ++fl.t; }
L_20D0: { ++fl.t; }
L_20D8: { ++fl.t; }
L_20E0: { ++fl.t; }
L_20E8: { ++fl.t; }
L_20F0: { ++fl.t; }
L_20F8: { ++fl.t; f15.w[3] = r.p; n15 = vfix(vload(f15)); }
L_2100: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n15[3])); vstore(f21, vsel(vload(f21), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n21 = vsel(n21, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2108: { ++fl.t; }
L_2110: { ++fl.t; }
L_2118: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n21[0])); { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f20.w[0], 4); std::memcpy(q + 4, &f20.w[1], 4); std::memcpy(q + 8, &f20.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_2120: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n21[1])); f20.w[1] = f18.w[1]; f20.w[2] = f18.w[2]; vstore(facc, uv); n20 = vfix(vload(f20)); nacc = uv; }
L_2128: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n21[2])); f20.w[0] = f0.w[0]; vstore(facc, uv); n20 = vfix(vload(f20)); nacc = uv; }
L_2130: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(0x3F800000u)); vstore(f21, uv); n21 = uv; }
L_2138: { ++fl.t; efu(r, 115u, f20, 2u); }
L_2140: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n14[3])); f14.w[3] = r.p; vstore(f21, uv); n14 = vfix(vload(f14)); n21 = uv; }
L_2148: { ++fl.t; const v4u uv = vmuln(n18, vsplat(n14[3])); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2150: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(f14, vsel(vload(f14), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2158: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n18[0])); vstore(facc, uv); nacc = uv; }
L_2160: { ++fl.t; }
L_2168: { ++fl.t; }
L_2170: { ++fl.t; }
L_2178: { ++fl.t; }
L_2180: { ++fl.t; }
L_2188: { ++fl.t; }
L_2190: { ++fl.t; }
L_2198: { ++fl.t; }
L_21A0: { ++fl.t; }
L_21A8: { ++fl.t; }
L_21B0: { ++fl.t; }
L_21B8: { ++fl.t; }
L_21C0: { ++fl.t; }
L_21C8: { ++fl.t; }
L_21D0: { ++fl.t; f15.w[3] = r.p; n15 = vfix(vload(f15)); }
L_21D8: { ++fl.t; const v4u uv = vmuln(n18, vsplat(n15[3])); { std::uint8_t *q = qword(mem, i5 + 4294967290u); std::memcpy(q, &f21, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n21 = vsel(n21, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_21E0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n21[1])); vstore(facc, uv); nacc = uv; }
L_21E8: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n18[2])); vstore(facc, uv); nacc = uv; }
L_21F0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(0x3F800000u)); vstore(f21, uv); n21 = uv; }
L_21F8: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n14[3])); vstore(f21, uv); n21 = uv; }
L_2200: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f21, 16); } }
L_2208: { ++fl.t; vu::kick(1, i4); }
L_2210: { ++fl.t; ending = true; }
L_2218: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.tpc = 8736u; return; }
L_2220: { ++fl.t; pend = true; }
L_2228: { ++fl.t; }
    if (pend) { pend = false; goto L_1C68; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, 8752u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, jpc);
    return;
}

void vu1_C0561A4F7ADDE8DC(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 f18 = r.vf[18];
    Reg128 f19 = r.vf[19];
    Reg128 f20 = r.vf[20];
    Reg128 f21 = r.vf[21];
    Reg128 f22 = r.vf[22];
    Reg128 f23 = r.vf[23];
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    goto L_0800;
L_0800: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 20u); std::memcpy(&f16.w[0], q + 0, 4); std::memcpy(&f16.w[1], q + 4, 4); std::memcpy(&f16.w[2], q + 8, 4); } }
L_0808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 21u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } }
L_0810: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 22u); std::memcpy(&f18.w[0], q + 0, 4); std::memcpy(&f18.w[1], q + 4, 4); std::memcpy(&f18.w[2], q + 8, 4); } }
L_0818: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 23u); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[1], q + 4, 4); std::memcpy(&f19.w[2], q + 8, 4); } }
L_0820: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } }
L_0828: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&f21.w[0], q + 0, 4); std::memcpy(&f21.w[1], q + 4, 4); std::memcpy(&f21.w[2], q + 8, 4); } }
L_0830: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); } }
L_0838: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&f23, q, 16); } }
L_0840: { ++fl.t; set_vi(i1, 0u + 32767u); }
L_0848: { ++fl.t; r.i = 1258291455u; }
L_0850: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 19u); std::memcpy(&f15.w[0], q + 0, 4); std::memcpy(&f15.w[1], q + 4, 4); std::memcpy(&f15.w[2], q + 8, 4); } }
L_0858: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(&f14.w[0], q + 0, 4); std::memcpy(&f14.w[1], q + 4, 4); std::memcpy(&f14.w[2], q + 8, 4); } }
L_0860: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f13.w[0], q + 0, 4); std::memcpy(&f13.w[1], q + 4, 4); std::memcpy(&f13.w[2], q + 8, 4); } }
L_0868: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 16u); std::memcpy(&f12.w[0], q + 0, 4); std::memcpy(&f12.w[1], q + 4, 4); std::memcpy(&f12.w[2], q + 8, 4); } }
L_0870: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f11.w[0], q + 0, 4); std::memcpy(&f11.w[1], q + 4, 4); std::memcpy(&f11.w[2], q + 8, 4); } }
L_0878: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f10.w[0], q + 0, 4); std::memcpy(&f10.w[1], q + 4, 4); std::memcpy(&f10.w[2], q + 8, 4); } }
L_0880: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f9.w[0], q + 0, 4); std::memcpy(&f9.w[1], q + 4, 4); std::memcpy(&f9.w[2], q + 8, 4); } }
L_0888: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f8.w[0], q + 0, 4); std::memcpy(&f8.w[1], q + 4, 4); std::memcpy(&f8.w[2], q + 8, 4); } }
L_0890: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f7.w[0], q + 0, 4); std::memcpy(&f7.w[1], q + 4, 4); std::memcpy(&f7.w[2], q + 8, 4); } }
L_0898: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f6.w[0], q + 0, 4); std::memcpy(&f6.w[1], q + 4, 4); std::memcpy(&f6.w[2], q + 8, 4); } }
L_08A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[2], q + 8, 4); } }
L_08A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_08B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_08B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_08C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_08C8: { ++fl.t; set_vi(i2, 0u + 1u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vi[1] = i1; r.vi[2] = i2; r.tpc = 2256u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, 2256u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, jpc);
    return;
}

void vu1_C5B789BC044FEFC6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    goto L_17E0;
L_17E0: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_17E8: { ++fl.t; r.i = 1258291455u; }
L_17F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f15, q, 16); } }
L_17F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f14, q, 16); } }
L_1800: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f13, q, 16); } }
L_1808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f12, q, 16); } }
L_1810: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&f11, q, 16); } }
L_1818: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&f10.w[0], q + 0, 4); std::memcpy(&f10.w[1], q + 4, 4); std::memcpy(&f10.w[2], q + 8, 4); } }
L_1820: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&f9.w[0], q + 0, 4); std::memcpy(&f9.w[1], q + 4, 4); std::memcpy(&f9.w[2], q + 8, 4); } }
L_1828: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&f8, q, 16); } }
L_1830: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f7, q, 16); } }
L_1838: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f6, q, 16); } }
L_1840: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5, q, 16); } }
L_1848: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_1850: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_1858: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_1860: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_1868: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vi[2] = i2; r.vi[3] = i3; r.tpc = 6256u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vi[2] = i2; r.vi[3] = i3; vu::interpret(1, 6256u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vi[2] = i2; r.vi[3] = i3; vu::interpret(1, jpc);
    return;
}

void vu1_C824C29B7450F2DE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    Reg128 f0 = r.vf[0];
    Reg128 f1 = r.vf[1];
    Reg128 f2 = r.vf[2];
    Reg128 f3 = r.vf[3];
    Reg128 f4 = r.vf[4];
    Reg128 f5 = r.vf[5];
    Reg128 f6 = r.vf[6];
    Reg128 f7 = r.vf[7];
    Reg128 f8 = r.vf[8];
    Reg128 f9 = r.vf[9];
    Reg128 f10 = r.vf[10];
    Reg128 f11 = r.vf[11];
    Reg128 f12 = r.vf[12];
    Reg128 f13 = r.vf[13];
    Reg128 f14 = r.vf[14];
    Reg128 f15 = r.vf[15];
    Reg128 f16 = r.vf[16];
    Reg128 f17 = r.vf[17];
    Reg128 f18 = r.vf[18];
    Reg128 f19 = r.vf[19];
    Reg128 f20 = r.vf[20];
    Reg128 f21 = r.vf[21];
    Reg128 f22 = r.vf[22];
    Reg128 f23 = r.vf[23];
    Reg128 f24 = r.vf[24];
    Reg128 f25 = r.vf[25];
    Reg128 f26 = r.vf[26];
    Reg128 facc = r.acc;
    v4u n1 = vfix(vload(f1));
    v4u n2 = vfix(vload(f2));
    v4u n3 = vfix(vload(f3));
    v4u n4 = vfix(vload(f4));
    v4u n5 = vfix(vload(f5));
    v4u n6 = vfix(vload(f6));
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u n9 = vfix(vload(f9));
    v4u n10 = vfix(vload(f10));
    v4u n11 = vfix(vload(f11));
    v4u n12 = vfix(vload(f12));
    v4u n13 = vfix(vload(f13));
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u n16 = vfix(vload(f16));
    v4u n17 = vfix(vload(f17));
    v4u n18 = vfix(vload(f18));
    v4u n19 = vfix(vload(f19));
    v4u n20 = vfix(vload(f20));
    v4u n21 = vfix(vload(f21));
    v4u n22 = vfix(vload(f22));
    v4u n23 = vfix(vload(f23));
    v4u n24 = vfix(vload(f24));
    v4u n25 = vfix(vload(f25));
    v4u n26 = vfix(vload(f26));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    goto L_06D8;
L_00A8: { ++fl.t; set_vi(i5, vu::top()); }
L_00B0: { ++fl.t; set_vi(i6, i5 + 1u); }
L_00B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f20, q, 16); set_vi(i6, i6 + 1u); } n20 = vfix(vload(f20)); }
L_00C0: { ++fl.t; set_vi(i2, i5 + 102u); }
L_00C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f23, q, 16); } n23 = vfix(vload(f23)); }
L_00D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_00D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_00E0: { ++fl.t; set_vi(i4, i2 + 0u); }
L_00E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_00F0: { ++fl.t; set_vi(i7, i1 & i7); }
L_00F8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f23, 16); set_vi(i4, i4 + 1u); } }
L_0100: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f23, q, 16); } n23 = vfix(vload(f23)); }
L_0108: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_0110: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f21, q, 16); set_vi(i6, i6 + 1u); } n21 = vfix(vload(f21)); }
L_0120: { ++fl.t; set_vi(i7, i7 + i7); }
L_0128: { ++fl.t; set_vi(i7, i7 + i6); }
L_0130: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f24, q, 16); set_vi(i6, i6 + 1u); } n24 = vfix(vload(f24)); }
L_0138: { ++fl.t; }
L_0140: { ++fl.t; }
L_0148: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f23, 16); set_vi(i4, i4 + 1u); } }
L_0150: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f23, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_0158: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_0160: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f20, 16); set_vi(i4, i4 + 1u); } vstore(facc, uv); nacc = uv; }
L_0168: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } vstore(f20, uv); n20 = uv; }
L_0170: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[2])); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0178: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n23[3])); { std::uint8_t *q = qword(mem, i5 + 260u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0180: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); { const Reg128 m = f0; f23.w[2] = m.w[3]; } vstore(f24, uv); n23 = vfix(vload(f23)); n24 = uv; }
L_0188: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n20[0])); { std::uint8_t *q = qword(mem, i6 + 4294967294u); std::memcpy(q, &f20, 16); } vstore(facc, uv); nacc = uv; }
L_0190: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n20[1])); vstore(facc, uv); nacc = uv; }
L_0198: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n20[2])); vstore(facc, uv); nacc = uv; }
L_01A0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &f23, 16); } vstore(f23, uv); n23 = uv; }
L_01A8: { ++fl.t; }
L_01B0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01B8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q, &f24, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n24[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f23.w[3]); fl.end_q(r, qb, 3u); } vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C8: { ++fl.t; const v4u uv = vmax(vload(f24), vsplat(0u)); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f24, q, 16); set_vi(i6, i6 + 1u); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n20 = vfix(vload(f20)); }
L_01D0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n23, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f23, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_01E0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_01E8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); vstore(facc, uv); nacc = uv; }
L_01F0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f21, uv); n21 = uv; }
L_01F8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[2])); { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0200: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n23[3])); { std::uint8_t *q = qword(mem, i5 + 263u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0208: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); { const Reg128 m = f0; f23.w[2] = m.w[3]; } vstore(f24, uv); n23 = vfix(vload(f23)); n24 = uv; }
L_0210: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n21[0])); vstore(facc, uv); nacc = uv; }
L_0218: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n21[1])); vstore(facc, uv); nacc = uv; }
L_0220: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n21[2])); vstore(facc, uv); nacc = uv; }
L_0228: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &f23, 16); } vstore(f23, uv); n23 = uv; }
L_0230: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n24[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q, &f24, 16); } vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0248: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n20[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f23.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0250: { ++fl.t; }
L_0258: { ++fl.t; const v4u uv = vftoi(vload(f22), 4); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); }
L_0260: { ++fl.t; const v4u uv = vmax(vload(f24), vsplat(0u)); { std::uint8_t *q = qword(mem, i6 + 4294967294u); std::memcpy(q, &f21, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); }
L_0268: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[1])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f24, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n23, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i5 + 260u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f23, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_0290: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_0298: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); vstore(facc, uv); nacc = uv; }
L_02A0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f25, uv); n25 = uv; }
L_02A8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[2])); { std::uint8_t *q = qword(mem, i4 + 8u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_02B0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n23[3])); { std::uint8_t *q = qword(mem, i5 + 266u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_02B8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); { const Reg128 m = f0; f23.w[2] = m.w[3]; } vstore(f24, uv); n23 = vfix(vload(f23)); n24 = uv; }
L_02C0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n25[0])); vstore(facc, uv); nacc = uv; }
L_02C8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); vstore(facc, uv); nacc = uv; }
L_02D0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); set_vi(i4, i4 + 9u); vstore(facc, uv); nacc = uv; }
L_02D8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f23, 16); } vstore(f23, uv); n23 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[0])); set_vi(i3, i5 + 252u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n24[1])); f20.w[3] = f15.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q, &f24, 16); } vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n21[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f23.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0300: { ++fl.t; const v4u uv = vftoi(vload(f22), 4); set_vi(i5, i5 + 267u); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); }
L_0308: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n21[1])); pend = i6 == i7; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n21[2])); { std::uint8_t *q = qword(mem, i6 + 4294967294u); std::memcpy(q, &f25, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_03C8; }
L_0318: { ++fl.t; const v4u uv = vmax(vload(f24), vsplat(0u)); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f24, q, 16); set_vi(i6, i6 + 1u); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n21 = vfix(vload(f21)); }
L_0320: { ++fl.t; const v4u uv = vmin(vload(f20), vsplat(r.i)); { std::uint8_t *q = qword(mem, i4 + 4294967292u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f25, uv); n25 = vfix(vload(f25)); }
L_0328: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0330: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n23, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f23, q, 16); set_vi(i6, i6 + 1u); } vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0338: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0340: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q + 12, &f24.w[3], 4); } vstore(facc, uv); nacc = uv; }
L_0348: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i4 + 4294967288u); std::memcpy(q, &f25, 16); } vstore(facc, uv); nacc = uv; }
L_0350: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i4, i4 + 3u); vstore(f25, uv); n25 = uv; }
L_0358: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[2])); { const Reg128 m = f0; f23.w[2] = m.w[3]; } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_0360: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n23[3])); set_vi(i5, i5 + 3u); vstore(facc, uv); nacc = uv; }
L_0368: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); vstore(f24, uv); n24 = uv; }
L_0370: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n25[0])); { std::uint8_t *q = qword(mem, i6 + 4294967294u); std::memcpy(q, &f25, 16); } vstore(facc, uv); nacc = uv; }
L_0378: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n25[1])); { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f23, 16); } vstore(facc, uv); nacc = uv; }
L_0380: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n25[2])); vstore(facc, uv); nacc = uv; }
L_0388: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q, &f24, 16); } vstore(f23, uv); n23 = uv; }
L_0390: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0398: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n24[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03A0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n24[2])); vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03A8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n21[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f23.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vftoi(vload(f22), 4); f20.w[3] = f15.w[3]; vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n22 = vfix(vload(f22)); }
L_03B8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n21[1])); pend = i6 != i7; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n21[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0318; }
L_03C8: { ++fl.t; const v4u uv = vmax(vload(f24), vsplat(0u)); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); }
L_03D0: { ++fl.t; const v4u uv = vmin(vload(f20), vsplat(r.i)); { std::uint8_t *q = qword(mem, i4 + 4294967292u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f24, uv); n24 = vfix(vload(f24)); }
L_03D8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n23, vfix(vsplat(r.q))); f20.w[3] = f15.w[3]; vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03E8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n21[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n21[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F8: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n21[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0400: { ++fl.t; const v4u uv = vmin(vload(f20), vsplat(r.i)); f20.w[3] = f15.w[3]; vstore(f21, uv); n20 = vfix(vload(f20)); n21 = vfix(vload(f21)); }
L_0408: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0410: { ++fl.t; }
L_0418: { ++fl.t; const v4u uv = vftoi(vload(f22), 4); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); }
L_0420: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967291u); std::memcpy(q, &f21, 16); } }
L_0428: { ++fl.t; const v4u uv = vmin(vload(f20), vsplat(r.i)); { std::uint8_t *q = qword(mem, i4 + 4294967288u); std::memcpy(q, &f24, 16); } vstore(f20, uv); n20 = vfix(vload(f20)); }
L_0430: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967295u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } }
L_0438: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f22.w[0], 4); std::memcpy(q + 4, &f22.w[1], 4); std::memcpy(q + 8, &f22.w[2], 4); } }
L_0440: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967294u); std::memcpy(q, &f20, 16); } }
L_0448: { ++fl.t; vu::kick(1, i2); }
L_0450: { ++fl.t; set_vi(i5, vu::top()); }
L_0458: { ++fl.t; set_vi(i5, i5 + 2u); }
L_0460: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_0468: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_0470: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_0478: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0480: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_0488: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } }
L_0490: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_0498: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_04A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_04A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f20, 16); set_vi(i4, i4 + 1u); } }
L_04B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f20, q, 16); set_vi(i5, i5 + 1u); } n20 = vfix(vload(f20)); }
L_04B8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } }
L_04C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_04C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); } n22 = vfix(vload(f22)); }
L_04D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f20, 16); set_vi(i4, i4 + 1u); } }
L_04D8: { ++fl.t; set_vi(i6, i1 & i6); }
L_04E0: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n22[0])); { const std::uint8_t *q = qword(mem, 0u + 32u); std::memcpy(&f20, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_04E8: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n22[1])); set_vi(i6, i6 + i6); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_04F0: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n22[2])); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_04F8: { ++fl.t; set_vi(i6, i6 + i5); }
L_0500: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f20, 16); } }
L_0508: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f20, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0510: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n22[0])); set_vi(i4, i4 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0518: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n22[1])); set_vi(i5, i5 + 4u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0520: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n22[2])); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0528: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); set_vi(i5, i5 + 2u); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0530: { ++fl.t; { const Reg128 m = f0; f21.w[2] = m.w[3]; f21.w[3] = m.w[0]; } n21 = vfix(vload(f21)); }
L_0538: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f20, 16); } }
L_0540: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n22[0])); set_vi(i4, i4 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0548: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n22[1])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmax(vload(f23), vload(f23)); { std::uint8_t *q = qword(mem, i4 + 4294967287u); std::memcpy(q, &f21, 16); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vfix(vload(f21)); }
    if (pend) { pend = false; goto L_0520; }
L_0558: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n22[2])); { const Reg128 m = f0; f21.w[2] = m.w[3]; f21.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vfix(vload(f21)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0560: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0568: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f21, 16); } }
L_0570: { ++fl.t; { const Reg128 m = f0; f21.w[2] = m.w[3]; f21.w[3] = m.w[0]; } n21 = vfix(vload(f21)); }
L_0578: { ++fl.t; const v4u uv = vmax(vload(f20), vload(f20)); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vfix(vload(f21)); }
L_0580: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f21, 16); } }
L_0588: { ++fl.t; vu::kick(1, i3); }
L_0590: { ++fl.t; set_vi(i4, vu::top()); }
L_0598: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_05A0: { ++fl.t; set_vi(i4, i4 + 2u); }
L_05A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_05B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 0, 2); set_vi(i5, v); } }
L_05B8: { ++fl.t; set_vi(i3, i2 + 0u); }
L_05C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_05C8: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f20, 16); set_vi(i3, i3 + 1u); } }
L_05D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 42u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_05D8: { ++fl.t; set_vi(i5, i1 & i5); }
L_05E0: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f21, 16); set_vi(i3, i3 + 1u); } }
L_05E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 43u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_05F0: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f25, 16); set_vi(i3, i3 + 1u); } }
L_05F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f25, q, 16); set_vi(i4, i4 + 1u); } n25 = vfix(vload(f25)); }
L_0600: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f20, 16); set_vi(i3, i3 + 1u); } }
L_0608: { ++fl.t; set_vi(i5, i5 + i5); }
L_0610: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f21, 16); set_vi(i3, i3 + 1u); } }
L_0618: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); } n20 = vfix(vload(f20)); }
L_0620: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 25u); std::memcpy(&f21.w[0], q + 0, 4); std::memcpy(&f21.w[1], q + 4, 4); } n21 = vfix(vload(f21)); }
L_0628: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); } n22 = vfix(vload(f22)); }
L_0630: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_0638: { ++fl.t; set_vi(i5, i5 + i4); }
L_0640: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i4, i4 + 1u); } n26 = vfix(vload(f26)); }
L_0648: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 27u); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); } n23 = vfix(vload(f23)); }
L_0650: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f25, 16); set_vi(i3, i3 + 1u); } }
L_0658: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &f24, 16); } }
L_0660: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n26[0])); set_vi(i4, i4 + 1u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0668: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n26[1])); set_vi(i3, i3 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n26[2])); { const Reg128 m = f0; f26.w[2] = m.w[3]; f26.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f25.w[0], q + 0, 4); std::memcpy(&f25.w[1], q + 4, 4); std::memcpy(&f25.w[2], q + 8, 4); set_vi(i4, i4 + 1u); } vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vfix(vload(f25)); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0680: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &f24, 16); } }
L_0688: { ++fl.t; set_vi(i4, i4 + 1u); }
L_0690: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0698: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); { std::uint8_t *q = qword(mem, i3 + 4294967290u); std::memcpy(q, &f26, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06A0: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); pend = i4 != i5; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); { const Reg128 m = f0; f26.w[2] = m.w[3]; f26.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_0678; }
L_06B0: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06B8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 4294967293u); std::memcpy(q, &f26, 16); } }
L_06C0: { ++fl.t; vu::kick(1, i2); }
L_06C8: { ++fl.t; ending = true; }
L_06D0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.tpc = 1752u; return; }
L_06D8: { ++fl.t; pend = true; }
L_06E0: { ++fl.t; }
    if (pend) { pend = false; goto L_00A8; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, 1768u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, jpc);
    return;
}

}
