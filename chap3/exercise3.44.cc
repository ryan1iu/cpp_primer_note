#include <iostream>
#include <string>
#include <vector>
using namespace std;

using int_array = int[4];
int main() {
  int ia[3][4]{{1}, {2}, {3}};

  for (int_array &col : ia) {
    for (int val : col) {
      cout << val << " ";
    }
  }
  cout << endl;

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      cout << ia[i][j] << " ";
    }
  }

  cout << endl;

  for (int_array *row = begin(ia); row != end(ia); ++row) {
    for (int *val = begin(*row); val != end(*row); ++val) {
      cout << *val << " ";
    }
  }
  cout << endl;
  return 0;
}