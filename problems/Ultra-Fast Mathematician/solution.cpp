#include <iostream>
#include <string>
using namespace std;

int main() {
  string n1, n2;
  cin >> n1 >> n2;
  char s[n1.size()];

  for (int i=0; i<n1.size(); ++i) {
    if (n1[i] != n2[i]) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  
  return 0;
}
