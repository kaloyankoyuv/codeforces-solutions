#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int fh=0;
    for(int i=0; i<=2; i++) {
      fh = fh + int(s[i]);
    }

    int sh=0;
    for(int i=3; i<=5; i++) {
      sh = sh + int(s[i]);
    }

    if (fh==sh) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
