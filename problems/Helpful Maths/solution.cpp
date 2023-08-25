#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (long unsigned int i=0; i<s.size(); ++i) {
    if (s[i]=='+') {
      s.erase(s.begin()+i);
    }
  }

  int a[s.size()];

  for (long unsigned int i=0; i<s.size(); ++i) {
    a[i] = s[i];
  }

  sort(a, a + sizeof(a)/sizeof(a[0]));

  // 49, 50, 51

  for (long unsigned int i=0; i<s.size(); ++i) {
    if (i == s.size()- 1) {
      cout << a[i] - '0';
    } else {
      cout << a[i] - '0' << "+";
    }
    
  }

  return 0;
}
