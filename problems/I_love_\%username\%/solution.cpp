#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }

  int r=0;
  
  int lnum = a[0];
  for (int i=1; i<n; ++i) {
    if (a[i] > lnum) {
      ++r;
      lnum = a[i];
    }
  }

  int snum = a[0];
  for (int i=1; i<n; ++i) {
    if (a[i] < snum) {
      ++r;
      snum = a[i];
    }
  }
  
  cout << r;
  return 0;
}
