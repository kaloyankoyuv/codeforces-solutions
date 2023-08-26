#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    int ans = 0;
    int x = rb, y = cb;
    while (!(rb == rd || cb == cd)) {

      if (x==n) {
	rb--;
      } else {
	rb++;
	x = rb;
      }
      if (y==m) {
	cb--;
      } else {
	cb++;
	y = cb;
      }
	
      ans++;
    }
    
    cout << ans << "\n";
  }
  
  return 0;
}
