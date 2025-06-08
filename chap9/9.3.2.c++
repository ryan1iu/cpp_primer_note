// ex9.24
#include <vector>
using namespace std;
int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  int v1 = vec.at(0);
  int v2 = vec[0];
  int v3 = vec.front();
  int v4 = *vec.begin();
}
