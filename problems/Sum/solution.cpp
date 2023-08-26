#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a+b==c) {
      cout << "YES";
    } else if (a+c==b) {
      cout << "YES";
    } else if (c+b==a) {
      cout << "YES";
    } else {
      cout << "NO";
    }

    cout << endl;
  }
}
 
