# black_gdbwatch.py -- gdb Python: hardware write-watch on one EE RAM word of ps2run, logging the guest ra/sp, the host
# unit_XXXX frames and code-looking words on the guest stack for every write in frames [WP_FROM, WP_TO]; kills the run after.
# Run:  WP_ADDR=0x5E6BC4 WP_FROM=8517 WP_TO=8520 WP_OUT=wp.txt gdb -batch -x black_gdbwatch.py --args <ps2run> <args...>
# (wrap in systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0; export SDL_AUDIODRIVER=dummy; no --window)
import gdb, struct, os
ADDR = int(os.environ.get('WP_ADDR', '0x5E6BC4'), 16)
F0 = int(os.environ.get('WP_FROM', '8517')); F1 = int(os.environ.get('WP_TO', '8521'))
out = open(os.environ['WP_OUT'], 'w')
def frames(): return int(gdb.parse_and_eval("*(unsigned long long*)&'_ZN3ps212_GLOBAL__N_18g_framesE'"))
def mem(sym, a, n):
    base = int(gdb.parse_and_eval("(unsigned long)&'%s'" % sym))
    return bytes(gdb.selected_inferior().read_memory(base + a, n))
class WP(gdb.Breakpoint):
    def stop(self):
        f = frames()
        if f < F0: return False
        if f > F1: gdb.execute('kill'); return False
        v = struct.unpack('<f', mem('_ZN3ps25g_ramE', ADDR, 4))[0]
        ra = struct.unpack('<I', mem('_ZN3ps25g_cpuE', 31 * 16, 4))[0]; sp = struct.unpack('<I', mem('_ZN3ps25g_cpuE', 29 * 16, 4))[0]
        fr = gdb.newest_frame(); names = []
        while fr is not None and len(names) < 12:
            n = fr.name() or hex(fr.pc())
            if 'unit_' in n: names.append(n.split('(')[0].replace('gen::', ''))
            fr = fr.older()
        stk = mem('_ZN3ps25g_ramE', sp & 0x1ffffff, 0x400)
        codes = [hex(x) for x in struct.unpack('<256I', stk) if 0x100000 <= x < 0x49a708 and x % 4 == 0][:16]
        out.write('frame %d val %.3f ra %08x sp %08x\n  host %s\n  stack %s\n' % (f, v, ra, sp, ' '.join(names), ' '.join(codes))); out.flush()
        return False
gdb.execute('set pagination off'); gdb.execute('set confirm off')
gdb.execute('handle SIGUSR1 SIGUSR2 SIGPIPE nostop noprint pass')
gdb.execute('starti')
WP("*(unsigned int*)((char*)&'_ZN3ps25g_ramE' + %d)" % ADDR, gdb.BP_WATCHPOINT, gdb.WP_WRITE)
gdb.execute('continue')
