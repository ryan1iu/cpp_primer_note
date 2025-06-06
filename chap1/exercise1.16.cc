#include <iostream>

using namespace std;

int main() {
  int value = 0;
  int res = 0;
  while (cin >> value) {
    res += value;
  }

  cout << res << endl;

  return 0;
}