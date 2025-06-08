#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, res;
  while (cin >> s) {
    res += s;
  }
  cout << res << endl;
  return 0;
}