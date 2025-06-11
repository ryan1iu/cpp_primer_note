#ifndef WINDOW_MGR_H__
#define WINDOW_MGR_H__
#include <vector>
#include "Screen.h"

class Window_mgr {
 public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex index);

 private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
};

inline void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = std::string(s.hight * s.width, ' ');
}

#endif