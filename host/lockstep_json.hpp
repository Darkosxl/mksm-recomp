#pragma once

// Just enough JSON for the lockstep control messages (web/lockstep.md): parse, build, and print the way JavaScript's
// JSON.stringify does (object keys keep their order, integers print without a fraction), so a config printed here
// compares equal to the same config printed by a browser peer.

#include <charconv>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace lockstep {

class Json {
public:
    enum class Type { null, boolean, number, string, array, object };

    Json() = default;
    Json(std::nullptr_t) {}
    Json(bool b) : type_(Type::boolean), b_(b) {}
    Json(int n) : type_(Type::number), n_(n) {}
    Json(std::int64_t n) : type_(Type::number), n_(static_cast<double>(n)) {}
    Json(double n) : type_(Type::number), n_(n) {}
    Json(const char *s) : type_(Type::string), s_(s) {}
    Json(std::string s) : type_(Type::string), s_(std::move(s)) {}
    static Json array() { Json j; j.type_ = Type::array; return j; }
    static Json object() { Json j; j.type_ = Type::object; return j; }

    Type type() const { return type_; }
    bool is_null() const { return type_ == Type::null; }
    bool is_number() const { return type_ == Type::number; }
    bool is_string() const { return type_ == Type::string; }
    bool is_object() const { return type_ == Type::object; }
    double num(double fallback = 0.0) const { return type_ == Type::number ? n_ : fallback; }
    std::int64_t integer(std::int64_t fallback = 0) const { return type_ == Type::number ? static_cast<std::int64_t>(n_) : fallback; }
    const std::string &str() const { return s_; }
    const std::vector<Json> &items() const { return a_; }
    const std::vector<std::pair<std::string, Json>> &members() const { return o_; }

    // object member (a null value when absent)
    const Json &operator[](std::string_view key) const {
        static const Json none;
        for (const auto &[k, v] : o_)
            if (k == key) return v;
        return none;
    }
    bool has(std::string_view key) const {
        for (const auto &m : o_)
            if (m.first == key) return true;
        return false;
    }
    Json &set(std::string key, Json value) {
        type_ = Type::object;
        for (auto &[k, v] : o_)
            if (k == key) {
                v = std::move(value);
                return *this;
            }
        o_.emplace_back(std::move(key), std::move(value));
        return *this;
    }
    Json &push(Json value) {
        type_ = Type::array;
        a_.push_back(std::move(value));
        return *this;
    }

    std::string dump() const {
        std::string out;
        write(out);
        return out;
    }

    // null on malformed input
    static Json parse(std::string_view text, bool *ok = nullptr) {
        Parser p{text};
        Json j = p.value();
        p.ws();
        const bool good = !p.bad && p.at == text.size();
        if (ok) *ok = good;
        return good ? j : Json();
    }

private:
    void write(std::string &out) const {
        switch (type_) {
        case Type::null: out += "null"; break;
        case Type::boolean: out += b_ ? "true" : "false"; break;
        case Type::number: write_number(out, n_); break;
        case Type::string: write_string(out, s_); break;
        case Type::array:
            out += '[';
            for (std::size_t i = 0; i < a_.size(); ++i) {
                if (i) out += ',';
                a_[i].write(out);
            }
            out += ']';
            break;
        case Type::object:
            out += '{';
            for (std::size_t i = 0; i < o_.size(); ++i) {
                if (i) out += ',';
                write_string(out, o_[i].first);
                out += ':';
                o_[i].second.write(out);
            }
            out += '}';
            break;
        }
    }
    static void write_number(std::string &out, double n) {
        if (!std::isfinite(n)) {
            out += "null";  // as JSON.stringify
            return;
        }
        char buf[40];
        if (n == std::floor(n) && std::fabs(n) < 1e15) {
            std::snprintf(buf, sizeof buf, "%lld", static_cast<long long>(n));
            out += buf;
            return;
        }
        const auto r = std::to_chars(buf, buf + sizeof buf, n);  // shortest form that reads back as the same double
        out.append(buf, r.ptr);
    }
    static void write_string(std::string &out, const std::string &s) {
        out += '"';
        for (const unsigned char c : s) {
            switch (c) {
            case '"': out += "\\\""; break;
            case '\\': out += "\\\\"; break;
            case '\n': out += "\\n"; break;
            case '\r': out += "\\r"; break;
            case '\t': out += "\\t"; break;
            case '\b': out += "\\b"; break;
            case '\f': out += "\\f"; break;
            default:
                if (c < 0x20) {
                    char buf[8];
                    std::snprintf(buf, sizeof buf, "\\u%04x", c);
                    out += buf;
                } else {
                    out += static_cast<char>(c);
                }
            }
        }
        out += '"';
    }

