#include <iostream>
#include <list>
#include <vector>
using namespace std;
// ex9.25
void ex925() {
  // if elem1 == elem2
  vector<int> vec{1, 2, 3, 4, 5, 6};
  auto iter1 = vec.begin(), iter2 = vec.begin();
  vec.erase(iter1, iter2);
  for (auto i : vec) {
    cout << i << endl;  // 1,2,3,4,5,6 不会删除元素
  }

  // if elem2 = end()
  iter1 = vec.begin();
  iter2 = vec.end();
  vec.erase(iter1, iter2);
  for (auto i : vec) {
    cout << i << endl;  // 删除全部元素
  }

  // if elem1 == elem2 == end()
  iter1 = vec.end();
  iter2 = vec.end();
  vec = {1, 2, 3, 4, 5, 6};
  vec.erase(iter1, iter2);
  for (auto i : vec) {
    cout << i << endl;  // 1,2,3,4,5,6 不会删除元素
  }
}

// ex9.26
void ex926() {
  int ia[] = {0, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> vec(ia, ia + 10);
  list<int> lst(ia, ia + 10);

  auto vec_iter = vec.begin();
  auto lst_iter = lst.begin();

  while (vec_iter != vec.end()) {
    if (*vec_iter % 2 == 0) {
      vec_iter = vec.erase(vec_iter);
    } else {
      ++vec_iter;
    }
  }
  while (lst_iter != lst.end()) {
    if (*lst_iter % 2 != 0) {
      lst_iter = lst.erase(lst_iter);
    } else {
      ++lst_iter;
    }
  }

  for (auto i : vec) {
    cout << i << " ";
  }
  cout << endl;
  for (auto i : lst) {
    cout << i << " ";
  }
}

int main() {
  // ex925();
  ex926();
}
