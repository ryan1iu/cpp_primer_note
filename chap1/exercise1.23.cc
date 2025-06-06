#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
  Sales_item item1, item2;
  if (cin >> item1) {
    int cnt = 0;
    while (cin >> item2) {
      if (compareIsbn(item1, item2)) {
        ++cnt;
      } else {
        cout << item1.isbn() << " " << cnt << endl;
        item1 = item2;
        cnt = 1;
      }
    }
    cout << item1.isbn() << " " << cnt << endl;
  }
}