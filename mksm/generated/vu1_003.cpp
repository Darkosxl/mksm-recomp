#include "ps2/vu_ops.hpp"

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_C9D3CEBB1730479D(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    goto L_0EF0;
L_0EF0: { ++fl.t; set_vi(i6, vu::top()); }
L_0EF8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_0F00: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[23], q, 16); set_vi(i7, i7 + 1u); } n23 = vfix(vload(r.vf[23])); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 0, 2); set_vi(i5, v); } }
L_0F10: { ++fl.t; set_vi(i3, i6 + 150u); }
L_0F18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0F28: { ++fl.t; set_vi(i8, i1 & i5); }
L_0F30: { ++fl.t; set_vi(i5, i3 + 0u); }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0F40: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[20], 16); set_vi(i5, i5 + 1u); } }
L_0F48: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[22], 16); set_vi(i5, i5 + 1u); } }
L_0F50: { ++fl.t; set_vi(i4, i8 + i8); }
L_0F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[22], q, 16); set_vi(i7, i7 + 1u); } n22 = vfix(vload(r.vf[22])); }
L_0F60: { ++fl.t; set_vi(i8, i4 + i8); }
L_0F68: { ++fl.t; set_vi(i8, i8 + i7); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } }
L_0F78: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[24], q, 16); set_vi(i7, i7 + 1u); } n24 = vfix(vload(r.vf[24])); }
L_0F80: { ++fl.t; { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[29], q, 16); set_vi(i7, i7 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_0F88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[21], 16); set_vi(i5, i5 + 1u); } }
L_0F98: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[3])); { const Reg128 m = r.vf[0]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } vstore(r.acc, uv); n26 = vfix(vload(r.vf[26])); nacc = uv; }
L_0FA0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n29[2])); r.vf[26].w[0] = r.vf[29].w[0]; r.vf[26].w[1] = r.vf[29].w[1]; vstore(r.acc, uv); n26 = vfix(vload(r.vf[26])); nacc = uv; }
L_0FA8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[20], 16); set_vi(i5, i5 + 1u); } vstore(r.vf[25], uv); n25 = uv; }
L_0FB0: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[23], 16); set_vi(i5, i5 + 1u); } vstore(r.acc, uv); nacc = uv; }
L_0FB8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[22], 16); set_vi(i5, i5 + 1u); } vstore(r.acc, uv); nacc = uv; }
L_0FC0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[26], 16); } vstore(r.vf[26], uv); n26 = uv; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); std::memcpy(&r.vf[18].w[2], q + 8, 4); } vstore(r.acc, uv); n18 = vfix(vload(r.vf[18])); nacc = uv; }
L_0FD0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); std::memcpy(&r.vf[19].w[2], q + 8, 4); } vstore(r.acc, uv); n19 = vfix(vload(r.vf[19])); nacc = uv; }
L_0FD8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n29[3])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[28].w[0], q + 0, 4); std::memcpy(&r.vf[28].w[1], q + 4, 4); std::memcpy(&r.vf[28].w[2], q + 8, 4); set_vi(i7, i7 + 1u); } vstore(r.vf[27], uv); n28 = vfix(vload(r.vf[28])); n27 = uv; }
L_0FE0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&r.vf[22].w[0], q + 0, 4); std::memcpy(&r.vf[22].w[1], q + 4, 4); std::memcpy(&r.vf[22].w[2], q + 8, 4); } vstore(r.acc, uv); n22 = vfix(vload(r.vf[22])); nacc = uv; }
L_0FE8: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&r.vf[21].w[0], q + 0, 4); std::memcpy(&r.vf[21].w[1], q + 4, 4); std::memcpy(&r.vf[21].w[2], q + 8, 4); } vstore(r.acc, uv); n21 = vfix(vload(r.vf[21])); nacc = uv; }
L_0FF0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n29[3])); vstore(r.vf[29], uv); n29 = uv; }
L_0FF8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n28[0])); vstore(r.acc, uv); nacc = uv; }
L_1000: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n28[1])); vstore(r.acc, uv); nacc = uv; }
L_1008: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n28[2])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); std::memcpy(&r.vf[17].w[2], q + 8, 4); } vstore(r.vf[28], uv); n17 = vfix(vload(r.vf[17])); n28 = uv; }
L_1010: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n28[0])); set_vi(i4, i6 + 300u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1018: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n28[1])); { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[23], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(r.vf[23])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1020: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n28[2])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &r.vf[28], 16); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1028: { ++fl.t; }
L_1030: { ++fl.t; }
L_1038: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); std::memcpy(&r.vf[20].w[2], q + 8, 4); } vstore(r.acc, uv); n20 = vfix(vload(r.vf[20])); nacc = uv; }
L_1040: { ++fl.t; const v4u uv = vmax(vload(r.vf[28]), vsplat(0u)); set_vi(i9, i9 & i2); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_1048: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(n24[1])); set_vi(i9, i1 + i9); vstore(r.acc, uv); nacc = uv; }
L_1050: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i6 + 308u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); nacc = uv; }
L_1058: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(r.vf[29], uv); n29 = uv; }
L_1060: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); set_vi(i5, i5 + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1068: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); set_vi(i6, i6 + 309u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1070: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); r.vf[25].w[3] = r.vf[23].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1078: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i7 + 4294967293u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1080: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n29[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 1u) + 0, 2); set_vi(i9, v); } vstore(r.acc, uv); nacc = uv; }
L_1088: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n29[1])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[24], q, 16); set_vi(i7, i7 + 1u); } vstore(r.acc, uv); n24 = vfix(vload(r.vf[24])); nacc = uv; }
L_1090: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n29[2])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[29], q, 16); set_vi(i7, i7 + 1u); } vstore(r.acc, uv); n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_1098: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const Reg128 m = r.vf[0]; r.vf[27].w[2] = m.w[3]; r.vf[27].w[3] = m.w[0]; } vstore(r.vf[26], uv); n27 = vfix(vload(r.vf[27])); n26 = uv; }
L_10A0: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.i)); set_vi(i9, i9 & i2); vstore(r.vf[28], uv); n28 = vfix(vload(r.vf[28])); }
L_10A8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n24[3])); set_vi(i9, i1 + i9); vstore(r.acc, uv); nacc = uv; }
L_10B0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n29[2])); r.vf[27].w[0] = r.vf[29].w[0]; r.vf[27].w[1] = r.vf[29].w[1]; vstore(r.acc, uv); n27 = vfix(vload(r.vf[27])); nacc = uv; }
L_10B8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n29[3])); vstore(r.vf[25], uv); n25 = uv; }
L_10C0: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n24[3])); { const std::uint8_t *q = qword(mem, i7); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[2], q + 8, 4); set_vi(i7, i7 + 1u); } vstore(r.acc, uv); n30 = vfix(vload(r.vf[30])); nacc = uv; }
L_10C8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &r.vf[28], 16); } vstore(r.acc, uv); nacc = uv; }
L_10D0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n29[3])); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.vf[27], uv); n27 = uv; }
L_10D8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i6 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); nacc = uv; }
L_10E0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n29[2])); { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); nacc = uv; }
L_10E8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n29[3])); set_vi(i5, i5 + 3u); vstore(r.vf[28], uv); n28 = uv; }
L_10F0: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n24[3])); set_vi(i6, i6 + 3u); vstore(r.acc, uv); nacc = uv; }
L_10F8: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n29[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[26].w[3]); fl.end_q(r, qb, 7u); } vstore(r.acc, uv); nacc = uv; }
L_1100: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n29[3])); vstore(r.vf[29], uv); n29 = uv; }
L_1108: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n30[0])); vstore(r.acc, uv); nacc = uv; }
L_1110: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n30[1])); vstore(r.acc, uv); nacc = uv; }
L_1118: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n30[2])); vstore(r.vf[30], uv); n30 = uv; }
L_1120: { ++fl.t; }
L_1128: { ++fl.t; }
L_1130: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n26, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1138: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1140: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n30[1])); { std::uint8_t *q = qword(mem, i7 + 4294967294u); std::memcpy(q, &r.vf[30], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1148: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n30[2])); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1150: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n24[0])); vstore(r.acc, uv); nacc = uv; }
L_1158: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(n24[1])); vstore(r.acc, uv); nacc = uv; }
L_1160: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n24[2])); vstore(r.acc, uv); nacc = uv; }
L_1168: { ++fl.t; const v4u uv = vmax(vload(r.vf[30]), vsplat(0u)); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_1170: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(0x3F800000u)); vstore(r.vf[29], uv); n29 = uv; }
L_1178: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(r.vf[26])); }
L_1180: { ++fl.t; }
L_1188: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); r.vf[25].w[3] = r.vf[23].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1190: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); { std::uint8_t *q = qword(mem, i7 + 4294967293u); std::memcpy(q, &r.vf[29], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } }
L_11A0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); pend = i7 != i8; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A8: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i6 + 4294967292u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1080; }
L_11B0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n29[0])); vstore(r.acc, uv); nacc = uv; }
L_11B8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n29[1])); vstore(r.acc, uv); nacc = uv; }
L_11C0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n29[2])); vstore(r.acc, uv); nacc = uv; }
L_11C8: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[29], uv); n29 = uv; }
L_11D0: { ++fl.t; const v4u uv = vmin(vload(r.vf[25]), vsplat(r.i)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[29].w[3]); fl.end_q(r, qb, 3u); } vstore(r.vf[25], uv); n25 = vfix(vload(r.vf[25])); }
L_11D8: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &r.vf[25], 16); } }
L_11E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[29]), 4); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(r.vf[29])); }
L_11F0: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &r.vf[29].w[0], 4); std::memcpy(q + 4, &r.vf[29].w[1], 4); std::memcpy(q + 8, &r.vf[29].w[2], 4); } }
L_11F8: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 4294967295u); std::memcpy(q + 0, &r.vf[29].w[0], 4); std::memcpy(q + 4, &r.vf[29].w[1], 4); std::memcpy(q + 8, &r.vf[29].w[2], 4); } }
L_1200: { ++fl.t; vu::kick(1, i3); }
L_1208: { ++fl.t; set_vi(i6, vu::top()); }
L_1210: { ++fl.t; set_vi(i6, i6 + 2u); }
L_1218: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_1220: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[18], q, 16); } n18 = vfix(vload(r.vf[18])); }
L_1228: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); std::memcpy(&r.vf[19], q, 16); } n19 = vfix(vload(r.vf[19])); }
L_1230: { ++fl.t; set_vi(i5, i4 + 0u); }
L_1238: { ++fl.t; set_vi(i7, i1 & i7); }
L_1240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_1248: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[18], 16); set_vi(i5, i5 + 1u); } }
L_1250: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&r.vf[18], q, 16); } n18 = vfix(vload(r.vf[18])); }
L_1258: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[19], 16); set_vi(i5, i5 + 1u); } }
L_1260: { ++fl.t; set_vi(i8, i7 + i7); }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&r.vf[19], q, 16); } n19 = vfix(vload(r.vf[19])); }
L_1270: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[20], 16); set_vi(i5, i5 + 1u); } }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[20], q, 16); set_vi(i6, i6 + 1u); } n20 = vfix(vload(r.vf[20])); }
L_1280: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[18], 16); set_vi(i5, i5 + 1u); } }
L_1288: { ++fl.t; set_vi(i7, i8 + i7); }
L_1290: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[19], 16); set_vi(i5, i5 + 1u); } }
L_1298: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 28u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); } n17 = vfix(vload(r.vf[17])); }
L_12A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); } n23 = vfix(vload(r.vf[23])); }
L_12A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); } n18 = vfix(vload(r.vf[18])); }
L_12B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); } n19 = vfix(vload(r.vf[19])); }
L_12B8: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[20], 16); set_vi(i5, i5 + 1u); } }
L_12C0: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, 0u + 32u); std::memcpy(&r.vf[21], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n21 = vfix(vload(r.vf[21])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12C8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vfix(vload(r.vf[20])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12D0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const std::uint8_t *q = qword(mem, i6 + 4u); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(r.vf[23])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12D8: { ++fl.t; set_vi(i7, i7 + i6); }
L_12E0: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_12E8: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(q, &r.vf[21], 16); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12F0: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 6u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_12F8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); set_vi(i6, i6 + 6u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1300: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(r.vf[23])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1308: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); set_vi(i6, i6 + 3u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1310: { ++fl.t; { const Reg128 m = r.vf[0]; r.vf[22].w[2] = m.w[3]; r.vf[22].w[3] = m.w[0]; } n22 = vfix(vload(r.vf[22])); }
L_1318: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_1320: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1328: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); pend = i6 != i7; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1330: { ++fl.t; const v4u uv = vmax(vload(r.vf[24]), vload(r.vf[24])); { std::uint8_t *q = qword(mem, i5 + 4294967287u); std::memcpy(q, &r.vf[22], 16); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(r.vf[22])); }
    if (pend) { pend = false; goto L_1300; }
L_1338: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const Reg128 m = r.vf[0]; r.vf[22].w[2] = m.w[3]; r.vf[22].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(r.vf[22])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1340: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1348: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967290u); std::memcpy(q, &r.vf[22], 16); } }
L_1350: { ++fl.t; { const Reg128 m = r.vf[0]; r.vf[22].w[2] = m.w[3]; r.vf[22].w[3] = m.w[0]; } n22 = vfix(vload(r.vf[22])); }
L_1358: { ++fl.t; const v4u uv = vmax(vload(r.vf[20]), vload(r.vf[20])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(r.vf[22])); }
L_1360: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &r.vf[22], 16); } }
L_1368: { ++fl.t; vu::kick(1, i4); }
L_1370: { ++fl.t; set_vi(i5, vu::top()); }
L_1378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[17], q, 16); } n17 = vfix(vload(r.vf[17])); }
L_1380: { ++fl.t; set_vi(i5, i5 + 2u); }
L_1388: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); std::memcpy(&r.vf[18], q, 16); } n18 = vfix(vload(r.vf[18])); }
L_1390: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i6, v); } }
L_1398: { ++fl.t; set_vi(i4, i3 + 0u); }
L_13A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_13A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[17], 16); set_vi(i4, i4 + 1u); } }
L_13B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 42u); std::memcpy(&r.vf[17], q, 16); } n17 = vfix(vload(r.vf[17])); }
L_13B8: { ++fl.t; set_vi(i6, i1 & i6); }
L_13C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[18], 16); set_vi(i4, i4 + 1u); } }
L_13C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 43u); std::memcpy(&r.vf[18], q, 16); } n18 = vfix(vload(r.vf[18])); }
L_13D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[22], 16); set_vi(i4, i4 + 1u); } }
L_13D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[22], q, 16); set_vi(i5, i5 + 1u); } n22 = vfix(vload(r.vf[22])); }
L_13E0: { ++fl.t; set_vi(i7, i6 + i6); }
L_13E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[17], 16); set_vi(i4, i4 + 1u); } }
L_13F0: { ++fl.t; set_vi(i6, i7 + i6); }
L_13F8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[18], 16); set_vi(i4, i4 + 1u); } }
L_1400: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); } n17 = vfix(vload(r.vf[17])); }
L_1408: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 25u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); } n18 = vfix(vload(r.vf[18])); }
L_1410: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); } n19 = vfix(vload(r.vf[19])); }
L_1418: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_1420: { ++fl.t; set_vi(i6, i6 + i5); }
L_1428: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n23 = vfix(vload(r.vf[23])); }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 27u); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); } n20 = vfix(vload(r.vf[20])); }
L_1438: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[22], 16); set_vi(i4, i4 + 1u); } }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_1448: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n23[0])); set_vi(i5, i5 + 2u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1450: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n23[1])); set_vi(i4, i4 + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1458: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n23[2])); { const Reg128 m = r.vf[0]; r.vf[23].w[2] = m.w[3]; r.vf[23].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(r.vf[23])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1460: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[22].w[0], q + 0, 4); std::memcpy(&r.vf[22].w[1], q + 4, 4); std::memcpy(&r.vf[22].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n22 = vfix(vload(r.vf[22])); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1468: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_1470: { ++fl.t; set_vi(i5, i5 + 2u); }
L_1478: { ++fl.t; set_vi(i4, i4 + 3u); }
L_1480: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n22[0])); { std::uint8_t *q = qword(mem, i4 + 4294967290u); std::memcpy(q, &r.vf[23], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1488: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n22[1])); pend = i5 != i6; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1490: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n22[2])); { const Reg128 m = r.vf[0]; r.vf[23].w[2] = m.w[3]; r.vf[23].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vfix(vload(r.vf[23])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; goto L_1460; }
L_1498: { ++fl.t; const v4u uv = vmaddn(nacc, n20, vsplat(0x3F800000u)); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_14A0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &r.vf[23], 16); } }
L_14A8: { ++fl.t; vu::kick(1, i3); }
L_14B0: { ++fl.t; ending = true; }
L_14B8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.tpc = 5312u; return; }
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; vu::interpret(1, 5312u);
    return;
