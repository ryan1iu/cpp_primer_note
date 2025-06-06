#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item item1, item2;
  if (cin >> item1) {
    while (cin >> item2) {
      if (compareIsbn(item1, item2)) {
        item1 += item2;
      } else {
        cout << item1 << endl;
        item1 = item2;
      }
    }
    cout << item1 << endl;
  }
}