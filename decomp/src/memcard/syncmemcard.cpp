// Ps2/MemoryCard/SyncMemCard.cpp
#include "ps2/decomp.hpp"

using namespace ps2::gpr;

// fn_21f618(card): one state handler of the memory-card state machine (the jump-table switches in fn_218ef8 and
// fn_21a0e0 call it with the card object): sets the card's word at +8 to 1 and returns 1.
PS2_DECOMP(0021F618, MemCardStateSetFlag) {
    ps2::set32(c.r[v1], 1);
    ps2::set32(c.r[v0], 1);
    ps2::st32(c.r[a0].w[0] + 8, 1);
    ps2::tick(c, 5);
}
