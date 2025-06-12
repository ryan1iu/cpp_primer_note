#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> vec;
  ifstream is("../chap8/read");
  if (is) {
    string line;
    while (getline(is, line)) {
      vec.push_back(line);
    }
  }

  for (auto line : vec) {
    cout << line << endl;
  }
  return 0;
}