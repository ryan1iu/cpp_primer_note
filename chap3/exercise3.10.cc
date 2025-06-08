#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  getline(cin, s1);
  for (auto c : s1) {
    if (!ispunct(c)) {
      cout << c;
    }
  }
  return 0;
}