dispatch:
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; vu::interpret(1, jpc);
    return;
}

void vu1_CD74F35A7C439340(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    goto L_07F0;
L_0410: { ++fl.t; set_vi(i3, vu::top()); }
L_0418: { ++fl.t; set_vi(i5, i3 + 1u); }
L_0420: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[20], q, 16); set_vi(i5, i5 + 1u); } n20 = vfix(vload(r.vf[20])); }
L_0428: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i4, v); } }
L_0430: { ++fl.t; set_vi(i3, i3 + 150u); }
L_0438: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0440: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0448: { ++fl.t; set_vi(i6, i1 & i4); }
L_0450: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[23], 16); set_vi(i4, i4 + 1u); } }
L_0468: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0470: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[21], 16); set_vi(i4, i4 + 1u); } }
L_0478: { ++fl.t; set_vi(i7, i6 + i6); }
L_0480: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[22], 16); set_vi(i4, i4 + 1u); } }
L_0488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[21], q, 16); set_vi(i5, i5 + 1u); } n21 = vfix(vload(r.vf[21])); }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[23], 16); set_vi(i4, i4 + 1u); } }
L_0498: { ++fl.t; set_vi(i6, i7 + i6); }
L_04A0: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[20], 16); set_vi(i4, i4 + 1u); } }
L_04A8: { ++fl.t; set_vi(i6, i6 + i5); }
L_04B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_04B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[23], q, 16); set_vi(i5, i5 + 1u); } n23 = vfix(vload(r.vf[23])); }
L_04C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); std::memcpy(&r.vf[20].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } n20 = vfix(vload(r.vf[20])); }
L_04C8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n23[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04D0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04D8: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n23[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04E0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04E8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n23[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04F0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); r.vf[29].w[0] = r.vf[25].w[0]; r.vf[29].w[1] = r.vf[25].w[1]; r.vf[29].w[2] = r.vf[25].w[2]; vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(r.vf[29])); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04F8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n23[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0500: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0508: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n23[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0510: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0518: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0520: { ++fl.t; const v4u uv = vmaddn(nacc, n26, vsplat(0x3F800000u)); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0528: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, uv); n23 = vfix(vload(r.vf[23])); nacc = uv; }
L_0530: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n26[1])); vstore(r.acc, uv); nacc = uv; }
L_0538: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n26[2])); vstore(r.acc, uv); nacc = uv; }
L_0540: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[21], 16); set_vi(i4, i4 + 1u); } vstore(r.vf[25], uv); n25 = uv; }
L_0548: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); set_vi(i7, i7 & i2); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); set_vi(i7, i1 + i7); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0560: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, 7u); } }
L_0568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_0570: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[26], q, 16); set_vi(i5, i5 + 1u); } n26 = vfix(vload(r.vf[26])); }
L_0578: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); r.vf[22].w[0] = r.vf[20].w[0]; r.vf[22].w[1] = r.vf[20].w[1]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(r.vf[22])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0580: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); std::memcpy(&r.vf[20].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(r.vf[20])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); set_vi(i7, i7 & i2); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0590: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0598: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); { const Reg128 m = r.vf[0]; r.vf[24].w[2] = m.w[3]; r.vf[24].w[3] = m.w[0]; } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(r.vf[24])); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); r.vf[24].w[0] = r.vf[22].w[0]; r.vf[24].w[1] = r.vf[22].w[1]; vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(r.vf[24])); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05B0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05B8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); r.vf[29].w[0] = r.vf[24].w[0]; r.vf[29].w[1] = r.vf[24].w[1]; r.vf[29].w[2] = r.vf[24].w[2]; r.vf[29].w[3] = r.vf[24].w[3]; vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(r.vf[29])); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D0: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n26[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E8: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n26[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F0: { ++fl.t; const v4u uv = vmaddn(nacc, n27, vsplat(0x3F800000u)); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F8: { ++fl.t; }
L_0600: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 4); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vfix(vload(r.vf[27])); }
L_0608: { ++fl.t; const v4u uv = vmax(vload(r.vf[23]), vsplat(0u)); r.vf[29].w[0] = r.vf[25].w[0]; r.vf[29].w[1] = r.vf[25].w[1]; r.vf[29].w[2] = r.vf[25].w[2]; vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(r.vf[29])); n21 = vfix(vload(r.vf[21])); }
L_0610: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, uv); n23 = vfix(vload(r.vf[23])); nacc = uv; }
L_0618: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n26[1])); set_vi(i7, i1 + i7); vstore(r.acc, uv); nacc = uv; }
L_0620: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n26[2])); { std::uint8_t *q = qword(mem, i4 + 5u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } vstore(r.vf[25], uv); n25 = uv; }
L_0630: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); set_vi(i4, i4 + 3u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0640: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); r.vf[22].w[0] = r.vf[20].w[0]; r.vf[22].w[1] = r.vf[20].w[1]; vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vfix(vload(r.vf[22])); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0648: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, 7u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0650: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); set_vi(i7, i7 & i2); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0658: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); set_vi(i7, i1 + i7); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0660: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 5u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0668: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vfix(vload(r.vf[27])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[20].w[0], q + 0, 4); std::memcpy(&r.vf[20].w[1], q + 4, 4); std::memcpy(&r.vf[20].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n20 = vfix(vload(r.vf[20])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0680: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n27[3])); r.vf[24].w[0] = r.vf[22].w[0]; r.vf[24].w[1] = r.vf[22].w[1]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(r.vf[24])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n20[2])); { const Reg128 m = r.vf[0]; r.vf[24].w[2] = m.w[3]; r.vf[24].w[3] = m.w[0]; } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(r.vf[24])); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0698: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n27[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06A0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n20[2])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n27[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n20[2])); r.vf[29].w[0] = r.vf[24].w[0]; r.vf[29].w[1] = r.vf[24].w[1]; r.vf[29].w[2] = r.vf[24].w[2]; r.vf[29].w[3] = r.vf[24].w[3]; vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vfix(vload(r.vf[29])); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n27[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06C0: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n20[2])); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06C8: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n27[0])); r.vf[21].w[3] = r.vf[19].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(r.vf[21])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n27[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D8: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n27[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E0: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(0x3F800000u)); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E8: { ++fl.t; const v4u uv = vmin(vload(r.vf[21]), vsplat(r.i)); vstore(r.vf[28], uv); n28 = vfix(vload(r.vf[28])); }
L_06F0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[29], 16); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(r.vf[26])); }
L_06F8: { ++fl.t; const v4u uv = vmax(vload(r.vf[23]), vsplat(0u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[23].w[0], q + 0, 4); std::memcpy(&r.vf[23].w[1], q + 4, 4); std::memcpy(&r.vf[23].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vfix(vload(r.vf[23])); n21 = vfix(vload(r.vf[21])); }
L_0700: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); r.vf[29].w[0] = r.vf[25].w[0]; r.vf[29].w[1] = r.vf[25].w[1]; r.vf[29].w[2] = r.vf[25].w[2]; vstore(r.acc, uv); n29 = vfix(vload(r.vf[29])); nacc = uv; }
L_0708: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { std::uint8_t *q = qword(mem, i4 + 4294967294u); std::memcpy(q, &r.vf[28], 16); } vstore(r.acc, uv); nacc = uv; }
L_0710: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); pend = i5 != i6; vstore(r.acc, uv); nacc = uv; }
L_0718: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[25], uv); n25 = uv; }
    if (pend) { pend = false; goto L_0630; }
