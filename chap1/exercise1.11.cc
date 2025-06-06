#include <iostream>

using namespace std;

int main() {
  int v1 = 0, v2 = 0;
  cin >> v1 >> v2;
  int res = 0;
  while (v1 <= v2) {
    res += v1;
    ++v1;
  }

  cout << res << endl;

  return 0;
}