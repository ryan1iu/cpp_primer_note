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

  for (auto it = vec.cbegin(); it != vec.cend() - 1; ++it) {
    cout << *it + *(++it) << " ";
  }

  if (vec.size() % 2) {
    cout << *(vec.cend() - 1);
  }
  return 0;
}