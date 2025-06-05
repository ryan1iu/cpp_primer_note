#include <iostream>
class A {
 public:
  // A() {
  //   std::cout << "默认构造函数" << std::endl;
  // }
  // explicit A(int a) : a(a) {
  //   std::cout << "初始化列表构造函数" << std::endl;
  // }

  int a;
};

int main() {
  A a1;
  std::cout << a1.a << std::endl;
  A a2{};
  std::cout << a2.a << std::endl;
  // A a3(2.1);
  // A a4{2};
  // A a5 = A(10);
}
