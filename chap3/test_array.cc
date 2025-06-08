#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int arr1[]{1, 2, 3, 4, 5};
  const int arr2[]{1, 2, 3, 4, 5};
  //   arr2[0] = 1;
  int arr3[]{1, 2, 3};
  int arr4[11]{};
  int arr5[11];

  for (auto i : arr4) {
    cout << i << " ";
  }
  cout << endl;
  for (auto i : arr5) {
    cout << i << " ";
  }
  return 0;
}