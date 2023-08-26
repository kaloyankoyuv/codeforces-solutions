#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {

    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i=0; i<n; i++) {
      cin >> a[i];
    }

    int b[n];

    for (int i=0; i<n; i++) {
      cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    for (int i = 0; i < k; i++) {
      if (a[i] < b[i]) {
        a[i] = b[i];
      }
    }

    int r=0;

    for (int i = 0; i < n; i++) {
      r+=a[i];
    }

    cout << r << endl;

  }

  return 0;
}
