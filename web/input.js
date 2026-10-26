// Keyboard and gamepad mapping to the PS2 pad, shared by the game page (shell.html) and the landing page's
// controller check (server/site/index.html). Plain script, sets the global PS2Input.
//   PS2Input.listen();                         // keydown/keyup -> PS2Input.keys
//   const pad = PS2Input.readLocal(gamepad, true, touchPad);   // { buttons, lx, ly, rx, ry, l2, r2, pressure }
(() => {
  // PS2 pad bits, bit k = NAMES[k] (the order of the native --press names)
  const NAMES = ['select', 'l3', 'r3', 'start', 'up', 'right', 'down', 'left', 'l2', 'r2', 'l1', 'r1', 'triangle', 'circle', 'cross', 'square'];
  // the layout of OAleex's Shaolin Monks recomp, as host/window.cpp kKeys (keys by position), less Ctrl for Circle:
  // Ctrl + W (Circle + stick up) would close the tab outside fullscreen
  const keyMap = { ArrowUp: 4, ArrowRight: 5, ArrowDown: 6, ArrowLeft: 7, Space: 14, Escape: 13,
                   KeyJ: 15, KeyK: 12, KeyQ: 10, KeyC: 11, ShiftLeft: 8, ShiftRight: 8, KeyE: 9, Enter: 3, NumpadEnter: 3, Backspace: 0,
                   KeyV: 1 };  // L3 (Chameleon's mode switch): next to C (R1)
  // left stick: W up, A left, S down, D right (opposite keys cancel out)
  const stickKeys = new Set(['KeyW', 'KeyA', 'KeyS', 'KeyD']);
  // [standard Gamepad API button index, PS2 bit]
  const padButtons = [[0, 14], [1, 13], [2, 15], [3, 12], [4, 10], [5, 11], [6, 8], [7, 9], [8, 0], [9, 3], [10, 1], [11, 2],
                      [12, 4], [13, 6], [14, 7], [15, 5]];
  const axis = (v) => Math.max(0, Math.min(255, Math.round((v + 1) * 127.5)));
  const keys = new Set();
  const NEUTRAL = Object.freeze({ buttons: 0, lx: 128, ly: 128, rx: 128, ry: 128, l2: 0, r2: 0, pressure: Object.freeze(new Array(16).fill(255)) });

  // Typing in a text field is not pad input. prevent: false leaves the browser's own key handling alone (the
  // landing page, where Enter and the arrows must keep working).
  function listen({ prevent = true } = {}) {
    const typing = (e) => e.target && (e.target.isContentEditable || e.target.tagName === 'INPUT' || e.target.tagName === 'TEXTAREA');
    window.addEventListener('keydown', (e) => {
      if (!(e.code in keyMap || stickKeys.has(e.code)) || typing(e)) return;
      keys.add(e.code);
      if (prevent) e.preventDefault();
    });
    window.addEventListener('keyup', (e) => { keys.delete(e.code); });
    // a key released while another window has focus never sends keyup here (alt-tab, a screenshot hotkey): it stayed held
    window.addEventListener('blur', () => keys.clear());
  }

  // own: this player also gets the keyboard and the touch controls (touch: { buttons, x, y, stick }).
  function readLocal(gamepad, own, touch) {
    let buttons = 0, lx = 128, ly = 128, rx = 128, ry = 128, l2 = 0, r2 = 0;
    const pressure = new Array(16).fill(255);
    if (own) {
      if (touch) buttons |= touch.buttons;
      for (const k of keys) if (k in keyMap) buttons |= 1 << keyMap[k];
      if (keys.has('KeyA') !== keys.has('KeyD')) lx = keys.has('KeyA') ? 0 : 255;
      if (keys.has('KeyW') !== keys.has('KeyS')) ly = keys.has('KeyW') ? 0 : 255;
      if (touch && touch.stick) {
        lx = axis(touch.x);
        ly = axis(touch.y);
      }
    }
    const full = buttons;
    if (gamepad) {
      for (const [index, bit] of padButtons) {
        const b = gamepad.buttons[index];
        if (!b || !(b.pressed || b.value > 0.05)) continue;
        buttons |= 1 << bit;
        if (!(full & (1 << bit))) pressure[bit] = Math.max(1, Math.round((b.value > 0 ? b.value : 1) * 255));
      }
      l2 = buttons & 0x100 ? pressure[8] : 0;
      r2 = buttons & 0x200 ? pressure[9] : 0;
      if (gamepad.axes.length >= 4) {
        if (lx === 128) lx = axis(gamepad.axes[0]);
        if (ly === 128) ly = axis(gamepad.axes[1]);
        rx = axis(gamepad.axes[2]);
        ry = axis(gamepad.axes[3]);
      }
    }
    return { buttons, lx, ly, rx, ry, l2, r2, pressure };
  }

  // Key legend: [[PS2 button name, key label], ...] in pad order, then the stick; a button's keys share one row.
  const LABELS = { ArrowUp: '↑', ArrowRight: '→', ArrowDown: '↓', ArrowLeft: '←', Escape: 'Esc', ControlLeft: 'Ctrl',
                   ControlRight: 'Ctrl', ShiftLeft: 'Shift', ShiftRight: 'Shift', NumpadEnter: 'Enter' };
  const keyLabel = (code) => LABELS[code] || code.replace(/^(Key|Digit)/, '');
  function legend() {
    const out = [];
    for (let bit = 0; bit < NAMES.length; bit++) {
      const labels = new Set(Object.keys(keyMap).filter((code) => keyMap[code] === bit).map(keyLabel));
      if (labels.size) out.push([NAMES[bit], [...labels].join(' / ')]);
    }
    out.push(['left stick', 'W A S D']);
    return out;
  }

  self.PS2Input = { NAMES, keyMap, stickKeys, padButtons, axis, keys, NEUTRAL, listen, readLocal, legend, keyLabel };
})();