L_0720: { ++fl.t; const v4u uv = vmuln(n29, vsplat(n23[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0728: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n23[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0730: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(n23[2])); { const Reg128 m = r.vf[0]; r.vf[24].w[2] = m.w[3]; r.vf[24].w[3] = m.w[0]; } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vfix(vload(r.vf[24])); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0738: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0740: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0748: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0750: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0758: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n23[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0760: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n23[1])); r.vf[21].w[3] = r.vf[19].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(r.vf[21])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0768: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n23[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[25].w[3]); fl.end_q(r, qb, 3u); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0770: { ++fl.t; const v4u uv = vmin(vload(r.vf[21]), vsplat(r.i)); r.vf[24].w[0] = r.vf[20].w[0]; r.vf[24].w[1] = r.vf[20].w[1]; vstore(r.vf[20], uv); n24 = vfix(vload(r.vf[24])); n20 = vfix(vload(r.vf[20])); }
L_0778: { ++fl.t; const v4u uv = vmax(vload(r.vf[23]), vsplat(0u)); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(r.vf[21])); }
L_0780: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n25, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[24], 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0788: { ++fl.t; const v4u uv = vmuln(n16, vsplat(n21[0])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[20], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0790: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n21[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0798: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n21[2])); r.vf[21].w[3] = r.vf[19].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vfix(vload(r.vf[21])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(0x3F800000u)); vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A8: { ++fl.t; }
L_07B0: { ++fl.t; }
L_07B8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_07C0: { ++fl.t; const v4u uv = vmin(vload(r.vf[21]), vsplat(r.i)); vstore(r.vf[21], uv); n21 = vfix(vload(r.vf[21])); }
L_07C8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } }
L_07D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[21], 16); } }
L_07D8: { ++fl.t; vu::kick(1, i3); }
L_07E0: { ++fl.t; ending = true; }
L_07E8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.tpc = 2032u; return; }
L_07F0: { ++fl.t; pend = true; }
L_07F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0410; }
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, 2048u);
    return;
dispatch:
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, jpc);
    return;
}

void vu1_CFB177AA62F20CAB(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i10 = r.vi[10];
    goto L_0B10;
L_0B10: { ++fl.t; vu::kick(1, i10); }
L_0B18: { ++fl.t; ending = true; }
L_0B20: { ++fl.t; }
    if (ending) { r.tpc = 2856u; return; }
    vu::interpret(1, 2856u);
    return;
dispatch:
    vu::interpret(1, jpc);
    return;
}

void vu1_D3CAA5B2DB5EE09F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i10 = r.vi[10];
    goto L_0760;
