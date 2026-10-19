#pragma once

// The per-node lighting of ps2render.cpp: three directional lights plus an ambient colour, which the VU1
// character and world programs apply from two 4x4 matrices (native-renderer.md §3: "3 directional lights +
// ambient"). Vectors are quadwords of floats; matrices are row-major with row vectors, 16-byte aligned.
//
//   fn_23cc00  converts the level's light setup into the default light set and the ambient colour
//   fn_23d2f0  picks the node's light set: the default lights, with up to two nearby point lights in front
//   fn_23d128  builds the VU1 lighting matrices from it, the directions turned into the node's own space
#include <cstdint>

namespace decomp::render::lights {

// A light set: three (direction, colour) pairs; directions are unit vectors (w as computed), colours RGBA floats.
struct LightSet {
    std::uint32_t addr;
    std::uint32_t dir(unsigned i) const { return addr + 0x20 * i; }
    std::uint32_t color(unsigned i) const { return addr + 0x20 * i + 0x10; }
};

inline constexpr LightSet kDefaultLights{0x00663560};  // the level's lights (fn_23cc00)
inline constexpr std::uint32_t kAmbient = 0x006635C0;   // ambient colour (fn_23cc00)
inline constexpr LightSet kNodeLights{0x006635E0};  // the lights of the node being drawn (fn_23d2f0)

// Point lights the node may pick up: 64-byte records, the indices of the chosen ones at kNearestPointLights
struct PointLight {
    static constexpr std::uint32_t kTable = 0x00678940;
    static constexpr std::uint32_t kSize = 0x40;

    std::uint32_t addr;
    std::uint32_t position() const { return addr; }
    std::uint32_t color() const { return addr + 0x10; }
    std::uint32_t full_radius() const { return addr + 0x20; }  // float: full colour up to this distance
    std::uint32_t zero_radius() const { return addr + 0x24; }  // float: no light from this distance on
};
inline constexpr std::uint32_t kNearestPointLights = 0x007800A0;  // two u32 indices into PointLight::kTable

// The matrices the VU1 packers upload (fn_23a280, fn_239268, ...)
inline constexpr std::uint32_t kLightDirMatrix = 0x00661960;     // rows: the node's light directions, row 3 below
inline constexpr std::uint32_t kLightColorMatrix = 0x006619A0;   // rows: the node's light colours, the ambient
inline constexpr std::uint32_t kNormalLightMatrix = 0x006619E0;  // transpose of kLightDirMatrix: N * M = N.L per light
inline constexpr std::uint32_t kLightDirRow3In = 0x00661A20;     // row 3 of kLightDirMatrix before the rotation
inline constexpr std::uint32_t kLightDirRow3Out = 0x00661950;    // row 3 of kLightDirMatrix after it

}
