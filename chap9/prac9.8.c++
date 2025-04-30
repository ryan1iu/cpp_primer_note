/* What type should be uesd to read elements from a list of string and what type should be used if you want to write to
 * list?
 */

#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> str_list{"hello", ",", "world"};

void read() {
  // using const reference
  for (const string &s : str_list) {
    // s[0] = 'a'; failed
    cout << s << endl;
  }

  // using const iterator
  // ??? should end be changed to cend here?
  for (list<string>::const_iterator it = str_list.begin(); it != str_list.end(); ++it) {
    // *it = "hello"; failed
    // (*it)[0] = 'a'; failed
    cout << *it << endl;
  }
  // or
  for (auto it = str_list.cbegin(); it != str_list.cbegin(); ++it) {
  }
}
