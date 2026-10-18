#include "lockstep_rtc.hpp"

#ifdef PS2_LOCKSTEP_RTC

#include <rtc/rtc.hpp>

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <mutex>

namespace lockstep {

namespace {

// "turn:host:port?transport=tcp" with credentials -> rtc::IceServer
bool to_rtc(const IceServer &s, rtc::IceServer &out) {
    std::string url = s.url;
    const bool turn = url.rfind("turn:", 0) == 0, stun = url.rfind("stun:", 0) == 0;
    if (!turn && !stun) return false;
    url = url.substr(5);
    std::string transport = "udp";
    if (const std::size_t q = url.find('?'); q != std::string::npos) {
        if (url.find("transport=tcp", q) != std::string::npos) transport = "tcp";
        url = url.substr(0, q);
    }
    std::string host = url, port = turn ? "3478" : "3478";
    if (const std::size_t c = url.rfind(':'); c != std::string::npos && url.find(']') == std::string::npos) {
        host = url.substr(0, c);
        port = url.substr(c + 1);
    }
    if (stun) out = rtc::IceServer(host, port);
    else
        out = rtc::IceServer(host, port, s.username, s.credential,
                             transport == "tcp" ? rtc::IceServer::RelayType::TurnTcp : rtc::IceServer::RelayType::TurnUdp);
    return true;
}

class Impl final : public RtcChannels {
public:
    Impl(std::function<void(RtcEvent)> post) : post_(std::move(post)) {}
    ~Impl() override { close(); }

    bool start(const std::vector<IceServer> &servers, bool offer, std::string &error) {
        rtc::Configuration config;
        // offers and answers only where lockstep.js makes them: creating the channels must not start an offer on the
        // answering side (both would offer, and ICE ends in a role conflict)
        config.disableAutoNegotiation = true;
        for (const IceServer &s : servers) {
            rtc::IceServer r("stun.invalid", "3478");
            if (to_rtc(s, r)) config.iceServers.push_back(r);
        }
        try {
            pc_ = std::make_shared<rtc::PeerConnection>(config);
        } catch (const std::exception &e) {
            error = std::string("WebRTC: ") + e.what();
            return false;
        }
        auto post = post_;
        pc_->onLocalDescription([post](rtc::Description d) { post({RtcEvent::description, d.typeString(), std::string(d)}); });
        pc_->onLocalCandidate([post](rtc::Candidate c) { post({RtcEvent::candidate, c.candidate(), c.mid()}); });
        pc_->onStateChange([post](rtc::PeerConnection::State s) {
            RtcEvent e{RtcEvent::state, "", ""};
            e.state_value = static_cast<int>(s);
            post(e);
        });
        // negotiated ids: both sides create the same two channels, no ondatachannel race (lockstep.js startPeer)
        rtc::DataChannelInit in;
        in.negotiated = true;
        in.id = 0;
        in.reliability.unordered = true;
        in.reliability.maxRetransmits = 0;
        rtc::DataChannelInit ctl;
        ctl.negotiated = true;
        ctl.id = 1;
        in_ = pc_->createDataChannel("in", in);
        ctl_ = pc_->createDataChannel("ctl", ctl);
        for (auto [dc, ch] : {std::pair{in_, kIn}, std::pair{ctl_, kCtl}}) {
            const Channel c = ch;
            dc->onOpen([this, post] {
                if (++open_ == 2) post({RtcEvent::open, "", ""});
            });
            dc->onClosed([post] { post({RtcEvent::closed, "", ""}); });
            dc->onMessage([post, c](rtc::message_variant m) {
                RtcEvent e{RtcEvent::message, "", ""};
                e.ch = c;
                if (const auto *b = std::get_if<rtc::binary>(&m)) e.a.assign(reinterpret_cast<const char *>(b->data()), b->size());
                else {
                    e.a = std::get<std::string>(m);
                    e.text = true;
                }
                post(std::move(e));
            });
        }
        if (offer) pc_->setLocalDescription(rtc::Description::Type::Offer);
        return true;
    }

    bool send(Channel ch, const void *data, std::size_t size, bool text) override {
        const auto &dc = ch == kIn ? in_ : ctl_;
        if (!dc || !dc->isOpen()) return false;
        try {
            if (text) return dc->send(std::string(static_cast<const char *>(data), size));
            return dc->send(static_cast<const std::byte *>(data), size);
        } catch (const std::exception &) {
            return false;
        }
    }
    bool open() const override { return in_ && ctl_ && in_->isOpen() && ctl_->isOpen(); }
    std::size_t buffered() const override { return ctl_ ? ctl_->bufferedAmount() : 0; }
    const char *name() const override { return "p2p"; }

    void set_remote_description(const std::string &type, const std::string &sdp) override {
        try {
            pc_->setRemoteDescription(rtc::Description(sdp, type));
            if (type == "offer") pc_->setLocalDescription(rtc::Description::Type::Answer);
        } catch (const std::exception &e) {
            std::fprintf(stderr, "[lockstep] WebRTC: bad remote description: %s\n", e.what());
            RtcEvent ev{RtcEvent::state, "", ""};
            ev.state_value = static_cast<int>(rtc::PeerConnection::State::Failed);
            post_(ev);
        }
    }
    void add_remote_candidate(const std::string &candidate, const std::string &mid) override {
        try {
            pc_->addRemoteCandidate(rtc::Candidate(candidate, mid));
        } catch (const std::exception &e) {
            std::fprintf(stderr, "[lockstep] WebRTC: bad remote candidate: %s\n", e.what());
        }
    }
    void close() override {
        for (auto *dc : {&in_, &ctl_})
            if (*dc) {
                (*dc)->resetCallbacks();
                (*dc)->close();
                dc->reset();
            }
        if (pc_) {
            pc_->resetCallbacks();
            pc_->close();
            pc_.reset();
        }
    }

private:
    std::function<void(RtcEvent)> post_;
    std::shared_ptr<rtc::PeerConnection> pc_;
    std::shared_ptr<rtc::DataChannel> in_, ctl_;
    std::atomic<int> open_{0};
};

}

bool RtcChannels::available() { return true; }

std::unique_ptr<RtcChannels> RtcChannels::create(const std::vector<IceServer> &servers, bool offer, std::function<void(RtcEvent)> post,
                                                 std::string &error) {
    static std::once_flag log_once;
    std::call_once(log_once, [] {
        rtc::InitLogger(std::getenv("PS2_LOCKSTEP_RTC_LOG") ? rtc::LogLevel::Debug : rtc::LogLevel::Warning, [](rtc::LogLevel, std::string m) {
            std::fprintf(stderr, "[rtc] %s\n", m.c_str());
        });
    });
    auto impl = std::make_unique<Impl>(std::move(post));
    if (!impl->start(servers, offer, error)) return nullptr;
    return impl;
}

}

#else

namespace lockstep {
bool RtcChannels::available() { return false; }
std::unique_ptr<RtcChannels> RtcChannels::create(const std::vector<IceServer> &, bool, std::function<void(RtcEvent)>, std::string &error) {
    error = "this build has no WebRTC (libdatachannel was not found at configure time)";
    return nullptr;
}
}

#endif
