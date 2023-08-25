#include <iostream>
#include <vector>
using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
    int ans;

    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<=n-1; i++) {
      cin >> a[i];
    }

    vector<int> e, o;

    for (int i=0; i<=n-1; i++) {
      if (i%2 != a[i]%2) {

	if (a[i]%2!=0 && i%2==0) {
	  e.push_back(i);
	} else if (a[i]%2==0 && i%2!=0) {
	  o.push_back(i);
	}
	
      }
    }

    if (o.size() != e.size()) {
      ans = -1;
    } else {
      ans = o.size();
    }

    cout << ans << "\n";
    
  }
  
  return 0;
}