L_0760: { ++fl.t; vu::kick(1, i10); }
L_0768: { ++fl.t; ending = true; }
L_0770: { ++fl.t; }
    if (ending) { r.tpc = 1912u; return; }
    vu::interpret(1, 1912u);
    return;
dispatch:
    vu::interpret(1, jpc);
    return;
}

void vu1_D3D842247C2C8A43(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    goto L_1BC0;
L_1BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 22u); std::memcpy(&r.vf[16].w[0], q + 0, 4); std::memcpy(&r.vf[16].w[1], q + 4, 4); std::memcpy(&r.vf[16].w[2], q + 8, 4); } }
L_1BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 23u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); std::memcpy(&r.vf[17].w[2], q + 8, 4); } }
L_1BD0: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1BD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 21u); std::memcpy(&r.vf[15].w[0], q + 0, 4); std::memcpy(&r.vf[15].w[1], q + 4, 4); std::memcpy(&r.vf[15].w[2], q + 8, 4); } }
L_1BE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 20u); std::memcpy(&r.vf[14].w[0], q + 0, 4); std::memcpy(&r.vf[14].w[1], q + 4, 4); std::memcpy(&r.vf[14].w[2], q + 8, 4); } }
L_1BE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 19u); std::memcpy(&r.vf[13], q, 16); } }
L_1BF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(&r.vf[12], q, 16); } }
L_1BF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&r.vf[11], q, 16); } }
L_1C00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 16u); std::memcpy(&r.vf[10], q, 16); } }
L_1C08: { ++fl.t; set_vi(i3, 0u + 1u); }
L_1C10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&r.vf[9], q, 16); } }
L_1C18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&r.vf[8], q, 16); } }
L_1C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&r.vf[7], q, 16); } }
L_1C28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&r.vf[6], q, 16); } }
L_1C30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[5], q, 16); } }
L_1C38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_1C40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_1C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } }
L_1C50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } }
L_1C58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } ending = true; }
L_1C60: { ++fl.t; }
    if (ending) { r.vi[2] = i2; r.vi[3] = i3; r.tpc = 7272u; return; }
    r.vi[2] = i2; r.vi[3] = i3; vu::interpret(1, 7272u);
    return;
dispatch:
    r.vi[2] = i2; r.vi[3] = i3; vu::interpret(1, jpc);
    return;
}

