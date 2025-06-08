#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a = 0, b = 0;
  while (cin >> a >> b) {
    try {
      if (b == 0)
        throw runtime_error("div zero");
      cout << a / b << endl;
    } catch (runtime_error &err) {
      cout << err.what() << endl;
      cout << "again?" << endl;
      char ch;
      cin >> ch;
      if (ch != 'y' && ch != 'Y')
        break;
    }
  }
  return 0;
}