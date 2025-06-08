#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> vec(10);

  cout << sizeof vec << endl;  // 24
  vec.push_back(1);
  cout << sizeof vec << endl;  // 24

  return 0;
}