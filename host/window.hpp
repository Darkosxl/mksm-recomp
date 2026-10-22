#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>

// the keyboard is always player 1. Otherwise the first controller is player 1 too and a second one player 2; coop
// (local co-op) makes the first controller player 2 and keeps the second port plugged in. remote_pad2 leaves the
// second port alone because a network player drives it
bool open_window(bool fullscreen, bool coop = false, bool remote_pad2 = false);
// plays emulator sound through the window's audio device (does nothing without one)
void window_queue_audio(const std::int16_t *samples, std::size_t frames);
// text appended to the window title once a second
void set_window_status(std::function<std::string()> status);
int run_window(const std::function<int()> &emulate);
// lockstep co-op (host/lockstep.hpp): frame_gate runs at every vblank instead of the window's pacing, and the first
// controller (keyboard + pad 1) is handed to pad_sink instead of the guest: buttons, lx, ly, rx, ry, l2, r2
using WindowPadSink = std::function<void(std::uint16_t, std::uint8_t, std::uint8_t, std::uint8_t, std::uint8_t, std::uint8_t, std::uint8_t)>;
void set_window_lockstep(std::function<void()> frame_gate, WindowPadSink pad_sink);
// sound queued on the window's audio device in ms (0 without one)
double window_audio_queued_ms();
