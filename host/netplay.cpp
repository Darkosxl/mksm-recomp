#include "netplay.hpp"

#include "ps2/system.hpp"

#include <rtc/rtc.hpp>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/opt.h>
#include <libswscale/swscale.h>
}
#include <opus.h>

#include <arpa/inet.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <cstring>
#include <deque>
#include <memory>
#include <mutex>
#include <random>
#include <thread>
#include <vector>

extern const char kNetplayPage[];

namespace {

using Clock = std::chrono::steady_clock;

constexpr std::uint32_t kVideoSsrc = 0x50533201, kAudioSsrc = 0x50533202;
constexpr int kVideoPt = 96, kAudioPt = 111, kPlayoutDelayExt = 6;
constexpr std::size_t kMaxHeader = 8192, kMaxBody = 65536;
constexpr int kOpusFrame = 480;  // 10 ms at 48 kHz

// data channel messages, first byte is the type (docs/netplay.md)
enum : std::uint8_t { kInput = 1, kPing = 2, kPong = 3 };
constexpr std::size_t kInputSize = 14;

double ms_since(Clock::time_point t) { return std::chrono::duration<double, std::milli>(Clock::now() - t).count(); }
double now_ms() { return std::chrono::duration<double, std::milli>(Clock::now().time_since_epoch()).count(); }

struct Peer {
    std::shared_ptr<rtc::PeerConnection> pc;
    std::shared_ptr<rtc::Track> video, audio;
    std::shared_ptr<rtc::DataChannel> channel;
    std::string session, address;
    std::mutex gather_mutex;
    std::condition_variable gathered;
    bool gathering_done = false;
    std::uint32_t last_seq = 0;
    bool any_input = false;
};

NetplayOptions g_opt;
std::string g_code;
Clock::time_point g_start = Clock::now();

std::mutex g_peer_mutex;
std::shared_ptr<Peer> g_peer;
std::atomic<bool> g_connected{false};
std::atomic<bool> g_want_keyframe{true};
std::atomic<double> g_rtt_ms{-1.0};
std::atomic<std::uint64_t> g_video_bytes{0}, g_audio_bytes{0}, g_inputs{0}, g_encoded{0};
std::atomic<std::uint8_t> g_probe{0};
std::atomic<double> g_probe_arrival{0.0};
std::atomic<double> g_probe_ms_sum{0.0};
std::atomic<std::uint32_t> g_probe_count{0};
std::atomic<std::uint16_t> g_p2_buttons{0};
std::atomic<const char *> g_encoder_name{"none"};

std::shared_ptr<Peer> current_peer() {
    std::lock_guard<std::mutex> lock(g_peer_mutex);
    return g_peer;
}

void neutral_p2() {
    ps2::set_pad_buttons(0, 1);
    for (int axis = 0; axis < 4; ++axis) ps2::set_pad_axis(axis, 0x80, 1);
    ps2::set_pad_pressure(8, 0xFF, 1);
    ps2::set_pad_pressure(9, 0xFF, 1);
    g_p2_buttons.store(0);
}

std::uint32_t le32(const std::uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | (static_cast<std::uint32_t>(p[3]) << 24); }

// everything received from the network is a fixed-size record; anything else is dropped
void on_channel_message(Peer &peer, const rtc::binary &data) {
    if (data.empty() || data.size() > 64) return;
    const auto *d = reinterpret_cast<const std::uint8_t *>(data.data());
    switch (d[0]) {
    case kInput: {
        if (data.size() < kInputSize) return;
        const std::uint32_t seq = le32(d + 4);
        // latest wins: a packet that is not newer than the last one applied is a late duplicate
        if (peer.any_input && static_cast<std::int32_t>(seq - peer.last_seq) <= 0) return;
        peer.any_input = true;
        peer.last_seq = seq;
        const std::uint16_t buttons = static_cast<std::uint16_t>(d[2] | (d[3] << 8));
        ps2::set_pad_pressure(8, d[12], 1);
        ps2::set_pad_pressure(9, d[13], 1);
        ps2::set_pad_buttons(buttons, 1);
        ps2::set_pad_axis(2, d[8], 1);
        ps2::set_pad_axis(3, d[9], 1);
        ps2::set_pad_axis(0, d[10], 1);
        ps2::set_pad_axis(1, d[11], 1);
        g_p2_buttons.store(buttons);
        g_inputs.fetch_add(1);
        if (d[1] != g_probe.load()) {
            g_probe_arrival.store(now_ms());
            g_probe.store(d[1]);
        }
        break;
    }
    case kPing: {
        if (data.size() != 9 || !peer.channel) return;
        rtc::binary reply(data);
        reply[0] = static_cast<std::byte>(kPong);
        try {
            peer.channel->send(reply);
        } catch (...) {
        }
        break;
    }
    case kPong: {
        if (data.size() != 9) return;
        double sent = 0.0;
        std::memcpy(&sent, d + 1, sizeof sent);
        const double rtt = now_ms() - sent;
        if (rtt >= 0.0 && rtt < 10000.0) g_rtt_ms.store(rtt);
        break;
    }
    default: break;
    }
}

std::string random_token(int digits) {
    std::random_device rd;
    std::string s;
    for (int i = 0; i < digits; ++i) s += static_cast<char>('0' + rd() % 10);
    return s;
}

std::shared_ptr<Peer> make_peer(const std::string &address) {
    rtc::Configuration config;
    if (!g_opt.stun.empty()) config.iceServers.emplace_back(g_opt.stun);
    // one fixed UDP port for all ICE traffic, so a single port forward is enough
    config.enableIceUdpMux = true;
    config.portRangeBegin = config.portRangeEnd = static_cast<std::uint16_t>(g_opt.port + 1);
    config.disableAutoNegotiation = true;
    auto peer = std::make_shared<Peer>();
    peer->address = address;
    peer->session = random_token(24);
    peer->pc = std::make_shared<rtc::PeerConnection>(config);
    const std::weak_ptr<Peer> weak = peer;
    peer->pc->onGatheringStateChange([weak](rtc::PeerConnection::GatheringState state) {
        const auto raw = weak.lock();
        if (!raw || state != rtc::PeerConnection::GatheringState::Complete) return;
        std::lock_guard<std::mutex> lock(raw->gather_mutex);
        raw->gathering_done = true;
        raw->gathered.notify_all();
    });
    peer->pc->onStateChange([weak](rtc::PeerConnection::State state) {
        const auto raw = weak.lock();
        if (!raw || current_peer() != raw) return;
        if (state == rtc::PeerConnection::State::Connected) {
            neutral_p2();
            g_want_keyframe.store(true);
            g_connected.store(true);
            ps2::enable_frame_tap(true);
            std::fprintf(stderr, "[netplay] P2 connected from %s\n", raw->address.c_str());
        } else if (state == rtc::PeerConnection::State::Disconnected || state == rtc::PeerConnection::State::Failed ||
                   state == rtc::PeerConnection::State::Closed) {
            if (g_connected.exchange(false)) std::fprintf(stderr, "[netplay] P2 disconnected\n");
            ps2::enable_frame_tap(false);
            neutral_p2();
        }
    });

    rtc::Description::Video video("video", rtc::Description::Direction::SendOnly);
    video.addH264Codec(kVideoPt);
    // separate stream ids: the browser must not delay the picture to line it up with the sound
    video.addSSRC(kVideoSsrc, "ps2", "ps2-video", "video");
    // playout delay 0..0 asks the browser to show each frame as soon as it is decoded
    video.addExtMap(rtc::Description::Entry::ExtMap(kPlayoutDelayExt, "http://www.webrtc.org/experiments/rtp-hdrext/playout-delay"));
    peer->video = peer->pc->addTrack(video);
    auto video_rtp = std::make_shared<rtc::RtpPacketizationConfig>(kVideoSsrc, "ps2", kVideoPt, rtc::H264RtpPacketizer::ClockRate);
    video_rtp->playoutDelayId = kPlayoutDelayExt;
    video_rtp->playoutDelayMin = 0;
    video_rtp->playoutDelayMax = 0;
    auto h264 = std::make_shared<rtc::H264RtpPacketizer>(rtc::NalUnit::Separator::StartSequence, video_rtp);
    h264->addToChain(std::make_shared<rtc::RtcpSrReporter>(video_rtp));
    h264->addToChain(std::make_shared<rtc::RtcpNackResponder>());
    h264->addToChain(std::make_shared<rtc::PliHandler>([] { g_want_keyframe.store(true); }));
    peer->video->setMediaHandler(h264);

    rtc::Description::Audio audio("audio", rtc::Description::Direction::SendOnly);
    audio.addOpusCodec(kAudioPt);
    audio.addSSRC(kAudioSsrc, "ps2", "ps2-audio", "audio");
    peer->audio = peer->pc->addTrack(audio);
    auto audio_rtp = std::make_shared<rtc::RtpPacketizationConfig>(kAudioSsrc, "ps2", kAudioPt, rtc::OpusRtpPacketizer::DefaultClockRate);
    auto opus = std::make_shared<rtc::OpusRtpPacketizer>(audio_rtp);
    opus->addToChain(std::make_shared<rtc::RtcpSrReporter>(audio_rtp));
    peer->audio->setMediaHandler(opus);

    // input: unordered and never retransmitted, every packet carries the whole pad state
    rtc::DataChannelInit init;
    init.reliability.unordered = true;
    init.reliability.maxRetransmits = 0;
    peer->channel = peer->pc->createDataChannel("input", init);
    peer->channel->onMessage(
        [weak](rtc::binary data) {
            if (const auto raw = weak.lock()) on_channel_message(*raw, data);
        },
        [](std::string) {});

    peer->pc->setLocalDescription(rtc::Description::Type::Offer);
    std::unique_lock<std::mutex> lock(peer->gather_mutex);
    peer->gathered.wait_for(lock, std::chrono::seconds(5), [&] { return peer->gathering_done; });
    return peer;
}

// ---------------------------------------------------------------- HTTP: the page and signalling

struct Request {
    std::string method, path, body;
};

bool read_request(int fd, Request &req) {
    std::string data;
    char buf[4096];
    std::size_t header_end;
    while ((header_end = data.find("\r\n\r\n")) == std::string::npos) {
        if (data.size() > kMaxHeader) return false;
        const ssize_t n = recv(fd, buf, sizeof buf, 0);
        if (n <= 0) return false;
        data.append(buf, static_cast<std::size_t>(n));
    }
    const std::string head = data.substr(0, header_end);
    const std::size_t sp1 = head.find(' '), sp2 = head.find(' ', sp1 + 1);
    if (sp1 == std::string::npos || sp2 == std::string::npos) return false;
    req.method = head.substr(0, sp1);
    req.path = head.substr(sp1 + 1, sp2 - sp1 - 1);
    if (const std::size_t q = req.path.find_first_of("?#"); q != std::string::npos) req.path.resize(q);
    std::size_t length = 0;
    std::string lower = head;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    if (const std::size_t at = lower.find("\r\ncontent-length:"); at != std::string::npos) {
        length = std::strtoul(lower.c_str() + at + 17, nullptr, 10);
        if (length > kMaxBody) return false;
    }
    req.body = data.substr(header_end + 4);
    while (req.body.size() < length) {
        const ssize_t n = recv(fd, buf, std::min(sizeof buf, length - req.body.size()), 0);
        if (n <= 0) return false;
        req.body.append(buf, static_cast<std::size_t>(n));
    }
    req.body.resize(length);
    return true;
}

void respond(int fd, int status, const char *type, const std::string &body) {
    const char *text = status == 200 ? "OK" : status == 204 ? "No Content" : status == 400 ? "Bad Request" : status == 403 ? "Forbidden"
                     : status == 404 ? "Not Found" : status == 409 ? "Conflict" : status == 429 ? "Too Many Requests" : "Internal Server Error";
    char head[256];
    std::snprintf(head, sizeof head,
                  "HTTP/1.1 %d %s\r\nContent-Type: %s\r\nContent-Length: %zu\r\nCache-Control: no-store\r\nX-Content-Type-Options: nosniff\r\nConnection: close\r\n\r\n",
                  status, text, type, body.size());
    std::string out = head;
    out += body;
    for (std::size_t sent = 0; sent < out.size();) {
        const ssize_t n = send(fd, out.data() + sent, out.size() - sent, MSG_NOSIGNAL);
        if (n <= 0) return;
        sent += static_cast<std::size_t>(n);
    }
}

// splits a request body into at most `count` lines; the last part keeps the rest (an SDP keeps its line breaks)
std::vector<std::string> lines(const std::string &body, std::size_t count) {
    std::vector<std::string> out;
    std::size_t at = 0;
    while (out.size() + 1 < count) {
        const std::size_t nl = body.find('\n', at);
        if (nl == std::string::npos) break;
        std::string line = body.substr(at, nl - at);
        while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
        out.push_back(std::move(line));
        at = nl + 1;
    }
    out.push_back(body.substr(at));
    return out;
}

Clock::time_point g_locked_until{};
unsigned g_failures = 0;

// a wrong code locks the endpoints for a moment, which keeps guessing a 6-digit code impractical
int check_code(const std::string &given, const std::string &address) {
    if (Clock::now() < g_locked_until) return 429;
    unsigned diff = given.size() != g_code.size();
    for (std::size_t i = 0; i < g_code.size(); ++i) diff |= static_cast<unsigned>(i < given.size() ? given[i] ^ g_code[i] : 1);
    if (!diff) return 0;
    ++g_failures;
    g_locked_until = Clock::now() + std::chrono::seconds(2);
    std::fprintf(stderr, "[netplay] wrong session code from %s (%u so far)\n", address.c_str(), g_failures);
    return 403;
}

void handle(int fd, const std::string &address) {
    Request req;
    if (!read_request(fd, req)) return respond(fd, 400, "text/plain", "bad request\n");
    if (req.method == "GET" && (req.path == "/" || req.path == "/index.html" || req.path == "/netplay.html"))
        return respond(fd, 200, "text/html; charset=utf-8", kNetplayPage);
    if (req.method != "POST") return respond(fd, 404, "text/plain", "not found\n");
    if (req.path == "/offer") {
        const auto parts = lines(req.body, 1);
        std::string code = parts[0];
        while (!code.empty() && (code.back() == '\n' || code.back() == '\r' || code.back() == ' ')) code.pop_back();
        if (const int status = check_code(code, address)) return respond(fd, status, "text/plain", status == 429 ? "slow down\n" : "wrong code\n");
        {
            std::lock_guard<std::mutex> lock(g_peer_mutex);
            // once paired, only the same machine may reconnect (a page reload) until that peer leaves
            if (g_peer && g_connected.load() && g_peer->address != address) return respond(fd, 409, "text/plain", "another player is connected\n");
        }
        std::shared_ptr<Peer> peer;
        try {
            peer = make_peer(address);
        } catch (const std::exception &e) {
            std::fprintf(stderr, "[netplay] cannot create the connection: %s\n", e.what());
            return respond(fd, 500, "text/plain", "cannot create the connection\n");
        }
        const auto offer = peer->pc->localDescription();
        if (!offer) return respond(fd, 500, "text/plain", "no offer\n");
        std::shared_ptr<Peer> old;
        {
            std::lock_guard<std::mutex> lock(g_peer_mutex);
            old = std::move(g_peer);
            g_peer = peer;
        }
        if (old) {
            g_connected.store(false);
            ps2::enable_frame_tap(false);
            old->pc->close();
        }
        return respond(fd, 200, "text/plain", peer->session + "\n" + std::string(*offer));
    }
    if (req.path == "/answer") {
        const auto parts = lines(req.body, 3);
        if (parts.size() != 3) return respond(fd, 400, "text/plain", "expected code, session and sdp\n");
        if (const int status = check_code(parts[0], address)) return respond(fd, status, "text/plain", "wrong code\n");
        const auto peer = current_peer();
        if (!peer || peer->session != parts[1] || peer->address != address) return respond(fd, 409, "text/plain", "unknown session\n");
        try {
            peer->pc->setRemoteDescription(rtc::Description(parts[2], rtc::Description::Type::Answer));
        } catch (const std::exception &e) {
            std::fprintf(stderr, "[netplay] bad answer from %s: %s\n", address.c_str(), e.what());
            return respond(fd, 400, "text/plain", "bad answer\n");
        }
        return respond(fd, 204, "text/plain", "");
    }
    respond(fd, 404, "text/plain", "not found\n");
}

void serve(int listener) {
    for (;;) {
        sockaddr_in from{};
        socklen_t len = sizeof from;
        const int fd = accept(listener, reinterpret_cast<sockaddr *>(&from), &len);
        if (fd < 0) continue;
        timeval tv{3, 0};
        setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof tv);
        setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof tv);
        char ip[INET_ADDRSTRLEN] = "?";
        inet_ntop(AF_INET, &from.sin_addr, ip, sizeof ip);
        handle(fd, ip);
        close(fd);
    }
}

