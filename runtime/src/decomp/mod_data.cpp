#include "ps2/mod_data.hpp"

#include <cstdlib>
#include <fstream>
#include <iterator>
#include <map>
#include <mutex>
#include <string>

namespace ps2 {

const std::vector<std::uint8_t> *mod_data(const char *name) {
    static std::mutex lock;
    static std::map<std::string, std::vector<std::uint8_t>> cache;
    const char *dir = std::getenv("PS2_MOD_DATA");
    if (!dir || !*dir) return nullptr;
    const std::lock_guard<std::mutex> hold(lock);
    auto it = cache.find(name);
    if (it == cache.end()) {
        std::vector<std::uint8_t> bytes;
        if (std::ifstream in(std::string(dir) + "/" + name, std::ios::binary); in)
            bytes.assign(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
        it = cache.emplace(name, std::move(bytes)).first;
    }
    return it->second.empty() ? nullptr : &it->second;
}

}
