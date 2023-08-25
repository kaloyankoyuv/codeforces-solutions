#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		long long r = 0;

		long long a[n];
		for (int i=0; i<=n-1; i++) {
			cin >> a[i];
		}

		long long b[n];
		for (int i=0; i<=n-1; i++) {
			cin >> b[i];
		}

		long long min_a = a[0];
		for (int i=1; i<=n-1; i++) {
			if (a[i] < min_a) {
				min_a = a[i];
			}
		}

		long long min_b = b[0];
		for (int i=1; i<=n-1; i++) {
			if (b[i] < min_b) {
				min_b = b[i];
			}
		}

		for (int i=0; i<=n-1; i++) {
			r+= max(a[i] - min_a, b[i] - min_b);
		}
		cout << r << endl;
	}
}
 
