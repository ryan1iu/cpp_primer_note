#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> getvc() {
  return make_shared<vector<int>>();
}

void writevc(shared_ptr<vector<int>> const vc) {
  int val = 0;
  while (cin >> val) {
    vc->push_back(val);
  }
}

void readvc(shared_ptr<const vector<int>> const vc) {
  for (auto val : *vc) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  shared_ptr<vector<int>> p(getvc());
  writevc(p);
  readvc(p);
}
