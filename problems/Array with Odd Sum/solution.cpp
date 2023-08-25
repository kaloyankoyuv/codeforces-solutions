#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    for (int i=0; i<=n-1; i++) {
      cin >> a[i];
      sum+=a[i];
    }

    if (sum%2!=0) {
      cout << "YES\n";
      continue;
    }
    
    string ans;
    int even=0;
    int odd=0;
    
    for (int i=0; i<=n-1; i++) {
      if (a[i]%2!=0) {
	odd++;
      } else {
	even++;
      }
    }

    if (odd>0 && even>0) {
      ans = "YES";
    } else {
      ans = "NO";
    }
    
    cout << ans << "\n";
  }
}
