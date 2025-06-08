#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  for (auto &val : vec) {
    val % 2 ? val *= 2 : val;
  }

  for (auto val : vec) {
    cout << val << " ";
  }
  return 0;
}