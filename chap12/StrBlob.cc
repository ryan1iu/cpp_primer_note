#include "StrBlob.h"
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

// 构造函数
StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {
}

StrBlob::StrBlob(std::initializer_list<std::string> li) : data(std::make_shared<std::vector<std::string>>(li)) {
}

void StrBlob::check(size_type i, const std::string &msg) const {
  if (i >= data->size())
    throw std::out_of_range(msg);
}

std::string &StrBlob::front() const {
  check(0, "front on empty StrBlob");
  return data->front();
}

std::string &StrBlob::back() const {
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::pop_back() {
  check(0, "pop back on empty StrBlob");
  data->pop_back();
}