// ---------------------------------------------------------------- video

struct Encoder {
    AVCodecContext *ctx = nullptr;
    AVFrame *frame = nullptr;
    AVPacket *packet = nullptr;
    SwsContext *sws = nullptr;
    int width = 0, height = 0;
    std::int64_t pts = 0;

    void close() {
        if (ctx) avcodec_free_context(&ctx);
        if (frame) av_frame_free(&frame);
        if (packet) av_packet_free(&packet);
        width = height = 0;
    }

    bool open(const char *name, int w, int h) {
        const AVCodec *codec = avcodec_find_encoder_by_name(name);
        if (!codec) return false;
        ctx = avcodec_alloc_context3(codec);
        ctx->width = w;
        ctx->height = h;
        ctx->time_base = {1, 60};
        ctx->framerate = {60, 1};
        ctx->pix_fmt = AV_PIX_FMT_YUV420P;
        ctx->gop_size = 600;  // keyframes come by time instead, see video_loop
        ctx->max_b_frames = 0;
        ctx->bit_rate = static_cast<std::int64_t>(g_opt.bitrate_kbps) * 1000;
        ctx->rc_max_rate = ctx->bit_rate;
        ctx->rc_buffer_size = static_cast<int>(ctx->bit_rate / 8);  // ~125 ms of buffer keeps frame sizes even
        // constrained baseline: no B-frames, decodes in every browser; SPS/PPS repeat before each IDR
        av_opt_set(ctx->priv_data, "profile", "baseline", 0);
        av_opt_set_int(ctx->priv_data, "forced-idr", 1, 0);
        if (std::strcmp(name, "h264_nvenc") == 0) {
            av_opt_set(ctx->priv_data, "preset", "p1", 0);
            av_opt_set(ctx->priv_data, "tune", "ull", 0);
            av_opt_set(ctx->priv_data, "rc", "cbr", 0);
            av_opt_set_int(ctx->priv_data, "zerolatency", 1, 0);
            av_opt_set_int(ctx->priv_data, "delay", 0, 0);
        } else {
            av_opt_set(ctx->priv_data, "preset", "ultrafast", 0);
            av_opt_set(ctx->priv_data, "tune", "zerolatency", 0);
        }
        if (avcodec_open2(ctx, codec, nullptr) < 0) {
            avcodec_free_context(&ctx);
            return false;
        }
        frame = av_frame_alloc();
        frame->format = ctx->pix_fmt;
        frame->width = w;
        frame->height = h;
        if (av_frame_get_buffer(frame, 0) < 0) {
            close();
            return false;
        }
        packet = av_packet_alloc();
        width = w;
        height = h;
        return true;
    }

