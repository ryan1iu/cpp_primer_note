#include <iostream>
#include <string>
#include <vector>
using namespace std;

int count_calls() {
  static int i = 0;
  return i++;
}

int main() {
  for (int i : {1, 2, 3, 4, 5}) {
    cout << count_calls() << " ";
  }
  return 0;
}