void vu1_D8080C630ED74F1F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    goto L_0D10;
L_08D0: { ++fl.t; set_vi(i3, vu::top()); }
L_08D8: { ++fl.t; set_vi(i5, i3 + 1u); }
L_08E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[24], q, 16); set_vi(i5, i5 + 1u); } n24 = vfix(vload(r.vf[24])); }
L_08E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 0, 2); set_vi(i4, v); } }
L_08F0: { ++fl.t; set_vi(i3, i3 + 150u); }
L_08F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_0900: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&r.vf[25], q, 16); } n25 = vfix(vload(r.vf[25])); }
L_0908: { ++fl.t; set_vi(i6, i1 & i4); }
L_0910: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0918: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&r.vf[26], q, 16); } n26 = vfix(vload(r.vf[26])); }
L_0920: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[27], 16); set_vi(i4, i4 + 1u); } }
L_0928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&r.vf[27], q, 16); } n27 = vfix(vload(r.vf[27])); }
L_0930: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[25], 16); set_vi(i4, i4 + 1u); } }
L_0938: { ++fl.t; set_vi(i7, i6 + i6); }
L_0940: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[26], 16); set_vi(i4, i4 + 1u); } }
L_0948: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[25], q, 16); set_vi(i5, i5 + 1u); } n25 = vfix(vload(r.vf[25])); }
L_0950: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[27], 16); set_vi(i4, i4 + 1u); } }
L_0958: { ++fl.t; set_vi(i6, i7 + i6); }
L_0960: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[24], 16); set_vi(i4, i4 + 1u); } }
L_0968: { ++fl.t; set_vi(i6, i6 + i5); }
L_0970: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_0978: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[26], q, 16); set_vi(i5, i5 + 1u); } n26 = vfix(vload(r.vf[26])); }
L_0980: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[24], q, 16); set_vi(i5, i5 + 1u); } n24 = vfix(vload(r.vf[24])); }
L_0988: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0990: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n24[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0998: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n24[3])); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09A0: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09A8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n24[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09B0: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[25], 16); set_vi(i4, i4 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09B8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n26[3])); { const Reg128 m = r.vf[0]; r.vf[31].w[2] = m.w[3]; r.vf[31].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09C0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n24[2])); r.vf[31].w[0] = r.vf[24].w[0]; r.vf[31].w[1] = r.vf[24].w[1]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09C8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n24[3])); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09D0: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09D8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n24[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09E0: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n24[3])); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[31], 16); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09E8: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[31].w[0], q + 0, 4); std::memcpy(&r.vf[31].w[1], q + 4, 4); std::memcpy(&r.vf[31].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09F0: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_09F8: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n26[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A00: { ++fl.t; const v4u uv = vmaddn(nacc, n24, vsplat(0x3F800000u)); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A08: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n31[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A10: { ++fl.t; const v4u uv = vmaddn(nacc, n25, vsplat(n31[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A18: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(n31[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A20: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n24[0])); vstore(r.acc, uv); nacc = uv; }
L_0A28: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n24[1])); vstore(r.acc, uv); nacc = uv; }
L_0A30: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n24[2])); vstore(r.acc, uv); nacc = uv; }
L_0A38: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = uv; }
L_0A40: { ++fl.t; }
L_0A48: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n26[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A50: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n26[1])); set_vi(i7, i7 & i2); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A58: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n26[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A60: { ++fl.t; set_vi(i7, i1 + i7); }
L_0A68: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } }
L_0A70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } }
L_0A78: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[26], q, 16); set_vi(i5, i5 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(r.vf[26])); n25 = vfix(vload(r.vf[25])); }
L_0A80: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_0A88: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A90: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0A98: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n28[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AA0: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n28[3])); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AA8: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AB0: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n28[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AB8: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n28[3])); set_vi(i7, i7 & i2); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AC0: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n26[3])); { const Reg128 m = r.vf[0]; r.vf[31].w[2] = m.w[3]; r.vf[31].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AC8: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n28[2])); r.vf[31].w[0] = r.vf[28].w[0]; r.vf[31].w[1] = r.vf[28].w[1]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AD0: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n28[3])); set_vi(i7, i1 + i7); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AD8: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n26[3])); { std::uint8_t *q = qword(mem, i4 + 5u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AE0: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n28[2])); set_vi(i4, i4 + 6u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AE8: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n28[3])); { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &r.vf[31], 16); } vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AF0: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[31].w[0], q + 0, 4); std::memcpy(&r.vf[31].w[1], q + 4, 4); std::memcpy(&r.vf[31].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0AF8: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B00: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n26[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B08: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(0x3F800000u)); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B10: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n31[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B18: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n31[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B20: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n31[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B28: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); vstore(r.acc, uv); nacc = uv; }
L_0B30: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); vstore(r.acc, uv); nacc = uv; }
L_0B38: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); vstore(r.acc, uv); nacc = uv; }
L_0B40: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = uv; }
L_0B48: { ++fl.t; }
L_0B50: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n26[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B58: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B60: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n26[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B68: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B70: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B78: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); r.vf[31].w[3] = r.vf[23].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B80: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 1u) + 0, 2); set_vi(i7, v); } vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B88: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[26], q, 16); set_vi(i5, i5 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(r.vf[26])); n25 = vfix(vload(r.vf[25])); }
L_0B90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 4); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vfix(vload(r.vf[28])); n29 = vfix(vload(r.vf[29])); }
L_0B98: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BA0: { ++fl.t; const v4u uv = vmin(vload(r.vf[31]), vsplat(r.i)); set_vi(i7, i7 & i2); vstore(r.vf[31], uv); n31 = vfix(vload(r.vf[31])); }
L_0BA8: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n26[3])); set_vi(i7, i1 + i7); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BB0: { ++fl.t; const v4u uv = vmaddn(nacc, n12, vsplat(n28[2])); { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i7; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BB8: { ++fl.t; const v4u uv = vmaddn(nacc, n16, vsplat(n28[3])); { std::uint8_t *q = qword(mem, i4 + 4294967292u); std::memcpy(q + 0, &r.vf[29].w[0], 4); std::memcpy(q + 4, &r.vf[29].w[1], 4); std::memcpy(q + 8, &r.vf[29].w[2], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n26[3])); { std::uint8_t *q = qword(mem, i4 + 4294967291u); std::memcpy(q, &r.vf[31], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n28[2])); { const Reg128 m = r.vf[0]; r.vf[31].w[2] = m.w[3]; r.vf[31].w[3] = m.w[0]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; const v4u uv = vmaddn(nacc, n17, vsplat(n28[3])); r.vf[31].w[0] = r.vf[28].w[0]; r.vf[31].w[1] = r.vf[28].w[1]; vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n10, vsplat(n26[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BE0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n28[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BE8: { ++fl.t; const v4u uv = vmaddn(nacc, n18, vsplat(n28[3])); set_vi(i4, i4 + 3u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BF0: { ++fl.t; const v4u uv = vmuln(n11, vsplat(n26[3])); { std::uint8_t *q = qword(mem, i4 + 4294967293u); std::memcpy(q, &r.vf[31], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BF8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(n28[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C00: { ++fl.t; const v4u uv = vmaddn(nacc, n19, vsplat(n28[3])); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C08: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n26[0])); { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[31].w[0], q + 0, 4); std::memcpy(&r.vf[31].w[1], q + 4, 4); std::memcpy(&r.vf[31].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C10: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C18: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n26[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C20: { ++fl.t; const v4u uv = vmaddn(nacc, n28, vsplat(0x3F800000u)); vstore(r.vf[28], vsel(vload(r.vf[28]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n28 = vsel(n28, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C28: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n31[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C30: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n31[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C38: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n31[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C40: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n28[0])); vstore(r.acc, uv); nacc = uv; }
L_0C48: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n28[1])); vstore(r.acc, uv); nacc = uv; }
L_0C50: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n28[2])); vstore(r.acc, uv); nacc = uv; }
L_0C58: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[27], uv); n27 = uv; }
L_0C60: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n26[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C68: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n26[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C70: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n26[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C78: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n25[0])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C80: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n25[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C88: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n25[2])); pend = i5 != i6; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C90: { ++fl.t; r.vf[31].w[3] = r.vf[23].w[3]; n31 = vfix(vload(r.vf[31])); }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CA0: { ++fl.t; const v4u uv = vmax(vload(r.vf[26]), vsplat(0u)); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vfix(vload(r.vf[26])); }
L_0CA8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 4); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vfix(vload(r.vf[25])); }
L_0CB0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CB8: { ++fl.t; const v4u uv = vmin(vload(r.vf[31]), vsplat(r.i)); vstore(r.vf[31], uv); n31 = vfix(vload(r.vf[31])); }
L_0CC0: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n26[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CC8: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i4 + 4294967292u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CD0: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n26[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CD8: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i4 + 4294967291u); std::memcpy(q, &r.vf[31], 16); } vstore(r.vf[31], vsel(vload(r.vf[31]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vsel(n31, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0CE0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 4); r.vf[31].w[3] = r.vf[23].w[3]; vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n31 = vfix(vload(r.vf[31])); n24 = vfix(vload(r.vf[24])); }
L_0CE8: { ++fl.t; const v4u uv = vmin(vload(r.vf[31]), vsplat(r.i)); { std::uint8_t *q = qword(mem, i4 + 4294967295u); std::memcpy(q + 0, &r.vf[24].w[0], 4); std::memcpy(q + 4, &r.vf[24].w[1], 4); std::memcpy(q + 8, &r.vf[24].w[2], 4); } vstore(r.vf[31], uv); n31 = vfix(vload(r.vf[31])); }
L_0CF0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4294967294u); std::memcpy(q, &r.vf[31], 16); } }
L_0CF8: { ++fl.t; vu::kick(1, i3); }
L_0D00: { ++fl.t; ending = true; }
L_0D08: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.tpc = 3344u; return; }
L_0D10: { ++fl.t; pend = true; }
L_0D18: { ++fl.t; }
    if (pend) { pend = false; goto L_08D0; }
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, 3360u);
    return;
dispatch:
    fl.flush_q(r); r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; vu::interpret(1, jpc);
    return;
}

void vu1_D88A04C592244464(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u n16 = vfix(vload(r.vf[16]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    goto L_1870;
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
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[16], q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(r.vf[16])); }
L_18D0: { ++fl.t; set_vi(i7, i7 - 1u); }
L_18D8: { ++fl.t; }
L_18E0: { ++fl.t; pend = 0u != i7; }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[16], 16); set_vi(i5, i5 + 1u); } }
    if (pend) { pend = false; goto L_18C8; }
L_18F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 0, 2); set_vi(i7, v); } }
L_18F8: { ++fl.t; }
L_1900: { ++fl.t; }
L_1908: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[16], q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(r.vf[16])); }
L_1910: { ++fl.t; set_vi(i7, i2 & i7); }
L_1918: { ++fl.t; set_vi(i7, i7 + i7); }
L_1920: { ++fl.t; set_vi(i7, i7 + i6); }
L_1928: { ++fl.t; { std::uint8_t *q = qword(mem, i5); std::memcpy(q, &r.vf[16], 16); set_vi(i5, i5 + 1u); } }
L_1930: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[16], q, 16); set_vi(i6, i6 + 1u); } n16 = vfix(vload(r.vf[16])); }
L_1938: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[18], q, 16); set_vi(i6, i6 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_1940: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n18[2])); vstore(r.acc, uv); nacc = uv; }
L_1948: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n18[3])); vstore(r.acc, uv); nacc = uv; }
L_1950: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); vstore(r.vf[17], uv); n17 = uv; }
L_1958: { ++fl.t; }
L_1960: { ++fl.t; }
L_1968: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); { const Reg128 m = r.vf[0]; r.vf[18].w[2] = m.w[3]; } vstore(r.acc, uv); n18 = vfix(vload(r.vf[18])); nacc = uv; }
L_1970: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[17], uv); n17 = vfix(vload(r.vf[17])); }
L_1978: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); vstore(r.acc, uv); nacc = uv; }
L_1980: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); set_vi(i1, r.vf[18].w[0]); vstore(r.acc, uv); nacc = uv; }
L_1988: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[18], uv); n18 = uv; }
L_1990: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n17[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1998: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n17[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19A0: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n17[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19A8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n17[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19B0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[18], r.vf[18].w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_19B8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_19C0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); vstore(r.acc, uv); nacc = uv; }
L_19C8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i1, i1 & i3); vstore(r.acc, uv); nacc = uv; }
L_19D0: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[16], q, 16); set_vi(i6, i6 + 1u); } vstore(r.acc, uv); n16 = vfix(vload(r.vf[16])); nacc = uv; }
L_19D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[19], q, 16); set_vi(i6, i6 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_19E0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i8, i1 + 32767u); vstore(r.vf[17], uv); n17 = uv; }
L_19E8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_19F0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i1, i1 + 32767u); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_19F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n19[2])); set_vi(i8, i8 | i1); vstore(r.acc, uv); nacc = uv; }
L_1A00: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n19[3])); set_vi(i1, r.vf[19].w[0]); vstore(r.acc, uv); nacc = uv; }
L_1A08: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); { const Reg128 m = r.vf[0]; r.vf[19].w[2] = m.w[3]; } vstore(r.vf[20], uv); n19 = vfix(vload(r.vf[19])); }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_1A18: { ++fl.t; const v4u uv = vmin(vload(r.vf[18]), vsplat(r.i)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[17].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[18], uv); n18 = vfix(vload(r.vf[18])); }
L_1A20: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); set_vi(i5, i5 + 6u); vstore(r.acc, uv); nacc = uv; }
L_1A28: { ++fl.t; const v4u uv = vmax(vload(r.vf[20]), vsplat(0u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &r.vf[19], 16); } vstore(r.vf[19], uv); n19 = vfix(vload(r.vf[19])); }
L_1A30: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); vstore(r.acc, uv); nacc = uv; }
L_1A38: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); vstore(r.acc, uv); nacc = uv; }
L_1A40: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[18], uv); n18 = uv; }
L_1A48: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n19[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A50: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n19[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A58: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n19[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A60: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n19[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A68: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[18], r.vf[18].w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1A70: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A78: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); set_vi(i1, i1 & i3); vstore(r.acc, uv); nacc = uv; }
L_1A80: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i8, i1 + 32767u); vstore(r.acc, uv); nacc = uv; }
L_1A88: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[16], q, 16); set_vi(i6, i6 + 1u); } vstore(r.acc, uv); n16 = vfix(vload(r.vf[16])); nacc = uv; }
L_1A90: { ++fl.t; const v4u uv = vmuln(n17, vfix(vsplat(r.q))); { const std::uint8_t *q = qword(mem, i6); std::memcpy(&r.vf[19], q, 16); set_vi(i6, i6 + 1u); } vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n19 = vfix(vload(r.vf[19])); }
L_1A98: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[17], uv); n17 = uv; }
L_1AA0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); set_vi(i1, i1 + 32767u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1AA8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); set_vi(i8, i8 | i1); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1AB0: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n19[2])); set_vi(i1, r.vf[19].w[0]); vstore(r.acc, uv); nacc = uv; }
L_1AB8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n19[3])); set_vi(i1, i1 & i3); vstore(r.acc, uv); nacc = uv; }
L_1AC0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n16[3])); { const Reg128 m = r.vf[0]; r.vf[19].w[2] = m.w[3]; } vstore(r.vf[22], uv); n19 = vfix(vload(r.vf[19])); }
L_1AC8: { ++fl.t; const v4u uv = vmin(vload(r.vf[18]), vsplat(r.i)); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } vstore(r.vf[21], uv); }
L_1AD0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[20]), 4); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[17].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(r.vf[18])); }
L_1AD8: { ++fl.t; const v4u uv = vmuln(n12, vsplat(n16[0])); set_vi(i5, i5 + 3u); vstore(r.acc, uv); nacc = uv; }
L_1AE0: { ++fl.t; const v4u uv = vmax(vload(r.vf[22]), vsplat(0u)); { std::uint8_t *q = qword(mem, i5 + 4294967293u); std::memcpy(q, &r.vf[19], 16); } vstore(r.vf[19], uv); n19 = vfix(vload(r.vf[19])); }
L_1AE8: { ++fl.t; const v4u uv = vmaddn(nacc, n13, vsplat(n16[1])); { std::uint8_t *q = qword(mem, i5 + 4294967291u); std::memcpy(q, &r.vf[21], 16); } vstore(r.acc, uv); nacc = uv; }
L_1AF0: { ++fl.t; const v4u uv = vmaddn(nacc, n14, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i5 + 4294967289u); std::memcpy(q + 0, &r.vf[18].w[0], 4); std::memcpy(q + 4, &r.vf[18].w[1], 4); std::memcpy(q + 8, &r.vf[18].w[2], 4); } vstore(r.acc, uv); nacc = uv; }
L_1AF8: { ++fl.t; const v4u uv = vmaddn(nacc, n15, vsplat(0x3F800000u)); vstore(r.vf[18], uv); n18 = uv; }
L_1B00: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(n19[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B08: { ++fl.t; const v4u uv = vmuln(n8, vsplat(n19[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B10: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n19[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B18: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n19[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B20: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[18], r.vf[18].w[3]); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[16].w[3]); fl.end_q(r, qb, 7u); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1B28: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B30: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n16[0])); pend = i6 != i7; vstore(r.acc, uv); nacc = uv; }
L_1B38: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n16[1])); set_vi(i8, i1 + 32767u); vstore(r.acc, uv); nacc = uv; }
    if (pend) { pend = false; goto L_1A88; }
