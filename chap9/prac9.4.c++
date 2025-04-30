/* Write a function that accepts a pair of iterators pointing to vector<int> and
 * an int value. Search for given value within the range specified by the two
 * iterators and return a boolean value to indicate whether it is found.
 */

#include <vector>
using namespace std;
bool func(vector<int>::iterator begin, vector<int>::iterator end, int val) {
  for (auto i = begin; i != end; ++i) {
    if (*i == val) return true;
  }
  return false;
}
