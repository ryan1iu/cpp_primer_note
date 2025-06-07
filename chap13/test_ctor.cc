#include <iostream>
#include <string>
using namespace std;
struct A {
  string s;
  A(string s) : s(s) {
    cout << "直接构造函数" << endl;
  }

  A(A &a) : s(a.s) {
    cout << "拷贝构造函数" << endl;
  }

  A operator=(A a) {
    s = a.s;
    cout << "赋值构造" << endl;
    return *this;
  }
};

int main() {
  A a1("hello, world");
  cout << a1.s << endl;
  A a2(a1);
  cout << a2.s << endl;
  a2 = a1;
  cout << a2.s << endl;
}