#include "../include/common.h"
/* ex9.18 编写程序,从标准输入读取string序列,存入一个deque中.编写一个循环,用迭代器打印deque中的元素.
 */
using namespace std;
int ex918() {
  string str_buf;
  deque<string> str_deq;
  while (cin >> str_buf) {
    str_deq.push_back(str_buf);
  }

  for (const auto &str : str_deq) {
    cout << str << endl;
  }
  return 0;
}

// ex9.19: 重写上题程序,用list代替deque,列出程序需要做出哪些改变
int ex919() {
  string str_buf;
  list<string> str_list;
  while (cin >> str_buf) {
    str_list.push_back(str_buf);
  }

  for (const auto &str : str_list) {
    cout << str << endl;
  }
  return 0;
}

// ex9.20: 编写程序,从一个list<int>拷贝元素到两个deque中,值为偶数的拷贝到一个deque中,值为奇数的拷贝到另一个当中.
int ex920() {
  list<int> list1{1, 2, 3, 4, 5, 6};
  deque<int> odd_dq;
  deque<int> even_dq;
  for (int elem : list1) {
    if (elem % 2 == 0)
      even_dq.push_back(elem);
    else
      odd_dq.push_back(elem);
  }

  return 0;
}

// ex9.21: 如果将208页中使用Insert返回值将元素添加到list的循环修改为将元素插入到vector中,分析循环如何工作
void ex921() {
  // 利用insert返回指向新加入元素的迭代器
  vector<string> vec;
  auto iter = vec.begin();
  string word;
  while (cin >> word) {
    iter = vec.insert(iter, word);
  }
}

// ex9.22: 假定iv是一个int的vector,下面的程序存在什么错误?你将如何修改?

/* vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size / 2;

while (iter != mid)
  if (*iteration == some_val) iv.insert(iter, 2 * some_val); */

// iter迭代器没有自增
