#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  double a = 1.2;
  int b = 1;
  b = static_cast<int>(a);
  double *pa = &a;
  int *pb = reinterpret_cast<int *>(pa);

  const int c = 10;
  int *pc = const_cast<int *>(&c);
  *pc = 42;
  cout << c << endl;
  return 0;
}