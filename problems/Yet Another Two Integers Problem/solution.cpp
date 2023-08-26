#include <iostream>
using namespace std;

int main() {

  int t, a, b, d;
  cin >> t;
  
  while (t--) {
    cin >> a >> b;

    if (a>b) {
      d = a-b;
      if (d%10>0) {
	cout << d/10 + 1 << endl;
      } else {
	cout << d/10 << endl;
      }
    } else if (a<b) {
      d = b-a;
      if (d%10>0) {
	cout << d/10 + 1 << endl;
      } else {
	cout << d/10 << endl;
      }
    } else if (a==b) {
      cout << 0 << endl;
    }
  }
  return 0;
}
