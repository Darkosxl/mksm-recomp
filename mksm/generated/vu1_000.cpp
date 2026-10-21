#include "ps2/vu_ops.hpp"

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_014FE30A3E0223EE(Vu0Regs &r, std::uint8_t *mem) {
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
    Reg128 f27 = r.vf[27];
    Reg128 f28 = r.vf[28];
    Reg128 f29 = r.vf[29];
    Reg128 f30 = r.vf[30];
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
    v4u n27 = vfix(vload(f27));
    v4u n28 = vfix(vload(f28));
    v4u n29 = vfix(vload(f29));
    v4u n30 = vfix(vload(f30));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    goto L_2B50;
L_25F8: { ++fl.t; set_vi(i6, vu::top()); }
L_2600: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2608: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(f24)); }
L_2610: { ++fl.t; set_vi(i4, i6 + 102u); }
L_2618: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f27, q, 16); } n27 = vfix(vload(f27)); }
L_2620: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 0, 2); set_vi(i8, v); } }
L_2628: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_2630: { ++fl.t; set_vi(i5, i4 + 0u); }
L_2638: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_2640: { ++fl.t; set_vi(i8, i2 & i8); }
L_2648: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f27, 16); set_vi(i5, i5 + 1u); } }
L_2650: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f27, q, 16); } n27 = vfix(vload(f27)); }
L_2658: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f26, 16); set_vi(i5, i5 + 1u); } }
L_2660: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f25, 16); set_vi(i5, i5 + 1u); } }
L_2668: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f25, q, 16); set_vi(i7, i7 + 1u); } n25 = vfix(vload(f25)); }
L_2670: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f27, 16); set_vi(i5, i5 + 1u); } }
L_2678: { ++fl.t; set_vi(i8, i8 + i8); }
L_2680: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f24, 16); set_vi(i5, i5 + 1u); } }
L_2688: { ++fl.t; set_vi(i8, i8 + i7); }
L_2690: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } }
L_2698: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(f24)); }
L_26A0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f27, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_26A8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_26B0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); vstore(facc, uv); nacc = uv; }
L_26B8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f28, uv); n28 = uv; }
L_26C0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[2])); vstore(facc, uv); nacc = uv; }
L_26C8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n27[3])); vstore(facc, uv); nacc = uv; }
L_26D0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); { const Reg128 m = f0; f27.w[2] = m.w[3]; } vstore(f26, uv); n27 = vfix(vload(f27)); n26 = uv; }
L_26D8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); vstore(facc, uv); nacc = uv; }
L_26E0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f25, 16); set_vi(i5, i5 + 1u); } vstore(facc, uv); nacc = uv; }
L_26E8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); set_vi(i5, i5 + 3u); vstore(facc, uv); nacc = uv; }
L_26F0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f27, 16); } vstore(f27, uv); n27 = uv; }
L_26F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n26[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2700: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n26[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2708: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n26[2])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2710: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n24[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f27.w[3]); fl.end_q(r, qb, 6u); } vstore(facc, uv); nacc = uv; }
L_2718: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_2720: { ++fl.t; const v4u uv = vmax(vload(f28), vsplat(0u)); { std::uint8_t *q = qword(mem, i7 + 4294967295u); std::memcpy(q, &f26, 16); } vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_2728: { ++fl.t; }
L_2730: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n24[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, uv); nacc = uv; }
L_2738: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); set_vi(i9, i9 & i3); vstore(f28, uv); n28 = uv; }
L_2740: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n26[0])); set_vi(i6, i6 + 261u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2748: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n26[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i1, v); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2750: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2758: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n26[2])); set_vi(i5, i5 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2760: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); set_vi(i10, i2 + i9); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2768: { ++fl.t; const std::uint32_t uclip = clip_value(r, f28, f28.w[3]); set_vi(i9, i1 & i3); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2770: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f27, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_2778: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); set_vi(i6, i6 + 3u); vstore(facc, uv); nacc = uv; }
L_2780: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); f26.w[3] = f15.w[3]; vstore(facc, uv); n26 = vfix(vload(f26)); nacc = uv; }
L_2788: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f28, uv); n28 = uv; }
L_2790: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[2])); { const Reg128 m = f0; f27.w[2] = m.w[3]; } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_2798: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n27[3])); set_vi(i1, i1 + 32767u); vstore(facc, uv); nacc = uv; }
L_27A0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); set_vi(i10, i1 | i10); vstore(f29, uv); n29 = uv; }
L_27A8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); { std::uint8_t *q = qword(mem, i5 + 4294967292u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_27B0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); { std::uint8_t *q = qword(mem, i6 + 4294967292u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_27B8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f27, 16); } vstore(facc, uv); nacc = uv; }
L_27C0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i7 + 4294967295u); std::memcpy(q, &f29, 16); } vstore(f27, uv); n27 = uv; }
L_27C8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n29[0])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27D0: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n29[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27D8: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n29[2])); vstore(f29, vsel(vload(f29), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27E0: { ++fl.t; const v4u uv = vftoi(vload(f25), 4); vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vfix(vload(f28)); }
L_27E8: { ++fl.t; const v4u uv = vmin(vload(f26), vsplat(r.i)); vstore(f25, uv); n25 = vfix(vload(f25)); }
L_27F0: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n24[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f27.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_27F8: { ++fl.t; const v4u uv = vmax(vload(f29), vsplat(0u)); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_2800: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_2808: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 4294967292u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_2810: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); pend = i7 != i8; vstore(f28, uv); n28 = uv; }
L_2818: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f25, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2748; }
L_2820: { ++fl.t; }
L_2828: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n26[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2830: { ++fl.t; const std::uint32_t uclip = clip_value(r, f28, f28.w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2838: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n26[2])); f26.w[3] = f15.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); set_vi(i9, i2 + i9); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2850: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_2858: { ++fl.t; const v4u uv = vftoi(vload(f27), 4); set_vi(i1, i1 + 32767u); vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vfix(vload(f28)); }
L_2860: { ++fl.t; set_vi(i9, i1 | i9); }
L_2868: { ++fl.t; const v4u uv = vmin(vload(f26), vsplat(r.i)); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(f26, uv); n26 = vfix(vload(f26)); }
L_2870: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_2878: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } }
L_2880: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } }
L_2888: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f26, 16); } }
L_2890: { ++fl.t; vu::kick(1, i4); }
L_2898: { ++fl.t; set_vi(i1, vu::top()); }
L_28A0: { ++fl.t; set_vi(i5, i1 + 2u); }
L_28A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_28B0: { ++fl.t; set_vi(i1, i1 + 252u); }
L_28B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_28C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_28C8: { ++fl.t; set_vi(i4, i1 + 0u); }
L_28D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_28D8: { ++fl.t; set_vi(i6, i2 & i6); }
L_28E0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_28E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_28F0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f26, 16); set_vi(i4, i4 + 1u); } }
L_28F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_2900: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2908: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f24, q, 16); set_vi(i5, i5 + 1u); } n24 = vfix(vload(f24)); }
L_2910: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_2918: { ++fl.t; set_vi(i6, i6 + i6); }
L_2920: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f26, 16); set_vi(i4, i4 + 1u); } }
L_2928: { ++fl.t; set_vi(i6, i6 + i5); }
L_2930: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } }
L_2938: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n26 = vfix(vload(f26)); }
L_2940: { ++fl.t; }
L_2948: { ++fl.t; }
L_2950: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2958: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, 0u + 32u); std::memcpy(&f24, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2960: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2968: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f24, 16); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2988: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f24, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2990: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); set_vi(i4, i4 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2998: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29A0: { ++fl.t; const v4u uv = vmax(vload(f25), vload(f25)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); n27 = vfix(vload(f27)); }
L_29A8: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { const Reg128 m = f0; f27.w[2] = m.w[3]; f27.w[3] = m.w[0]; } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n27 = vfix(vload(f27)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29B0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f24, 16); } }
L_29B8: { ++fl.t; set_vi(i4, i4 + 3u); }
L_29C0: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29C8: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i4 + 4294967287u); std::memcpy(q, &f27, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_2998; }
L_29D0: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const Reg128 m = f0; f24.w[2] = m.w[3]; f24.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29D8: { ++fl.t; const v4u uv = vmax(vload(f25), vload(f25)); { const Reg128 m = f0; f25.w[2] = m.w[3]; f25.w[3] = m.w[0]; } vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vfix(vload(f25)); n24 = vfix(vload(f24)); }
L_29E0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f24, 16); } }
L_29F0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f25, 16); } }
L_29F8: { ++fl.t; vu::kick(1, i1); }
L_2A00: { ++fl.t; set_vi(i5, vu::top()); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_2A10: { ++fl.t; set_vi(i1, i5 + 102u); }
L_2A18: { ++fl.t; set_vi(i5, i5 + 2u); }
L_2A20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); std::memcpy(&f28, q, 16); } n28 = vfix(vload(f28)); }
L_2A28: { ++fl.t; set_vi(i4, i1 + 0u); }
L_2A30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_2A38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); std::memcpy(&f29, q, 16); } n29 = vfix(vload(f29)); }
L_2A40: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2A48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 42u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_2A50: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f28, 16); set_vi(i4, i4 + 1u); } }
L_2A58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 43u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_2A60: { ++fl.t; set_vi(i6, i2 & i6); }
L_2A68: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f29, 16); set_vi(i4, i4 + 1u); } }
L_2A70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f29, q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(f29)); }
L_2A78: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_2A80: { ++fl.t; set_vi(i6, i6 + i6); }
L_2A88: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2A90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); std::memcpy(&f24.w[0], q + 0, 4); std::memcpy(&f24.w[1], q + 4, 4); } n24 = vfix(vload(f24)); }
L_2A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 25u); std::memcpy(&f25.w[0], q + 0, 4); std::memcpy(&f25.w[1], q + 4, 4); } n25 = vfix(vload(f25)); }
L_2AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); } n26 = vfix(vload(f26)); }
L_2AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); std::memcpy(&f28, q, 16); } n28 = vfix(vload(f28)); }
L_2AB0: { ++fl.t; set_vi(i6, i6 + i5); }
L_2AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f30.w[0], q + 0, 4); std::memcpy(&f30.w[1], q + 4, 4); std::memcpy(&f30.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n30 = vfix(vload(f30)); }
L_2AC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 27u); std::memcpy(&f27.w[0], q + 0, 4); std::memcpy(&f27.w[1], q + 4, 4); } n27 = vfix(vload(f27)); }
L_2AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f29, 16); set_vi(i4, i4 + 1u); } }
L_2AD0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f28, 16); } }
L_2AD8: { ++fl.t; const v4u uv = vmuln(n24, vsplat(n30[0])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n30[1])); set_vi(i4, i4 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AE8: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n30[2])); { const Reg128 m = f0; f30.w[2] = m.w[3]; f30.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vfix(vload(f30)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f29.w[0], q + 0, 4); std::memcpy(&f29.w[1], q + 4, 4); std::memcpy(&f29.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f30, vsel(vload(f30), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n29 = vfix(vload(f29)); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AF8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f28, 16); } }
L_2B00: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } }
L_2B08: { ++fl.t; set_vi(i4, i4 + 3u); }
L_2B10: { ++fl.t; const v4u uv = vmuln(n24, vsplat(n29[0])); { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f30, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B18: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n29[1])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n29[2])); { const Reg128 m = f0; f30.w[2] = m.w[3]; f30.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vfix(vload(f30)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_2AF0; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); vstore(f30, vsel(vload(f30), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B30: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f30, 16); } }
L_2B38: { ++fl.t; vu::kick(1, i1); }
L_2B40: { ++fl.t; ending = true; }
L_2B48: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.tpc = 11088u; return; }
L_2B50: { ++fl.t; pend = true; }
L_2B58: { ++fl.t; }
    if (pend) { pend = false; goto L_25F8; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; vu::interpret(1, 11104u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; vu::interpret(1, jpc);
    return;
}

void vu1_070AF9B51D984916(Vu0Regs &r, std::uint8_t *mem) {
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
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0BA8;
L_0BA8: { ++fl.t; set_vi(i3, vu::top()); }
L_0BB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0BB8: { ++fl.t; }
L_0BC0: { ++fl.t; }
L_0BC8: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0BD0: { ++fl.t; set_vi(i2, i12 & i2); }
L_0BD8: { ++fl.t; set_vi(i1, i10 + 0u); }
L_0BE0: { ++fl.t; pend = 0u == i2; }
L_0BE8: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0C28; }
L_0BF0: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0BF8: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0C00: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f7, q, 16); set_vi(i3, i3 + 1u); } n7 = vfix(vload(f7)); }
L_0C08: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0C10: { ++fl.t; }
L_0C18: { ++fl.t; pend = 0u != i4; }
L_0C20: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f7, 16); set_vi(i1, i1 + 1u); } }
    if (pend) { pend = false; goto L_0C00; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0C30: { ++fl.t; }
L_0C38: { ++fl.t; }
L_0C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f7, q, 16); set_vi(i3, i3 + 1u); } n7 = vfix(vload(f7)); }
L_0C48: { ++fl.t; set_vi(i2, i12 & i2); }
L_0C50: { ++fl.t; set_vi(i2, i2 + i2); }
L_0C58: { ++fl.t; set_vi(i2, i2 + i3); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } n8 = vfix(vload(f8)); }
L_0C68: { ++fl.t; const v4u uv = vitof(vload(f8), 0); set_vi(i5, f8.w[3]); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0C70: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0C78: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f11, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); nacc = uv; }
L_0C80: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); vstore(facc, uv); nacc = uv; }
L_0C88: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f7, 16); set_vi(i1, i1 + 1u); } vstore(f7, uv); n7 = uv; }
L_0C90: { ++fl.t; const v4u uv = vitof(vload(f8), 12); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0C98: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
L_0CA0: { ++fl.t; }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; }
L_0CC0: { ++fl.t; const v4u uv = vitof(vload(f11), 0); set_vi(i5, i5 & i13); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0CC8: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i4, i5 + 0u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0CD0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i5, f11.w[3]); vstore(f11, uv); }
L_0CD8: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(f9, vsel(vload(f9), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n8 = vfix(vload(f8)); }
L_0CE0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); vstore(facc, uv); nacc = uv; }
L_0CE8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); vstore(facc, uv); nacc = uv; }
L_0CF0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); vstore(facc, uv); nacc = uv; }
L_0CF8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; const v4u uv = vmin(vload(f9), vsplat(f5.w[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D10: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
L_0D18: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0D20: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D28: { ++fl.t; const v4u uv = vitof(vload(f8), 12); set_vi(i6, i4 + 0u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0D30: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i5, i5 & i13); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D38: { ++fl.t; const v4u uv = vitof(vload(f9), 0); set_vi(i4, i5 + 0u); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0D40: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i5, f9.w[3]); vstore(f9, uv); }
L_0D48: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 9u); vstore(f11, uv); }
L_0D50: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); set_vi(i5, i5 & i13); vstore(f10, vsel(vload(f10), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D58: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0D60: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); set_vi(i7, f9.w[3]); vstore(facc, uv); nacc = uv; }
L_0D68: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); set_vi(i6, i7 | i6); vstore(facc, uv); nacc = uv; }
L_0D70: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0D78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i6))); f9.w[3] = v; } }
L_0D80: { ++fl.t; const v4u uv = vmin(vload(f10), vsplat(f5.w[1])); { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D88: { ++fl.t; pend = i3 == i2; }
L_0D90: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
    if (pend) { pend = false; goto L_0E18; }
L_0D98: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0DA0: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q, &f9, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0DA8: { ++fl.t; const v4u uv = vitof(vload(f8), 12); set_vi(i6, i4 + 0u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0DB0: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i4, i5 + 0u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0DB8: { ++fl.t; const v4u uv = vitof(vload(f10), 0); set_vi(i5, f10.w[3]); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0DC0: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i5, i5 & i13); vstore(f9, uv); }
L_0DC8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 3u); vstore(f11, uv); }
L_0DD0: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); vstore(f10, vsel(vload(f10), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0DD8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0DE0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); set_vi(i7, f9.w[3]); vstore(facc, uv); nacc = uv; }
L_0DE8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); set_vi(i6, i7 | i6); vstore(facc, uv); nacc = uv; }
L_0DF0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } }
L_0E00: { ++fl.t; const v4u uv = vmin(vload(f10), vsplat(f5.w[1])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i6))); f9.w[3] = v; } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E08: { ++fl.t; pend = i3 != i2; }
L_0E10: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
    if (pend) { pend = false; goto L_0D98; }