    bool ensure(int w, int h) {
        if (ctx && w == width && h == height) return true;
        close();
        const char *names[] = {g_opt.encoder.empty() ? "h264_nvenc" : g_opt.encoder.c_str(), "libx264"};
        for (const char *name : names)
            if (open(name, w, h)) {
                if (std::strcmp(g_encoder_name.load(), name) != 0) std::fprintf(stderr, "[netplay] video: %s %dx%d %u kbit/s\n", name, w, h, g_opt.bitrate_kbps);
                g_encoder_name = name;
                g_want_keyframe.store(true);
                return true;
            }
        std::fprintf(stderr, "[netplay] no H.264 encoder could be opened\n");
        return false;
    }
};

std::mutex g_frame_mutex;
std::condition_variable g_frame_ready;
std::vector<std::uint32_t> g_frame;
std::uint32_t g_frame_w = 0, g_frame_h = 0;
bool g_frame_full = false;
Clock::time_point g_frame_at;

// draws the latency probe id as eight black/white bars in the top-left corner (only while a client probes)
void paint_probe(std::vector<std::uint32_t> &rgba, std::uint32_t w, std::uint32_t h, std::uint8_t probe) {
    if (w < 64 || h < 24) return;
    for (std::uint32_t y = 0; y < 24; ++y)
        for (std::uint32_t x = 0; x < 64; ++x) rgba[y * w + x] = (probe >> (x / 8)) & 1u ? 0xFFFFFFFFu : 0xFF000000u;
}

