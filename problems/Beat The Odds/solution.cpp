#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    
    int arr[n];
    int even = 0;
    int odd = 0;
    for (int i=0; i<=n-1; i++) {
      cin >> arr[i];
      if (arr[i] %2 == 0) {
	even++;
      } else {
	odd++;
      }
    }

    if (even > odd) {
      cout << odd << endl;
    } else {
      cout << even << endl;
    }
    
  }
}