L_0E18: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0E20: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E28: { ++fl.t; const v4u uv = vitof(vload(f8), 12); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0E30: { ++fl.t; }
L_0E38: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0E40: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q, &f9, 16); } vstore(f9, uv); }
L_0E48: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); vstore(f11, uv); }
L_0E50: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); vstore(f7, vsel(vload(f7), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0E58: { ++fl.t; set_vi(i2, f9.w[3]); }
L_0E60: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n7, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967293u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0E68: { ++fl.t; const v4u uv = vmin(vload(f7), vsplat(f5.w[1])); set_vi(i4, i2 | i4); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E70: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); f9.w[3] = v; } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E78: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); { std::uint8_t *q = qword(mem, i1 + 4294967292u); std::memcpy(q, &f9, 16); } vstore(f9, uv); }
L_0E80: { ++fl.t; set_vi(i4, f9.w[3]); }
L_0E88: { ++fl.t; set_vi(i5, i4 | i5); }
L_0E90: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i5))); f9.w[3] = v; } }
L_0E98: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967295u); std::memcpy(q, &f9, 16); } }
L_0EA0: { ++fl.t; pend = 0u == i14; }
L_0EA8: { ++fl.t; }
    if (pend) { pend = false; goto L_0EC0; }
L_0EB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 472u); pendj = true; }
L_0EB8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0EC0: { ++fl.t; vu::kick(1, i10); }
L_0EC8: { ++fl.t; ending = true; }
L_0ED0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; r.tpc = 3800u; return; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, 3800u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_0B1018E928900BFE(Vu0Regs &r, std::uint8_t *mem) {
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
    Reg128 f27 = r.vf[27];
    Reg128 f28 = r.vf[28];
    Reg128 f29 = r.vf[29];
    Reg128 f30 = r.vf[30];
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
    v4u n27 = vfix(vload(f27));
    v4u n28 = vfix(vload(f28));
    v4u n29 = vfix(vload(f29));
    v4u n30 = vfix(vload(f30));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    goto L_25F8;
L_25F8: { ++fl.t; set_vi(i6, vu::top()); }
L_2600: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2608: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(f24)); }
L_2610: { ++fl.t; set_vi(i4, i6 + 102u); }
L_2618: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f27, q, 16); } n27 = vfix(vload(f27)); }
L_2620: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 0, 2); set_vi(i8, v); } }
L_2628: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_2630: { ++fl.t; set_vi(i5, i4 + 0u); }
L_2638: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_2640: { ++fl.t; set_vi(i8, i2 & i8); }
L_2648: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f27, 16); set_vi(i5, i5 + 1u); } }
L_2650: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f27, q, 16); } n27 = vfix(vload(f27)); }
L_2658: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f26, 16); set_vi(i5, i5 + 1u); } }
L_2660: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f25, 16); set_vi(i5, i5 + 1u); } }
L_2668: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f25, q, 16); set_vi(i7, i7 + 1u); } n25 = vfix(vload(f25)); }
L_2670: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f27, 16); set_vi(i5, i5 + 1u); } }
L_2678: { ++fl.t; set_vi(i8, i8 + i8); }
L_2680: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f24, 16); set_vi(i5, i5 + 1u); } }
L_2688: { ++fl.t; set_vi(i8, i8 + i7); }
L_2690: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } }
L_2698: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(f24)); }
L_26A0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f27, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_26A8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_26B0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); vstore(facc, uv); nacc = uv; }
L_26B8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f28, uv); n28 = uv; }
L_26C0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[2])); vstore(facc, uv); nacc = uv; }
L_26C8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n27[3])); vstore(facc, uv); nacc = uv; }
L_26D0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); { const Reg128 m = f0; f27.w[2] = m.w[3]; } vstore(f26, uv); n27 = vfix(vload(f27)); n26 = uv; }
L_26D8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); vstore(facc, uv); nacc = uv; }
L_26E0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f25, 16); set_vi(i5, i5 + 1u); } vstore(facc, uv); nacc = uv; }
L_26E8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); set_vi(i5, i5 + 3u); vstore(facc, uv); nacc = uv; }
L_26F0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f27, 16); } vstore(f27, uv); n27 = uv; }
L_26F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n26[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2700: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n26[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2708: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n26[2])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2710: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n24[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f27.w[3]); fl.end_q(r, qb, 6u); } vstore(facc, uv); nacc = uv; }
L_2718: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_2720: { ++fl.t; const v4u uv = vmax(vload(f28), vsplat(0u)); { std::uint8_t *q = qword(mem, i7 + 4294967295u); std::memcpy(q, &f26, 16); } vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_2728: { ++fl.t; }
L_2730: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n24[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, uv); nacc = uv; }
L_2738: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); set_vi(i9, i9 & i3); vstore(f28, uv); n28 = uv; }
L_2740: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n26[0])); set_vi(i6, i6 + 261u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2748: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n26[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i1, v); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2750: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2758: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n26[2])); set_vi(i5, i5 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2760: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); set_vi(i10, i2 + i9); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2768: { ++fl.t; const std::uint32_t uclip = clip_value(r, f28, f28.w[3]); set_vi(i9, i1 & i3); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2770: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f27, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_2778: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n24[1])); set_vi(i6, i6 + 3u); vstore(facc, uv); nacc = uv; }
L_2780: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[2])); f26.w[3] = f15.w[3]; vstore(facc, uv); n26 = vfix(vload(f26)); nacc = uv; }
L_2788: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f28, uv); n28 = uv; }
L_2790: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[2])); { const Reg128 m = f0; f27.w[2] = m.w[3]; } vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_2798: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n27[3])); set_vi(i1, i1 + 32767u); vstore(facc, uv); nacc = uv; }
L_27A0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n24[3])); set_vi(i10, i1 | i10); vstore(f29, uv); n29 = uv; }
L_27A8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); { std::uint8_t *q = qword(mem, i5 + 4294967292u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_27B0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); { std::uint8_t *q = qword(mem, i6 + 4294967292u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_27B8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f27, 16); } vstore(facc, uv); nacc = uv; }
L_27C0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i7 + 4294967295u); std::memcpy(q, &f29, 16); } vstore(f27, uv); n27 = uv; }
L_27C8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n29[0])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27D0: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n29[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27D8: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n29[2])); vstore(f29, vsel(vload(f29), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_27E0: { ++fl.t; const v4u uv = vftoi(vload(f25), 4); vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vfix(vload(f28)); }
L_27E8: { ++fl.t; const v4u uv = vmin(vload(f26), vsplat(r.i)); vstore(f25, uv); n25 = vfix(vload(f25)); }
L_27F0: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n24[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f27.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_27F8: { ++fl.t; const v4u uv = vmax(vload(f29), vsplat(0u)); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_2800: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_2808: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 4294967292u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_2810: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); pend = i7 != i8; vstore(f28, uv); n28 = uv; }
L_2818: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f25, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_2748; }
L_2820: { ++fl.t; }
L_2828: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n26[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2830: { ++fl.t; const std::uint32_t uclip = clip_value(r, f28, f28.w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2838: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n26[2])); f26.w[3] = f15.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); set_vi(i9, i2 + i9); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2850: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_2858: { ++fl.t; const v4u uv = vftoi(vload(f27), 4); set_vi(i1, i1 + 32767u); vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vfix(vload(f28)); }
L_2860: { ++fl.t; set_vi(i9, i1 | i9); }
L_2868: { ++fl.t; const v4u uv = vmin(vload(f26), vsplat(r.i)); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(f26, uv); n26 = vfix(vload(f26)); }
L_2870: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_2878: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } }
L_2880: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q + 0, &f28.w[0], 4); std::memcpy(q + 4, &f28.w[1], 4); std::memcpy(q + 8, &f28.w[2], 4); } }
L_2888: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f26, 16); } }
L_2890: { ++fl.t; vu::kick(1, i4); }
L_2898: { ++fl.t; set_vi(i1, vu::top()); }
L_28A0: { ++fl.t; set_vi(i5, i1 + 2u); }
L_28A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_28B0: { ++fl.t; set_vi(i1, i1 + 252u); }
L_28B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_28C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_28C8: { ++fl.t; set_vi(i4, i1 + 0u); }
L_28D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_28D8: { ++fl.t; set_vi(i6, i2 & i6); }
L_28E0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_28E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_28F0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f26, 16); set_vi(i4, i4 + 1u); } }
L_28F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f26, q, 16); } n26 = vfix(vload(f26)); }
L_2900: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2908: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f24, q, 16); set_vi(i5, i5 + 1u); } n24 = vfix(vload(f24)); }
L_2910: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_2918: { ++fl.t; set_vi(i6, i6 + i6); }
L_2920: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f26, 16); set_vi(i4, i4 + 1u); } }
L_2928: { ++fl.t; set_vi(i6, i6 + i5); }
L_2930: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } }
L_2938: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n26 = vfix(vload(f26)); }
L_2940: { ++fl.t; }
L_2948: { ++fl.t; }
L_2950: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2958: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, 0u + 32u); std::memcpy(&f24, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2960: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2968: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f24, 16); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2988: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f24, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2990: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); set_vi(i4, i4 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2998: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29A0: { ++fl.t; const v4u uv = vmax(vload(f25), vload(f25)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); std::memcpy(&f26.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n26 = vfix(vload(f26)); n27 = vfix(vload(f27)); }
L_29A8: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { const Reg128 m = f0; f27.w[2] = m.w[3]; f27.w[3] = m.w[0]; } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n27 = vfix(vload(f27)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29B0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f24, 16); } }
L_29B8: { ++fl.t; set_vi(i4, i4 + 3u); }
L_29C0: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n26[0])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29C8: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i4 + 4294967287u); std::memcpy(q, &f27, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_2998; }
L_29D0: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n26[2])); { const Reg128 m = f0; f24.w[2] = m.w[3]; f24.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29D8: { ++fl.t; const v4u uv = vmax(vload(f25), vload(f25)); { const Reg128 m = f0; f25.w[2] = m.w[3]; f25.w[3] = m.w[0]; } vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vfix(vload(f25)); n24 = vfix(vload(f24)); }
L_29E0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_29E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f24, 16); } }
L_29F0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f25, 16); } }
L_29F8: { ++fl.t; vu::kick(1, i1); }
L_2A00: { ++fl.t; set_vi(i5, vu::top()); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_2A10: { ++fl.t; set_vi(i1, i5 + 102u); }
L_2A18: { ++fl.t; set_vi(i5, i5 + 2u); }
L_2A20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); std::memcpy(&f28, q, 16); } n28 = vfix(vload(f28)); }
L_2A28: { ++fl.t; set_vi(i4, i1 + 0u); }
L_2A30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_2A38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); std::memcpy(&f29, q, 16); } n29 = vfix(vload(f29)); }
L_2A40: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2A48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 42u); std::memcpy(&f25, q, 16); } n25 = vfix(vload(f25)); }
L_2A50: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f28, 16); set_vi(i4, i4 + 1u); } }
L_2A58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 43u); std::memcpy(&f24, q, 16); } n24 = vfix(vload(f24)); }
L_2A60: { ++fl.t; set_vi(i6, i2 & i6); }
L_2A68: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f29, 16); set_vi(i4, i4 + 1u); } }
L_2A70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f29, q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(f29)); }
L_2A78: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f25, 16); set_vi(i4, i4 + 1u); } }
L_2A80: { ++fl.t; set_vi(i6, i6 + i6); }
L_2A88: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f24, 16); set_vi(i4, i4 + 1u); } }
L_2A90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); std::memcpy(&f24.w[0], q + 0, 4); std::memcpy(&f24.w[1], q + 4, 4); } n24 = vfix(vload(f24)); }
L_2A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 25u); std::memcpy(&f25.w[0], q + 0, 4); std::memcpy(&f25.w[1], q + 4, 4); } n25 = vfix(vload(f25)); }
L_2AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&f26.w[0], q + 0, 4); std::memcpy(&f26.w[1], q + 4, 4); } n26 = vfix(vload(f26)); }
L_2AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); std::memcpy(&f28, q, 16); } n28 = vfix(vload(f28)); }
L_2AB0: { ++fl.t; set_vi(i6, i6 + i5); }
L_2AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f30.w[0], q + 0, 4); std::memcpy(&f30.w[1], q + 4, 4); std::memcpy(&f30.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n30 = vfix(vload(f30)); }
L_2AC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 27u); std::memcpy(&f27.w[0], q + 0, 4); std::memcpy(&f27.w[1], q + 4, 4); } n27 = vfix(vload(f27)); }
L_2AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f29, 16); set_vi(i4, i4 + 1u); } }
L_2AD0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f28, 16); } }
L_2AD8: { ++fl.t; const v4u uv = vmuln(n24, vsplat(n30[0])); { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AE0: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n30[1])); set_vi(i4, i4 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AE8: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n30[2])); { const Reg128 m = f0; f30.w[2] = m.w[3]; f30.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vfix(vload(f30)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f29.w[0], q + 0, 4); std::memcpy(&f29.w[1], q + 4, 4); std::memcpy(&f29.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f30, vsel(vload(f30), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n29 = vfix(vload(f29)); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2AF8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f28, 16); } }
L_2B00: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); set_vi(i5, i5 + 1u); } }
L_2B08: { ++fl.t; set_vi(i4, i4 + 3u); }
L_2B10: { ++fl.t; const v4u uv = vmuln(n24, vsplat(n29[0])); { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f30, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B18: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n29[1])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B20: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n29[2])); { const Reg128 m = f0; f30.w[2] = m.w[3]; f30.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vfix(vload(f30)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_2AF0; }
L_2B28: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); vstore(f30, vsel(vload(f30), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_2B30: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f30, 16); } }
L_2B38: { ++fl.t; vu::kick(1, i1); }
L_2B40: { ++fl.t; ending = true; }
L_2B48: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.tpc = 11088u; return; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; vu::interpret(1, 11088u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; vu::interpret(1, jpc);
    return;
}

