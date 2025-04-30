#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  unsigned buf_size = 4;
  int ia[buf_size];

  cout << hex << &buf_size << endl;

  for (int *p = ia; p != ia + buf_size; p++) {
    cout << hex << p << endl;
  }

  exit(0);
}
