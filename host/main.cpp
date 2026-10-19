#include "ps2/system.hpp"

#ifdef PS2_WINDOW
#include "window.hpp"
#endif
#ifdef PS2_PROFILE
#include "profile.hpp"
#endif
#ifdef PS2_NETPLAY
#include "netplay.hpp"
#endif
#ifdef PS2_LOCKSTEP
#include "lockstep.hpp"
#endif

#include <atomic>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <string>
#include <thread>
#include <pthread.h>
#include <vector>

void register_generated_code();
void register_generated_vu();

namespace {

// runs at every vblank after the frame is handed to the renderer: lockstep waits there for both players' inputs
std::function<void()> g_frame_gate;

// PS2_THREADS=1 (debug): headless run with the browser's thread layout (render thread on main, VU1 thread unless
// PS2_NO_VU_THREAD, emulation on its own thread), unpaced, so thread-timing determinism can be tested without a window.
int run_threaded_headless(const std::function<int()> &emulate) {
    ps2::init_graphics();
    ps2::g_options.on_vblank = [] {
        ps2::post_present();
        if (g_frame_gate) g_frame_gate();
    };
    ps2::start_render_thread();
    if (!std::getenv("PS2_NO_VU_THREAD")) {
        ps2::start_vu_thread();
        std::thread(ps2::run_vu_thread).detach();
    }
    std::atomic<bool> done{false};
    int result = 0;
    std::thread emulation([&] {
        pthread_setname_np(pthread_self(), "ee");  // perf --sort comm
        result = emulate();
        done.store(true);
        ps2::wake_render_thread();
    });
    const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> none;
    while (!done.load())
        if (ps2::render_pending(false, none, nullptr, 8.0) == ps2::Rendered::idle) ps2::wait_render_work(4);
    emulation.join();
    std::fflush(nullptr);
    std::_Exit(result);
}

int usage() {
    std::fprintf(stderr,
                 "usage: ps2run <elf> [--arg text]... [--frames n] [--ntsc] [--misses file]\n"
                 "              [--disc image.iso] [--memcard card.ps2] [--pal | --ntsc] [--trace-syscalls] [--trace-io] [--trace-threads]\n"
                 "              [--trace-iop] [--trace-iop-hle] [--frames-dir dir] [--frame-every n]\n"
                 "              [--press frame:[p2:]button[+button][:frames]]... [--press2 frame:button[+button][:frames]]...\n"
                 "              [--stick frame:[p2:]lx,ly[:frames]]... [--stick2 frame:lx,ly[:frames]]... [--pad2]\n"
                 "              [--window] [--fullscreen]\n"
                 "              [--host [port]] [--stun stun:host:port] [--bitrate kbit/s] [--encoder h264_nvenc|libx264]\n"
                 "              [--save-state frame:file] [--load-state file]\n"
                 "              [--invite https://host/invite?t=…[&room=id]] [--lockstep ws[s]://signal-server] [--room id|new]\n");
    return 2;
}

}

