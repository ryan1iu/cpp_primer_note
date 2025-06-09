#include <iostream>
#include <string>
#include <vector>
using namespace std;

string (&func(string (&par)[10]))[10] {
  return par;
}

int main() {
  return 0;
}