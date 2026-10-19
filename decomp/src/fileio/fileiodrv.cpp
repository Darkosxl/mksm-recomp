// Ps2/FileIODrv/FileIODrv.cpp
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kDirAt = 2048;     // the directory when the header says so (word +8 == 1) or as the fallback
constexpr std::uint32_t kDirAtShort = 32;  // the directory right after the header otherwise

}

// fn_2124c0(archive, index, &data, &size): finds file `index` of an archive loaded in memory and returns its address
// (archive + offset) in *data and its byte size in *size. The directory holds one doubleword per file in either of
// two forms:
//   bit 63 clear: two words, offset and size;
//   bit 63 set:   packed, offset = bits 0-20 in 2048-byte sectors, size = bits 22-43, bits 44-62 a third field
//                 (times 8) that is unused here.
// The original unpacks the entry into a 12-byte struct on its stack and reads offset and size back from it.
PS2_DECOMP(002124C0, ArchiveGetFile) {
    const std::uint64_t archive_reg = c.r[a0].d[0];
    const std::uint32_t archive = c.r[a0].w[0];
    const std::uint32_t data_out = c.r[a2].w[0], size_out = c.r[a3].w[0];

    // where the directory starts: +2048 when the header word at +8 is 1, else +32, unless that slot is zero
    const std::uint32_t dir = archive + (ld32(archive + 8) == 1 ? kDirAt : kDirAtShort);
    const std::uint32_t entries = ld64(dir) != 0 ? dir : archive + kDirAt;
    const std::uint32_t slot = c.r[a1].w[0] << 3;
    const std::uint32_t at = entries + slot;
    const std::uint64_t entry = ld64(at);

    StackFrame f(c, 16);
    std::uint32_t offset, size;
    if (static_cast<std::int64_t>(entry) < 0) {
        offset = static_cast<std::uint32_t>(entry) << 11;
        size = static_cast<std::uint32_t>(entry >> 22) & 0x3FFFFFu;
        const std::uint32_t third = (static_cast<std::uint32_t>(entry >> 44) & 0x7FFFFu) << 3;
        st32(f.at(0), offset);
        st32(f.at(8), third);
        st32(f.at(4), size);
        set64(c.r[a0], 0x3FFFFFu);  // the size mask
        set64(c.r[a1], size);
        tick(c, 16 + 18);
    } else {
        offset = ld32(at);
        st32(f.at(0), offset);
        size = ld32(at + 4);
        st32(f.at(8), size);
        st32(f.at(4), size);
        set32(c.r[a0], kDirAt);
        set32(c.r[a1], slot);
        tick(c, 16 + 5);
    }
    st32(data_out, archive + offset);
    st32(size_out, size);
    f.pop();

    // what the original leaves in its scratch registers
    set32(c.r[v0], archive + offset);
    set32(c.r[v1], size);
    set32(c.r[t0], at);
    set64(c.r[t1], entry);
    set64(c.r[t2], archive_reg);
    tick(c, 8);
}
