#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  string s2(s1);
  string s3 = s1;
  string s4 = "hello";
  string s5("hello");
  string s6(10, 'a');
  string s7{"hello"};
  string s8 = {"hello"};
  string s9{'a', 'b', 'c'};
  string s10 = {'a', 'b', 'c'};

  // 测试string的size_type与int混用可能存在的潜在问题
  auto size = s4.size();
  int i = -1;
  while (i < size) {  // int在比较时会转换为unsigned
    cout << ".";      // 不会执行
    ++i;
  }
  return 0;
}