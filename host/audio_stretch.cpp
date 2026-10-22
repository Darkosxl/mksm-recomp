#include "audio_stretch.hpp"

#include <SoundTouch.h>

#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <vector>

namespace audio_stretch {
namespace {

std::atomic<double> g_tempo{0.0};

// Below full speed (high PS2_SCALE: the GPU sets the pace) the game makes less than 48 kHz of sound per real second,
// and queued as it comes that is a burst and then silence every device period ("AH-gap-AH"). Then the sound goes
// through SoundTouch, slowed to the emulation speed with its pitch kept, and the queue is held near 40 ms; at full
// speed it bypasses SoundTouch untouched. PS2_AUDIO_STRETCH=0 turns it off; lockstep (frame gate) never uses it.
struct Stretch {
    soundtouch::SoundTouch st;
    bool on = false;
    double speed = 1.0;  // emulation speed, smoothed: sound frames made per real second / 48000
    double since = -1.0;
    std::uint64_t made = 0;
    std::vector<float> in, out;
    Stretch() {
        st.setSampleRate(48000);
        st.setChannels(2);
    }
    void drain(Sink sink) {
        out.resize(4096 * 2);
        std::vector<std::int16_t> pcm;
        while (const unsigned n = st.receiveSamples(out.data(), 4096)) {
            pcm.resize(n * 2);
            for (unsigned i = 0; i < n * 2; ++i) pcm[i] = static_cast<std::int16_t>(std::clamp(out[i], -32768.0f, 32767.0f));
            sink(pcm.data(), n);
        }
    }
};

}

bool push(const std::int16_t *samples, std::size_t frames, double queued_ms, double now_ms, Sink sink) {
    static const bool enabled = [] {
        const char *e = std::getenv("PS2_AUDIO_STRETCH");
        return !e || std::strcmp(e, "0") != 0;
    }();
    if (!enabled) return false;
    static Stretch s;
    if (s.since < 0.0) s.since = now_ms;
    s.made += frames;
    if (now_ms - s.since > 250.0) {
        const double measured = static_cast<double>(s.made) / (48000.0 * (now_ms - s.since) / 1000.0);
        s.speed += (std::min(measured, 1.2) - s.speed) * 0.5;
        s.since = now_ms, s.made = 0;
        if (!s.on && s.speed < 0.95) s.on = true;
        else if (s.on && s.speed > 0.99) {  // back to full speed: play out what SoundTouch holds, then bypass
            s.st.flush();
            s.drain(sink);
            s.st.clear();
            s.on = false;
            g_tempo = 0.0;
        }
    }
    if (!s.on) return false;
    // tempo = speed holds the queue; the queue's distance from 40 ms nudges it so the queue settles there
    const double tempo = std::clamp(s.speed * (1.0 + 0.5 * (queued_ms - 40.0) / 40.0), 0.3, 1.05);
    g_tempo = tempo;
    s.st.setTempo(tempo);
    s.in.assign(samples, samples + frames * 2);
    s.st.putSamples(s.in.data(), static_cast<unsigned>(frames));
    s.drain(sink);
    return true;
}

double tempo() { return g_tempo; }

}
