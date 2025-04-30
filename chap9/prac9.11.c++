/* For the six ways of creating and initializing a vector object,given an example for each and explain what values
 * each vector contains
 */

#include <vector>
using namespace std;

int main() {
  vector<int> v{1, 2, 3, 4, 5};
  // 1
  vector<int> v1;  // {}
  // 2
  vector<int> v2(v);  // {1,2,3,4,5}
  // 3
  vector<int> v3{1, 2, 3};  // {1,2,3}
  // 4
  vector<int> v4(v.begin(), v.begin() + 2);  // {1,2}
  // 5
  vector<int> v5(5);  // {0,0,0,0,0}
  // 6
  vector<int> v6(5, 1);  // {1,1,1,1,1}
}
