# poke_state.py <in.state> <out.state> addr=value[:w|:h|:b] ...   (EE RAM pokes into a ps2-web-recomp state file)
import sys,struct
E='/home/darkwarro/Documents/Twitter/PS2_REA/analysis/elf/SLUS_210.87'
elf=open(E,'rb').read()
st=bytearray(open(sys.argv[1],'rb').read())
sig=elf[0x1000+0x10000:0x1000+0x10040]
i=st.find(sig); assert i>0 and st.find(sig,i+1)<0, 'RAM signature not unique'
ram=i-0x110000
for spec in sys.argv[3:]:
    a,v=spec.split('='); width='w'
    if ':' in v: v,width=v.split(':')
    a=int(a,16)&0x1ffffff; v=int(v,16)
    fmt={'w':'<I','h':'<H','b':'<B'}[width]
    struct.pack_into(fmt,st,ram+a,v)
    print('poked %08x = %x (%s)'%(a,v,width))
open(sys.argv[2],'wb').write(st)