L_1B40: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n16[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.acc, uv); nacc = uv; }
L_1B48: { ++fl.t; const v4u uv = vmuln(n17, vfix(vsplat(r.q))); set_vi(i1, i1 + 32767u); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B50: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i8, i8 | i1); vstore(r.vf[17], uv); n17 = uv; }
L_1B58: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n8, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i5 + 4294967295u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B60: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(0x3F800000u)); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n18 = vsel(n18, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1B68: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[17].w[3]); fl.end_q(r, qb, 3u); } }
L_1B70: { ++fl.t; const v4u uv = vmin(vload(r.vf[18]), vsplat(r.i)); vstore(r.vf[19], uv); n19 = vfix(vload(r.vf[19])); }
L_1B78: { ++fl.t; const v4u uv = vftoi(vload(r.vf[16]), 4); { std::uint8_t *q = qword(mem, i5 + 4294967294u); std::memcpy(q, &r.vf[19], 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(r.vf[18])); }
L_1B80: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n17, vfix(vsplat(r.q))); fl.flush_q(r); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1B88: { ++fl.t; const v4u uv = vftoi(vload(r.vf[17]), 4); { std::uint8_t *q = qword(mem, i5 + 4294967292u); std::memcpy(q + 0, &r.vf[18].w[0], 4); std::memcpy(q + 4, &r.vf[18].w[1], 4); std::memcpy(q + 8, &r.vf[18].w[2], 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n18 = vfix(vload(r.vf[18])); }
L_1B90: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 4294967295u); std::memcpy(q + 0, &r.vf[18].w[0], 4); std::memcpy(q + 4, &r.vf[18].w[1], 4); std::memcpy(q + 8, &r.vf[18].w[2], 4); } }
L_1B98: { ++fl.t; vu::kick(1, i4); }
L_1BA0: { ++fl.t; ending = true; }
L_1BA8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.tpc = 7088u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, 7088u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; vu::interpret(1, jpc);
    return;
}

void vu1_DADC22C3354EFB3B(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    goto L_0108;
L_0108: { ++fl.t; set_vi(i2, vu::top()); }
L_0110: { ++fl.t; set_vi(i4, i2 + 1u); }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[12], q, 16); set_vi(i4, i4 + 1u); } n12 = vfix(vload(r.vf[12])); }
L_0120: { ++fl.t; set_vi(i2, i2 + 102u); }
L_0128: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[15], q, 16); } n15 = vfix(vload(r.vf[15])); }
L_0130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 0, 2); set_vi(i5, v); } }
L_0138: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 34u); std::memcpy(&r.vf[14], q, 16); } n14 = vfix(vload(r.vf[14])); }
L_0140: { ++fl.t; set_vi(i3, i2 + 0u); }
L_0148: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 35u); std::memcpy(&r.vf[13], q, 16); } n13 = vfix(vload(r.vf[13])); }
L_0150: { ++fl.t; set_vi(i5, i1 & i5); }
L_0158: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[15], 16); set_vi(i3, i3 + 1u); } }
L_0160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); std::memcpy(&r.vf[15], q, 16); } n15 = vfix(vload(r.vf[15])); }
L_0168: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[14], 16); set_vi(i3, i3 + 1u); } }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[13], 16); set_vi(i3, i3 + 1u); } }
L_0178: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[13], q, 16); set_vi(i4, i4 + 1u); } n13 = vfix(vload(r.vf[13])); }
L_0180: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[15], 16); set_vi(i3, i3 + 1u); } }
L_0188: { ++fl.t; set_vi(i5, i5 + i5); }
L_0190: { ++fl.t; { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[12], 16); set_vi(i3, i3 + 1u); } }
L_0198: { ++fl.t; set_vi(i5, i5 + i4); }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[12], q, 16); set_vi(i4, i4 + 1u); } n12 = vfix(vload(r.vf[12])); }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[15], q, 16); set_vi(i4, i4 + 1u); } n15 = vfix(vload(r.vf[15])); }
L_01B0: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n15[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01B8: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n15[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C0: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n12[3])); { const Reg128 m = r.vf[0]; r.vf[15].w[2] = m.w[3]; } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01C8: { ++fl.t; }
L_01D0: { ++fl.t; }
L_01D8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n12[0])); { std::uint8_t *q = qword(mem, i3); std::memcpy(q, &r.vf[13], 16); set_vi(i3, i3 + 1u); } vstore(r.acc, uv); nacc = uv; }
L_01E0: { ++fl.t; const v4u uv = vmax(vload(r.vf[14]), vsplat(0u)); { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[15], 16); } vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); }
L_01E8: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n12[1])); vstore(r.acc, uv); nacc = uv; }
L_01F0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n12[2])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[13], q, 16); set_vi(i4, i4 + 1u); } vstore(r.acc, uv); n13 = vfix(vload(r.vf[13])); nacc = uv; }
L_01F8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 12, &r.vf[12].w[3], 4); } vstore(r.vf[12], uv); n12 = uv; }
L_0200: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[14], q, 16); set_vi(i4, i4 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(r.vf[14])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); r.vf[15].w[3] = r.vf[4].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0218: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0220: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n14[2])); { const Reg128 m = r.vf[0]; r.vf[14].w[2] = m.w[3]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(r.vf[14])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n14[3])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0230: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n13[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[12].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0238: { ++fl.t; const v4u uv = vmin(vload(r.vf[15]), vsplat(r.i)); set_vi(i3, i3 + 6u); vstore(r.vf[16], uv); }
L_0240: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n13[0])); { std::uint8_t *q = qword(mem, i3 + 4294967293u); std::memcpy(q, &r.vf[14], 16); } vstore(r.acc, uv); nacc = uv; }
L_0248: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n13[1])); r.vf[14].w[0] = r.vf[12].w[0]; r.vf[14].w[1] = r.vf[12].w[1]; r.vf[14].w[2] = r.vf[12].w[2]; vstore(r.acc, uv); n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); }
L_0258: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n13[2])); vstore(r.acc, uv); nacc = uv; }
L_0260: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 12, &r.vf[13].w[3], 4); } vstore(r.vf[12], uv); n12 = uv; }
L_0268: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n14, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i3 + 4294967291u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0270: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[13], q, 16); set_vi(i4, i4 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vfix(vload(r.vf[13])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); { const std::uint8_t *q = qword(mem, i4); std::memcpy(&r.vf[14], q, 16); set_vi(i4, i4 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(r.vf[14])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i3, i3 + 3u); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; const v4u uv = vftoi(vload(r.vf[16]), 4); r.vf[15].w[3] = r.vf[4].w[3]; vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); }
L_0298: { ++fl.t; const v4u uv = vmuln(n9, vsplat(n14[2])); { const Reg128 m = r.vf[0]; r.vf[14].w[2] = m.w[3]; } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(r.vf[14])); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(n14[3])); { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 12, &r.vf[13].w[3], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddn(nacc, n11, vsplat(n13[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[12].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_02B0: { ++fl.t; const v4u uv = vmin(vload(r.vf[15]), vsplat(r.i)); { std::uint8_t *q = qword(mem, i3 + 4294967289u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } vstore(r.vf[16], uv); }
L_02B8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n13[0])); { std::uint8_t *q = qword(mem, i3 + 4294967293u); std::memcpy(q, &r.vf[14], 16); } vstore(r.acc, uv); nacc = uv; }
L_02C0: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n13[1])); r.vf[14].w[0] = r.vf[12].w[0]; r.vf[14].w[1] = r.vf[12].w[1]; r.vf[14].w[2] = r.vf[12].w[2]; vstore(r.acc, uv); n14 = vfix(vload(r.vf[14])); nacc = uv; }
L_02C8: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(0u)); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); }
L_02D0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n13[2])); { std::uint8_t *q = qword(mem, i3 + 4294967291u); std::memcpy(q, &r.vf[16], 16); } vstore(r.acc, uv); nacc = uv; }
L_02D8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); pend = i4 != i5; vstore(r.vf[12], uv); n12 = uv; }
L_02E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n14, vfix(vsplat(r.q))); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
    if (pend) { pend = false; goto L_0270; }
