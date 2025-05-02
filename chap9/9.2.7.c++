#include "../include/common.h"
using namespace std;
// ex9.15: Write a program to determine if two vector<int> are equal.
void ex915() {
  vector<int> vec1{1, 2, 3, 4, 5};
  vector<int> vec2{1, 2, 3, 4, 5};
  if (vec1 == vec2)
    cout << "equal";
  else
    cout << "not equal";
}

// ex9.16: Rewrite the previous program to compare the elements of a list<int> and a vector<int>.

bool ex916() {
  vector<int> vec1{1, 2, 3, 4, 5};
  list<int> list1{1, 2, 3, 4, 5};
  // The container types on both sides of the relational operator must be the same.
  /* if(vec1 == list1) {
    cout << "equal";
  } */
  vector<int>::size_type vec1_size = vec1.size();
  list<int>::size_type list1_size = list1.size();
  if (vec1_size != list1_size)
    return false;
  else {
    auto list_it = list1.cbegin();
    for (const int &elem : vec1) {
      if (*list_it != elem) return false;
      list_it++;
    }
  }
  return true;
}

// 假定c1和c2是两个容器,下面的比较操作有何限制
/* {
  if (c1 < c2)
} */

/*
 * 1. c1和c2的容器类型以及元素类型必须相同
 * 2. 元素类型也定义了相应的比较运算符
 */
