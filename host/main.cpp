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

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

void register_generated_code();
void register_generated_vu();

namespace {

int usage() {
    std::fprintf(stderr,
                 "usage: ps2run <elf> [--arg text]... [--frames n] [--ntsc] [--misses file]\n"
                 "              [--disc image.iso] [--memcard card.ps2] [--pal | --ntsc] [--trace-syscalls] [--trace-io] [--trace-threads]\n"
                 "              [--trace-iop] [--trace-iop-hle] [--frames-dir dir] [--frame-every n]\n"
                 "              [--press frame:[p2:]button[+button][:frames]]... [--press2 frame:button[+button][:frames]]...\n"
                 "              [--stick frame:[p2:]lx,ly[:frames]]... [--stick2 frame:lx,ly[:frames]]... [--pad2]\n"
                 "              [--window] [--fullscreen]\n"
                 "              [--host [port]] [--stun stun:host:port] [--bitrate kbit/s] [--encoder h264_nvenc|libx264]\n"
                 "              [--save-state frame:file] [--load-state file]\n");
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

    // a network player owns controller 2, which stays plugged in from boot so the game always sees it
    if (pad2 || host) ps2::set_pad_connected(1, true);
#ifdef PS2_WINDOW
    if (window && !open_window(fullscreen, pad2 && !host, host)) return 1;
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
    const auto emulate = [&]() -> int {
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
        const int result = ps2::run();
        if (profile) write_profile(profile);
        return result;
#else
        return ps2::run();
#endif
    };
#ifdef PS2_WINDOW
    if (window) return run_window(emulate);
#endif
#ifdef PS2_NETPLAY
    if (host) return run_netplay_headless(emulate);
#endif
    return emulate();
}
