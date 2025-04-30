/* Rewrite the function from the previous question so that it returns an
 * iterator pointing to the given value. Note: Make sure the program handles the
 * situation where the given value is not found.
 */

#include <vector>
using namespace std;

vector<int>::iterator func(vector<int>::iterator begin, vector<int>::iterator end, int val) {
  decltype(end) res = end;
  for (auto i = begin; i != end; ++i) {
    if (*i == val) {
      res = i;
      break;
    }
  }
  return res;
}
