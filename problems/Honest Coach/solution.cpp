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

		sort(a, a + n);

		int ans = a[1] - a[0];

		for (int i = 2; i<=n-1; i++) {
			if (a[i] - a[i-1] < ans) {
				ans = a[i] - a[i-1];
			}

		}
		cout << ans << "\n";
	}
}
