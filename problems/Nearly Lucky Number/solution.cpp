#include <iostream>
#include <string> 
using namespace std;

int main() {
  int x=0;
  string s;
  cin >> s;

  for (int i=0; i<s.size(); ++i) {
    if (s[i] == '4' || s[i] == '7') {
      ++x;    
    }
  }

  if (x == 4 || x == 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
