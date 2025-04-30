int main() {
  const int i = 0;
  // auto 会忽略掉顶层const，保留底层const
  auto j = &i; // 对常量对象取地址是一种底层const, j 是一个指向整数常量的指针
  *j = 1;
}
