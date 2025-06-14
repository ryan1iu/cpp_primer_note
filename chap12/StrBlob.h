#ifndef STRBLOB_H__
#define STRBLOB_H__

#include <initializer_list>
#include <memory>
#include <string>
#include <vector>
class StrBlob {
 public:
  using size_type = std::vector<std::string>::size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string>);

  size_type size() const {
    return data->size();
  }
  bool empty() const {
    return data->empty();
  }

  // 添加和删除元素
  void push_back(const std::string &t) {
    data->push_back(t);
  }
  void pop_back();

  // 元素访问
  std::string &front() const;
  std::string &back() const;

 private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i, const std::string &msg) const;
};

#endif