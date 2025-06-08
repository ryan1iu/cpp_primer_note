#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a = 0, b = 0;
  cin >> a >> b;
  if (b == 0) {
    throw runtime_error("div zero");
  }
  cout << a / b << endl;
  return 0;
}