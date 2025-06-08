#include <bitset>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int x[10];
  int *p = x;
  cout << sizeof(x) / sizeof(*x) << endl;

  cout << sizeof(p) / sizeof(*p) << endl;
  cout << p << endl;
  return 0;
}