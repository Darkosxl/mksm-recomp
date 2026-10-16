#include "../debug.hpp"
#include "kernel.hpp"

#include "ps2/disc.hpp"

#include "ps2/state.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <map>
#include <memory>

namespace ps2::iop {

namespace kernel {

namespace {

std::uint32_t arg(const Cpu &c, int i) { return i < 4 ? c.r[4 + i] : read32(c.r[29] + 16u + static_cast<std::uint32_t>(i - 4) * 4u); }

void def(const char *library, std::uint32_t index, const char *name, std::function<void(Cpu &)> body) {
    register_hle(library, index, [library, name, body = std::move(body)](Cpu &c) {
        trace_hle(library, name, c);
        body(c);
    });
}

struct CdState {
    bool busy = false;
    std::uint32_t callback = 0;
    std::uint32_t error = 0;
    std::vector<int> sync_waiters;
} g_cd;

std::uint8_t bcd(int v) { return static_cast<std::uint8_t>(((v / 10) << 4) | (v % 10)); }

void finish_read() {
    g_cd.busy = false;
    for (int id : g_cd.sync_waiters)
        if (Thread *t = thread(id)) wake(*t, 0);
    if (!g_cd.sync_waiters.empty()) reschedule();
    g_cd.sync_waiters.clear();
    if (g_cd.callback) call_guest(g_cd.callback, 1);
}

std::uint64_t read_cycles(std::uint32_t sectors) {
    return usec_to_cycles(400) + static_cast<std::uint64_t>(sectors) * usec_to_cycles(250);
}

// The drive spins a DVD at constant angular velocity, 4x at the outer edge of the data zone, so
// the transfer rate grows with the radius of the sector (about 1.7x at the inner edge). A seek
// costs 30 ms for a short hop and grows with the square root of the sled travel to 100 ms for a
// full stroke; a read up to 16 sectors ahead of the pickup reads through instead. The short and
// full seek times are PCSX2's, and its boot log fits them: each IRX load from \IOP takes about
// 30 ms plus 0.9 ms per sector there.
constexpr double kIopHz = 36864000.0;
constexpr double kInnerMm = 24.0, kOuterMm = 58.0;
constexpr double kLayerSectors = 2295104.0;
constexpr double kOuterBytesPerSecond = 4.0 * 1385000.0;
constexpr double kShortSeekSeconds = 0.030, kFullSeekSeconds = 0.100;
constexpr std::uint32_t kReadThrough = 16;
// IOP reboot, from PCSX2's log of the IOPRP300 reboot: the ROM kernel is up 15 ms after the
// request, and the replacement kernel reports BOOTEND 116 ms after the image is in memory.
constexpr double kRomBootSeconds = 0.015, kImageBootSeconds = 0.116;

struct Drive {
    std::uint32_t head = 0;
    std::uint64_t free_at = 0;
    std::uint32_t directory = 0;
    std::uint64_t boot_done = 0;
} g_drive;

std::uint64_t seconds_to_cycles(double s) { return static_cast<std::uint64_t>(s * kIopHz + 0.5); }

double radius_mm(std::uint32_t lsn) {
    double s = lsn;
    // Dual-layer PS2 discs use opposite track paths: layer 1 runs from where layer 0 ended back
    // toward the centre.
    if (const std::uint32_t layer1 = disc::layer1_start(); layer1 && lsn >= layer1)
        s = lsn - layer1 < layer1 ? static_cast<double>(layer1 - (lsn - layer1)) : 0.0;
    const double f = std::min(1.0, s / kLayerSectors);
    return std::sqrt(kInnerMm * kInnerMm + f * (kOuterMm * kOuterMm - kInnerMm * kInnerMm));
}

std::uint64_t transfer_cycles(std::uint32_t lsn, std::uint32_t sectors) {
    const double bytes_per_second = kOuterBytesPerSecond * radius_mm(lsn + sectors / 2) / kOuterMm;
    return seconds_to_cycles(static_cast<double>(sectors) * disc::kSector / bytes_per_second);
}

std::uint64_t seek_cycles(std::uint32_t from, std::uint32_t to) {
    if (to >= from && to - from < kReadThrough) return transfer_cycles(from, to - from);
    const double travel = std::abs(radius_mm(to) - radius_mm(from)) / (kOuterMm - kInnerMm);
    return seconds_to_cycles(kShortSeekSeconds + (kFullSeekSeconds - kShortSeekSeconds) * std::sqrt(travel));
}

std::uint64_t access(std::uint32_t lsn, std::uint32_t sectors) {
    const std::uint64_t start = std::max(now(), g_drive.free_at);
    g_drive.free_at = start + seek_cycles(g_drive.head, lsn) + transfer_cycles(lsn, sectors);
    g_drive.head = lsn + sectors;
    if (g_trace_modules)
        std::fprintf(stderr, "[drive] lsn %u count %u: %.1f ms\n", lsn, sectors, static_cast<double>(g_drive.free_at - now()) * 1000.0 / kIopHz);
    return g_drive.free_at;
}

std::uint32_t sectors_of(std::uint32_t bytes) { return (bytes + disc::kSector - 1) / disc::kSector; }

std::uint32_t le32(const std::uint8_t *p) { return static_cast<std::uint32_t>(p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24)); }

bool start_read(std::uint32_t lsn, std::uint32_t sectors, std::uint32_t buffer, std::uint32_t mode, bool ee_memory);

}

std::vector<std::uint8_t> read_disc_file(const std::string &path) {
    const auto entry = disc::find(path);
    if (!entry || entry->directory) return {};
    std::vector<std::uint8_t> data((entry->size + disc::kSector - 1) / disc::kSector * disc::kSector);
    disc::read(entry->sector, static_cast<std::uint32_t>(data.size() / disc::kSector), data.data());
    data.resize(entry->size);
    return data;
}

bool fast_disc() {
    static const bool fast = [] {
        const char *env = std::getenv("PS2_FAST_DISC");
        return env && *env && *env != '0';
    }();
    return fast;
}

std::uint64_t disc_read(std::uint32_t lsn, std::uint32_t sectors) { return access(lsn, sectors); }

std::uint64_t disc_stream(std::uint32_t lsn, std::uint32_t sectors) {
    g_drive.head = lsn + sectors;
    return now() + transfer_cycles(lsn, sectors);
}

void disc_seek(std::uint32_t lsn) { access(lsn, 0); }

std::uint64_t disc_lookup(const std::string &raw) {
    std::string path = raw.substr(raw.find(':') == std::string::npos ? 0 : raw.find(':') + 1);
    std::replace(path.begin(), path.end(), '\\', '/');
    const auto slash = path.find_last_of('/');
    const std::string parent = slash == std::string::npos ? std::string() : path.substr(0, slash);
    std::uint8_t pvd[disc::kSector];
    if (!disc::read(16, 1, pvd)) return now();
    std::uint32_t directory = le32(pvd + 158), size = le32(pvd + 166);
    if (parent.find_first_not_of('/') != std::string::npos) {
        const auto entry = disc::find(parent);
        if (!entry || !entry->directory) return now();
        directory = entry->sector;
        size = entry->size;
    }
    std::uint64_t done = now();
    if (!g_drive.directory) {
        access(16, 1);
        done = access(le32(pvd + 140), sectors_of(le32(pvd + 132)));
    }
    if (g_drive.directory != directory) {
        done = access(directory, sectors_of(size));
        g_drive.directory = directory;
    }
    return done;
}

std::uint64_t disc_load_file(const std::string &path) {
    std::uint64_t done = disc_lookup(path);
    if (const auto entry = disc::find(path); entry && !entry->directory) done = access(entry->sector, sectors_of(entry->size));
    return done;
}

std::uint64_t disc_reboot(const std::string &image) {
    g_drive.directory = 0;
    g_drive.free_at = std::max(now(), g_drive.free_at) + seconds_to_cycles(kRomBootSeconds);
    g_drive.boot_done = g_drive.free_at;
    if (!image.empty() && disc::find(image)) g_drive.boot_done = disc_load_file(image) + seconds_to_cycles(kImageBootSeconds);
    return g_drive.boot_done;
}

bool iop_booting() { return ps2::now() / kClockDivider < g_drive.boot_done; }

namespace {

bool start_read(std::uint32_t lsn, std::uint32_t sectors, std::uint32_t buffer, std::uint32_t, bool) {
    if (g_cd.busy) return false;
    g_cd.busy = true;
    g_cd.error = 0;
    disc::ready(lsn, sectors);
    schedule(fast_disc() ? now() + read_cycles(sectors) : disc_read(lsn, sectors), Job{kJobCdRead, lsn, sectors, buffer});
    return true;
}

}

void install_cdvd() {
    g_cd = CdState{};
    g_drive = Drive{};
    register_job(kJobCdRead, [](const Job &j) {
        if (!disc::ready(j.a, j.b)) {
            schedule(now() + usec_to_cycles(1000), j);
            return;
        }
        std::vector<std::uint8_t> data(static_cast<std::size_t>(j.b) * disc::kSector);
        disc::read(j.a, j.b, data.data());
        for (std::size_t i = 0; i < data.size(); ++i) write8(j.c + static_cast<std::uint32_t>(i), data[i]);
        finish_read();
    });
    register_hle_library("cdvdman", 0x0101);
    def("cdvdman", 4, "sceCdInit", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 5, "sceCdStandby", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 6, "sceCdRead", [](Cpu &c) {
        if (g_trace_hle) std::fprintf(stderr, "[cdvd] read lsn %u count %u to 0x%08X\n", arg(c, 0), arg(c, 1), arg(c, 2));
        c.r[2] = start_read(arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3), false) ? 1u : 0u;
    });
    def("cdvdman", 7, "sceCdSeek", [](Cpu &c) {
        if (!fast_disc()) disc_seek(arg(c, 0));
        c.r[2] = 1;
    });
    def("cdvdman", 8, "sceCdGetError", [](Cpu &c) { c.r[2] = g_cd.error; });
    def("cdvdman", 10, "sceCdSearchFile", [](Cpu &c) {
        const std::string name = ram_string(arg(c, 1), 256);
        const auto entry = disc::find(name);
        if (!entry) { c.r[2] = 0; return; }
        const std::uint32_t p = arg(c, 0);
        write32(p, entry->sector);
        write32(p + 4, entry->size);
        const std::string base = name.substr(name.find_last_of("\\/") == std::string::npos ? 0 : name.find_last_of("\\/") + 1);
        for (std::uint32_t i = 0; i < 16; ++i) write8(p + 8 + i, i < base.size() ? static_cast<std::uint8_t>(base[i]) : 0);
        c.r[2] = 1;
    });
    def("cdvdman", 11, "sceCdSync", [](Cpu &c) {
        if (arg(c, 0) == 1 || arg(c, 0) == 17) { c.r[2] = g_cd.busy ? 1u : 0u; return; }
        c.r[2] = 0;
        if (!g_cd.busy || !current()) return;
        g_cd.sync_waiters.push_back(current()->id);
        block(c, kWaitHle, 0);
    });
    def("cdvdman", 12, "sceCdGetDiskType", [](Cpu &c) { c.r[2] = 0x14; });
    def("cdvdman", 13, "sceCdDiskReady", [](Cpu &c) { c.r[2] = 2; });
    def("cdvdman", 14, "sceCdTrayReq", [](Cpu &c) { if (arg(c, 1)) write32(arg(c, 1), 0); c.r[2] = 1; });
    def("cdvdman", 15, "sceCdStop", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 22, "sceCdRI", [](Cpu &c) {
        for (std::uint32_t i = 0; i < 8; ++i) write8(arg(c, 0) + i, 0);
        if (arg(c, 1)) write32(arg(c, 1), 0);
        c.r[2] = 1;
    });
    def("cdvdman", 24, "sceCdReadClock", [](Cpu &c) {
        debug::count(debug::kRtcRead);
        const std::time_t t = static_cast<std::time_t>(ps2::rtc_time());
        const std::tm *tm = std::gmtime(&t);
        const std::uint32_t p = arg(c, 0);
        write8(p + 0, 0);
        write8(p + 1, bcd(tm->tm_sec));
        write8(p + 2, bcd(tm->tm_min));
        write8(p + 3, bcd((tm->tm_hour + 9) % 24));
        write8(p + 4, 0);
        write8(p + 5, bcd(tm->tm_mday));
        write8(p + 6, bcd(tm->tm_mon + 1));
        write8(p + 7, bcd(tm->tm_year % 100));
        c.r[2] = 1;
    });
    def("cdvdman", 28, "sceCdStatus", [](Cpu &c) { c.r[2] = g_cd.busy ? 0x06u : 0x0Au; });
    def("cdvdman", 37, "sceCdCallback", [](Cpu &c) { c.r[2] = g_cd.callback; g_cd.callback = arg(c, 0); });
    def("cdvdman", 38, "sceCdPause", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 39, "sceCdBreak", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 74, "sceCdPowerOff", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 75, "sceCdMmode", [](Cpu &c) { c.r[2] = 1; });
    def("cdvdman", 78, "sceCdPOffCallback", [](Cpu &c) { c.r[2] = 0; });
    def("cdvdman", 83, "sceCdReadDvdDualInfo", [](Cpu &c) {
        write32(arg(c, 0), disc::layer1_start() ? 1u : 0u);
        write32(arg(c, 1), disc::layer1_start());
        c.r[2] = 1;
    });
    def("cdvdman", 84, "sceCdLayerSearchFile", [](Cpu &c) {
        const std::string name = ram_string(arg(c, 1), 256);
        const auto entry = disc::find(name);
        if (!entry) { c.r[2] = 0; return; }
        write32(arg(c, 0), entry->sector);
        write32(arg(c, 0) + 4, entry->size);
        c.r[2] = 1;
    });
}

bool cd_busy() { return g_cd.busy; }

}

std::int32_t load_module(const std::string &path, const std::string &args, std::function<void(int, int)> done) {
    std::vector<std::uint8_t> data;
    std::string lower = path;
    for (char &ch : lower) ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    if (lower.rfind("cdrom", 0) == 0) data = kernel::read_disc_file(path);
    if (data.empty() && lower.rfind("rom0:", 0) != 0) {
        std::fprintf(stderr, "[iop] cannot read module %s\n", path.c_str());
    }
    return load_module_buffer(data, path, args, std::move(done));
}

}

namespace ps2::iop::kernel {

void drive_state(ps2::state::Stream &s) {
    s.tag("drive");
    s.pod(g_drive);
}

void cdvd_state(ps2::state::Stream &s) {
    s.tag("cdvd");
    s.pod(g_cd.busy);
    s.pod(g_cd.callback);
    s.pod(g_cd.error);
    s.vec(g_cd.sync_waiters);
}

}
