#pragma once

// Streaming XXH64 (seed 0): four independent 64-bit lanes, so a 40 MB machine state hashes in a few ms.
// Same result on every little-endian host (native and wasm32), which the lockstep desync check relies on.

#include <cstddef>
#include <cstdint>
#include <cstring>

namespace ps2 {

class Hash64 {
public:
    Hash64() { reset(); }

    void reset() {
        v_[0] = kP1 + kP2;
        v_[1] = kP2;
        v_[2] = 0;
        v_[3] = 0 - kP1;
        total_ = 0;
        buffered_ = 0;
    }

    void update(const void *data, std::size_t size) {
        const auto *p = static_cast<const std::uint8_t *>(data);
        total_ += size;
        if (buffered_) {
            const std::size_t take = size < 32 - buffered_ ? size : 32 - buffered_;
            std::memcpy(buffer_ + buffered_, p, take);
            buffered_ += take;
            p += take;
            size -= take;
            if (buffered_ < 32) return;
            stripe(buffer_);
            buffered_ = 0;
        }
        std::uint64_t a = v_[0], b = v_[1], c = v_[2], d = v_[3];
        for (; size >= 32; p += 32, size -= 32) {
            a = round(a, read64(p));
            b = round(b, read64(p + 8));
            c = round(c, read64(p + 16));
            d = round(d, read64(p + 24));
        }
        v_[0] = a, v_[1] = b, v_[2] = c, v_[3] = d;
        if (size) {
            std::memcpy(buffer_, p, size);
            buffered_ = size;
        }
    }

    std::uint64_t digest() const {
        std::uint64_t h;
        if (total_ >= 32) {
            h = rotl(v_[0], 1) + rotl(v_[1], 7) + rotl(v_[2], 12) + rotl(v_[3], 18);
            for (std::uint64_t v : v_) h = (h ^ round(0, v)) * kP1 + kP4;
        } else {
            h = v_[2] + kP5;
        }
        h += total_;
        const std::uint8_t *p = buffer_;
        std::size_t n = buffered_;
        for (; n >= 8; p += 8, n -= 8) h = rotl(h ^ round(0, read64(p)), 27) * kP1 + kP4;
        if (n >= 4) {
            std::uint32_t w;
            std::memcpy(&w, p, 4);
            h = rotl(h ^ (static_cast<std::uint64_t>(w) * kP1), 23) * kP2 + kP3;
            p += 4;
            n -= 4;
        }
        for (; n; ++p, --n) h = rotl(h ^ (*p * kP5), 11) * kP1;
        h ^= h >> 33;
        h *= kP2;
        h ^= h >> 29;
        h *= kP3;
        h ^= h >> 32;
        return h;
    }

    static std::uint64_t of(const void *data, std::size_t size) {
        Hash64 h;
        h.update(data, size);
        return h.digest();
    }

private:
    static constexpr std::uint64_t kP1 = 0x9E3779B185EBCA87ull, kP2 = 0xC2B2AE3D27D4EB4Full, kP3 = 0x165667B19E3779F9ull,
                                   kP4 = 0x85EBCA77C2B2AE63ull, kP5 = 0x27D4EB2F165667C5ull;
    static std::uint64_t rotl(std::uint64_t x, int r) { return (x << r) | (x >> (64 - r)); }
    static std::uint64_t read64(const std::uint8_t *p) {
        std::uint64_t v;
        std::memcpy(&v, p, 8);
        return v;
    }
    static std::uint64_t round(std::uint64_t acc, std::uint64_t input) { return rotl(acc + input * kP2, 31) * kP1; }
    void stripe(const std::uint8_t *p) {
        v_[0] = round(v_[0], read64(p));
        v_[1] = round(v_[1], read64(p + 8));
        v_[2] = round(v_[2], read64(p + 16));
        v_[3] = round(v_[3], read64(p + 24));
    }

    std::uint64_t v_[4];
    std::uint64_t total_;
    std::uint8_t buffer_[32];
    std::size_t buffered_;
};

}
