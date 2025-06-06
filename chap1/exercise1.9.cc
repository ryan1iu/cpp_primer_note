#include <iostream>

using std::cout;
int main() {
  int i = 50;
  int res = 0;
  while (i <= 100) {
    res += i;
    ++i;
  }

  cout << res;
  return 0;
}