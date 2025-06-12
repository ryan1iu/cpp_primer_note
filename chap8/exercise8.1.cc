#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

istream &func(istream &is) {
  auto old_state = is.rdstate();
  is.clear();
  int v = 0;
  while (is >> v, !is.eof()) {
    if (is.bad())
      throw runtime_error("流崩溃");
    if (is.fail()) {
      cerr << "数据错误" << endl;
      is.clear();
      is.ignore(100, '\n');
      continue;
    }
    cout << v << endl;
  }
  is.setstate(old_state);
  return is;
}

int main() {
  func(cin);
  return 0;
}