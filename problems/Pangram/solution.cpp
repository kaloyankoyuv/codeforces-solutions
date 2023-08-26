#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  for (int i=0; i<n; ++i) {
    s[i] = tolower(s[i]);
  }

  bool b;
  int x=1;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<i; ++j) {
      if (s[i] != s[j]) {
        b = true;
      } else {
        b = false;
        break;
      }
    }
    if (b == true) {
      ++x;
    }
  }
  if (x == 26) {
    cout << "YES";

  } else {
    cout << "NO";
  }
  return 0;
}
