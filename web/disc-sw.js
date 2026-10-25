// Service worker for players who stream the disc from far away (a host-mode guest, a VPS): every Range read of
// disc.iso is served from 1 MiB blocks kept in Cache Storage, so a block crosses the network at most once, and the
// page can prefetch the game data in the background (shell.html prefetchDisc). Other requests pass through untouched,
// unless the worker was registered as disc-sw.js?coi: then every same-origin response also gets the COOP and COEP
// headers the game threads need (SharedArrayBuffer), for servers that leave them out (a plain static host, a proxy
// or antivirus that strips them). The page registers that variant when it finds itself not cross-origin isolated.
const BLOCK = 1 << 20;
const COI = new URL(self.location.href).searchParams.has('coi');
const ISOLATION = {
  'Cross-Origin-Opener-Policy': 'same-origin',
  'Cross-Origin-Embedder-Policy': 'require-corp',
  'Cross-Origin-Resource-Policy': 'same-origin',
};
const CACHE = 'disc-v1';
const inflight = new Map();
const sizes = new Map(); // disc url -> Promise<total bytes>

self.addEventListener('install', () => self.skipWaiting());
self.addEventListener('activate', (event) => event.waitUntil(self.clients.claim()));

const blockKey = (size, index) => `/__disc/${size}/${index}`;

function discSize(url) {
  if (!sizes.has(url)) {
    sizes.set(url, fetch(url, { method: 'HEAD', credentials: 'same-origin' }).then((r) => {
      const n = Number(r.headers.get('content-length'));
      if (!r.ok || !n) throw new Error('disc HEAD: status ' + r.status);
      return n;
    }).catch((e) => { sizes.delete(url); throw e; }));
  }
  return sizes.get(url);
}

// One block, hedged: free tunnels answer most requests in well under a second but stall some for 10-15 s, so a
// second and third copy of a slow request go out after 1.5 s and 4 s; the first complete answer wins, the rest abort.
function fetchBlock(url, start, end) {
  return new Promise((resolve, reject) => {
    const controllers = [];
    let done = false, failures = 0;
    const attempt = () => {
      if (done || controllers.length >= 6) return;
      const controller = new AbortController();
      controllers.push(controller);
      fetch(url, { headers: { Range: `bytes=${start}-${end}` }, credentials: 'same-origin', signal: controller.signal })
        .then(async (r) => {
          if (r.status !== 206) throw new Error(`status ${r.status}`);
          const bytes = new Uint8Array(await r.arrayBuffer());
          if (bytes.length !== end - start + 1) throw new Error(`${bytes.length} bytes`);
          return bytes;
        })
        .then((bytes) => {
          if (done) return;
          done = true;
          for (const c of controllers) if (c !== controller) c.abort();
          resolve(bytes);
        })
        .catch((e) => {
          if (done) return;
          if (++failures >= 4) { done = true; reject(e); } else setTimeout(attempt, 250);
        });
    };
    attempt();
    setTimeout(attempt, 1500);
    setTimeout(attempt, 4000);
  });
}

async function block(url, size, index) {
  const key = blockKey(size, index);
  const cache = await caches.open(CACHE);
  const hit = await cache.match(key);
  if (hit) return new Uint8Array(await hit.arrayBuffer());
  let pending = inflight.get(key);
  if (!pending) {
    const start = index * BLOCK, end = Math.min(size, start + BLOCK) - 1;
    pending = fetchBlock(url, start, end)
      .then(async (bytes) => {
        await cache.put(key, new Response(bytes));
        return bytes;
      })
      .finally(() => inflight.delete(key));
    inflight.set(key, pending);
  }
  return pending;
}

async function serve(request) {
  const url = request.url.split('#')[0];
  const m = /^bytes=(\d+)-(\d+)$/.exec(request.headers.get('range') || '');
  if (!m) return fetch(request);
  const size = await discSize(url);
  const first = Number(m[1]), last = Math.min(Number(m[2]), size - 1);
  const out = new Uint8Array(last - first + 1);
  const blocks = [];
  for (let i = Math.floor(first / BLOCK); i <= Math.floor(last / BLOCK); i++) blocks.push(i);
  await Promise.all(blocks.map(async (i) => {
    const bytes = await block(url, size, i), base = i * BLOCK;
    const from = Math.max(first, base), to = Math.min(last, base + bytes.length - 1);
    out.set(bytes.subarray(from - base, to - base + 1), from - first);
  }));
  return new Response(out, {
    status: 206,
    headers: {
      'Content-Type': 'application/octet-stream', 'Content-Length': String(out.length), 'Accept-Ranges': 'bytes',
      'Content-Range': `bytes ${first}-${last}/${size}`, 'Cross-Origin-Resource-Policy': 'same-origin',
    },
  });
}

// Same bytes, with the isolation headers. Opaque and redirect responses (status 0) cannot be rebuilt and need none.
function isolated(response) {
  if (!COI || response.status === 0 || response.type !== 'basic') return response;
  const headers = new Headers(response.headers);
  for (const [name, value] of Object.entries(ISOLATION)) headers.set(name, value);
  return new Response(response.body, { status: response.status, statusText: response.statusText, headers });
}

self.addEventListener('fetch', (event) => {
  const request = event.request;
  if (request.method !== 'GET') return;
  const url = new URL(request.url);
  if (url.pathname.endsWith('/disc.iso') && request.headers.has('range')) {
    event.respondWith(serve(request).catch((e) => {
      console.warn('disc cache:', e.message, '- falling back to the network');
      return fetch(request);
    }).then(isolated));
  } else if (COI && url.origin === self.location.origin) {
    event.respondWith(fetch(request).then(isolated));
  }
});
