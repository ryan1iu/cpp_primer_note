#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> vec;
  ifstream is("../chap8/read");
  if (is) {
    string word;
    while (is >> word) {
      vec.push_back(word);
    }
  }

  for (auto word : vec) {
    cout << word << endl;
  }
  return 0;
}