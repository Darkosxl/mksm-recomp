#pragma once

// Transport for native lockstep (web/lockstep.md): the two data channels lockstep.js uses, `in` (input packets) and
// `ctl` (JSON control messages and binary blob chunks), behind one interface.
//
// The browser opens them as WebRTC data channels (host/lockstep_rtc.cpp here, with libdatachannel) and falls back to
// carrying both over its signalling WebSocket (server/signal.mjs relays binary frames verbatim; frame = u8 channel,
// u8 kind (0 binary, 1 UTF-8 text), payload). RelayChannels speaks that fallback over a TCP (or TLS) socket.

#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>
#include <string_view>

struct ssl_st;
struct ssl_ctx_st;

namespace lockstep {

enum Channel : std::uint8_t { kIn = 0, kCtl = 1 };

struct Channels {
    virtual ~Channels() = default;
    virtual bool send(Channel ch, const void *data, std::size_t size, bool text) = 0;
    bool send_text(Channel ch, std::string_view text) { return send(ch, text.data(), text.size(), true); }
    virtual bool open() const = 0;
    // bytes queued locally on the ctl path and not yet handed to the network
    virtual std::size_t buffered() const = 0;
    virtual const char *name() const = 0;
};

// scheme://host[:port][/path?query]; ws/http default to port 80, wss/https to 443
struct Url {
    std::string scheme, host, port, path;
    bool tls() const { return scheme == "wss" || scheme == "https"; }
    std::string origin() const;  // http(s)://host[:port]
    static bool parse(const std::string &text, Url &out, std::string &error);
};

// A TCP connection, with TLS for wss/https when built with OpenSSL (PS2_LOCKSTEP_TLS). The certificate is checked
// against the system CAs (plus PS2_LOCKSTEP_CA=<pem file>, e.g. a self-signed test certificate) and the host name.
class Conn {
public:
    ~Conn() { close(); }
    bool open(const Url &url, std::string &error);  // blocking connect and TLS handshake, then non-blocking
    // > 0 bytes, 0 = closed, -1 = would block, -2 = error
    long recv(char *buf, std::size_t size);
    long send(const char *data, std::size_t size);
    int fd() const { return fd_; }
    void close();

private:
    int fd_ = -1;
    [[maybe_unused]] ssl_ctx_st *ctx_ = nullptr;
    [[maybe_unused]] ssl_st *ssl_ = nullptr;
};

// GET with an optional cookie, Connection: close; true when an HTTP response arrived
bool http_get(const Url &url, const std::string &cookie, int &status, std::string &headers, std::string &body, std::string &error);
// value of the first header `name` (case-insensitive) in a raw header block, or ""
std::string header_value(const std::string &headers, const std::string &name);

// Minimal RFC 6455 client. Non-blocking after the handshake: send() queues, pump() moves bytes both ways, frames
// arrive through on_text / on_binary. Pings are answered; fragmented messages are reassembled.
class WsClient {
public:
    // url: ws[s]://host[:port][/base] -- connects to <base>/ws. extra_headers: full lines, e.g. "Cookie: a=b".
    bool connect(const std::string &url, const std::string &extra_headers, std::string &error);
    bool send_text(std::string_view text) { return send_frame(1, text.data(), text.size()); }
    bool send_binary(const void *data, std::size_t size) { return send_frame(2, data, size); }
    // reads what is available and writes what is queued; false once the connection is gone
    bool pump();
    int fd() const { return conn_.fd(); }
    bool wants_write() const { return !out_.empty(); }
    bool is_open() const { return conn_.fd() >= 0 && !closed_; }
    std::size_t buffered() const { return out_.size(); }
    // sends a close frame and flushes it (bounded wait), then closes the socket
    void close(int wait_ms = 500);

    std::function<void(std::string_view)> on_text;
    std::function<void(std::string_view)> on_binary;

private:
    bool send_frame(int opcode, const void *data, std::size_t size);
    bool flush();
    void parse();

    Conn conn_;
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
    static bool decode(std::string_view frame, Channel &ch, std::string_view &payload, bool &text);

private:
    WsClient &ws_;
};

}