int main(int argc, char **argv) {
    if (argc < 2) return usage();
    std::vector<std::string> args{argv[1]};
    [[maybe_unused]] bool window = false, fullscreen = false;
    std::string load_path;
    // a second controller is plugged into port 2 when asked for, or when the input script drives it
    bool pad2 = false;
    [[maybe_unused]] bool host = false;
    [[maybe_unused]] bool lockstep = false;
#ifdef PS2_LOCKSTEP
    LockstepOptions ls;
#endif
#ifdef PS2_NETPLAY
    NetplayOptions net;
#endif
    for (int i = 2; i < argc; ++i) {
        const std::string a = argv[i];
        if (a == "--arg" && i + 1 < argc) args.push_back(argv[++i]);
        else if (a == "--frames" && i + 1 < argc) ps2::g_options.max_frames = std::strtoull(argv[++i], nullptr, 10);
        else if (a == "--ntsc" || a == "--pal") {
            ps2::g_options.pal = a == "--pal";
            ps2::g_options.rate_forced = true;
        }
        else if (a == "--misses" && i + 1 < argc) ps2::g_options.misses_path = argv[++i];
        else if (a == "--trace-syscalls") ps2::g_options.trace_syscalls = true;
        else if (a == "--trace-io") ps2::g_options.trace_io = true;
        else if (a == "--trace-threads") ps2::g_options.trace_threads = true;
        else if (a == "--disc" && i + 1 < argc) ps2::g_options.disc_path = argv[++i];
        else if (a == "--memcard" && i + 1 < argc) ps2::g_options.memcard_path = argv[++i];
        else if (a == "--trace-iop") ps2::g_options.trace_iop_modules = true;
        else if (a == "--trace-iop-hle") ps2::g_options.trace_iop_hle = true;
        else if (a == "--frames-dir" && i + 1 < argc) ps2::g_options.frames_dir = argv[++i];
        else if ((a == "--press" || a == "--press2" || a == "--stick" || a == "--stick2") && i + 1 < argc) {
            ps2::Press press;
            const bool stick = a.compare(0, 7, "--stick") == 0;
            if (!(stick ? ps2::parse_stick(argv[++i], press) : ps2::parse_press(argv[++i], press))) return usage();
            if (a.back() == '2') press.pad = 1;
            if (press.pad == 1) pad2 = true;
            ps2::g_options.presses.push_back(press);
        }
        else if (a == "--pad2") pad2 = true;
#ifdef PS2_LOCKSTEP
        else if (a == "--lockstep" && i + 1 < argc) {
            lockstep = true;
            ls.signal = argv[++i];
        }
        else if (a == "--invite" && i + 1 < argc) {
            lockstep = true;
            ls.invite = argv[++i];
        }
        else if (a == "--room" && i + 1 < argc) ls.room = argv[++i];
#endif
#ifdef PS2_NETPLAY
        else if (a == "--host") {
            host = true;
            if (i + 1 < argc && std::isdigit(static_cast<unsigned char>(argv[i + 1][0]))) net.port = static_cast<std::uint16_t>(std::strtoul(argv[++i], nullptr, 10));
        }
        else if (a == "--stun" && i + 1 < argc) net.stun = argv[++i];
        else if (a == "--bitrate" && i + 1 < argc) net.bitrate_kbps = static_cast<unsigned>(std::strtoul(argv[++i], nullptr, 10));
        else if (a == "--encoder" && i + 1 < argc) net.encoder = argv[++i];
#endif
#ifdef PS2_WINDOW
        else if (a == "--window") window = true;
        else if (a == "--fullscreen") window = fullscreen = true;
#endif
        else if (a == "--frame-every" && i + 1 < argc) ps2::g_options.frame_every = static_cast<std::uint32_t>(std::strtoul(argv[++i], nullptr, 10));
        else if (a == "--save-state" && i + 1 < argc) {
            const std::string spec = argv[++i];
            const auto colon = spec.find(':');
            if (colon == std::string::npos) return usage();
            ps2::g_options.save_state_frame = std::strtoull(spec.substr(0, colon).c_str(), nullptr, 10);
            ps2::g_options.save_state_path = spec.substr(colon + 1);
        }
        else if (a == "--load-state" && i + 1 < argc) load_path = argv[++i];
        else return usage();
    }

    if (lockstep && host) {
        std::fprintf(stderr, "--lockstep and --host are different kinds of co-op: pick one\n");
        return 2;
    }
#ifdef PS2_LOCKSTEP
    if (lockstep) {
        // lockstep co-op (host/lockstep.hpp): both ports come from the input ring; scripted presses become the local
        // player's lines (p1 for the room's host, p2 for the guest), applied by lockstep frame
        ps2::g_options.lockstep = true;
        ls.disc_path = ps2::g_options.disc_path;
        ls.memcard_path = ps2::g_options.memcard_path;
        ls.script = std::move(ps2::g_options.presses);
        ps2::g_options.presses.clear();
        g_frame_gate = lockstep_vblank;
    }
#endif
    // a network player owns controller 2, which stays plugged in from boot so the game always sees it
    if (pad2 || host || lockstep) ps2::set_pad_connected(1, true);
#ifdef PS2_WINDOW
    if (window && !open_window(fullscreen, pad2 && !host && !lockstep, host || lockstep)) return 1;
#ifdef PS2_LOCKSTEP
    if (window && lockstep) {
        ls.audio_queued_ms = window_audio_queued_ms;
        set_window_lockstep(lockstep_vblank, [](std::uint16_t buttons, std::uint8_t lx, std::uint8_t ly, std::uint8_t rx, std::uint8_t ry, std::uint8_t l2, std::uint8_t r2) {
            lockstep_local_pad({buttons, lx, ly, rx, ry, l2, r2});
        });
        set_window_status(lockstep_status);
    }
#endif
#endif
#ifdef PS2_LOCKSTEP
    if (lockstep && !lockstep_start(ls)) return 1;
#endif
#ifdef PS2_NETPLAY
    if (host) {
        if (!netplay_start(net)) return 1;
        ps2::set_frame_tap(netplay_frame, !std::getenv("PS2_NETPLAY_ASYNC"));
        ps2::set_audio_sink([](const std::int16_t *samples, std::size_t frames) {
            netplay_audio(samples, frames);
#ifdef PS2_WINDOW
            window_queue_audio(samples, frames);
#endif
        });
#ifdef PS2_WINDOW
        set_window_status(netplay_status);
#endif
    }
#endif
    register_generated_code();
    register_generated_vu();
    const auto boot_and_run = [&]() -> int {
        std::uint32_t entry = 0;
        if (!ps2::load_elf(argv[1], entry)) {
            std::fprintf(stderr, "cannot load %s\n", argv[1]);
            return 1;
        }
        ps2::boot(entry, args);
        if (!load_path.empty() && !ps2::load_state(load_path)) return 1;
#ifdef PS2_PROFILE
        const char *profile = std::getenv("PS2_PROFILE");
        const char *profile_from = std::getenv("PS2_PROFILE_FROM");
        if (profile) start_profile(profile_from ? std::strtoull(profile_from, nullptr, 10) : 0);
        int result = ps2::run();
        if (profile) write_profile(profile);
#else
        int result = ps2::run();
#endif
        return result;
    };
    const auto emulate = [&]() -> int {
        int result = boot_and_run();
#ifdef PS2_LOCKSTEP
        if (lockstep) {
            const int session = lockstep_finish();  // also stops the network thread
            if (!result) result = session;
        }
#endif
        return result;
    };
#ifdef PS2_WINDOW
    if (window) return run_window(emulate);
#endif
#ifdef PS2_NETPLAY
    if (host) return run_netplay_headless(emulate);
#endif
    if (std::getenv("PS2_THREADS")) return run_threaded_headless(emulate);
    if (g_frame_gate) ps2::g_options.on_vblank = g_frame_gate;
    return emulate();
}
