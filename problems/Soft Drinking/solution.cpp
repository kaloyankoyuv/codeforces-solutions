#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int x = k*l/nl/n;
  int y = c*d/n;
  int z = p/np/n;

  int a[3] = {x, y, z};
  int r = a[0];
  for (int i=1; i<=2; i++) {
    if (a[i] < r) {
      r = a[i];
    }
  }
  cout << r;
  
  
  return 0;
}
