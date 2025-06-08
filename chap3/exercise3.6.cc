// 使用范围for循环将字符串内的所有字符用X替代

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1("aaabbabdfadk");
  for (auto &c : s1) {
    c = 'X';
  }

  cout << s1 << endl;
  return 0;
}