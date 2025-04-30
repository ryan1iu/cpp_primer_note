#include <iostream>

using namespace std;

int main() {
  // 测试下面这些语句是否合法
  cout << "/*";
  cout << "*/";
  cout << /* "*/ " */; // 非法
      cout
       << /* "*/ " /* " /*" */;
}
