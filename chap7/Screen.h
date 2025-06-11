#ifndef SCREEN_H__
#define SCREEN_H__
#include <ostream>
#include <string>
#include <vector>

class Window_mgr;

class Screen {
  friend class Window_mgr;

 public:
  Screen() = default;
  Screen(unsigned high, unsigned wid) : hight(high), width(wid), contents(high * wid, ' ') {
  }
  Screen(unsigned high, unsigned wid, char c) : hight(high), width(wid), contents(high * wid, c) {
  }

 private:
  unsigned hight = 0;
  unsigned width = 0;
  unsigned cursor = 0;
  std::string contents;

 public:
  Screen &set(char c) {
    contents[cursor] = c;
    return *this;
  }

  Screen &move(unsigned r, unsigned c) {
    cursor = r * width + c;
    return *this;
  }

  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }

  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }

 private:
  void do_display(std::ostream &os) const {
    os << contents;
  }
};

#endif