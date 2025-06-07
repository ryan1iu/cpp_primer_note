#include <iostream>
using namespace std;

int main() {
  typedef int age, *ageptr;
  age man = 10;
  ageptr woman = &man;

  using age2 = int;
  age2 cat = 20;
  return 0;

  // 直接将类型别名替换为它本来的样子是错误的
  {
    typedef char *pstring;   // 有作用域限制
    const pstring cstr = 0;  // aka char *const
    cstr = nullptr;          // invalid
  }
}