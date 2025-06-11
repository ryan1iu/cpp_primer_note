#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

class Person {
 public:
  Person() = default;
  Person(string name, string address) : name(name), address(address) {};

 private:
  string name;
  string address;

 public:
  string getname() const {
    return name;
  }
  string getaddress() const {
    return address;
  }
  istream &read(istream &is, Person &person) {
    is >> person.name >> person.address;
    return is;
  }
  ostream &print(ostream &os, const Person &person) {
    os << person.name << person.address;
    return os;
  }
};

int main() {
  return 0;
}