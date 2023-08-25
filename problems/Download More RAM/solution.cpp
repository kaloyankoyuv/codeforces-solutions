#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  long t;
  cin >> t;
 
  while (t--) {
    long n;
    long k;
    cin >> n >> k;
 
    long a[n]; 
    long b[n];
 
    for (long i = 0; i <=n-1; i++) {
      cin >> a[i];
    }
 
    for (long i = 0; i <=n-1; i++) {
      cin >> b[i];
    }
 
  mylabel:
    for (long i=0; i<=n-1; i++) {
      if (k>=a[i]) {
	k+= b[i];
	a[i] = 4000000;
      }
    }
 
    for (long i=0; i<=n-1; i++) {
      if (k>=a[i]) {
	goto mylabel;
      }
    }
      
    
    cout << k << "\n";
 
  }
  return 0;
}
