#include <iostream>
using namespace std;

int main() {
  int n;
  int r=1;
  cin >> n;
  string a[n];
  
  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }
  
  for (int i=0; i<n-1; ++i) {
    if (a[i] == a[i+1]) {
      r = r;
    } else if (a[i] != a[i+1]) {
      ++r;
    }
  }
  cout << r;
  return 0;
}
