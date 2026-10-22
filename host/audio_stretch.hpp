#pragma once

#include <cstddef>
#include <cstdint>

// Time-stretched sound below full speed (SoundTouch), shared by the window host (host/window.cpp) and the browser host
// (host/web.cpp); built with PS2_SOUNDTOUCH. The hosts do not call it in lockstep.
namespace audio_stretch {

// queues int16 stereo frames (48 kHz) on the host's sound output
using Sink = void (*)(const std::int16_t *samples, std::size_t frames);

// One block of the game's sound. True: it went through SoundTouch and out through sink; false: the caller queues it as
// it is. queued_ms: the sound queued on the output now; now_ms: a monotonic clock in milliseconds.
bool push(const std::int16_t *samples, std::size_t frames, double queued_ms, double now_ms, Sink sink);

// the sound's tempo while time-stretched (title bar, page stats), 0 when not
double tempo();

}
