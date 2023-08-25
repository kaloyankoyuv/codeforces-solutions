#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    char max = s[0];
	       
    for (int i=1; i<=n-1; i++) {
      if (s[i] > max) {
	max = s[i];
      }
    }
    int ans = max;
    cout << ans - 96 << endl;
  }
}
