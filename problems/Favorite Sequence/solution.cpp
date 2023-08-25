#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int b[n];
    for (int i=0; i<=n-1; i++) {
      cin >> b[i];
    }

    int j=0;
    for (int i=0; i<=n-1; i++) {
      if (i%2==0) {
	cout << b[j] << ' ';
      } else if (i%2!=0) {
	cout << b[n-1-j] << ' ';
	j++;
      }
    }

    cout << "\n";
    
  }
}
