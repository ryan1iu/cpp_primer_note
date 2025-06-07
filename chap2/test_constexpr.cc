#include <iostream>

int faf = 10;
constexpr int getc() {
  return 20;
}

using namespace std;
constexpr int getb() {
  return getc();
}
int main() {
  constexpr const int a = 10;

  constexpr int b = getb();

  // literal type 字面值类型:算术类型、引用、指针

  // constexpr只对指针有效，与指针所指向的对象无关
  // c是一个常量指针
  constexpr int *c = nullptr;  // 只能初始化为nullptr或者一个固定地址的变量的地址
  constexpr int *d = &faf;

  const int &aaa = a;
  constexpr int &bbb = faf;
  bbb = 20;
  return 0;
}