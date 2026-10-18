#pragma once

// Direct peer-to-peer channels for native lockstep: WebRTC data channels through libdatachannel, created exactly as
// web/lockstep.js creates them (negotiated ids, `in` id 0 unordered with no retransmits, `ctl` id 1 reliable and
// ordered), so the peer can be another native client or a browser. Built only with libdatachannel
// (PS2_LOCKSTEP_RTC); without it the session uses the relay.

#include "lockstep_net.hpp"

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace lockstep {

// Callbacks arrive on libdatachannel's threads: the session queues them for its own thread.
struct RtcEvent {
    enum Kind { description, candidate, state, open, closed, message } kind;
    std::string a, b;  // description: type, sdp; candidate: candidate, mid; message: payload
    int state_value = 0;  // state: 0 new, 1 connecting, 2 connected, 3 disconnected, 4 failed, 5 closed
    Channel ch = kCtl;
    bool text = false;
};

struct IceServer {
    std::string url;  // stun:host:port or turn:host:port?transport=udp|tcp
    std::string username, credential;
};

class RtcChannels : public Channels {
public:
    static bool available();
    // creates the peer connection and both channels; with `offer` it starts negotiating (the newcomer does)
    static std::unique_ptr<RtcChannels> create(const std::vector<IceServer> &servers, bool offer, std::function<void(RtcEvent)> post,
                                               std::string &error);
    virtual void set_remote_description(const std::string &type, const std::string &sdp) = 0;
    virtual void add_remote_candidate(const std::string &candidate, const std::string &mid) = 0;
    virtual void close() = 0;
};

}
