#include <iostream>
#include <string>
#include <vector>
using namespace std;

using func = int (*)(int, int);

int func2(int, int);
int main() {
  vector<func> vec;

  vector<decltype(func2) *> vec2;
  return 0;
}