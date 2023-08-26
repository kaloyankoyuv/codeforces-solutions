#include <iostream>
using namespace std;

int main() {

  int a[4];
  for (int i=0; i<4; i++) {
    cin >> a[i];
  }

  int lnum = a[0];
  for (int i=1; i<4; i++) {
    if (a[i] > lnum) {
      lnum = a[i];
    }
  }

  for (int i=0; i<4; i++) {
    if (lnum != a[i]) {
      cout << lnum - a[i] << ' ';
    }
  }
  
  return 0;
}
