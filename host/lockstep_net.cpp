#include "lockstep_net.hpp"

#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <poll.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

#ifdef PS2_LOCKSTEP_TLS
#include <openssl/err.h>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#endif

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <chrono>
#include <cstdlib>
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

using Clock = std::chrono::steady_clock;
int ms_left(Clock::time_point deadline) {
    return static_cast<int>(std::max<long long>(0, std::chrono::duration_cast<std::chrono::milliseconds>(deadline - Clock::now()).count()));
}

// write everything (blocking on a non-blocking socket), for requests before the connection is pumped
bool write_all(Conn &c, const std::string &data, int timeout_ms) {
    const auto deadline = Clock::now() + std::chrono::milliseconds(timeout_ms);
    std::size_t done = 0;
    while (done < data.size()) {
        const long n = c.send(data.data() + done, data.size() - done);
        if (n > 0) {
            done += static_cast<std::size_t>(n);
            continue;
        }
        if (n != -1) return false;
        pollfd p{c.fd(), POLLOUT | POLLIN, 0};
        if (ms_left(deadline) <= 0 || ::poll(&p, 1, ms_left(deadline)) < 0) return false;
    }
    return true;
}

// reads into `in` until `done(in)` or the connection closes; false on timeout or error
bool read_until(Conn &c, std::string &in, const std::function<bool(const std::string &)> &done, int timeout_ms, bool &closed) {
    const auto deadline = Clock::now() + std::chrono::milliseconds(timeout_ms);
    closed = false;
    char buf[16384];
    while (!done(in)) {
        const long n = c.recv(buf, sizeof buf);
        if (n > 0) {
            in.append(buf, static_cast<std::size_t>(n));
            continue;
        }
        if (n == 0) {
            closed = true;
            return true;
        }
        if (n == -2) return false;
        pollfd p{c.fd(), POLLIN, 0};
        if (ms_left(deadline) <= 0 || ::poll(&p, 1, std::min(ms_left(deadline), 100)) < 0) return false;
    }
    return true;
}

}

std::string Url::origin() const {
    const bool tls_scheme = tls();
    const bool default_port = port == (tls_scheme ? "443" : "80");
    return std::string(tls_scheme ? "https" : "http") + "://" + host + (default_port ? "" : ":" + port);
}

