#pragma once

#include <functional>

// keyboard_pad2 plugs controller 2 into the second port and drives it from the keyboard (IJKL + numpad)
bool open_window(bool fullscreen, bool keyboard_pad2 = false);
int run_window(const std::function<int()> &emulate);