void video_loop() {
    Encoder enc;
    std::vector<std::uint32_t> rgba;
    std::uint8_t last_probe = 0;
    Clock::time_point last_key{};
    for (;;) {
        std::uint32_t w = 0, h = 0;
        Clock::time_point at;
        {
            std::unique_lock<std::mutex> lock(g_frame_mutex);
            g_frame_ready.wait(lock, [] { return g_frame_full; });
            rgba.swap(g_frame);
            w = g_frame_w;
            h = g_frame_h;
            at = g_frame_at;
            g_frame_full = false;
        }
        const auto peer = current_peer();
        if (!peer || !g_connected.load() || !peer->video || !peer->video->isOpen()) continue;
        const std::uint8_t probe = g_probe.load();
        if (probe) paint_probe(rgba, w, h, probe);
        // halve upscaled output (PS2_SCALE) so the stream stays at about the console's own resolution
        int ew = static_cast<int>(w), eh = static_cast<int>(h);
        while (ew > 1280) ew /= 2, eh /= 2;
        ew &= ~1;
        eh &= ~1;
        if (ew < 16 || eh < 16 || !enc.ensure(ew, eh)) continue;
        enc.sws = sws_getCachedContext(enc.sws, static_cast<int>(w), static_cast<int>(h), AV_PIX_FMT_RGBA, ew, eh, AV_PIX_FMT_YUV420P, SWS_BILINEAR, nullptr, nullptr, nullptr);
        if (!enc.sws || av_frame_make_writable(enc.frame) < 0) continue;
        const std::uint8_t *src[1] = {reinterpret_cast<const std::uint8_t *>(rgba.data())};
        const int stride[1] = {static_cast<int>(w * 4)};
        sws_scale(enc.sws, src, stride, 0, static_cast<int>(h), enc.frame->data, enc.frame->linesize);
        enc.frame->pts = enc.pts++;
        const bool key = g_want_keyframe.exchange(false) || Clock::now() - last_key > std::chrono::seconds(2);
        if (key) last_key = Clock::now();
        enc.frame->pict_type = key ? AV_PICTURE_TYPE_I : AV_PICTURE_TYPE_NONE;
        if (avcodec_send_frame(enc.ctx, enc.frame) < 0) {
            enc.close();
            continue;
        }
        const std::chrono::duration<double> stamp = at - g_start;
        while (avcodec_receive_packet(enc.ctx, enc.packet) == 0) {
            try {
                peer->video->sendFrame(reinterpret_cast<const std::byte *>(enc.packet->data), static_cast<std::size_t>(enc.packet->size), rtc::FrameInfo(stamp));
            } catch (const std::exception &) {
            }
            g_video_bytes.fetch_add(static_cast<std::uint64_t>(enc.packet->size));
            av_packet_unref(enc.packet);
        }
        g_encoded.fetch_add(1);
        if (probe != last_probe) {
            last_probe = probe;
            if (probe) {
                g_probe_ms_sum.store(g_probe_ms_sum.load() + (now_ms() - g_probe_arrival.load()));
                g_probe_count.fetch_add(1);
            }
        }
    }
}

