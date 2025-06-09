char func() {
  static unsigned long long cnt = 0;
  cnt++;
  return func();
}

int main() {
  return func();
}