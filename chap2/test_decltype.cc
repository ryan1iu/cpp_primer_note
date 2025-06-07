#include <iostream>
using namespace std;

int &fun(int &foo) {
  cout << "执行" << endl;
  return foo;
}

int main() {
  int a = 10;
  decltype(fun(a)) b = a;
  b = 20;
  cout << a << endl;

  decltype((a)) c = b;

  c = 30;
  cout << a << endl;
  return 0;
}