L_02E8: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n15[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n15[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n15[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[12].w[3]); fl.end_q(r, qb, 4u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0300: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vsel(n15, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[16]), 4); r.vf[15].w[3] = r.vf[4].w[3]; vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n15 = vfix(vload(r.vf[15])); }
L_0310: { ++fl.t; const v4u uv = vmin(vload(r.vf[15]), vsplat(r.i)); { std::uint8_t *q = qword(mem, i3 + 4294967292u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } vstore(r.vf[16], uv); }
L_0318: { ++fl.t; fl.flush_q(r); }
L_0320: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i3 + 4294967294u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0328: { ++fl.t; const v4u uv = vftoi(vload(r.vf[16]), 4); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 4294967295u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_0338: { ++fl.t; vu::kick(1, i2); }
L_0340: { ++fl.t; ending = true; }
L_0348: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.tpc = 848u; return; }
    fl.flush_q(r); r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, 848u);
    return;
dispatch:
    fl.flush_q(r); r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, jpc);
    return;
}

void vu1_DB8287665D0627BC(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i1 = r.vi[1];
    goto L_0008;
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); } }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); } }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); } }
L_0020: { ++fl.t; set_vi(i1, 0u + 32767u); }
L_0028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[15], q, 16); } }
L_0030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&r.vf[14].w[0], q + 0, 4); std::memcpy(&r.vf[14].w[1], q + 4, 4); std::memcpy(&r.vf[14].w[2], q + 8, 4); } }
L_0038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[2], q + 8, 4); } }
L_0040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&r.vf[12].w[0], q + 0, 4); std::memcpy(&r.vf[12].w[1], q + 4, 4); std::memcpy(&r.vf[12].w[2], q + 8, 4); } }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&r.vf[11], q, 16); } }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&r.vf[10], q, 16); } }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&r.vf[9], q, 16); } }
L_0060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&r.vf[8], q, 16); } }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7].w[0], q + 0, 4); std::memcpy(&r.vf[7].w[1], q + 4, 4); std::memcpy(&r.vf[7].w[2], q + 8, 4); } }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6].w[0], q + 0, 4); std::memcpy(&r.vf[6].w[1], q + 4, 4); std::memcpy(&r.vf[6].w[2], q + 8, 4); } }
L_0078: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); } }
L_0080: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_0090: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } }
L_0098: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } ending = true; }
L_00A0: { ++fl.t; r.i = 1258291455u; }
    if (ending) { r.vi[1] = i1; r.tpc = 168u; return; }
    r.vi[1] = i1; vu::interpret(1, 168u);
    return;
dispatch:
    r.vi[1] = i1; vu::interpret(1, jpc);
    return;
}

void vu1_DCF40A00DEE3BD03(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n9 = vfix(vload(r.vf[9]));
    v4u n10 = vfix(vload(r.vf[10]));
    v4u n11 = vfix(vload(r.vf[11]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n15 = vfix(vload(r.vf[15]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0F78;
L_0F78: { ++fl.t; set_vi(i3, vu::top()); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i1, v); } }
L_0F88: { ++fl.t; }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; set_vi(i10, i3 + 196u); }
L_0FA0: { ++fl.t; set_vi(i1, i12 & i1); }
L_0FA8: { ++fl.t; set_vi(i2, i10 + 0u); }
L_0FB0: { ++fl.t; pend = 0u == i1; }
L_0FB8: { ++fl.t; set_vi(i3, i3 + 1u); }
    if (pend) { pend = false; goto L_0FF8; }
L_0FC0: { ++fl.t; set_vi(i3, i3 - 1u); }
L_0FC8: { ++fl.t; set_vi(i4, i1 + 1u); }
L_0FD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[11], q, 16); set_vi(i3, i3 + 1u); } n11 = vfix(vload(r.vf[11])); }
L_0FD8: { ++fl.t; set_vi(i4, i4 - 1u); }
L_0FE0: { ++fl.t; }
L_0FE8: { ++fl.t; pend = 0u != i4; }
L_0FF0: { ++fl.t; { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &r.vf[11], 16); set_vi(i2, i2 + 1u); } }
    if (pend) { pend = false; goto L_0FD0; }
