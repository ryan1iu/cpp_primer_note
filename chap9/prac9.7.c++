/* What type should be used to index elements in a vector<int> ?
 */

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  vector<int>::size_type index = 5;  // used to declare the variable index that stores the index
                                     // of the elements.
  cout << vec[index] << endl;
}
