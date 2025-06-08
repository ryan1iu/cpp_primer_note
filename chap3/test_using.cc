/* 测试using 的声明有作用域限制吗*/

#include <iostream>

int main() {
  {
    using std::cout;
    cout << "hello, world" << std::endl;
  }

  cout << "hello, world";  // 有
  return 0;
}