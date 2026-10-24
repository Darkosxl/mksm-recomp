// HD texture pack for the page (remaster/webpack.py, served under /pack/): before main it picks the variant, writes its
// index to /pack/index.txt for texpack.cpp and starts pack-worker.js, which loads the textures the game asks for
// (Module.packFetch, from host/web.cpp). The 4x pack goes with 3x scale, the 2x one below (no mips: 4x shimmers there);
// Module.packScale (the quality rung) picks instead when set, and ?pack=off|2|4|<index id> over both. Without
// /pack/current.json the game runs without a pack, as before. current.json "fx" (name -> object): the pack's fx.txt and
// its LUTs (presentation effects, texpack.hpp), written next to the index.
const PS2Pack = {
  prepare(Module, params) {
    const want = params.get('pack') || Module.packScale || (parseInt(Module.ENV.PS2_SCALE, 10) >= 3 ? '4' : '2');
    if (want === 'off' || Module.ENV.PS2_TEX_PACK) return;
    Module.addRunDependency('pack');
    (async () => {
      let id = /^[0-9a-f]{16}$/.test(want) ? want : null, pointers = {};
      if (!id) {
        const r = await fetch('/pack/current.json', { cache: 'no-cache' });
        if (!r.ok) return;
        pointers = await r.json();
        id = pointers[want] || pointers[want === '2' ? '4' : '2'];
        if (!/^[0-9a-f]{16}$/.test(id || '')) return;
      }
      const r = await fetch(`/pack/${id}.txt`);
      const text = r.ok ? await r.text() : '';
      if (!text.startsWith('#mksm-pack 1 gzip-up\n')) throw new Error(`no index ${id}`);
      FS.mkdir('/pack');
      FS.writeFile('/pack/index.txt', text);
      for (const [name, file] of Object.entries(pointers.fx || {})) {
        const f = /^[\w.-]+$/.test(name) && /^[\w.-]+$/.test(file) ? await fetch(`/pack/obj/${file}`) : null;
        if (f && f.ok) FS.writeFile(`/pack/${name}`, await f.text());
        else console.warn(`texture pack fx: no ${name}`);
      }
      Module.ENV.PS2_TEX_PACK = '/pack';
      const base = new URL('/pack/obj/', location.href).href, worker = new Worker('pack-worker.js');
      Module.packFetch = (file, ptr, bytes, stride, state, buffer) => worker.postMessage({ url: base + file, ptr, bytes, stride, state, buffer });
      worker.onmessage = ({ data: { progress, stats } }) => {
        Module.packStats = stats;
        if (progress.total) Module.packText = progress.done >= progress.total ? 'HD textures cached' : `caching HD textures ${Math.floor(progress.done / progress.total * 100)}% (${progress.done}/${progress.total})`;
      };
      Module.packBackground = pointers.background !== false && (() => {
        const files = text.split('\n').slice(1).map((line) => line.split(' ')).filter((f) => f.length >= 6).map((f) => [base + f[5], Number(f[4])]);
        worker.postMessage({ background: files });
      });
      console.log(`texture pack ${id}: ${text.split('\n').length - 2} textures`);
    })().catch((e) => console.warn('texture pack off:', e.message)).finally(() => Module.removeRunDependency('pack'));
  },
  // after the disc prefetch: the rest of the pack into Cache Storage, paused while the game waits on a texture
  background(Module) {
    if (Module.packBackground) Module.packBackground();
  },
};
