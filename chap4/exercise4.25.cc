#include <bitset>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  cout << bitset<32>(~'q' << 6) << endl;  // 答案是错的
  return 0;
}