// ---------------------------------------------------------------- audio

std::mutex g_pcm_mutex;
std::condition_variable g_pcm_ready;
std::deque<std::int16_t> g_pcm;

void audio_loop() {
    int error = 0;
    OpusEncoder *opus = opus_encoder_create(48000, 2, OPUS_APPLICATION_RESTRICTED_LOWDELAY, &error);
    if (!opus) {
        std::fprintf(stderr, "[netplay] opus: %s\n", opus_strerror(error));
        return;
    }
    opus_encoder_ctl(opus, OPUS_SET_BITRATE(128000));
    std::int16_t pcm[kOpusFrame * 2];
    unsigned char packet[1500];
    std::uint64_t samples = 0;
    for (;;) {
        {
            std::unique_lock<std::mutex> lock(g_pcm_mutex);
            g_pcm_ready.wait(lock, [] { return g_pcm.size() >= kOpusFrame * 2; });
            std::copy_n(g_pcm.begin(), kOpusFrame * 2, pcm);
            g_pcm.erase(g_pcm.begin(), g_pcm.begin() + kOpusFrame * 2);
        }
        const auto peer = current_peer();
        if (!peer || !g_connected.load() || !peer->audio || !peer->audio->isOpen()) continue;
        const int bytes = opus_encode(opus, pcm, kOpusFrame, packet, sizeof packet);
        if (bytes <= 0) continue;
        try {
            peer->audio->sendFrame(reinterpret_cast<const std::byte *>(packet), static_cast<std::size_t>(bytes),
                                   rtc::FrameInfo(std::chrono::duration<double>(static_cast<double>(samples) / 48000.0)));
        } catch (const std::exception &) {
        }
        samples += kOpusFrame;
        g_audio_bytes.fetch_add(static_cast<std::uint64_t>(bytes));
    }
}

