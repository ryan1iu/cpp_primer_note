#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int func(initializer_list<int> lst) {
  int sum = 0;
  for (auto i : lst) {
    sum += i;
  }
  return sum;
}

int main() {
  cout << func({1, 2, 3, 4, 5}) << endl;
  return 0;
}