#pragma once

// Transport for native lockstep (web/lockstep.md): the two data channels lockstep.js uses, `in` (input packets) and
// `ctl` (JSON control messages and binary blob chunks), behind one interface.
//
// The browser opens them as WebRTC data channels and falls back to carrying both over its signalling WebSocket
// (server/signal.mjs relays binary frames verbatim; frame = u8 channel, u8 kind (0 binary, 1 UTF-8 text), payload).
// RelayChannels speaks that fallback, so it needs nothing but a TCP socket and talks to a browser peer as well as to
// another native peer. A WebRTC implementation (libdatachannel) would sit behind the same interface.

#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>
#include <string_view>

namespace lockstep {

enum Channel : std::uint8_t { kIn = 0, kCtl = 1 };

struct Channels {
    virtual ~Channels() = default;
    virtual bool send(Channel ch, const void *data, std::size_t size, bool text) = 0;
    bool send_text(Channel ch, std::string_view text) { return send(ch, text.data(), text.size(), true); }
    virtual bool open() const = 0;
    // bytes queued locally and not yet handed to the network
    virtual std::size_t buffered() const = 0;
    virtual const char *name() const = 0;
};

// Minimal RFC 6455 client over plain TCP (ws:// only; wss:// needs TLS, see mksm/notes/remaster.md step 9).
// Non-blocking after the handshake: send() queues, pump() moves bytes both ways, frames arrive through on_text /
// on_binary. Pings are answered; fragmented messages are reassembled.
class WsClient {
public:
    ~WsClient();
    // url: ws://host[:port][/base] -- connects to <base>/ws. extra_headers: full lines, e.g. "Cookie: a=b".
    bool connect(const std::string &url, const std::string &extra_headers, std::string &error);
    bool send_text(std::string_view text) { return send_frame(1, text.data(), text.size()); }
    bool send_binary(const void *data, std::size_t size) { return send_frame(2, data, size); }
    // reads what is available and writes what is queued; false once the connection is gone
    bool pump();
    int fd() const { return fd_; }
    bool wants_write() const { return !out_.empty(); }
    bool is_open() const { return fd_ >= 0 && !closed_; }
    std::size_t buffered() const { return out_.size(); }
    // sends a close frame and flushes it (bounded wait), then closes the socket
    void close(int wait_ms = 500);

    std::function<void(std::string_view)> on_text;
    std::function<void(std::string_view)> on_binary;

private:
    bool send_frame(int opcode, const void *data, std::size_t size);
    bool flush();
    void parse();

    int fd_ = -1;
    bool closed_ = false;
    std::string in_, out_, message_;
    int message_op_ = 0;
    std::uint64_t mask_state_ = 0x9E3779B97F4A7C15ull;
};

// The two channels as binary frames on the signalling socket (lockstep.js RelayChannel).
class RelayChannels final : public Channels {
public:
    explicit RelayChannels(WsClient &ws) : ws_(ws) {}
    bool send(Channel ch, const void *data, std::size_t size, bool text) override;
    bool open() const override { return ws_.is_open(); }
    std::size_t buffered() const override { return ws_.buffered(); }
    const char *name() const override { return "relay"; }
    // a binary frame from the socket: calls back with the channel, payload and kind
    static bool decode(std::string_view frame, Channel &ch, std::string_view &payload, bool &text);

private:
    WsClient &ws_;
};

}