// ---------------------------------------------------------------- status

std::mutex g_status_mutex;
std::string g_status = "P2: waiting";

void status_loop() {
    std::uint64_t frames = ps2::frames_run(), video = g_video_bytes.load(), audio = g_audio_bytes.load(), inputs = g_inputs.load(), encoded = g_encoded.load();
    for (unsigned tick = 1;; ++tick) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        const auto peer = current_peer();
        const bool connected = g_connected.load();
        if (connected && peer && peer->channel && peer->channel->isOpen()) {
            std::uint8_t ping[9] = {kPing};
            const double t = now_ms();
            std::memcpy(ping + 1, &t, sizeof t);
            try {
                peer->channel->send(reinterpret_cast<const std::byte *>(ping), sizeof ping);
            } catch (...) {
            }
        }
        const std::uint64_t f = ps2::frames_run(), v = g_video_bytes.load(), a = g_audio_bytes.load(), in = g_inputs.load(), e = g_encoded.load();
        const double fps = static_cast<double>(f - frames), sent_fps = static_cast<double>(e - encoded);
        const double video_kbps = static_cast<double>(v - video) * 8.0 / 1000.0, audio_kbps = static_cast<double>(a - audio) * 8.0 / 1000.0;
        char line[160];
        if (connected)
            std::snprintf(line, sizeof line, "P2 connected, ping %.0f ms", g_rtt_ms.load());
        else
            std::snprintf(line, sizeof line, "P2: waiting (code %s)", g_code.c_str());
        {
            std::lock_guard<std::mutex> lock(g_status_mutex);
            g_status = line;
        }
        if (connected && peer && peer->channel && peer->channel->isOpen()) {
            char json[200];
            std::snprintf(json, sizeof json, "{\"fps\":%.0f,\"sent\":%.0f,\"kbps\":%.0f,\"akbps\":%.0f,\"encoder\":\"%s\",\"rtt\":%.1f}", fps, sent_fps, video_kbps, audio_kbps,
                          g_encoder_name.load(), g_rtt_ms.load());
            try {
                peer->channel->send(std::string(json));
            } catch (...) {
            }
        }
        if (tick % 5 == 0 && !connected) std::fprintf(stderr, "[netplay] %s; game %.0f fps\n", line, fps);
        if (tick % 5 == 0 && connected) {
            const unsigned probes = g_probe_count.load();
            std::fprintf(stderr, "[netplay] %s; game %.0f fps, sent %.0f fps, video %.0f kbit/s, audio %.0f kbit/s, input %.0f pkt/s, P2 buttons %04x%s", line, fps, sent_fps,
                         video_kbps, audio_kbps, static_cast<double>(in - inputs), g_p2_buttons.load(), probes ? "" : "\n");
            if (probes) std::fprintf(stderr, ", probe arrival->sent %.1f ms (n=%u)\n", g_probe_ms_sum.load() / probes, probes);
        }
        frames = f, video = v, audio = a, inputs = in, encoded = e;
    }
}