void vu1_0BD13F6979B552C7(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    goto L_0EF0;
L_0EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f31, q, 16); } }
L_0EF8: { ++fl.t; set_vi(i13, 0u + 32767u); }
L_0F00: { ++fl.t; set_vi(i12, 0u + 32767u); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 16u) + 12, 2); set_vi(i14, v); } }
L_0F10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(q, &f31, 16); } }
L_0F18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f10, q, 16); } }
L_0F28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f9, q, 16); } }
L_0F30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f8, q, 16); } }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f7, q, 16); } }
L_0F40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f6.w[3], q + 12, 4); } }
L_0F48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[3], q + 12, 4); } }
L_0F50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0F58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0F60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0F68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_0F70: { ++fl.t; set_vi(i13, i13 + 1u); }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.tpc = 3960u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; vu::interpret(1, 3960u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[31] = f31; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_0DCA7D028D76634E(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    goto L_0048;
L_0048: { ++fl.t; const v4u uv = vaddn(n8, n5); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f5, q, 16); } vstore(f8, uv); n5 = vfix(vload(f5)); n8 = uv; }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f4, q, 16); } n4 = vfix(vload(f4)); }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f3, q, 16); } n3 = vfix(vload(f3)); }
L_0060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f2, q, 16); } n2 = vfix(vload(f2)); }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f1, q, 16); } n1 = vfix(vload(f1)); }
L_0070: { ++fl.t; }
L_0078: { ++fl.t; const v4u uv = vmax(vload(f8), vload(f8)); vstore(f10, uv); n10 = vfix(vload(f10)); }
L_0080: { ++fl.t; const v4u uv = vmax(vload(f7), vload(f7)); set_vi(i5, i2 + 0u); vstore(f9, uv); n9 = vfix(vload(f9)); }
L_0088: { ++fl.t; const v4u uv = vmax(vload(f2), vload(f2)); f11.w[0] = f1.w[0]; f11.w[1] = f1.w[1]; f11.w[2] = f1.w[2]; f11.w[3] = f1.w[3]; vstore(f12, uv); n11 = vfix(vload(f11)); n12 = vfix(vload(f12)); }
L_0090: { ++fl.t; }
L_0098: { ++fl.t; const v4u uv = vftoi(vload(f10), 4); vstore(f15, uv); n15 = vfix(vload(f15)); }
L_00A0: { ++fl.t; const v4u uv = vftoi(vload(f9), 4); vstore(f14, uv); n14 = vfix(vload(f14)); }
L_00A8: { ++fl.t; const v4u uv = vftoi(vload(f12), 4); vstore(f13, uv); n13 = vfix(vload(f13)); }
L_00B0: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i6, i5 - 1u); vstore(f16, uv); n16 = vfix(vload(f16)); }
L_00B8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 3u); std::memcpy(q, &f15, 16); } }
L_00C0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &f14, 16); } }
L_00C8: { ++fl.t; const v4u uv = vaddn(n10, n5); { std::uint8_t *q = qword(mem, i3 + 4u); std::memcpy(q, &f13, 16); } vstore(f14, uv); n14 = uv; }
L_00D0: { ++fl.t; const v4u uv = vaddn(n12, n6); { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q, &f16, 16); } vstore(f16, uv); n16 = uv; }
L_00D8: { ++fl.t; const v4u uv = vaddn(n11, n6); pend = i6 == 0u; vstore(f15, uv); n15 = uv; }
L_00E0: { ++fl.t; const v4u uv = vaddn(n9, n5); vu::kick(1, i3); vstore(f13, uv); n13 = uv; }
    if (pend) { pend = false; goto L_0148; }
L_00E8: { ++fl.t; const v4u uv = vftoi(vload(f14), 4); vstore(f11, uv); n11 = vfix(vload(f11)); }
L_00F0: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); vstore(f10, uv); n10 = vfix(vload(f10)); }
L_00F8: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); vstore(f9, uv); n9 = vfix(vload(f9)); }
L_0100: { ++fl.t; const v4u uv = vftoi(vload(f13), 4); set_vi(i5, i6 - 1u); vstore(f12, uv); n12 = vfix(vload(f12)); }
L_0108: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &f11, 16); } }
L_0110: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f10, 16); } }
L_0118: { ++fl.t; const v4u uv = vaddn(n15, n6); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &f9, 16); } vstore(f11, uv); n11 = uv; }
L_0120: { ++fl.t; const v4u uv = vaddn(n14, n5); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f12, 16); } vstore(f10, uv); n10 = uv; }
L_0128: { ++fl.t; const v4u uv = vaddn(n13, n5); pend = i5 != 0u; vstore(f9, uv); n9 = uv; }
L_0130: { ++fl.t; const v4u uv = vaddn(n16, n6); vu::kick(1, i4); vstore(f12, uv); n12 = uv; }
    if (pend) { pend = false; goto L_0090; }
L_0138: { ++fl.t; pend = true; }
L_0140: { ++fl.t; }
    if (pend) { pend = false; goto L_0160; }
