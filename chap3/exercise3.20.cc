#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  int val = 0;
  while (cin >> val) {
    vec.push_back(val);
  }

  for (decltype(vec.size()) i = 0; i != vec.size(); i += 2) {
    cout << vec[i] + vec[i + 1] << " ";
  }

  if (vec.size() % 2) {
    cout << vec[vec.size() - 1];
  }
  return 0;
}