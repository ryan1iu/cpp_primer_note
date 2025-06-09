#include <iostream>
#include <string>
#include <vector>
using namespace std;

using strArray = string[10];

strArray &func(strArray &par) {
  return par;
}

auto func2(string (&par)[10]) -> string (&)[10] {
  return par;
}

string strarr[10];

decltype(strarr) &func3(strArray &par) {
  return par;
}

int main() {
  return 0;
}