L_0148: { ++fl.t; set_vi(i5, i3 + 0u); }
L_0150: { ++fl.t; set_vi(i3, i4 + 0u); }
L_0158: { ++fl.t; set_vi(i4, i5 + 0u); }
L_0160: { ++fl.t; const v4u uv = vaddn(n1, n4); set_vi(i1, i1 - 1u); vstore(f1, uv); n1 = uv; }
L_0168: { ++fl.t; const v4u uv = vaddn(n8, n3); vstore(f8, uv); n8 = uv; }
L_0170: { ++fl.t; const v4u uv = vaddn(n7, n3); pend = i1 != 0u; vstore(f7, uv); n7 = uv; }
L_0178: { ++fl.t; const v4u uv = vaddn(n2, n4); vstore(f2, uv); n2 = uv; }
    if (pend) { pend = false; goto L_0070; }
L_0180: { ++fl.t; ending = true; }
L_0188: { ++fl.t; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.tpc = 400u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; vu::interpret(1, 400u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; vu::interpret(1, jpc);
    return;
}

void vu1_109AC4E027CD7413(Vu0Regs &r, std::uint8_t *mem) {
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
    Reg128 f27 = r.vf[27];
    Reg128 f28 = r.vf[28];
    Reg128 f29 = r.vf[29];
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
    v4u n27 = vfix(vload(f27));
    v4u n28 = vfix(vload(f28));
    v4u n29 = vfix(vload(f29));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    goto L_0410;
L_0410: { ++fl.t; set_vi(i3, vu::top()); }
L_0418: { ++fl.t; set_vi(i5, i3 + 1u); }
L_0420: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f20, q, 16); set_vi(i5, i5 + 1u); } n20 = vfix(vload(f20)); }
L_0428: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i4, v); } }
L_0430: { ++fl.t; set_vi(i3, i3 + 150u); }
L_0438: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f23, q, 16); } n23 = vfix(vload(f23)); }
L_0440: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_0448: { ++fl.t; set_vi(i6, i1 & i4); }
L_0450: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f23, 16); set_vi(i4, i4 + 1u); } }
L_0468: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f23, q, 16); } n23 = vfix(vload(f23)); }
L_0470: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } }
L_0478: { ++fl.t; set_vi(i7, i6 + i6); }
L_0480: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_0488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f21, q, 16); set_vi(i5, i5 + 1u); } n21 = vfix(vload(f21)); }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f23, 16); set_vi(i4, i4 + 1u); } }
L_0498: { ++fl.t; set_vi(i6, i7 + i6); }
L_04A0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f20, 16); set_vi(i4, i4 + 1u); } }
L_04A8: { ++fl.t; set_vi(i6, i6 + i5); }
L_04B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_04B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f23, q, 16); set_vi(i5, i5 + 1u); } n23 = vfix(vload(f23)); }
L_04C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n20 = vfix(vload(f20)); }
L_04C8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04D0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04D8: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n23[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04E0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04E8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n23[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04F0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); f29.w[0] = f25.w[0]; f29.w[1] = f25.w[1]; f29.w[2] = f25.w[2]; vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(f29)); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04F8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n23[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0500: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0508: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n23[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0510: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0518: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0520: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(0x3F800000u)); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0528: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_0530: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n26[1])); vstore(facc, uv); nacc = uv; }
L_0538: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n26[2])); vstore(facc, uv); nacc = uv; }
L_0540: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f21, 16); set_vi(i4, i4 + 1u); } vstore(f25, uv); n25 = uv; }
L_0548: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); set_vi(i7, i7 & i2); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); set_vi(i7, i1 + i7); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0560: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f25.w[3]); fl.end_q(r, qb, 7u); } }
L_0568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_0570: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f26, q, 16); set_vi(i5, i5 + 1u); } n26 = vfix(vload(f26)); }
L_0578: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); f22.w[0] = f20.w[0]; f22.w[1] = f20.w[1]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0580: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); set_vi(i7, i7 & i2); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0590: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n26[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0598: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); { const Reg128 m = f0; f24.w[2] = m.w[3]; f24.w[3] = m.w[0]; } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); f24.w[0] = f22.w[0]; f24.w[1] = f22.w[1]; vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n26[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05B0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05B8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n26[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); f29.w[0] = f24.w[0]; f29.w[1] = f24.w[1]; f29.w[2] = f24.w[2]; f29.w[3] = f24.w[3]; vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(f29)); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n26[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D0: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n26[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n26[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E8: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n26[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F8: { ++fl.t; }
L_0600: { ++fl.t; const v4u uv = vftoi(vload(f21), 4); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &f29, 16); } vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vfix(vload(f27)); }
L_0608: { ++fl.t; const v4u uv = vmax(vload(f23), vsplat(0u)); f29.w[0] = f25.w[0]; f29.w[1] = f25.w[1]; f29.w[2] = f25.w[2]; vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(f29)); n21 = vfix(vload(f21)); }
L_0610: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, uv); n23 = vfix(vload(f23)); nacc = uv; }
L_0618: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n26[1])); set_vi(i7, i1 + i7); vstore(facc, uv); nacc = uv; }
L_0620: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n26[2])); { std::uint8_t *q = qword(mem, i4 + 5u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &f27.w[0], 4); std::memcpy(q + 4, &f27.w[1], 4); std::memcpy(q + 8, &f27.w[2], 4); } vstore(f25, uv); n25 = uv; }
L_0630: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); set_vi(i4, i4 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0640: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); f22.w[0] = f20.w[0]; f22.w[1] = f20.w[1]; vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(f22)); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0648: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f25.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0650: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); set_vi(i7, i7 & i2); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0658: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); set_vi(i7, i1 + i7); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0660: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 5u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0668: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f27, q, 16); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vfix(vload(f27)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0680: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[3])); f24.w[0] = f22.w[0]; f24.w[1] = f22.w[1]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); { const Reg128 m = f0; f24.w[2] = m.w[3]; f24.w[3] = m.w[0]; } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0698: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n27[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06A0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n27[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); f29.w[0] = f24.w[0]; f29.w[1] = f24.w[1]; f29.w[2] = f24.w[2]; f29.w[3] = f24.w[3]; vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(f29)); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n27[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06C0: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06C8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n27[0])); f21.w[3] = f19.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n27[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D8: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n27[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(0x3F800000u)); vstore(f27, vsel(vload(f27), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E8: { ++fl.t; const v4u uv = vmin(vload(f21), vsplat(r.i)); vstore(f28, uv); n28 = vfix(vload(f28)); }
L_06F0: { ++fl.t; const v4u uv = vftoi(vload(f26), 4); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &f29, 16); } vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_06F8: { ++fl.t; const v4u uv = vmax(vload(f23), vsplat(0u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); n21 = vfix(vload(f21)); }
L_0700: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); f29.w[0] = f25.w[0]; f29.w[1] = f25.w[1]; f29.w[2] = f25.w[2]; vstore(facc, uv); n29 = vfix(vload(f29)); nacc = uv; }
L_0708: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { std::uint8_t *q = qword(mem, i4 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(facc, uv); nacc = uv; }
L_0710: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); pend = i5 != i6; vstore(facc, uv); nacc = uv; }
L_0718: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &f26.w[0], 4); std::memcpy(q + 4, &f26.w[1], 4); std::memcpy(q + 8, &f26.w[2], 4); } vstore(f25, uv); n25 = uv; }
    if (pend) { pend = false; goto L_0630; }
L_0720: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0728: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0730: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); { const Reg128 m = f0; f24.w[2] = m.w[3]; f24.w[3] = m.w[0]; } vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(f24)); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0738: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0740: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0748: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0750: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0758: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0760: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); f21.w[3] = f19.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0768: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f25.w[3]); fl.end_q(r, qb, 3u); } vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0770: { ++fl.t; const v4u uv = vmin(vload(f21), vsplat(r.i)); f24.w[0] = f20.w[0]; f24.w[1] = f20.w[1]; vstore(f20, uv); n24 = vfix(vload(f24)); n20 = vfix(vload(f20)); }
L_0778: { ++fl.t; const v4u uv = vmax(vload(f23), vsplat(0u)); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); }
L_0780: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &f24, 16); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0788: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f20, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0790: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0798: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); f21.w[3] = f19.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(f21)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(f21, vsel(vload(f21), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A8: { ++fl.t; }
L_07B0: { ++fl.t; }
L_07B8: { ++fl.t; const v4u uv = vftoi(vload(f25), 4); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(f25)); }
L_07C0: { ++fl.t; const v4u uv = vmin(vload(f21), vsplat(r.i)); vstore(f21, uv); n21 = vfix(vload(f21)); }
L_07C8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q + 0, &f25.w[0], 4); std::memcpy(q + 4, &f25.w[1], 4); std::memcpy(q + 8, &f25.w[2], 4); } }
L_07D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f21, 16); } }
L_07D8: { ++fl.t; vu::kick(1, i3); }
L_07E0: { ++fl.t; ending = true; }
L_07E8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.tpc = 2032u; return; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, 2032u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, jpc);
    return;
}

void vu1_14E2EF04C14A62D7(Vu0Regs &r, std::uint8_t *mem) {
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
    goto L_3778;
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
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, 15440u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[10] = i10; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_1690D41535B3ACD6(Vu0Regs &r, std::uint8_t *mem) {
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
    Reg128 f31 = r.vf[31];
    std::uint16_t i14 = r.vi[14];
    goto L_0790;
L_0790: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&f31, q, 16); } }
L_0798: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 16u) + 12, 2); set_vi(i14, v); } }
L_07A0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_07A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f8, q, 16); } }
L_07B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f7, q, 16); } }
L_07B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f6, q, 16); } }
L_07C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f5, q, 16); } }
L_07C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_07D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_07D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_07E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } }
L_07E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(q, &f31, 16); } ending = true; }
L_07F0: { ++fl.t; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[31] = f31; r.vi[14] = i14; r.tpc = 2040u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[31] = f31; r.vi[14] = i14; vu::interpret(1, 2040u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[31] = f31; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_1DCC0B64CF585F85(Vu0Regs &r, std::uint8_t *mem) {
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
    v4u n14 = vfix(vload(f14));
    v4u n15 = vfix(vload(f15));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    goto L_0350;
L_0108: { ++fl.t; set_vi(i2, vu::top()); }
L_0110: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f12, q, 16); set_vi(i4, i4 + 1u); } n12 = vfix(vload(f12)); }
L_0120: { ++fl.t; set_vi(i2, i2 + 102u); }
L_0128: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f15, q, 16); } n15 = vfix(vload(f15)); }
L_0130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 0, 2); set_vi(i5, v); } }
L_0138: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f14, q, 16); } n14 = vfix(vload(f14)); }
L_0140: { ++fl.t; set_vi(i3, i2 + 0u); }
L_0148: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f13, q, 16); } n13 = vfix(vload(f13)); }
L_0150: { ++fl.t; set_vi(i5, i1 & i5); }
L_0158: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f15, 16); set_vi(i3, i3 + 1u); } }
L_0160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f15, q, 16); } n15 = vfix(vload(f15)); }
L_0168: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f14, 16); set_vi(i3, i3 + 1u); } }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f13, 16); set_vi(i3, i3 + 1u); } }
L_0178: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f13, q, 16); set_vi(i4, i4 + 1u); } n13 = vfix(vload(f13)); }
L_0180: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f15, 16); set_vi(i3, i3 + 1u); } }
L_0188: { ++fl.t; set_vi(i5, i5 + i5); }
L_0190: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f12, 16); set_vi(i3, i3 + 1u); } }
L_0198: { ++fl.t; set_vi(i5, i5 + i4); }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f12, q, 16); set_vi(i4, i4 + 1u); } n12 = vfix(vload(f12)); }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f15, q, 16); set_vi(i4, i4 + 1u); } n15 = vfix(vload(f15)); }
L_01B0: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n15[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01B8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n12[3])); { const Reg128 m = f0; f15.w[2] = m.w[3]; } vstore(f14, vsel(vload(f14), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C8: { ++fl.t; }
L_01D0: { ++fl.t; }
L_01D8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n12[0])); { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &f13, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); nacc = uv; }
L_01E0: { ++fl.t; const v4u uv = vmax(vload(f14), vsplat(0u)); { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &f15, 16); } vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_01E8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n12[1])); vstore(facc, uv); nacc = uv; }
L_01F0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n12[2])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f13, q, 16); set_vi(i4, i4 + 1u); } vstore(facc, uv); n13 = vfix(vload(f13)); nacc = uv; }
L_01F8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 12, &f12.w[3], 4); } vstore(f12, uv); n12 = uv; }
L_0200: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f14, q, 16); set_vi(i4, i4 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); f15.w[3] = f4.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0218: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0220: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n14[2])); { const Reg128 m = f0; f14.w[2] = m.w[3]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n14[3])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0230: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n13[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f12.w[3]); fl.end_q(r, qb, 7u); } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0238: { ++fl.t; const v4u uv = vmin(vload(f15), vsplat(r.i)); set_vi(i3, i3 + 6u); vstore(f16, uv); }
L_0240: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n13[0])); { std::uint8_t *q = qword(mem, i3 + 4294967293u); std::memcpy(q, &f14, 16); } vstore(facc, uv); nacc = uv; }
L_0248: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n13[1])); f14.w[0] = f12.w[0]; f14.w[1] = f12.w[1]; f14.w[2] = f12.w[2]; vstore(facc, uv); n14 = vfix(vload(f14)); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_0258: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n13[2])); vstore(facc, uv); nacc = uv; }
L_0260: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 12, &f13.w[3], 4); } vstore(f12, uv); n12 = uv; }
L_0268: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n14, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i3 + 4294967291u); std::memcpy(q, &f16, 16); } vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0270: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f13, q, 16); set_vi(i4, i4 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vfix(vload(f13)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&f14, q, 16); set_vi(i4, i4 + 1u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i3, i3 + 3u); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); f15.w[3] = f4.w[3]; vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_0298: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n14[2])); { const Reg128 m = f0; f14.w[2] = m.w[3]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(f14)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n14[3])); { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 12, &f13.w[3], 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n13[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f12.w[3]); fl.end_q(r, qb, 7u); } vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_02B0: { ++fl.t; const v4u uv = vmin(vload(f15), vsplat(r.i)); { std::uint8_t *q = qword(mem, i3 + 4294967289u); std::memcpy(q + 0, &f16.w[0], 4); std::memcpy(q + 4, &f16.w[1], 4); std::memcpy(q + 8, &f16.w[2], 4); } vstore(f16, uv); }
L_02B8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n13[0])); { std::uint8_t *q = qword(mem, i3 + 4294967293u); std::memcpy(q, &f14, 16); } vstore(facc, uv); nacc = uv; }
L_02C0: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n13[1])); f14.w[0] = f12.w[0]; f14.w[1] = f12.w[1]; f14.w[2] = f12.w[2]; vstore(facc, uv); n14 = vfix(vload(f14)); nacc = uv; }
L_02C8: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_02D0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n13[2])); { std::uint8_t *q = qword(mem, i3 + 4294967291u); std::memcpy(q, &f16, 16); } vstore(facc, uv); nacc = uv; }
L_02D8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); pend = i4 != i5; vstore(f12, uv); n12 = uv; }
L_02E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n14, vfix(vsplat(r.q))); vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
    if (pend) { pend = false; goto L_0270; }