bool Url::parse(const std::string &text, Url &out, std::string &error) {
    const std::size_t colon = text.find("://");
    if (colon == std::string::npos) {
        error = "not a URL: " + text;
        return false;
    }
    out.scheme = text.substr(0, colon);
    std::transform(out.scheme.begin(), out.scheme.end(), out.scheme.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    if (out.scheme != "ws" && out.scheme != "wss" && out.scheme != "http" && out.scheme != "https") {
        error = "unsupported URL scheme: " + text;
        return false;
    }
    const std::string rest = text.substr(colon + 3);
    const std::size_t slash = rest.find_first_of("/?");
    const std::string hostport = rest.substr(0, slash);
    out.path = slash == std::string::npos ? "/" : rest.substr(slash);
    if (out.path[0] == '?') out.path = "/" + out.path;
    out.host = hostport;
    out.port = out.tls() ? "443" : "80";
    if (!hostport.empty() && hostport[0] == '[') {  // [v6]:port
        const std::size_t close = hostport.find(']');
        out.host = hostport.substr(1, close - 1);
        if (close + 1 < hostport.size() && hostport[close + 1] == ':') out.port = hostport.substr(close + 2);
    } else if (const std::size_t c = hostport.rfind(':'); c != std::string::npos) {
        out.host = hostport.substr(0, c);
        out.port = hostport.substr(c + 1);
    }
    if (out.host.empty()) {
        error = "no host in " + text;
        return false;
    }
    return true;
}

bool Conn::open(const Url &url, std::string &error) {
    close();
#ifndef PS2_LOCKSTEP_TLS
    if (url.tls()) {
        error = "this build has no TLS (OpenSSL was not found at configure time): use ws:// or http://";
        return false;
    }
#endif
    addrinfo hints{}, *res = nullptr;
    hints.ai_socktype = SOCK_STREAM;
    if (const int rc = ::getaddrinfo(url.host.c_str(), url.port.c_str(), &hints, &res); rc != 0) {
        error = "cannot resolve " + url.host + ": " + gai_strerror(rc);
        return false;
    }
    for (addrinfo *a = res; a && fd_ < 0; a = a->ai_next) {
        fd_ = ::socket(a->ai_family, a->ai_socktype | SOCK_CLOEXEC, a->ai_protocol);
        if (fd_ < 0) continue;
        timeval tv{5, 0};
        ::setsockopt(fd_, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof tv);
        ::setsockopt(fd_, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof tv);
        if (::connect(fd_, a->ai_addr, a->ai_addrlen) != 0) {
            ::close(fd_);
            fd_ = -1;
        }
    }
    ::freeaddrinfo(res);
    if (fd_ < 0) {
        error = "cannot connect to " + url.host + ":" + url.port + ": " + std::strerror(errno);
        return false;
    }
    const int one = 1;
    ::setsockopt(fd_, IPPROTO_TCP, TCP_NODELAY, &one, sizeof one);  // input packets are tiny and latency-bound
#ifdef PS2_LOCKSTEP_TLS
    if (url.tls()) {
        ctx_ = SSL_CTX_new(TLS_client_method());
        SSL_CTX_set_min_proto_version(ctx_, TLS1_2_VERSION);
        SSL_CTX_set_verify(ctx_, SSL_VERIFY_PEER, nullptr);
        SSL_CTX_set_default_verify_paths(ctx_);
        if (const char *ca = std::getenv("PS2_LOCKSTEP_CA"); ca && *ca && SSL_CTX_load_verify_locations(ctx_, ca, nullptr) != 1) {
            error = std::string("cannot read the CA file PS2_LOCKSTEP_CA=") + ca;
            return false;
        }
        SSL_CTX_set_mode(ctx_, SSL_MODE_ENABLE_PARTIAL_WRITE | SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER);
        ssl_ = SSL_new(ctx_);
        in6_addr ip6{};
        in_addr ip4{};
        const bool is_ip = ::inet_pton(AF_INET, url.host.c_str(), &ip4) == 1 || ::inet_pton(AF_INET6, url.host.c_str(), &ip6) == 1;
        if (is_ip) X509_VERIFY_PARAM_set1_ip_asc(SSL_get0_param(ssl_), url.host.c_str());
        else {
            SSL_set_tlsext_host_name(ssl_, url.host.c_str());
            SSL_set1_host(ssl_, url.host.c_str());
        }
        SSL_set_fd(ssl_, fd_);
        if (SSL_connect(ssl_) != 1) {
            const long verify = SSL_get_verify_result(ssl_);
            char buf[256] = {};
            ERR_error_string_n(ERR_get_error(), buf, sizeof buf);
            error = "TLS handshake with " + url.host + " failed: " +
                    (verify != X509_V_OK ? std::string("certificate: ") + X509_verify_cert_error_string(verify) : std::string(buf));
            return false;
        }
    }
#endif
    ::fcntl(fd_, F_SETFL, ::fcntl(fd_, F_GETFL) | O_NONBLOCK);
    return true;
}

long Conn::recv(char *buf, std::size_t size) {
    if (fd_ < 0) return -2;
#ifdef PS2_LOCKSTEP_TLS
    if (ssl_) {
        const int n = SSL_read(ssl_, buf, static_cast<int>(size));
        if (n > 0) return n;
        const int e = SSL_get_error(ssl_, n);
        if (e == SSL_ERROR_WANT_READ || e == SSL_ERROR_WANT_WRITE) return -1;
        return e == SSL_ERROR_ZERO_RETURN ? 0 : -2;
    }
#endif
    const ssize_t n = ::recv(fd_, buf, size, 0);
    if (n >= 0) return n;
    return errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR ? -1 : -2;
}

long Conn::send(const char *data, std::size_t size) {
    if (fd_ < 0) return -2;
#ifdef PS2_LOCKSTEP_TLS
    if (ssl_) {
        const int n = SSL_write(ssl_, data, static_cast<int>(std::min<std::size_t>(size, 1 << 20)));
        if (n > 0) return n;
        const int e = SSL_get_error(ssl_, n);
        return e == SSL_ERROR_WANT_READ || e == SSL_ERROR_WANT_WRITE ? -1 : -2;
    }
#endif
    const ssize_t n = ::send(fd_, data, size, MSG_NOSIGNAL);
    if (n >= 0) return n;
    return errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR ? -1 : -2;
}

void Conn::close() {
#ifdef PS2_LOCKSTEP_TLS
    if (ssl_) {
        SSL_shutdown(ssl_);
        SSL_free(ssl_);
        ssl_ = nullptr;
    }
    if (ctx_) {
        SSL_CTX_free(ctx_);
        ctx_ = nullptr;
    }
#endif
    if (fd_ >= 0) ::close(fd_);
    fd_ = -1;
}

std::string header_value(const std::string &headers, const std::string &name) {
    std::size_t at = 0;
    while (at < headers.size()) {
        const std::size_t end = std::min(headers.find("\r\n", at), headers.size());
        const std::string line = headers.substr(at, end - at);
        at = end + 2;
        const std::size_t colon = line.find(':');
        if (colon == std::string::npos || colon != name.size()) continue;
        if (!std::equal(name.begin(), name.end(), line.begin(), [](char a, char b) { return std::tolower(static_cast<unsigned char>(a)) == std::tolower(static_cast<unsigned char>(b)); }))
            continue;
        std::size_t v = colon + 1;
        while (v < line.size() && line[v] == ' ') ++v;
        return line.substr(v);
    }
    return "";
}

bool http_get(const Url &url, const std::string &cookie, int &status, std::string &headers, std::string &body, std::string &error) {
    Conn c;
    if (!c.open(url, error)) return false;
    const bool default_port = url.port == (url.tls() ? "443" : "80");
    std::string request = "GET " + url.path + " HTTP/1.1\r\nHost: " + url.host + (default_port ? "" : ":" + url.port) +
                          "\r\nConnection: close\r\nUser-Agent: ps2run-lockstep\r\n";
    if (!cookie.empty()) request += "Cookie: " + cookie + "\r\n";
    request += "\r\n";
    if (!write_all(c, request, 5000)) {
        error = "cannot send the request to " + url.host;
        return false;
    }
    std::string in;
    bool closed = false;
    std::size_t head_end = std::string::npos;
    if (!read_until(c, in, [&](const std::string &s) { return (head_end = s.find("\r\n\r\n")) != std::string::npos; }, 5000, closed) ||
        head_end == std::string::npos) {
        error = "no HTTP answer from " + url.host;
        return false;
    }
    headers = in.substr(0, head_end + 2);
    status = std::atoi(headers.c_str() + std::min<std::size_t>(9, headers.size()));
    const std::string length = header_value(headers, "Content-Length");
    if (header_value(headers, "Transfer-Encoding").find("chunked") != std::string::npos) {
        // Node answers chunked: <hex size>\r\n<data>\r\n ... 0\r\n\r\n
        if (!closed) read_until(c, in, [&](const std::string &s) { return s.find("\r\n0\r\n\r\n", head_end) != std::string::npos; }, 5000, closed);
        std::size_t at = head_end + 4;
        body.clear();
        while (at < in.size()) {
            const std::size_t eol = in.find("\r\n", at);
            if (eol == std::string::npos) break;
            const std::size_t n = std::strtoull(in.c_str() + at, nullptr, 16);
            if (!n || eol + 2 + n > in.size()) break;
            body.append(in, eol + 2, n);
            at = eol + 2 + n + 2;
        }
    } else if (!length.empty()) {
        const std::size_t want = head_end + 4 + std::strtoull(length.c_str(), nullptr, 10);
        if (!closed) read_until(c, in, [&](const std::string &s) { return s.size() >= want; }, 5000, closed);
        body = in.substr(head_end + 4, want - head_end - 4);
    } else {
        if (!closed) read_until(c, in, [](const std::string &) { return false; }, 5000, closed);
        body = in.substr(head_end + 4);
    }
    return true;
}

bool WsClient::connect(const std::string &url_text, const std::string &extra_headers, std::string &error) {
    Url url;
    if (!Url::parse(url_text, url, error)) return false;
    std::string base = url.path.substr(0, url.path.find('?'));
    while (!base.empty() && base.back() == '/') base.pop_back();
    if (!conn_.open(url, error)) return false;

    std::uint8_t key[16];
    std::random_device rd;
    for (auto &b : key) b = static_cast<std::uint8_t>(rd());
    mask_state_ ^= (static_cast<std::uint64_t>(rd()) << 32) | rd();
    const bool default_port = url.port == (url.tls() ? "443" : "80");
    std::string request = "GET " + base + "/ws HTTP/1.1\r\nHost: " + url.host + (default_port ? "" : ":" + url.port) +
                          "\r\nUpgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Version: 13\r\nSec-WebSocket-Key: " +
                          base64(key, sizeof key) + "\r\n";
    if (!extra_headers.empty()) request += extra_headers + "\r\n";
    request += "\r\n";
    if (!write_all(conn_, request, 5000)) {
        error = "cannot send the WebSocket upgrade request";
        return false;
    }
    bool closed = false;
    std::size_t end = std::string::npos;
    if (!read_until(conn_, in_, [&](const std::string &s) { return (end = s.find("\r\n\r\n")) != std::string::npos || s.size() > 65536; }, 5000, closed) ||
        end == std::string::npos) {
        error = closed ? "the signalling server closed the connection during the upgrade" : "no answer to the WebSocket upgrade";
        return false;
    }
    const std::string status = in_.substr(0, in_.find("\r\n"));
    if (status.find(" 101") == std::string::npos) {
        error = "WebSocket upgrade refused: " + status + (status.find("401") != std::string::npos ? " (no valid invite cookie: use --invite <link> or PS2_LOCKSTEP_COOKIE)" : "");
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
    const std::uint8_t k[4] = {static_cast<std::uint8_t>(key >> 24), static_cast<std::uint8_t>(key >> 16), static_cast<std::uint8_t>(key >> 8),
                               static_cast<std::uint8_t>(key)};
    f.append(reinterpret_cast<const char *>(k), 4);
    const std::size_t at = f.size();
    f.append(static_cast<const char *>(data), size);
    for (std::size_t i = 0; i < size; ++i) f[at + i] = static_cast<char>(f[at + i] ^ k[i & 3]);
    out_ += f;
    return flush();
}

bool WsClient::flush() {
    while (!out_.empty()) {
        const long n = conn_.send(out_.data(), out_.size());
        if (n > 0) {
            out_.erase(0, static_cast<std::size_t>(n));
            continue;
        }
        if (n == -1) return true;
        closed_ = true;
        return false;
    }
    return true;
}

bool WsClient::pump() {
    if (!is_open()) return false;
    char buf[65536];
    for (;;) {
        const long n = conn_.recv(buf, sizeof buf);
        if (n > 0) {
            in_.append(buf, static_cast<std::size_t>(n));
            continue;
        }
        if (n != -1) closed_ = true;  // orderly shutdown (0) or an error
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
    if (conn_.fd() < 0) return;
    if (!closed_) {
        const std::uint8_t code[2] = {0x03, 0xE8};  // 1000 normal closure
        send_frame(8, code, 2);
        const auto deadline = Clock::now() + std::chrono::milliseconds(wait_ms);
        while (!out_.empty() && !closed_ && Clock::now() < deadline) {
            pollfd p{conn_.fd(), POLLOUT, 0};
            ::poll(&p, 1, 20);
            flush();
        }
    }
    conn_.close();
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
