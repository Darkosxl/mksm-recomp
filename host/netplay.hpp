#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>

// Host side of online co-op: the game runs here only. A browser joins over WebRTC, receives the
// picture (H.264) and sound (Opus) and sends its controller back as player 2. See docs/netplay.md.
struct NetplayOptions {
    std::uint16_t port = 47920;  // HTTP (page + signalling) on TCP, ICE media on UDP port + 1
    std::string stun;            // optional "stun:host:port" for play across the internet
    unsigned bitrate_kbps = 8000;
    std::string encoder;         // empty: h264_nvenc, falling back to libx264
};

bool netplay_start(const NetplayOptions &options);
// a displayed frame (RGBA bytes in memory order) and a batch of 48 kHz stereo samples
void netplay_frame(const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height);
void netplay_audio(const std::int16_t *samples, std::size_t frames);
// one short line for a window title, e.g. "P2 connected, ping 3 ms"
std::string netplay_status();
// runs the emulator without a window: frames are produced for the stream only, paced to the wall clock
int run_netplay_headless(const std::function<int()> &emulate);
