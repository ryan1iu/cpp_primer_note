/* 测试默认构造函数对未提供初始值的内置类型和复合类型的初始化策略
   是初始化未0还是未定义的值
*/
#include <iostream>

using namespace std;
class Test {
 public:
  int a;
  double b;
  int *c;
};

int main() {
  Test test;
  cout << test.a << test.b << test.c << endl;  // 垃圾值
}