#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> vec(begin(arr), end(arr));

  for (auto i : vec) {
    cout << i << " ";
  }
  return 0;
}