L_02E8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f12.w[3]); fl.end_q(r, qb, 4u); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0300: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f15, vsel(vload(f15), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); f15.w[3] = f4.w[3]; vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(f15)); }
L_0310: { ++fl.t; const v4u uv = vmin(vload(f15), vsplat(r.i)); { std::uint8_t *q = qword(mem, i3 + 4294967292u); std::memcpy(q + 0, &f16.w[0], 4); std::memcpy(q + 4, &f16.w[1], 4); std::memcpy(q + 8, &f16.w[2], 4); } vstore(f16, uv); }
L_0318: { ++fl.t; fl.flush_q(r); }
L_0320: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i3 + 4294967294u); std::memcpy(q, &f16, 16); } vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0328: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 0, &f16.w[0], 4); std::memcpy(q + 4, &f16.w[1], 4); std::memcpy(q + 8, &f16.w[2], 4); } }
L_0338: { ++fl.t; vu::kick(1, i2); }
L_0340: { ++fl.t; ending = true; }
L_0348: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.tpc = 848u; return; }
L_0350: { ++fl.t; pend = true; }
L_0358: { ++fl.t; }
    if (pend) { pend = false; goto L_0108; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, 864u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.acc = facc; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, jpc);
    return;
}

void vu1_233BF8B3C1F4A474(Vu0Regs &r, std::uint8_t *mem) {
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
    goto L_1C68;
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
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, 8736u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, jpc);
    return;
}

void vu1_29C8FEF6E3DF3104(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i10 = r.vi[10];
    goto L_36C0;
L_36C0: { ++fl.t; vu::kick(1, i10); }
L_36C8: { ++fl.t; ending = true; }
L_36D0: { ++fl.t; }
    if (ending) { r.tpc = 14040u; return; }
    vu::interpret(1, 14040u);
    return;
dispatch:
    vu::interpret(1, jpc);
    return;
}

void vu1_30D0425A3091A400(Vu0Regs &r, std::uint8_t *mem) {
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
    Reg128 f27 = r.vf[27];
    Reg128 f28 = r.vf[28];
    Reg128 f29 = r.vf[29];
    Reg128 f30 = r.vf[30];
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
    v4u n27 = vfix(vload(f27));
    v4u n28 = vfix(vload(f28));
    v4u n29 = vfix(vload(f29));
    v4u n30 = vfix(vload(f30));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    goto L_14C0;
L_0EF0: { ++fl.t; set_vi(i6, vu::top()); }
L_0EF8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_0F00: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f23, q, 16); set_vi(i7, i7 + 1u); } n23 = vfix(vload(f23)); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 0, 2); set_vi(i5, v); } }
L_0F10: { ++fl.t; set_vi(i3, i6 + 150u); }
L_0F18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_0F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_0F28: { ++fl.t; set_vi(i8, i1 & i5); }
L_0F30: { ++fl.t; set_vi(i5, i3 + 0u); }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_0F40: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f20, 16); set_vi(i5, i5 + 1u); } }
L_0F48: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f22, 16); set_vi(i5, i5 + 1u); } }
L_0F50: { ++fl.t; set_vi(i4, i8 + i8); }
L_0F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f22, q, 16); set_vi(i7, i7 + 1u); } n22 = vfix(vload(f22)); }
L_0F60: { ++fl.t; set_vi(i8, i4 + i8); }
L_0F68: { ++fl.t; set_vi(i8, i8 + i7); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } }
L_0F78: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(f24)); }
L_0F80: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f29, q, 16); set_vi(i7, i7 + 1u); } n29 = vfix(vload(f29)); }
L_0F88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f21, 16); set_vi(i5, i5 + 1u); } }
L_0F98: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[3])); { const Reg128 m = f0; f26.w[2] = m.w[3]; f26.w[3] = m.w[0]; } vstore(facc, uv); n26 = vfix(vload(f26)); nacc = uv; }
L_0FA0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n29[2])); f26.w[0] = f29.w[0]; f26.w[1] = f29.w[1]; vstore(facc, uv); n26 = vfix(vload(f26)); nacc = uv; }
L_0FA8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f20, 16); set_vi(i5, i5 + 1u); } vstore(f25, uv); n25 = uv; }
L_0FB0: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f23, 16); set_vi(i5, i5 + 1u); } vstore(facc, uv); nacc = uv; }
L_0FB8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f22, 16); set_vi(i5, i5 + 1u); } vstore(facc, uv); nacc = uv; }
L_0FC0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &f26, 16); } vstore(f26, uv); n26 = uv; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f18.w[0], q + 0, 4); std::memcpy(&f18.w[1], q + 4, 4); std::memcpy(&f18.w[2], q + 8, 4); } vstore(facc, uv); n18 = vfix(vload(f18)); nacc = uv; }
L_0FD0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[1], q + 4, 4); std::memcpy(&f19.w[2], q + 8, 4); } vstore(facc, uv); n19 = vfix(vload(f19)); nacc = uv; }
L_0FD8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n29[3])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f28.w[0], q + 0, 4); std::memcpy(&f28.w[1], q + 4, 4); std::memcpy(&f28.w[2], q + 8, 4); set_vi(i7, i7 + 1u); } vstore(f27, uv); n28 = vfix(vload(f28)); n27 = uv; }
L_0FE0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); } vstore(facc, uv); n22 = vfix(vload(f22)); nacc = uv; }
L_0FE8: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&f21.w[0], q + 0, 4); std::memcpy(&f21.w[1], q + 4, 4); std::memcpy(&f21.w[2], q + 8, 4); } vstore(facc, uv); n21 = vfix(vload(f21)); nacc = uv; }
L_0FF0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n29[3])); vstore(f29, uv); n29 = uv; }
L_0FF8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n28[0])); vstore(facc, uv); nacc = uv; }
L_1000: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n28[1])); vstore(facc, uv); nacc = uv; }
L_1008: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n28[2])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); std::memcpy(&f17.w[2], q + 8, 4); } vstore(f28, uv); n17 = vfix(vload(f17)); n28 = uv; }
L_1010: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n28[0])); set_vi(i4, i6 + 300u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1018: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n28[1])); { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&f23, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1020: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n28[2])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(f28, vsel(vload(f28), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1028: { ++fl.t; }
L_1030: { ++fl.t; }
L_1038: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); std::memcpy(&f20.w[2], q + 8, 4); } vstore(facc, uv); n20 = vfix(vload(f20)); nacc = uv; }
L_1040: { ++fl.t; const v4u uv = vmax(vload(f28), vsplat(0u)); set_vi(i9, i9 & i2); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(f25)); }
L_1048: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n24[1])); set_vi(i9, i1 + i9); vstore(facc, uv); nacc = uv; }
L_1050: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 308u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_1058: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(f29, uv); n29 = uv; }
L_1060: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); set_vi(i5, i5 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1068: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); set_vi(i6, i6 + 309u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1070: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); f25.w[3] = f23.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(f25)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1078: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i7 + 4294967293u); std::memcpy(q, &f29, 16); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1080: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n29[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } vstore(facc, uv); nacc = uv; }
L_1088: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n29[1])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f24, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n24 = vfix(vload(f24)); nacc = uv; }
L_1090: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f29, q, 16); set_vi(i7, i7 + 1u); } vstore(facc, uv); n29 = vfix(vload(f29)); nacc = uv; }
L_1098: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const Reg128 m = f0; f27.w[2] = m.w[3]; f27.w[3] = m.w[0]; } vstore(f26, uv); n27 = vfix(vload(f27)); n26 = uv; }
L_10A0: { ++fl.t; const v4u uv = vmin(vload(f25), vsplat(r.i)); set_vi(i9, i9 & i2); vstore(f28, uv); n28 = vfix(vload(f28)); }
L_10A8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[3])); set_vi(i9, i1 + i9); vstore(facc, uv); nacc = uv; }
L_10B0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n29[2])); f27.w[0] = f29.w[0]; f27.w[1] = f29.w[1]; vstore(facc, uv); n27 = vfix(vload(f27)); nacc = uv; }
L_10B8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n29[3])); vstore(f25, uv); n25 = uv; }
L_10C0: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&f30.w[0], q + 0, 4); std::memcpy(&f30.w[1], q + 4, 4); std::memcpy(&f30.w[2], q + 8, 4); set_vi(i7, i7 + 1u); } vstore(facc, uv); n30 = vfix(vload(f30)); nacc = uv; }
L_10C8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f28, 16); } vstore(facc, uv); nacc = uv; }
L_10D0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &f27, 16); } vstore(f27, uv); n27 = uv; }
L_10D8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i6 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_10E0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(facc, uv); nacc = uv; }
L_10E8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n29[3])); set_vi(i5, i5 + 3u); vstore(f28, uv); n28 = uv; }
L_10F0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[3])); set_vi(i6, i6 + 3u); vstore(facc, uv); nacc = uv; }
L_10F8: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n29[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f26.w[3]); fl.end_q(r, qb, 7u); } vstore(facc, uv); nacc = uv; }
L_1100: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n29[3])); vstore(f29, uv); n29 = uv; }
L_1108: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n30[0])); vstore(facc, uv); nacc = uv; }
L_1110: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n30[1])); vstore(facc, uv); nacc = uv; }
L_1118: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n30[2])); vstore(f30, uv); n30 = uv; }
L_1120: { ++fl.t; }
L_1128: { ++fl.t; }
L_1130: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1138: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1140: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n30[1])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &f30, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1148: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n30[2])); vstore(f30, vsel(vload(f30), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1150: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n24[0])); vstore(facc, uv); nacc = uv; }
L_1158: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n24[1])); vstore(facc, uv); nacc = uv; }
L_1160: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n24[2])); vstore(facc, uv); nacc = uv; }
L_1168: { ++fl.t; const v4u uv = vmax(vload(f30), vsplat(0u)); vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(f25)); }
L_1170: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(0x3F800000u)); vstore(f29, uv); n29 = uv; }
L_1178: { ++fl.t; const v4u uv = vftoi(vload(f26), 4); vstore(f26, vsel(vload(f26), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(f26)); }
L_1180: { ++fl.t; }
L_1188: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); f25.w[3] = f23.w[3]; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(f25)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1190: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); { std::uint8_t *q = qword(mem, i7 + 4294967293u); std::memcpy(q, &f29, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f26.w[0], 4); std::memcpy(q + 4, &f26.w[1], 4); std::memcpy(q + 8, &f26.w[2], 4); } }
L_11A0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); pend = i7 != i8; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A8: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i6 + 4294967292u); std::memcpy(q + 0, &f26.w[0], 4); std::memcpy(q + 4, &f26.w[1], 4); std::memcpy(q + 8, &f26.w[2], 4); } vstore(f25, vsel(vload(f25), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1080; }
L_11B0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n29[0])); vstore(facc, uv); nacc = uv; }
L_11B8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n29[1])); vstore(facc, uv); nacc = uv; }
L_11C0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n29[2])); vstore(facc, uv); nacc = uv; }
L_11C8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(f29, uv); n29 = uv; }
L_11D0: { ++fl.t; const v4u uv = vmin(vload(f25), vsplat(r.i)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f29.w[3]); fl.end_q(r, qb, 3u); } vstore(f25, uv); n25 = vfix(vload(f25)); }
L_11D8: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f25, 16); } }
L_11E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f29, vsel(vload(f29), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11E8: { ++fl.t; const v4u uv = vftoi(vload(f29), 4); vstore(f29, vsel(vload(f29), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(f29)); }
L_11F0: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f29.w[0], 4); std::memcpy(q + 4, &f29.w[1], 4); std::memcpy(q + 8, &f29.w[2], 4); } }
L_11F8: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q + 0, &f29.w[0], 4); std::memcpy(q + 4, &f29.w[1], 4); std::memcpy(q + 8, &f29.w[2], 4); } }
L_1200: { ++fl.t; vu::kick(1, i3); }
L_1208: { ++fl.t; set_vi(i6, vu::top()); }
L_1210: { ++fl.t; set_vi(i6, i6 + 2u); }
L_1218: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_1220: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f18, q, 16); } n18 = vfix(vload(f18)); }
L_1228: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); std::memcpy(&f19, q, 16); } n19 = vfix(vload(f19)); }
L_1230: { ++fl.t; set_vi(i5, i4 + 0u); }
L_1238: { ++fl.t; set_vi(i7, i1 & i7); }
L_1240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&f20, q, 16); } n20 = vfix(vload(f20)); }
L_1248: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f18, 16); set_vi(i5, i5 + 1u); } }
L_1250: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&f18, q, 16); } n18 = vfix(vload(f18)); }
L_1258: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f19, 16); set_vi(i5, i5 + 1u); } }
L_1260: { ++fl.t; set_vi(i8, i7 + i7); }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&f19, q, 16); } n19 = vfix(vload(f19)); }
L_1270: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f20, 16); set_vi(i5, i5 + 1u); } }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f20, q, 16); set_vi(i6, i6 + 1u); } n20 = vfix(vload(f20)); }
L_1280: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f18, 16); set_vi(i5, i5 + 1u); } }
L_1288: { ++fl.t; set_vi(i7, i8 + i7); }
L_1290: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f19, 16); set_vi(i5, i5 + 1u); } }
L_1298: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 28u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); } n17 = vfix(vload(f17)); }
L_12A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); } n23 = vfix(vload(f23)); }
L_12A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&f18.w[0], q + 0, 4); std::memcpy(&f18.w[1], q + 4, 4); } n18 = vfix(vload(f18)); }
L_12B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[1], q + 4, 4); } n19 = vfix(vload(f19)); }
L_12B8: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f20, 16); set_vi(i5, i5 + 1u); } }
L_12C0: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, 0u + 32u); std::memcpy(&f21, q, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vfix(vload(f21)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12C8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vfix(vload(f20)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12D0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const std::uint8_t *q = qword(mem, i6 + 4u); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12D8: { ++fl.t; set_vi(i7, i7 + i6); }
L_12E0: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &f21, 16); } }
L_12E8: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(q, &f21, 16); } vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12F0: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12F8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); set_vi(i6, i6 + 6u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1300: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1308: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); set_vi(i6, i6 + 3u); vstore(f24, vsel(vload(f24), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1310: { ++fl.t; { const Reg128 m = f0; f22.w[2] = m.w[3]; f22.w[3] = m.w[0]; } n22 = vfix(vload(f22)); }
L_1318: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &f21, 16); } }
L_1320: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1328: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); pend = i6 != i7; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1330: { ++fl.t; const v4u uv = vmax(vload(f24), vload(f24)); { std::uint8_t *q = qword(mem, i5 + 4294967287u); std::memcpy(q, &f22, 16); } vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); }
    if (pend) { pend = false; goto L_1300; }
