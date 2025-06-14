#include <iostream>
#include <vector>

using namespace std;

vector<int> *getvc() {
  return new vector<int>;
}

void writevc(vector<int> *const vc) {
  int val = 0;
  while (cin >> val) {
    vc->push_back(val);
  }
}

void readvc(const vector<int> *const vc) {
  for (auto val : *vc) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> *p = getvc();
  writevc(p);
  readvc(p);

  delete p;
}