    struct Parser {
        std::string_view t;
        std::size_t at = 0;
        bool bad = false;
        int depth = 0;

        void ws() {
            while (at < t.size() && (t[at] == ' ' || t[at] == '\n' || t[at] == '\r' || t[at] == '\t')) ++at;
        }
        bool eat(char c) {
            ws();
            if (at < t.size() && t[at] == c) {
                ++at;
                return true;
            }
            return false;
        }
        bool word(std::string_view w) {
            if (t.substr(at, w.size()) != w) return false;
            at += w.size();
            return true;
        }
        Json fail() {
            bad = true;
            return Json();
        }
        Json value() {
            ws();
            if (bad || at >= t.size() || ++depth > 64) return fail();
            Json j;
            const char c = t[at];
            if (c == '{') {
                ++at;
                j = object();
                if (!eat('}')) {
                    do {
                        ws();
                        if (at >= t.size() || t[at] != '"') return fail();
                        std::string key = string();
                        if (bad || !eat(':')) return fail();
                        j.set(std::move(key), value());
                        if (bad) return j;
                    } while (eat(','));
                    if (!eat('}')) return fail();
                }
            } else if (c == '[') {
                ++at;
                j = array();
                if (!eat(']')) {
                    do {
                        j.push(value());
                        if (bad) return j;
                    } while (eat(','));
                    if (!eat(']')) return fail();
                }
            } else if (c == '"') {
                j = Json(string());
            } else if (word("true")) {
                j = Json(true);
            } else if (word("false")) {
                j = Json(false);
            } else if (word("null")) {
            } else {
                double n = 0;
                const auto r = std::from_chars(t.data() + at, t.data() + t.size(), n);
                if (r.ec != std::errc()) return fail();
                at = static_cast<std::size_t>(r.ptr - t.data());
                j = Json(n);
            }
            --depth;
            return j;
        }
        static void utf8(std::string &out, std::uint32_t cp) {
            if (cp < 0x80) out += static_cast<char>(cp);
            else if (cp < 0x800) {
                out += static_cast<char>(0xC0 | cp >> 6);
                out += static_cast<char>(0x80 | (cp & 0x3F));
            } else if (cp < 0x10000) {
                out += static_cast<char>(0xE0 | cp >> 12);
                out += static_cast<char>(0x80 | (cp >> 6 & 0x3F));
                out += static_cast<char>(0x80 | (cp & 0x3F));
            } else {
                out += static_cast<char>(0xF0 | cp >> 18);
                out += static_cast<char>(0x80 | (cp >> 12 & 0x3F));
                out += static_cast<char>(0x80 | (cp >> 6 & 0x3F));
                out += static_cast<char>(0x80 | (cp & 0x3F));
            }
        }
        std::uint32_t hex4() {
            if (at + 4 > t.size()) {
                bad = true;
                return 0;
            }
            std::uint32_t v = 0;
            const auto r = std::from_chars(t.data() + at, t.data() + at + 4, v, 16);
            if (r.ptr != t.data() + at + 4) bad = true;
            at += 4;
            return v;
        }
        std::string string() {
            std::string out;
            ++at;  // opening quote
            while (at < t.size() && t[at] != '"') {
                char c = t[at++];
                if (c != '\\') {
                    out += c;
                    continue;
                }
                if (at >= t.size()) break;
                c = t[at++];
                switch (c) {
                case 'n': out += '\n'; break;
                case 'r': out += '\r'; break;
                case 't': out += '\t'; break;
                case 'b': out += '\b'; break;
                case 'f': out += '\f'; break;
                case 'u': {
                    std::uint32_t cp = hex4();
                    if (cp >= 0xD800 && cp < 0xDC00 && word("\\u")) {
                        const std::uint32_t low = hex4();
                        cp = 0x10000 + ((cp - 0xD800) << 10) + (low - 0xDC00);
                    }
                    utf8(out, cp);
                    break;
                }
                default: out += c;
                }
            }
            if (at >= t.size()) bad = true;
            else ++at;  // closing quote
            return out;
        }
    };

    Type type_ = Type::null;
    bool b_ = false;
    double n_ = 0.0;
    std::string s_;
    std::vector<Json> a_;
    std::vector<std::pair<std::string, Json>> o_;
};

}
