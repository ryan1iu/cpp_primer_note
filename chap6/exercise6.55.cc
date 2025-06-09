#include <iostream>
#include <string>
#include <vector>
using namespace std;

int func1(int a, int b) {
  return a + b;
}

int func2(int a, int b) {
  return a - b;
}

int func3(int a, int b) {
  return a * b;
}

int func4(int a, int b) {
  return a / b;
}

int main() {
  using func = int (*)(int, int);
  vector<func> vec{func1, func2, func3, func4};
  for (auto p : vec) {
    cout << p(4, 2) << endl;
  }
  return 0;
}