L_0FF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 0, 2); set_vi(i4, v); } }
L_1000: { ++fl.t; }
L_1008: { ++fl.t; }
L_1010: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[11], q, 16); set_vi(i3, i3 + 1u); } n11 = vfix(vload(r.vf[11])); }
L_1018: { ++fl.t; set_vi(i4, i12 & i4); }
L_1020: { ++fl.t; set_vi(i4, i4 + i4); }
L_1028: { ++fl.t; set_vi(i4, i4 + i3); }
L_1030: { ++fl.t; { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[14], q, 16); set_vi(i3, i3 + 1u); } n14 = vfix(vload(r.vf[14])); }
L_1038: { ++fl.t; const v4u uv = vitof(vload(r.vf[14]), 0); { std::uint8_t *q = qword(mem, i2); std::memcpy(q, &r.vf[11], 16); set_vi(i2, i2 + 1u); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vfix(vload(r.vf[14])); }
L_1040: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n14[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[11], q, 16); set_vi(i3, i3 + 1u); } vstore(r.acc, uv); n11 = vfix(vload(r.vf[11])); nacc = uv; }
L_1048: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n14[1])); vstore(r.acc, uv); nacc = uv; }
L_1050: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n14[2])); vstore(r.acc, uv); nacc = uv; }
L_1058: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); vstore(r.vf[15], uv); n15 = uv; }
L_1060: { ++fl.t; const v4u uv = vitof(vload(r.vf[11]), 12); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(r.vf[11])); }
L_1068: { ++fl.t; }
L_1070: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n14[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[17], q, 16); set_vi(i3, i3 + 1u); } vstore(r.acc, uv); nacc = uv; }
L_1078: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n14[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[15].w[3]); fl.end_q(r, qb, 7u); } vstore(r.acc, uv); nacc = uv; }
L_1080: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n14[2])); vstore(r.acc, uv); nacc = uv; }
L_1088: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); vstore(r.vf[16], uv); }
L_1090: { ++fl.t; const v4u uv = vitof(vload(r.vf[17]), 0); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vfix(vload(r.vf[6])); }
L_1098: { ++fl.t; }
L_10A0: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_10A8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[16], r.vf[16].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_10B0: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); set_vi(i5, r.vf[14].w[3]); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_10B8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_10C0: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n6[0])); vstore(r.acc, uv); nacc = uv; }
L_10C8: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n6[1])); vstore(r.acc, uv); nacc = uv; }
L_10D0: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(r.vf[5].w[1])); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_10D8: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n6[2])); vstore(r.acc, uv); nacc = uv; }
L_10E0: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); r.vf[12].w[0] = r.vf[11].w[0]; r.vf[12].w[1] = r.vf[11].w[1]; r.vf[12].w[2] = r.vf[11].w[2]; r.vf[12].w[3] = r.vf[11].w[3]; vstore(r.vf[15], uv); n12 = vfix(vload(r.vf[12])); n15 = uv; }
L_10E8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[11], q, 16); set_vi(i3, i3 + 1u); } vstore(r.acc, uv); n11 = vfix(vload(r.vf[11])); nacc = uv; }
L_10F0: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n6[1])); set_vi(i2, i2 + 6u); vstore(r.acc, uv); nacc = uv; }
L_10F8: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n6[2])); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.acc, uv); nacc = uv; }
L_1100: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[15].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[16], uv); }
L_1108: { ++fl.t; const v4u uv = vitof(vload(r.vf[11]), 12); set_vi(i1, i1 + 32767u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(r.vf[11])); }
L_1110: { ++fl.t; const v4u uv = vmax(vload(r.vf[14]), vsplat(r.vf[5].w[0])); set_vi(i1, i1 | i5); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_1118: { ++fl.t; const v4u uv = vmuln(n12, vfix(vsplat(r.q))); set_vi(i5, r.vf[17].w[3]); vstore(r.vf[17], uv); }
L_1120: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[16], r.vf[16].w[3]); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[12], q, 16); set_vi(i3, i3 + 1u); } r.clip = uclip; fl.set_clip(uclip, fl.t); n12 = vfix(vload(r.vf[12])); }
L_1128: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); r.vf[13].w[0] = r.vf[11].w[0]; r.vf[13].w[1] = r.vf[11].w[1]; r.vf[13].w[2] = r.vf[11].w[2]; r.vf[13].w[3] = r.vf[11].w[3]; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n13 = vfix(vload(r.vf[13])); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1130: { ++fl.t; const v4u uv = vftoi(vload(r.vf[14]), 4); { const std::uint8_t *q = qword(mem, i3); std::memcpy(&r.vf[11], q, 16); set_vi(i3, i3 + 1u); } vstore(r.vf[16], uv); n11 = vfix(vload(r.vf[11])); }
L_1138: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); set_vi(i6, i1 & i13); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1140: { ++fl.t; const v4u uv = vitof(vload(r.vf[12]), 0); set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n12 = vfix(vload(r.vf[12])); }
L_1148: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); set_vi(i1, i1 + 32767u); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1150: { ++fl.t; const v4u uv = vitof(vload(r.vf[11]), 12); set_vi(i7, r.vf[16].w[3]); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n11 = vfix(vload(r.vf[11])); }
L_1158: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(r.vf[5].w[1])); set_vi(i1, i1 | i5); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_1160: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n12[0])); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &r.vf[17], 16); } vstore(r.acc, uv); nacc = uv; }
L_1168: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n12[1])); set_vi(i5, i7 | i6); vstore(r.acc, uv); nacc = uv; }
L_1170: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n12[2])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i5))); r.vf[16].w[3] = v; } vstore(r.acc, uv); nacc = uv; }
L_1178: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); set_vi(i2, i2 + 3u); vstore(r.vf[15], uv); n15 = uv; }
L_1180: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n12[0])); vstore(r.acc, uv); nacc = uv; }
L_1188: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n12[1])); vstore(r.acc, uv); nacc = uv; }
L_1190: { ++fl.t; const v4u uv = vmaddn(nacc, n9, vsplat(n12[2])); { std::uint8_t *q = qword(mem, i2 + 4294967289u); std::memcpy(q, &r.vf[16], 16); } vstore(r.acc, uv); nacc = uv; }
L_1198: { ++fl.t; const v4u uv = vmaddn(nacc, n10, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[15].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[16], uv); }
L_11A0: { ++fl.t; const v4u uv = vmax(vload(r.vf[14]), vsplat(r.vf[5].w[0])); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_11A8: { ++fl.t; pend = i3 != i4; }
L_11B0: { ++fl.t; const v4u uv = vmuln(n13, vfix(vsplat(r.q))); set_vi(i5, r.vf[12].w[3]); vstore(r.vf[17], uv); }
    if (pend) { pend = false; goto L_1120; }
L_11B8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[16], r.vf[16].w[3]); set_vi(i3, i1 & i13); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_11C0: { ++fl.t; const v4u uv = vmuln(n5, v4u{0u, 0u, 0u, 0x3F800000u}); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_11C8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[14]), 4); vstore(r.vf[16], uv); }
L_11D0: { ++fl.t; fl.flush_q(r); const v4u uv = vmaddn(nacc, n6, vfix(vsplat(r.q))); { std::uint8_t *q = qword(mem, i2 + 4294967290u); std::memcpy(q, &r.vf[17], 16); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vsel(n14, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_11D8: { ++fl.t; }
L_11E0: { ++fl.t; }
L_11E8: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_11F0: { ++fl.t; const v4u uv = vmin(vload(r.vf[14]), vsplat(r.vf[5].w[1])); set_vi(i1, i1 + 32767u); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_11F8: { ++fl.t; set_vi(i4, r.vf[16].w[3]); }
L_1200: { ++fl.t; set_vi(i1, i1 | i5); }
L_1208: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n15, vfix(vsplat(r.q))); set_vi(i5, i4 | i3); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1210: { ++fl.t; const v4u uv = vmax(vload(r.vf[14]), vsplat(r.vf[5].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i5))); r.vf[16].w[3] = v; } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n14 = vfix(vload(r.vf[14])); }
L_1218: { ++fl.t; const v4u uv = vftoi(vload(r.vf[14]), 4); { std::uint8_t *q = qword(mem, i2 + 4294967292u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[16], uv); }
L_1220: { ++fl.t; }
L_1228: { ++fl.t; }
L_1230: { ++fl.t; set_vi(i1, i1 & i13); }
L_1238: { ++fl.t; set_vi(i5, r.vf[16].w[3]); }
L_1240: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n11, vfix(vsplat(r.q))); set_vi(i5, i5 | i1); vstore(r.vf[17], uv); }
L_1248: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i5))); r.vf[16].w[3] = v; } }
L_1250: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967293u); std::memcpy(q, &r.vf[17], 16); } }
L_1258: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 4294967295u); std::memcpy(q, &r.vf[16], 16); } }
L_1260: { ++fl.t; pend = 0u == i14; }
L_1268: { ++fl.t; }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; set_vi(i15, 592u); pendj = true; }
L_1278: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; vu::kick(1, i10); }
L_1288: { ++fl.t; ending = true; }
L_1290: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; r.tpc = 4760u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, 4760u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_E3615420A30987F9(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i14 = r.vi[14];
    goto L_36F0;
L_36F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 17u); std::memcpy(&r.vf[31], q, 16); } }
L_36F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 16u) + 12, 2); set_vi(i14, v); } }
L_3700: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 16u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_3708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[9], q, 16); } }
L_3710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[8], q, 16); } }
L_3718: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[12].w[3], q + 12, 4); } }
L_3720: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[11].w[0], q + 0, 4); std::memcpy(&r.vf[11].w[1], q + 4, 4); std::memcpy(&r.vf[11].w[3], q + 12, 4); } }
L_3728: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&r.vf[10], q, 16); } }
L_3730: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&r.vf[7], q, 16); } }
L_3738: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&r.vf[6], q, 16); } }
L_3740: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&r.vf[5], q, 16); } }
L_3748: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_3750: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_3758: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } }
L_3760: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } }
L_3768: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 18u); std::memcpy(q, &r.vf[31], 16); } ending = true; }
L_3770: { ++fl.t; }
    if (ending) { r.vi[14] = i14; r.tpc = 14200u; return; }
    r.vi[14] = i14; vu::interpret(1, 14200u);
    return;
dispatch:
    r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_F615E86B37442616(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i1 = r.vi[1];
    goto L_0000;
L_0000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 28u); std::memcpy(&r.vf[16].w[0], q + 0, 4); std::memcpy(&r.vf[16].w[1], q + 4, 4); } }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[17].w[0], q + 0, 4); std::memcpy(&r.vf[17].w[1], q + 4, 4); } }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[18].w[0], q + 0, 4); std::memcpy(&r.vf[18].w[1], q + 4, 4); } }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[19].w[0], q + 0, 4); std::memcpy(&r.vf[19].w[1], q + 4, 4); } }
L_0020: { ++fl.t; set_vi(i1, 0u + 32767u); }
L_0028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[15], q, 16); } }
L_0030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&r.vf[14].w[0], q + 0, 4); std::memcpy(&r.vf[14].w[1], q + 4, 4); std::memcpy(&r.vf[14].w[2], q + 8, 4); } }
L_0038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&r.vf[13].w[0], q + 0, 4); std::memcpy(&r.vf[13].w[1], q + 4, 4); std::memcpy(&r.vf[13].w[2], q + 8, 4); } }
L_0040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&r.vf[12].w[0], q + 0, 4); std::memcpy(&r.vf[12].w[1], q + 4, 4); std::memcpy(&r.vf[12].w[2], q + 8, 4); } }
L_0048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 15u); std::memcpy(&r.vf[11], q, 16); } }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 14u); std::memcpy(&r.vf[10], q, 16); } }
L_0058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 13u); std::memcpy(&r.vf[9], q, 16); } }
L_0060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 12u); std::memcpy(&r.vf[8], q, 16); } }
L_0068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7].w[0], q + 0, 4); std::memcpy(&r.vf[7].w[1], q + 4, 4); std::memcpy(&r.vf[7].w[2], q + 8, 4); } }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6].w[0], q + 0, 4); std::memcpy(&r.vf[6].w[1], q + 4, 4); std::memcpy(&r.vf[6].w[2], q + 8, 4); } }
L_0078: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5].w[0], q + 0, 4); std::memcpy(&r.vf[5].w[1], q + 4, 4); std::memcpy(&r.vf[5].w[2], q + 8, 4); } }
L_0080: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_0090: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } }
L_0098: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } ending = true; }
L_00A0: { ++fl.t; r.i = 1258291455u; }
    if (ending) { r.vi[1] = i1; r.tpc = 168u; return; }
    r.vi[1] = i1; vu::interpret(1, 168u);
    return;
dispatch:
    r.vi[1] = i1; vu::interpret(1, jpc);
    return;
}

}