L_1338: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const Reg128 m = f0; f22.w[2] = m.w[3]; f22.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1340: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1348: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967290u); std::memcpy(q, &f22, 16); } }
L_1350: { ++fl.t; { const Reg128 m = f0; f22.w[2] = m.w[3]; f22.w[3] = m.w[0]; } n22 = vfix(vload(f22)); }
L_1358: { ++fl.t; const v4u uv = vmax(vload(f20), vload(f20)); vstore(f22, vsel(vload(f22), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); }
L_1360: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f22, 16); } }
L_1368: { ++fl.t; vu::kick(1, i4); }
L_1370: { ++fl.t; set_vi(i5, vu::top()); }
L_1378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&f17, q, 16); } n17 = vfix(vload(f17)); }
L_1380: { ++fl.t; set_vi(i5, i5 + 2u); }
L_1388: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); std::memcpy(&f18, q, 16); } n18 = vfix(vload(f18)); }
L_1390: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_1398: { ++fl.t; set_vi(i4, i3 + 0u); }
L_13A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); std::memcpy(&f22, q, 16); } n22 = vfix(vload(f22)); }
L_13A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f17, 16); set_vi(i4, i4 + 1u); } }
L_13B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 42u); std::memcpy(&f17, q, 16); } n17 = vfix(vload(f17)); }
L_13B8: { ++fl.t; set_vi(i6, i1 & i6); }
L_13C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f18, 16); set_vi(i4, i4 + 1u); } }
L_13C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 43u); std::memcpy(&f18, q, 16); } n18 = vfix(vload(f18)); }
L_13D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_13D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f22, q, 16); set_vi(i5, i5 + 1u); } n22 = vfix(vload(f22)); }
L_13E0: { ++fl.t; set_vi(i7, i6 + i6); }
L_13E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f17, 16); set_vi(i4, i4 + 1u); } }
L_13F0: { ++fl.t; set_vi(i6, i7 + i6); }
L_13F8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f18, 16); set_vi(i4, i4 + 1u); } }
L_1400: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); } n17 = vfix(vload(f17)); }
L_1408: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 25u); std::memcpy(&f18.w[0], q + 0, 4); std::memcpy(&f18.w[1], q + 4, 4); } n18 = vfix(vload(f18)); }
L_1410: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[1], q + 4, 4); } n19 = vfix(vload(f19)); }
L_1418: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); std::memcpy(&f21, q, 16); } n21 = vfix(vload(f21)); }
L_1420: { ++fl.t; set_vi(i6, i6 + i5); }
L_1428: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f23.w[0], q + 0, 4); std::memcpy(&f23.w[1], q + 4, 4); std::memcpy(&f23.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n23 = vfix(vload(f23)); }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 27u); std::memcpy(&f20.w[0], q + 0, 4); std::memcpy(&f20.w[1], q + 4, 4); } n20 = vfix(vload(f20)); }
L_1438: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &f22, 16); set_vi(i4, i4 + 1u); } }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f21, 16); } }
L_1448: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 2u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1450: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); set_vi(i4, i4 + 3u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1458: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const Reg128 m = f0; f23.w[2] = m.w[3]; f23.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1460: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&f22.w[0], q + 0, 4); std::memcpy(&f22.w[1], q + 4, 4); std::memcpy(&f22.w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(f22)); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1468: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f21, 16); } }
L_1470: { ++fl.t; set_vi(i5, i5 + 2u); }
L_1478: { ++fl.t; set_vi(i4, i4 + 3u); }
L_1480: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n22[0])); { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &f23, 16); } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1488: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n22[1])); pend = i5 != i6; vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1490: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n22[2])); { const Reg128 m = f0; f23.w[2] = m.w[3]; f23.w[3] = m.w[0]; } vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(f23)); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_1460; }
L_1498: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); vstore(f23, vsel(vload(f23), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_14A0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &f23, 16); } }
L_14A8: { ++fl.t; vu::kick(1, i3); }
L_14B0: { ++fl.t; ending = true; }
L_14B8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.tpc = 5312u; return; }
L_14C0: { ++fl.t; pend = true; }
L_14C8: { ++fl.t; }
    if (pend) { pend = false; goto L_0EF0; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; vu::interpret(1, 5328u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.vf[23] = f23; r.vf[24] = f24; r.vf[25] = f25; r.vf[26] = f26; r.vf[27] = f27; r.vf[28] = f28; r.vf[29] = f29; r.vf[30] = f30; r.acc = facc; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; vu::interpret(1, jpc);
    return;
}

void vu1_3A09B54770439013(Vu0Regs &r, std::uint8_t *mem) {
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
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    goto L_1BB0;
L_1870: { ++fl.t; set_vi(i6, vu::top()); }
L_1878: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i1, v); } }
L_1880: { ++fl.t; }
L_1888: { ++fl.t; }
L_1890: { ++fl.t; set_vi(i4, i6 + 195u); }
L_1898: { ++fl.t; set_vi(i1, i2 & i1); }
L_18A0: { ++fl.t; set_vi(i5, i4 + 0u); }
L_18A8: { ++fl.t; pend = 0u == i1; }
L_18B0: { ++fl.t; set_vi(i6, i6 + 1u); }
    if (pend) { pend = false; goto L_18F0; }
L_18B8: { ++fl.t; set_vi(i6, i6 - 1u); }
L_18C0: { ++fl.t; set_vi(i7, i1 + 1u); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f16, q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(f16)); }
L_18D0: { ++fl.t; set_vi(i7, i7 - 1u); }
L_18D8: { ++fl.t; }
L_18E0: { ++fl.t; pend = 0u != i7; }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f16, 16); set_vi(i5, i5 + 1u); } }
    if (pend) { pend = false; goto L_18C8; }
