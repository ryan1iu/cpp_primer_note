#include <iostream>
using namespace std;

int main() {
  unsigned u1 = 42, u2 = 10;
  cout << u1 - u2 << " " << u2 - u1 << endl;

  int i = 10;
  unsigned u = 10;

  cout << i - u << " " << u - i << endl;
  return 0;
}