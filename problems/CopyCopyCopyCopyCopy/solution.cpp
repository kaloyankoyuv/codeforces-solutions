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

		int ans = 0;
		for (int i = 0; i < n; i++) {
			while (i < n - 1 && a[i] == a[i + 1])
				i++;

			ans++;
		}
		cout << ans << endl;
	}
}
