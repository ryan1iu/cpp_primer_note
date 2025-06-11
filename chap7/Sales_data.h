#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sales_data {
  friend istream &operator>>(istream &is, Sales_data &item);
  friend ostream &operator<<(ostream &is, const Sales_data &item);

 public:
  Sales_data() : Sales_data("", 0, 0.0, 0.0) {
  }
  Sales_data(const string &book) : Sales_data(book, 0.0, 0.0, 0.0) {
  }
  Sales_data(const string &book, const unsigned num, const double sellp, const double salep);
  Sales_data(istream &is);

 private:
  string bookNo;
  unsigned units_sold = 0;    // 销售量
  double sellingprice = 0.0;  // 原始价格
  double saleprice = 0.0;     // 实售价格
  double discount = 0.0;      // 折扣
 public:
  string isbn() const {
    return bookNo;
  }
  Sales_data &combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    saleprice = (saleprice * units_sold + rhs.saleprice * rhs.units_sold) / (units_sold + rhs.units_sold);
    if (sellingprice != 0)
      discount = saleprice / sellingprice;
    return *this;
  }
};

istream &operator>>(istream &is, Sales_data &item) {
  is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
  if (item.sellingprice)
    item.discount = item.saleprice / item.sellingprice;
  return is;
}

ostream &operator<<(ostream &os, const Sales_data &item) {
  os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " "
     << item.discount;
  return os;
}

Sales_data::Sales_data(const string &book, const unsigned num, const double sellp, const double salep)
    : bookNo(book), units_sold(num), sellingprice(sellp), saleprice(salep) {
  if (sellingprice != 0)
    discount = saleprice / sellingprice;
}

Sales_data::Sales_data(istream &is) {
  is >> *this;
}

int main() {
  Sales_data s1;
  Sales_data s2("666");
  Sales_data s3("666", 10, 8, 6);
  Sales_data s4(cin);

  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  return 0;
}