L_18F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_18F8: { ++fl.t; }
L_1900: { ++fl.t; }
L_1908: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f16, q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(f16)); }
L_1910: { ++fl.t; set_vi(i7, i2 & i7); }
L_1918: { ++fl.t; set_vi(i7, i7 + i7); }
L_1920: { ++fl.t; set_vi(i7, i7 + i6); }
L_1928: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &f16, 16); set_vi(i5, i5 + 1u); } }
L_1930: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f16, q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(f16)); }
L_1938: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f18, q, 16); set_vi(i6, i6 + 1u); } n18 = vfix(vload(f18)); }
L_1940: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n18[2])); vstore(facc, uv); nacc = uv; }
L_1948: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n18[3])); vstore(facc, uv); nacc = uv; }
L_1950: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); vstore(f17, uv); n17 = uv; }
L_1958: { ++fl.t; }
L_1960: { ++fl.t; }
L_1968: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); { const Reg128 m = f0; f18.w[2] = m.w[3]; } vstore(facc, uv); n18 = vfix(vload(f18)); nacc = uv; }
L_1970: { ++fl.t; const v4u uv = vmax(vload(f17), vsplat(0u)); vstore(f17, uv); n17 = vfix(vload(f17)); }
L_1978: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); vstore(facc, uv); nacc = uv; }
L_1980: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); set_vi(i1, f18.w[0]); vstore(facc, uv); nacc = uv; }
L_1988: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &f18, 16); } vstore(f18, uv); n18 = uv; }
L_1990: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n17[3])); vstore(f16, vsel(vload(f16), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1998: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n17[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19A0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n17[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19A8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n17[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19B0: { ++fl.t; const std::uint32_t uclip = clip_value(r, f18, f18.w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f16.w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_19B8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19C0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); vstore(facc, uv); nacc = uv; }
L_19C8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i1, i1 & i3); vstore(facc, uv); nacc = uv; }
L_19D0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f16, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, uv); n16 = vfix(vload(f16)); nacc = uv; }
L_19D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f19, q, 16); set_vi(i6, i6 + 1u); } n19 = vfix(vload(f19)); }
L_19E0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i8, i1 + 32767u); vstore(f17, uv); n17 = uv; }
L_19E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_19F0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_19F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n19[2])); set_vi(i8, i8 | i1); vstore(facc, uv); nacc = uv; }
L_1A00: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n19[3])); set_vi(i1, f19.w[0]); vstore(facc, uv); nacc = uv; }
L_1A08: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); { const Reg128 m = f0; f19.w[2] = m.w[3]; } vstore(f20, uv); n19 = vfix(vload(f19)); }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_1A18: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(r.i)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f17.w[3]); fl.end_q(r, qb, 7u); } vstore(f18, uv); n18 = vfix(vload(f18)); }
L_1A20: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); set_vi(i5, i5 + 6u); vstore(facc, uv); nacc = uv; }
L_1A28: { ++fl.t; const v4u uv = vmax(vload(f20), vsplat(0u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f19, 16); } vstore(f19, uv); n19 = vfix(vload(f19)); }
L_1A30: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); vstore(facc, uv); nacc = uv; }
L_1A38: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); vstore(facc, uv); nacc = uv; }
L_1A40: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f18, 16); } vstore(f18, uv); n18 = uv; }
L_1A48: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n19[3])); vstore(f16, vsel(vload(f16), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A50: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n19[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A58: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n19[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A60: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n19[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A68: { ++fl.t; const std::uint32_t uclip = clip_value(r, f18, f18.w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f16.w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1A70: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A78: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); set_vi(i1, i1 & i3); vstore(facc, uv); nacc = uv; }
L_1A80: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i8, i1 + 32767u); vstore(facc, uv); nacc = uv; }
L_1A88: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f16, q, 16); set_vi(i6, i6 + 1u); } vstore(facc, uv); n16 = vfix(vload(f16)); nacc = uv; }
L_1A90: { ++fl.t; const v4u uv = vmuln(n17, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&f19, q, 16); set_vi(i6, i6 + 1u); } vstore(f20, vsel(vload(f20), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(f19)); }
L_1A98: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(f17, uv); n17 = uv; }
L_1AA0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 32767u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1AA8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i8, i8 | i1); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1AB0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n19[2])); set_vi(i1, f19.w[0]); vstore(facc, uv); nacc = uv; }
L_1AB8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n19[3])); set_vi(i1, i1 & i3); vstore(facc, uv); nacc = uv; }
L_1AC0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); { const Reg128 m = f0; f19.w[2] = m.w[3]; } vstore(f22, uv); n19 = vfix(vload(f19)); }
L_1AC8: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(r.i)); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } vstore(f21, uv); }
L_1AD0: { ++fl.t; const v4u uv = vftoi(vload(f20), 4); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f17.w[3]); fl.end_q(r, qb, 7u); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(f18)); }
L_1AD8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); set_vi(i5, i5 + 3u); vstore(facc, uv); nacc = uv; }
L_1AE0: { ++fl.t; const v4u uv = vmax(vload(f22), vsplat(0u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &f19, 16); } vstore(f19, uv); n19 = vfix(vload(f19)); }
L_1AE8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &f21, 16); } vstore(facc, uv); nacc = uv; }
L_1AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i5 + 4294967289u); std::memcpy(q + 0, &f18.w[0], 4); std::memcpy(q + 4, &f18.w[1], 4); std::memcpy(q + 8, &f18.w[2], 4); } vstore(facc, uv); nacc = uv; }
L_1AF8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); vstore(f18, uv); n18 = uv; }
L_1B00: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n19[3])); vstore(f16, vsel(vload(f16), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B08: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n19[0])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B10: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n19[1])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B18: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n19[2])); vstore(facc, vsel(vload(facc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B20: { ++fl.t; const std::uint32_t uclip = clip_value(r, f18, f18.w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f16.w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1B28: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B30: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); pend = i6 != i7; vstore(facc, uv); nacc = uv; }
L_1B38: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i8, i1 + 32767u); vstore(facc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_1A88; }
L_1B40: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(facc, uv); nacc = uv; }
L_1B48: { ++fl.t; const v4u uv = vmuln(n17, vfix(vsplat(r.q))); set_vi(i1, i1 + 32767u); vstore(f16, vsel(vload(f16), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B50: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i8, i8 | i1); vstore(f17, uv); n17 = uv; }
L_1B58: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B60: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(f18, vsel(vload(f18), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B68: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f17.w[3]); fl.end_q(r, qb, 3u); } }
L_1B70: { ++fl.t; const v4u uv = vmin(vload(f18), vsplat(r.i)); vstore(f19, uv); n19 = vfix(vload(f19)); }
L_1B78: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &f19, 16); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(f18)); }
L_1B80: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); fl.flush_q(r); vstore(f17, vsel(vload(f17), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B88: { ++fl.t; const v4u uv = vftoi(vload(f17), 4); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &f18.w[0], 4); std::memcpy(q + 4, &f18.w[1], 4); std::memcpy(q + 8, &f18.w[2], 4); } vstore(f18, vsel(vload(f18), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(f18)); }
L_1B90: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &f18.w[0], 4); std::memcpy(q + 4, &f18.w[1], 4); std::memcpy(q + 8, &f18.w[2], 4); } }
L_1B98: { ++fl.t; vu::kick(1, i4); }
L_1BA0: { ++fl.t; ending = true; }
L_1BA8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.tpc = 7088u; return; }
L_1BB0: { ++fl.t; pend = true; }
L_1BB8: { ++fl.t; }
    if (pend) { pend = false; goto L_1870; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, 7104u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vf[20] = f20; r.vf[21] = f21; r.vf[22] = f22; r.acc = facc; r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, jpc);
    return;
}

void vu1_3D4EC5DC1D058AF8(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i1 = r.vi[1];
    goto L_3FF8;
L_0000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 28u); std::memcpy(&f16.w[0], q + 0, 4); std::memcpy(&f16.w[1], q + 4, 4); } }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&f17.w[0], q + 0, 4); std::memcpy(&f17.w[1], q + 4, 4); } }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&f18.w[0], q + 0, 4); std::memcpy(&f18.w[1], q + 4, 4); } }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&f19.w[0], q + 0, 4); std::memcpy(&f19.w[1], q + 4, 4); } }
L_0020: { ++fl.t; set_vi(i1, 0u + 32767u); }
L_0028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&f15, q, 16); } }
L_0030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&f14.w[0], q + 0, 4); std::memcpy(&f14.w[1], q + 4, 4); std::memcpy(&f14.w[2], q + 8, 4); } }
L_0038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&f13.w[0], q + 0, 4); std::memcpy(&f13.w[1], q + 4, 4); std::memcpy(&f13.w[2], q + 8, 4); } }
L_0040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&f12.w[0], q + 0, 4); std::memcpy(&f12.w[1], q + 4, 4); std::memcpy(&f12.w[2], q + 8, 4); } }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&f11, q, 16); } }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&f10, q, 16); } }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&f9, q, 16); } }
L_0060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&f8, q, 16); } }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f7.w[0], q + 0, 4); std::memcpy(&f7.w[1], q + 4, 4); std::memcpy(&f7.w[2], q + 8, 4); } }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f6.w[0], q + 0, 4); std::memcpy(&f6.w[1], q + 4, 4); std::memcpy(&f6.w[2], q + 8, 4); } }
L_0078: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f5.w[0], q + 0, 4); std::memcpy(&f5.w[1], q + 4, 4); std::memcpy(&f5.w[2], q + 8, 4); } }
L_0080: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f4, q, 16); } }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f3, q, 16); } }
L_0090: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f2, q, 16); } }
L_0098: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f1, q, 16); } ending = true; }
L_00A0: { ++fl.t; r.i = 1258291455u; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vi[1] = i1; r.tpc = 168u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vi[1] = i1; vu::interpret(1, 168u);
    return;
L_3FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f10, 16); set_vi(i1, i1 + 1u); } }
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vf[17] = f17; r.vf[18] = f18; r.vf[19] = f19; r.vi[1] = i1; vu::interpret(1, jpc);
    return;
}

void vu1_42F42C5DF4F0D49F(Vu0Regs &r, std::uint8_t *mem) {
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
    v4u n7 = vfix(vload(f7));
    v4u n8 = vfix(vload(f8));
    v4u nacc = vfix(vload(facc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0ED8;
L_0BA8: { ++fl.t; set_vi(i3, vu::top()); }
L_0BB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0BB8: { ++fl.t; }
L_0BC0: { ++fl.t; }
L_0BC8: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0BD0: { ++fl.t; set_vi(i2, i12 & i2); }
L_0BD8: { ++fl.t; set_vi(i1, i10 + 0u); }
L_0BE0: { ++fl.t; pend = 0u == i2; }
L_0BE8: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0C28; }
L_0BF0: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0BF8: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0C00: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f7, q, 16); set_vi(i3, i3 + 1u); } n7 = vfix(vload(f7)); }
L_0C08: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0C10: { ++fl.t; }
L_0C18: { ++fl.t; pend = 0u != i4; }
L_0C20: { ++fl.t; { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f7, 16); set_vi(i1, i1 + 1u); } }
    if (pend) { pend = false; goto L_0C00; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i2, v); } }
