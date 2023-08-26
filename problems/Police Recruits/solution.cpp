#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }

  int ans=0;
  int r=0;
  for (int i=0; i<n; ++i) {
    if (a[i] > 0) {
      r+=a[i];
    } else if (a[i] == -1) {
      if (r>=1) {
	r--;
      } else if (r<=0) {
	ans++;
      }
    }
  }

  cout << ans;
  return 0;
}
