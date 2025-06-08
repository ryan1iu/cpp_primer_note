#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int i = 1, j = 2, k = 1;
  if ((i == j) < k) {
    cout << (i == j < k) << endl;  // 0
  }
  return 0;
}