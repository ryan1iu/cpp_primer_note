/* How do you initialize a vector<double> from a list<int>?
 * How do you create one from a vector<int>?
 */

#include <list>
#include <vector>
using namespace std;

int main() {
  list<int> lst{1, 2, 3, 4, 5};
  vector<int> vec_i{1, 2, 3, 4, 5};
  vector<double> vec_d(lst.begin(), lst.end());  // !!! Because list doesn't support random access,its itreator
                                                 // doesn't overload the + opreator.
  vector<double> ved_d2(vec_i.begin(), vec_i.end());
}
