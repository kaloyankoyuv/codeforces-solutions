#include <bits/stdc++.h>
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
		
		float size = n;
		float sum=0;
		for (int i=0; i<=n-1; i++) {
			sum += a[i];
		}

		if (sum/size > 1) {
			cout << sum - n << endl;
		} else if (sum/size == 1) {
			cout << 0 << endl;
		} else if (sum/size < 1) {
			cout << 1 << endl;
		}

	}
}
