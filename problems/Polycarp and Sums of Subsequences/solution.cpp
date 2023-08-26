#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int b[7];
    for (int i=0; i<=6; i++) {
      cin >> b[i];
    }
    int a1 = b[0];
    int a2 = b[1];
    int a3 = b[6] - a1 - a2;

    cout << a1 << ' ' << a2 << ' ' << a3 << endl;
  }
}