L_0C30: { ++fl.t; }
L_0C38: { ++fl.t; }
L_0C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f7, q, 16); set_vi(i3, i3 + 1u); } n7 = vfix(vload(f7)); }
L_0C48: { ++fl.t; set_vi(i2, i12 & i2); }
L_0C50: { ++fl.t; set_vi(i2, i2 + i2); }
L_0C58: { ++fl.t; set_vi(i2, i2 + i3); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } n8 = vfix(vload(f8)); }
L_0C68: { ++fl.t; const v4u uv = vitof(vload(f8), 0); set_vi(i5, f8.w[3]); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0C70: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0C78: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f11, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); nacc = uv; }
L_0C80: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); vstore(facc, uv); nacc = uv; }
L_0C88: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i1); std::memcpy(q, &f7, 16); set_vi(i1, i1 + 1u); } vstore(f7, uv); n7 = uv; }
L_0C90: { ++fl.t; const v4u uv = vitof(vload(f8), 12); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0C98: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
L_0CA0: { ++fl.t; }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; }
L_0CC0: { ++fl.t; const v4u uv = vitof(vload(f11), 0); set_vi(i5, i5 & i13); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0CC8: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i4, i5 + 0u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0CD0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i5, f11.w[3]); vstore(f11, uv); }
L_0CD8: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(f9, vsel(vload(f9), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n8 = vfix(vload(f8)); }
L_0CE0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); vstore(facc, uv); nacc = uv; }
L_0CE8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); vstore(facc, uv); nacc = uv; }
L_0CF0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); vstore(facc, uv); nacc = uv; }
L_0CF8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; const v4u uv = vmin(vload(f9), vsplat(f5.w[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D10: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
L_0D18: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f9, q, 16); set_vi(i3, i3 + 1u); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0D20: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D28: { ++fl.t; const v4u uv = vitof(vload(f8), 12); set_vi(i6, i4 + 0u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0D30: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i5, i5 & i13); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D38: { ++fl.t; const v4u uv = vitof(vload(f9), 0); set_vi(i4, i5 + 0u); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0D40: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i5, f9.w[3]); vstore(f9, uv); }
L_0D48: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 9u); vstore(f11, uv); }
L_0D50: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); set_vi(i5, i5 & i13); vstore(f10, vsel(vload(f10), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D58: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0D60: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); set_vi(i7, f9.w[3]); vstore(facc, uv); nacc = uv; }
L_0D68: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); set_vi(i6, i7 | i6); vstore(facc, uv); nacc = uv; }
L_0D70: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0D78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i6))); f9.w[3] = v; } }
L_0D80: { ++fl.t; const v4u uv = vmin(vload(f10), vsplat(f5.w[1])); { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0D88: { ++fl.t; pend = i3 == i2; }
L_0D90: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
    if (pend) { pend = false; goto L_0E18; }
L_0D98: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f10, q, 16); set_vi(i3, i3 + 1u); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0DA0: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q, &f9, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0DA8: { ++fl.t; const v4u uv = vitof(vload(f8), 12); set_vi(i6, i4 + 0u); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0DB0: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i4, i5 + 0u); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0DB8: { ++fl.t; const v4u uv = vitof(vload(f10), 0); set_vi(i5, f10.w[3]); vstore(f6, vsel(vload(f6), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(f6)); }
L_0DC0: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i5, i5 & i13); vstore(f9, uv); }
L_0DC8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 3u); vstore(f11, uv); }
L_0DD0: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); vstore(f10, vsel(vload(f10), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0DD8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&f8, q, 16); set_vi(i3, i3 + 1u); } vstore(facc, uv); n8 = vfix(vload(f8)); nacc = uv; }
L_0DE0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); set_vi(i7, f9.w[3]); vstore(facc, uv); nacc = uv; }
L_0DE8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); set_vi(i6, i7 | i6); vstore(facc, uv); nacc = uv; }
L_0DF0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); f6.w[0] = f7.w[0]; f6.w[1] = f7.w[1]; f6.w[2] = f7.w[2]; vstore(f7, uv); n6 = vfix(vload(f6)); n7 = uv; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967290u); std::memcpy(q, &f11, 16); } }
L_0E00: { ++fl.t; const v4u uv = vmin(vload(f10), vsplat(f5.w[1])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i6))); f9.w[3] = v; } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E08: { ++fl.t; pend = i3 != i2; }
L_0E10: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, f0.w[3], f7.w[3]); fl.end_q(r, qb, 7u); } }
    if (pend) { pend = false; goto L_0D98; }
L_0E18: { ++fl.t; const v4u uv = vmuln(n6, vfix(vsplat(r.q))); vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0E20: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E28: { ++fl.t; const v4u uv = vitof(vload(f8), 12); vstore(f8, vsel(vload(f8), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n8 = vfix(vload(f8)); }
L_0E30: { ++fl.t; }
L_0E38: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); vstore(facc, vsel(vload(facc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0E40: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); { std::uint8_t *q = qword(mem, i1 + 4294967289u); std::memcpy(q, &f9, 16); } vstore(f9, uv); }
L_0E48: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); vstore(f11, uv); }
L_0E50: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); vstore(f7, vsel(vload(f7), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0E58: { ++fl.t; set_vi(i2, f9.w[3]); }
L_0E60: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n7, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i1 + 4294967293u); std::memcpy(q, &f11, 16); } vstore(f11, vsel(vload(f11), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0E68: { ++fl.t; const v4u uv = vmin(vload(f7), vsplat(f5.w[1])); set_vi(i4, i2 | i4); vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E70: { ++fl.t; const v4u uv = vmax(vload(f11), vsplat(f5.w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); f9.w[3] = v; } vstore(f11, vsel(vload(f11), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0E78: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); { std::uint8_t *q = qword(mem, i1 + 4294967292u); std::memcpy(q, &f9, 16); } vstore(f9, uv); }
L_0E80: { ++fl.t; set_vi(i4, f9.w[3]); }
L_0E88: { ++fl.t; set_vi(i5, i4 | i5); }
L_0E90: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i5))); f9.w[3] = v; } }
L_0E98: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 4294967295u); std::memcpy(q, &f9, 16); } }
L_0EA0: { ++fl.t; pend = 0u == i14; }
L_0EA8: { ++fl.t; }
    if (pend) { pend = false; goto L_0EC0; }
L_0EB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 472u); pendj = true; }
L_0EB8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0EC0: { ++fl.t; vu::kick(1, i10); }
L_0EC8: { ++fl.t; ending = true; }
L_0ED0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; r.tpc = 3800u; return; }
L_0ED8: { ++fl.t; pend = true; }
L_0EE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0BA8; }
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, 3816u);
    return;
dispatch:
    fl.flush_q(r); r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.acc = facc; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_4301005995C2B1AB(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    goto L_0000;
L_0000: { ++fl.t; set_vi(i3, 0u + 9u); }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&f8, q, 16); } n8 = vfix(vload(f8)); }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&f5, q, 16); } n5 = vfix(vload(f5)); }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(&f6, q, 16); } n6 = vfix(vload(f6)); }
L_0020: { ++fl.t; set_vi(i4, i3 + 6u); }
L_0028: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 8u) + 4, 2); set_vi(i2, v); } }
L_0030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 8u) + 0, 2); set_vi(i1, v); } }
L_0038: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &f6, 16); } }
L_0040: { ++fl.t; const v4u uv = vmax(vload(f8), vload(f8)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&f6, q, 16); } vstore(f7, uv); n6 = vfix(vload(f6)); n7 = vfix(vload(f7)); }
L_0048: { ++fl.t; const v4u uv = vaddn(n8, n5); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&f5, q, 16); } vstore(f8, uv); n5 = vfix(vload(f5)); n8 = uv; }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&f4, q, 16); } n4 = vfix(vload(f4)); }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&f3, q, 16); } n3 = vfix(vload(f3)); }
L_0060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&f2, q, 16); } n2 = vfix(vload(f2)); }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&f1, q, 16); } n1 = vfix(vload(f1)); }
L_0070: { ++fl.t; }
L_0078: { ++fl.t; const v4u uv = vmax(vload(f8), vload(f8)); vstore(f10, uv); n10 = vfix(vload(f10)); }
L_0080: { ++fl.t; const v4u uv = vmax(vload(f7), vload(f7)); set_vi(i5, i2 + 0u); vstore(f9, uv); n9 = vfix(vload(f9)); }
L_0088: { ++fl.t; const v4u uv = vmax(vload(f2), vload(f2)); f11.w[0] = f1.w[0]; f11.w[1] = f1.w[1]; f11.w[2] = f1.w[2]; f11.w[3] = f1.w[3]; vstore(f12, uv); n11 = vfix(vload(f11)); n12 = vfix(vload(f12)); }
L_0090: { ++fl.t; }
L_0098: { ++fl.t; const v4u uv = vftoi(vload(f10), 4); vstore(f15, uv); n15 = vfix(vload(f15)); }
L_00A0: { ++fl.t; const v4u uv = vftoi(vload(f9), 4); vstore(f14, uv); n14 = vfix(vload(f14)); }
L_00A8: { ++fl.t; const v4u uv = vftoi(vload(f12), 4); vstore(f13, uv); n13 = vfix(vload(f13)); }
L_00B0: { ++fl.t; const v4u uv = vftoi(vload(f11), 4); set_vi(i6, i5 - 1u); vstore(f16, uv); n16 = vfix(vload(f16)); }
L_00B8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 3u); std::memcpy(q, &f15, 16); } }
L_00C0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &f14, 16); } }
L_00C8: { ++fl.t; const v4u uv = vaddn(n10, n5); { std::uint8_t *q = qword(mem, i3 + 4u); std::memcpy(q, &f13, 16); } vstore(f14, uv); n14 = uv; }
L_00D0: { ++fl.t; const v4u uv = vaddn(n12, n6); { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q, &f16, 16); } vstore(f16, uv); n16 = uv; }
L_00D8: { ++fl.t; const v4u uv = vaddn(n11, n6); pend = i6 == 0u; vstore(f15, uv); n15 = uv; }
L_00E0: { ++fl.t; const v4u uv = vaddn(n9, n5); vu::kick(1, i3); vstore(f13, uv); n13 = uv; }
    if (pend) { pend = false; goto L_0148; }
L_00E8: { ++fl.t; const v4u uv = vftoi(vload(f14), 4); vstore(f11, uv); n11 = vfix(vload(f11)); }
L_00F0: { ++fl.t; const v4u uv = vftoi(vload(f16), 4); vstore(f10, uv); n10 = vfix(vload(f10)); }
L_00F8: { ++fl.t; const v4u uv = vftoi(vload(f15), 4); vstore(f9, uv); n9 = vfix(vload(f9)); }
L_0100: { ++fl.t; const v4u uv = vftoi(vload(f13), 4); set_vi(i5, i6 - 1u); vstore(f12, uv); n12 = vfix(vload(f12)); }
L_0108: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &f11, 16); } }
L_0110: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &f10, 16); } }
L_0118: { ++fl.t; const v4u uv = vaddn(n15, n6); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &f9, 16); } vstore(f11, uv); n11 = uv; }
L_0120: { ++fl.t; const v4u uv = vaddn(n14, n5); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &f12, 16); } vstore(f10, uv); n10 = uv; }
L_0128: { ++fl.t; const v4u uv = vaddn(n13, n5); pend = i5 != 0u; vstore(f9, uv); n9 = uv; }
L_0130: { ++fl.t; const v4u uv = vaddn(n16, n6); vu::kick(1, i4); vstore(f12, uv); n12 = uv; }
    if (pend) { pend = false; goto L_0090; }
L_0138: { ++fl.t; pend = true; }
L_0140: { ++fl.t; }
    if (pend) { pend = false; goto L_0160; }
L_0148: { ++fl.t; set_vi(i5, i3 + 0u); }
L_0150: { ++fl.t; set_vi(i3, i4 + 0u); }
L_0158: { ++fl.t; set_vi(i4, i5 + 0u); }
L_0160: { ++fl.t; const v4u uv = vaddn(n1, n4); set_vi(i1, i1 - 1u); vstore(f1, uv); n1 = uv; }
L_0168: { ++fl.t; const v4u uv = vaddn(n8, n3); vstore(f8, uv); n8 = uv; }
L_0170: { ++fl.t; const v4u uv = vaddn(n7, n3); pend = i1 != 0u; vstore(f7, uv); n7 = uv; }
L_0178: { ++fl.t; const v4u uv = vaddn(n2, n4); vstore(f2, uv); n2 = uv; }
    if (pend) { pend = false; goto L_0070; }
L_0180: { ++fl.t; ending = true; }
L_0188: { ++fl.t; }
    if (ending) { r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.tpc = 400u; return; }
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; vu::interpret(1, 400u);
    return;
dispatch:
    r.vf[1] = f1; r.vf[2] = f2; r.vf[3] = f3; r.vf[4] = f4; r.vf[5] = f5; r.vf[6] = f6; r.vf[7] = f7; r.vf[8] = f8; r.vf[9] = f9; r.vf[10] = f10; r.vf[11] = f11; r.vf[12] = f12; r.vf[13] = f13; r.vf[14] = f14; r.vf[15] = f15; r.vf[16] = f16; r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; vu::interpret(1, jpc);
    return;
}

}
