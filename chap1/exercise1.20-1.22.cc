#include <iostream>
#include "Sales_item.h"

using namespace std;
int main() {
  Sales_item item1, item2;
  cin >> item1;
  cout << item1 << endl;

  cin >> item2;

  cout << item1 + item2 << endl;

  Sales_item items, sum;
  while (cin >> items) {
    sum += items;
  }
  cout << sum << endl;
}