std::vector<std::string> lan_addresses() {
    std::vector<std::string> out;
    ifaddrs *list = nullptr;
    if (getifaddrs(&list) != 0) return out;
    for (ifaddrs *i = list; i; i = i->ifa_next) {
        if (!i->ifa_addr || i->ifa_addr->sa_family != AF_INET || (i->ifa_flags & IFF_LOOPBACK) || !(i->ifa_flags & IFF_UP)) continue;
        const std::string name = i->ifa_name;
        if (name.rfind("docker", 0) == 0 || name.rfind("br-", 0) == 0 || name.rfind("veth", 0) == 0 || name.rfind("virbr", 0) == 0) continue;
        char ip[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &reinterpret_cast<sockaddr_in *>(i->ifa_addr)->sin_addr, ip, sizeof ip);
        out.push_back(std::string(ip) + " " + name);
    }
    freeifaddrs(list);
    return out;
}

}

bool netplay_start(const NetplayOptions &options) {
    g_opt = options;
    g_code = random_token(6);
    rtc::InitLogger(rtc::LogLevel::Warning);
    const int listener = socket(AF_INET, SOCK_STREAM, 0);
    const int yes = 1;
    setsockopt(listener, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof yes);
    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(g_opt.port);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    if (listener < 0 || bind(listener, reinterpret_cast<sockaddr *>(&addr), sizeof addr) != 0 || listen(listener, 8) != 0) {
        std::fprintf(stderr, "[netplay] cannot listen on TCP port %u: %s\n", g_opt.port, std::strerror(errno));
        return false;
    }
    neutral_p2();
    std::fprintf(stderr, "[netplay] hosting: session code %s; page + signalling on TCP %u, media on UDP %u\n", g_code.c_str(), g_opt.port, g_opt.port + 1);
    std::fprintf(stderr, "[netplay]   this machine: http://127.0.0.1:%u/#code=%s\n", g_opt.port, g_code.c_str());
    for (const std::string &entry : lan_addresses()) {
        const std::size_t space = entry.find(' ');
        std::fprintf(stderr, "[netplay]   P2 opens:     http://%s:%u/#code=%s  (%s)\n", entry.substr(0, space).c_str(), g_opt.port, g_code.c_str(), entry.substr(space + 1).c_str());
    }
    std::thread(serve, listener).detach();
    std::thread(video_loop).detach();
    std::thread(audio_loop).detach();
    std::thread(status_loop).detach();
    return true;
}

