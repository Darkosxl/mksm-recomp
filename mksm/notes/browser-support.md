# Which browsers open the site (2026-10-26)

Question: can at least 90% of desktop browsers on a capable PC open mkshaolinmonks.com? **No: about 72% of desktop
sessions can today (75% of browsers that could still update). JSPI is the gate.** Safari 26 and older (7.6%) and
Chrome 136 and older (6.7%) are the big losses; both would need a build without JSPI, see the lever at the end.

## What the page requires

`web/shell.html` `missingFeatures()` refuses to start without all of: cross-origin isolation (threads), WebAssembly JSPI
(`-sJSPI`), `try_table` exceptions (`-fwasm-exceptions -sWASM_LEGACY_EXCEPTIONS=0`), tail calls (`-mtail-call`), SIMD
(`-msimd128`). WebGPU is optional: without it the game runs on the software renderer, which is slow.

First version with the feature on by default (desktop), from MDN browser-compat-data, webassembly.org/features,
chromestatus, Mozilla and WebKit release notes, gpuweb implementation status (all checked 2026-10-26):

| Feature | Chrome, Edge | Firefox | Safari | Opera |
|---|---|---|---|---|
| threads + SharedArrayBuffer (COOP/COEP) | 92 | 79 | 15.2 | 62 |
| SIMD | 91 | 89 | 16.4 | 77 |
| tail calls | 112 | 121 | 18.2 | 98 |
| `try_table` (exnref) | 137 | 131 | 18.4 | 121 |
| **JSPI** | **137** (May 2025) | **153** (July 2026) | **27** (Sept 14, 2026) | **121** |
| WebGPU | 113 (Linux: 144 Intel, 147 NVIDIA, else flag) | 141 Windows, 147 Apple silicon, never Linux or Intel Mac | 26, Tahoe or newer only | 99 |

Firefox ESR 153 (the only current ESR) has everything; ESR 115 (Windows 7/8.1) lacks JSPI, exnref and tail calls.
Safari 27 installs on macOS Sequoia, Tahoe and 27; Sonoma and older stop at Safari 26. Chrome 109 is the last on
Windows 7/8.1. Brave and Vivaldi follow their Chromium version (Brave 1.79 = Chromium 137).

caniuse-lite has no key for JSPI or exnref and marks Safari tail calls as unsupported (wrong since 18.2), so
browserslist cannot compute this; the numbers below come from StatCounter's per-version CSV instead.

## Coverage, StatCounter desktop worldwide, September 2026

