/* Write a program to assign elements of a list containing char * pointers(pointing to C-style strings) to a vector of
 * string.
 */
#include <list>
#include <string>
#include <vector>

using namespace std;
int main() {
  list<const char *> str_list{"hello", ",", "world", "."};  // !!! const char *
  vector<string> str_vec;
  str_vec.assign(str_list.begin(), str_list.end());
  return 0;
}
