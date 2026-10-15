// build: gcc -O1 -o xkey xkey.c -lX11 -lXtst   (run with DISPLAY=:77 for pcsx2_headless.sh)
// xkey: XTest key/pointer helper. usage: xkey move X Y | xkey key KEYSYM HOLD_MS | xkey seq "KEYSYM:HOLD:GAP ..."
#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
static void key(Display *d, const char *ks, int hold) {
    KeyCode kc = XKeysymToKeycode(d, XStringToKeysym(ks));
    if (!kc) { fprintf(stderr, "bad keysym %s\n", ks); return; }
    XTestFakeKeyEvent(d, kc, True, 0); XFlush(d); usleep(hold * 1000);
    XTestFakeKeyEvent(d, kc, False, 0); XFlush(d);
}
int main(int argc, char **argv) {
    Display *d = XOpenDisplay(NULL);
    if (!d) { fprintf(stderr, "no display\n"); return 1; }
    if (argc >= 4 && !strcmp(argv[1], "move")) { XTestFakeMotionEvent(d, -1, atoi(argv[2]), atoi(argv[3]), 0); XFlush(d); }
    else if (argc >= 4 && !strcmp(argv[1], "key")) key(d, argv[2], atoi(argv[3]));
    else if (argc >= 3 && !strcmp(argv[1], "click")) { XTestFakeButtonEvent(d, 1, True, 0); XFlush(d); usleep(50000); XTestFakeButtonEvent(d, 1, False, 0); XFlush(d); }
    XCloseDisplay(d);
    return 0;
}
