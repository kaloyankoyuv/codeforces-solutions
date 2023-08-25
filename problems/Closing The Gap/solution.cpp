#include <iostream>
#include <numeric>     
using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<=n-1; i++) {
      cin >> a[i];
    }

    int sum = accumulate(a, a+n, 0);
    if (sum % n == 0) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  return 0;
}
