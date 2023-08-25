#include <iostream>
using namespace std;

int main() {

  int k, l, m, n, d;
  int r = 0;
  cin >> k >> l >> m >> n >> d;

  for (int i = 1; i <= d; ++i) {
    if (i % k == 0) {
      ++r;
    } else if (i % l == 0) {
      ++r;
    } else if (i % m == 0) {
      ++r;
    } else if (i % n == 0) {
      ++r;
    }
  }
  cout << r;
  return 0;
}
