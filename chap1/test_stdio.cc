#include <fstream>
#include <iostream>

int divide(int a, int b) {
  if (b == 0) {
    std::cerr << "Error: Division by zero!" << std::endl;
    return 0;
  }
  return a / b;
}

int main() {
  // 将 clog 的输出重定向到 log.txt 文件
  std::ofstream logFile("log.txt");
  if (!logFile) {
    std::cerr << "Error: Failed to open log file!" << std::endl;
    return 1;
  }
  std::clog.rdbuf(logFile.rdbuf());

  std::clog << "Program started" << std::endl;

  int x = 12;
  int y = 0;

  std::clog << "Calling divide(" << x << ", " << y << ")" << std::endl;
  int result = divide(x, y);

  std::clog << "Result: " << result << std::endl;

  std::clog << "Program ended" << std::endl;
  logFile.flush();
  logFile.close();

  return 0;
}
