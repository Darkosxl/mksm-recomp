#include "lockstep_net.hpp"

#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <poll.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cerrno>
#include <chrono>
#include <cstring>
#include <random>

namespace lockstep {

namespace {

std::string base64(const std::uint8_t *data, std::size_t size) {
    static const char kChars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string out;
    for (std::size_t i = 0; i < size; i += 3) {
        const std::uint32_t v = static_cast<std::uint32_t>(data[i]) << 16 | (i + 1 < size ? data[i + 1] << 8 : 0) | (i + 2 < size ? data[i + 2] : 0);
        out += kChars[v >> 18 & 63];
        out += kChars[v >> 12 & 63];
        out += i + 1 < size ? kChars[v >> 6 & 63] : '=';
        out += i + 2 < size ? kChars[v & 63] : '=';
    }
    return out;
}

bool write_all(int fd, const std::string &data, int timeout_ms) {
    std::size_t done = 0;
    while (done < data.size()) {
        const ssize_t n = ::send(fd, data.data() + done, data.size() - done, MSG_NOSIGNAL);
        if (n > 0) {
            done += static_cast<std::size_t>(n);
            continue;
        }
        if (n < 0 && errno != EAGAIN && errno != EWOULDBLOCK && errno != EINTR) return false;
        pollfd p{fd, POLLOUT, 0};
        if (::poll(&p, 1, timeout_ms) <= 0) return false;
    }
    return true;
}

}

WsClient::~WsClient() {
    if (fd_ >= 0) ::close(fd_);
}

bool WsClient::connect(const std::string &url, const std::string &extra_headers, std::string &error) {
    std::string rest;
    if (url.rfind("ws://", 0) == 0) rest = url.substr(5);
    else if (url.rfind("http://", 0) == 0) rest = url.substr(7);
    else {
        error = "only ws:// or http:// signalling URLs are supported (no TLS in the native client yet): " + url;
        return false;
    }
    const std::size_t slash = rest.find('/');
    std::string hostport = rest.substr(0, slash), base = slash == std::string::npos ? "" : rest.substr(slash);
    while (!base.empty() && base.back() == '/') base.pop_back();
    std::string host = hostport, port = "80";
    if (const std::size_t colon = hostport.rfind(':'); colon != std::string::npos && hostport.find(']') == std::string::npos) {
        host = hostport.substr(0, colon);
        port = hostport.substr(colon + 1);
    }
    addrinfo hints{}, *res = nullptr;
    hints.ai_socktype = SOCK_STREAM;
    if (const int rc = ::getaddrinfo(host.c_str(), port.c_str(), &hints, &res); rc != 0) {
        error = "cannot resolve " + host + ": " + gai_strerror(rc);
        return false;
    }
    for (addrinfo *a = res; a && fd_ < 0; a = a->ai_next) {
        fd_ = ::socket(a->ai_family, a->ai_socktype | SOCK_CLOEXEC, a->ai_protocol);
        if (fd_ < 0) continue;
        if (::connect(fd_, a->ai_addr, a->ai_addrlen) != 0) {
            ::close(fd_);
            fd_ = -1;
        }
    }
    ::freeaddrinfo(res);
    if (fd_ < 0) {
        error = "cannot connect to " + hostport + ": " + std::strerror(errno);
        return false;
    }
    const int one = 1;
    ::setsockopt(fd_, IPPROTO_TCP, TCP_NODELAY, &one, sizeof one);  // input packets are tiny and latency-bound
    ::fcntl(fd_, F_SETFL, ::fcntl(fd_, F_GETFL) | O_NONBLOCK);

    std::uint8_t key[16];
    std::random_device rd;
    for (auto &b : key) b = static_cast<std::uint8_t>(rd());
    mask_state_ ^= (static_cast<std::uint64_t>(rd()) << 32) | rd();
    std::string request = "GET " + base + "/ws HTTP/1.1\r\nHost: " + hostport +
                          "\r\nUpgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Version: 13\r\nSec-WebSocket-Key: " +
                          base64(key, sizeof key) + "\r\n";
    if (!extra_headers.empty()) request += extra_headers + "\r\n";
    request += "\r\n";
    if (!write_all(fd_, request, 5000)) {
        error = "cannot send the WebSocket upgrade request";
        return false;
    }
    // response headers (the server sends nothing else until we speak, except possibly a first frame)
    const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(5);
    std::size_t end = std::string::npos;
    while ((end = in_.find("\r\n\r\n")) == std::string::npos) {
        const int left = static_cast<int>(std::chrono::duration_cast<std::chrono::milliseconds>(deadline - std::chrono::steady_clock::now()).count());
        pollfd p{fd_, POLLIN, 0};
        if (left <= 0 || ::poll(&p, 1, left) <= 0) {
            error = "no answer to the WebSocket upgrade";
            return false;
        }
        char buf[4096];
        const ssize_t n = ::recv(fd_, buf, sizeof buf, 0);
        if (n <= 0 && !(n < 0 && (errno == EAGAIN || errno == EINTR))) {
            error = "the signalling server closed the connection during the upgrade";
            return false;
        }
        if (n > 0) in_.append(buf, static_cast<std::size_t>(n));
        if (in_.size() > 65536) break;
    }
    const std::string status = in_.substr(0, in_.find("\r\n"));
    if (end == std::string::npos || status.find(" 101") == std::string::npos) {
        error = "WebSocket upgrade refused: " + status + (status.find("401") != std::string::npos ? " (no valid invite cookie: set PS2_LOCKSTEP_COOKIE)" : "");
        return false;
    }
    in_.erase(0, end + 4);
    parse();
    return true;
}

bool WsClient::send_frame(int opcode, const void *data, std::size_t size) {
    if (!is_open()) return false;
    std::string f;
    f += static_cast<char>(0x80 | opcode);
    if (size < 126) f += static_cast<char>(0x80 | size);
    else if (size < 65536) {
        f += static_cast<char>(0x80 | 126);
        f += static_cast<char>(size >> 8);
        f += static_cast<char>(size);
    } else {
        f += static_cast<char>(0x80 | 127);
        for (int i = 7; i >= 0; --i) f += static_cast<char>(static_cast<std::uint64_t>(size) >> (i * 8));
    }
    // client frames are masked (RFC 6455 5.3); the key only has to be unpredictable to intermediaries
    mask_state_ ^= mask_state_ << 13;
    mask_state_ ^= mask_state_ >> 7;
    mask_state_ ^= mask_state_ << 17;
    const std::uint32_t key = static_cast<std::uint32_t>(mask_state_);
    std::uint8_t k[4] = {static_cast<std::uint8_t>(key >> 24), static_cast<std::uint8_t>(key >> 16), static_cast<std::uint8_t>(key >> 8), static_cast<std::uint8_t>(key)};
    f.append(reinterpret_cast<const char *>(k), 4);
    const std::size_t at = f.size();
    f.append(static_cast<const char *>(data), size);
    for (std::size_t i = 0; i < size; ++i) f[at + i] = static_cast<char>(f[at + i] ^ k[i & 3]);
    out_ += f;
    return flush();
}

bool WsClient::flush() {
    while (!out_.empty()) {
        const ssize_t n = ::send(fd_, out_.data(), out_.size(), MSG_NOSIGNAL);
        if (n > 0) {
            out_.erase(0, static_cast<std::size_t>(n));
            continue;
        }
        if (n < 0 && (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR)) return true;
        closed_ = true;
        return false;
    }
    return true;
}

bool WsClient::pump() {
    if (!is_open()) return false;
    char buf[65536];
    for (;;) {
        const ssize_t n = ::recv(fd_, buf, sizeof buf, 0);
        if (n > 0) {
            in_.append(buf, static_cast<std::size_t>(n));
            continue;
        }
        if (n < 0 && (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR)) break;
        closed_ = true;  // orderly shutdown (0) or an error
        break;
    }
    parse();
    if (!closed_) flush();
    return !closed_;
}

void WsClient::parse() {
    for (;;) {
        if (in_.size() < 2) return;
        const auto *b = reinterpret_cast<const std::uint8_t *>(in_.data());
        const bool fin = b[0] & 0x80, masked = b[1] & 0x80;
        const int op = b[0] & 0x0F;
        std::uint64_t len = b[1] & 0x7F;
        std::size_t head = 2;
        if (len == 126) {
            if (in_.size() < 4) return;
            len = static_cast<std::uint64_t>(b[2]) << 8 | b[3];
            head = 4;
        } else if (len == 127) {
            if (in_.size() < 10) return;
            len = 0;
            for (int i = 0; i < 8; ++i) len = len << 8 | b[2 + i];
            head = 10;
        }
        const std::size_t key_at = head;
        if (masked) head += 4;
        if (len > (64u << 20)) {
            closed_ = true;
            return;
        }
        if (in_.size() < head + len) return;
        std::string payload = in_.substr(head, static_cast<std::size_t>(len));
        if (masked)
            for (std::size_t i = 0; i < payload.size(); ++i) payload[i] = static_cast<char>(payload[i] ^ in_[key_at + (i & 3)]);
        in_.erase(0, head + static_cast<std::size_t>(len));
        if (op == 8) {
            closed_ = true;
            return;
        }
        if (op == 9) {
            send_frame(10, payload.data(), payload.size());
            continue;
        }
        if (op == 10) continue;
        if (op == 1 || op == 2) {
            message_op_ = op;
            message_ = std::move(payload);
        } else if (op == 0) {
            message_ += payload;
        } else {
            continue;
        }
        if (!fin) continue;
        const std::string m = std::move(message_);
        message_.clear();
        if (message_op_ == 1 && on_text) on_text(m);
        if (message_op_ == 2 && on_binary) on_binary(m);
    }
}

void WsClient::close(int wait_ms) {
    if (fd_ < 0) return;
    if (!closed_) {
        const std::uint8_t code[2] = {0x03, 0xE8};  // 1000 normal closure
        send_frame(8, code, 2);
        const auto deadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(wait_ms);
        while (!out_.empty() && !closed_ && std::chrono::steady_clock::now() < deadline) {
            pollfd p{fd_, POLLOUT, 0};
            ::poll(&p, 1, 20);
            flush();
        }
        ::shutdown(fd_, SHUT_WR);
    }
    ::close(fd_);
    fd_ = -1;
    closed_ = true;
}

bool RelayChannels::send(Channel ch, const void *data, std::size_t size, bool text) {
    std::string frame;
    frame.reserve(size + 2);
    frame += static_cast<char>(ch);
    frame += static_cast<char>(text ? 1 : 0);
    frame.append(static_cast<const char *>(data), size);
    return ws_.send_binary(frame.data(), frame.size());
}

bool RelayChannels::decode(std::string_view frame, Channel &ch, std::string_view &payload, bool &text) {
    if (frame.size() < 2) return false;
    ch = frame[0] == 0 ? kIn : kCtl;
    text = frame[1] != 0;
    payload = frame.substr(2);
    return true;
}

}