Per-version CSV (`gs.statcounter.com/chart.php?device=Desktop&statType=Browser%20Version&...&csv=1`) crossed with the
thresholds above: `node scripts/browser_coverage.mjs mksm/notes/statcounter-desktop-version-2026-09.csv` (download a new
month's CSV from the same URL to rerun).

| | all desktop sessions | updatable only (no Win7/8.1-pinned Chrome/Edge 109 and Firefox 115, no Safari < 16, no "Chrome for Android") |
|---|---|---|
| threads | 92.2% | 92.2% |
| SIMD | 92.0% | 92.1% |
| tail calls | 86.2% | 89.7% |
| `try_table` | 78.5% | 81.7% |
| JSPI = **opens** | **72.4%** | **75.3%** |
| unknown (Yandex, 360, "Mozilla 0", Samsung...; mostly Chromium forks, probably fine) | 7.5% | 7.8% |

Lost to: Chrome < 137 9.6% (Chrome 109 alone 1.5%, 120/119/118 about 2.1%: stuck or managed installs), Safari < 27 7.6%
(Safari 26.6 is 3.6%; 27 had been out two weeks), Firefox < 153 1.9%, Edge < 137 0.9%, Opera < 121 0.2%. Safari 27
adoption will move some of its 7.6% over the next months; the Sonoma share will not move.

## Measured: does the live site boot?

`scripts/browser_matrix.mjs` opens the live `ps2web.html?disc=/disc.iso`, records the page's own verdict, presses Start
and counts emulated frames. Headless on agentbox (no GPU, so every boot is on the software renderer; the fps column
only says "it runs").

| Browser | Build | Isolated | Page verdict | Boots | Notes |
|---|---|---|---|---|---|
| Chromium 130 | Playwright chromium-1140 | yes | lacks JSPI, `try_table` | no | as the thresholds say |
| Chrome 156 | chrome-headless-shell 156.0.8078.4 | yes | ok | yes, 8.6 fps software | |
| Chrome 113 | Chrome for Testing 113.0.5672.63 | yes | lacks JSPI, `try_table` | no | |
| Chrome 136 | Chrome for Testing 136.0.7103.113 | yes | lacks JSPI, `try_table` | no | last version before the threshold |
| Chrome 137 | Chrome for Testing 137.0.7151.119 | yes | ok | yes, 11.2 fps software | the threshold |
| Chrome 145 | Chrome for Testing 145.0.7632.117 | yes | ok | yes, 11.0 fps software | |
| Chrome 156 | Chrome for Testing 156.0.8078.47 | yes | ok | yes, 11.1 fps software | current stable |
| Firefox 140 (ESR 140) | Playwright 1.54.0 firefox-1489 | yes | lacks JSPI | no | |
| WebKit 26.0 | Playwright 1.54.0 webkit-2191 | yes | lacks JSPI | no | matches real Safari 26; WebKit 26.5 below is trunk with JSPI |
| Firefox 153 | Playwright 1.62.0 firefox-1538 | yes | ok | **no: reload loop** | the disc cache worker never controls the reloaded page under Playwright's Firefox, so the page reloaded forever; fixed below (one reload per tab). Real Firefox 157 on Windows was fine |
| Firefox 157 | Playwright 1.64.1 firefox-1555 | yes | ok | **no: reload loop**, then yes, 18.5 fps software after the fix (build 5566a97, no disc cache) | same |
| WebKit 26.5 | Playwright 1.62.0 webkit-2336 | yes | ok | yes, 13.4 fps software | **not Safari 26**: Playwright's WebKit is trunk and already has JSPI; real Safari 26.4 lacks it (cloud row) |
| WebKit 27.2 | Playwright 1.64.1 webkit-2370 | yes | ok | yes, 9.6 fps software | |

The Firefox rows found a real bug: `web/shell.html` registered the disc cache worker and reloaded until the worker
controlled the page, which in Playwright's Firefox never happens (the worker installs and activates but
`navigator.serviceWorker.controller` stays null after the reload). The page now reloads once per tab and worker script
(`sessionStorage`), then plays without the cache. Real Firefox on Windows 11 took control after the first reload.

## The lever: a second build without JSPI (not built)

Every missing slice fails on JSPI first; the other four requirements are met by Chrome 112+, Firefox 121+, Safari
18.2+ (tail calls are the next floor). Emscripten cannot make one binary that works with and without JSPI, so reaching
those browsers means a second web build, served to browsers without `WebAssembly.Suspending`:

- `-sASYNCIFY` instead of `-sJSPI`: same async-in-sync calls, done by instrumenting the wasm (Asyncify unwinds and
  rewinds the stack by hand). Bigger binary and slower on every function that can be on an unwound path; how much is
  measured, not guessed, before deciding (Emscripten's own guidance says the cost ranges from a few percent to 2x
  depending on how much code `ASYNCIFY_ONLY`/`ASYNCIFY_IMPORTS` can exclude).
- drop `-sWASM_LEGACY_EXCEPTIONS=0`: legacy wasm exceptions, Chrome 95+, Firefox 100+, Safari 15.2+.
- keep `-pthread`, `-msimd128`, `-mtail-call`.

Gain: Safari 18.2–26 (about 6% of desktop sessions, including every Sonoma Mac) and Chrome 112–136 (about 5%, part of
it managed or abandoned installs that never update), so roughly **72% → 83%** of all desktop sessions, 75% → 87% of the
updatable ones. Still short of 90%: the rest is Windows 7/8.1 (Chrome 109, Firefox 115, no tail calls) and browsers
StatCounter cannot version. Safari 27 adoption closes part of the gap by itself over the coming months.

Nothing in code fixes: plain `http://<address>` (no secure context), iframes and in-app browsers (no isolation),
phones and tablets.

Real browsers on LambdaTest's grid (`scripts/browser_matrix_cloud.mjs`, W3C WebDriver; the VMs have no usable GPU
adapter, so these also run on the software renderer):

| Browser | Platform | Isolated | Page verdict | Boots | Notes |
|---|---|---|---|---|---|
| Safari 26.4 | macOS Tahoe | yes | lacks JSPI | no | 0.2 min of grid time |
| Safari 27.0 | macOS 27 (Golden Gate) | yes | ok | yes, 48.6 fps software | WebGPU: no adapter in that VM; unverified on a real Mac GPU |
| Chrome 155.0.8059.85 | Windows 11 | yes | ok | yes, 14.7 fps software | no WebGPU adapter in the VM either |
| Firefox 157.0 | Windows 11 | yes | ok | yes, 13 fps software | |