void netplay_frame(const std::uint32_t *rgba, std::uint32_t width, std::uint32_t height) {
    if (!g_connected.load()) return;
    {
        std::lock_guard<std::mutex> lock(g_frame_mutex);
        g_frame.assign(rgba, rgba + static_cast<std::size_t>(width) * height);
        g_frame_w = width;
        g_frame_h = height;
        g_frame_at = Clock::now();
        g_frame_full = true;
    }
    g_frame_ready.notify_one();
}

void netplay_audio(const std::int16_t *samples, std::size_t frames) {
    if (!g_connected.load()) return;
    {
        std::lock_guard<std::mutex> lock(g_pcm_mutex);
        // more than 200 ms waiting means the encoder fell behind: drop the oldest sound rather than lag
        if (g_pcm.size() > 48000 * 2 / 5) g_pcm.erase(g_pcm.begin(), g_pcm.begin() + static_cast<std::ptrdiff_t>(g_pcm.size() / 2 & ~std::size_t{1}));
        g_pcm.insert(g_pcm.end(), samples, samples + frames * 2);
        if (g_pcm.size() < kOpusFrame * 2) return;
    }
    g_pcm_ready.notify_one();
}

std::string netplay_status() {
    std::lock_guard<std::mutex> lock(g_status_mutex);
    return g_status;
}

int run_netplay_headless(const std::function<int()> &emulate) {
    ps2::init_graphics();
    ps2::g_options.on_vblank = [] {
        ps2::post_present();
        // no audio device paces this run, so hold emulation to the console's frame rate by the clock
        static Clock::time_point next = Clock::now();
        const auto period = std::chrono::microseconds(ps2::g_options.pal ? 20000 : 16683);
        next += period;
        const auto now = Clock::now();
        if (next > now) std::this_thread::sleep_until(next);
        else if (now - next > std::chrono::milliseconds(100)) next = now;
    };
    ps2::start_render_thread();
    if (!std::getenv("PS2_NO_VU_THREAD")) {
        ps2::start_vu_thread();
        std::thread(ps2::run_vu_thread).detach();
    }
    std::atomic<bool> done{false};
    int result = 0;
    std::thread emulation([&] {
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
