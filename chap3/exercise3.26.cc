#include <iostream>
#include <string>
#include <vector>
using namespace std;

const unsigned sz = 5;
bool compare(int arr1[], int arr2[]) {
  for (int i = 0; i < sz; ++i) {
    if (*(arr1 + i) != *(arr2 + i))
      return false;
  }
  return true;
}
int main() {
  int arr1[sz]{}, arr2[sz]{};
  compare(arr1, arr2);
  return 0;
}