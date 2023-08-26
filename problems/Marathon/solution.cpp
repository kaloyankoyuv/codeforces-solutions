#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {

    int ans=0;
    int a;
    cin >> a;
    for (int i=0; i<=2; i++) {
      int x;
      cin >> x;
      if (a < x) {
	ans++;
      }
    }
    cout << ans << endl;
  }
}
