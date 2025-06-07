#ifndef SALES_DATA_H__
#define SALES_DATA_H__

#include <string>
struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

#endif  // SALES_DATA_H__