#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int r=0;
  int a[5] = {100, 20, 10, 5, 1};

  for (int i=0; i<5; ++i) {
    r+=n/a[i];
    n=n%a[i];
  }

  cout << r;
  return 0;
}
