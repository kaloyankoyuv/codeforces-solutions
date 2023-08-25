#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		for (int i=0; i<=n-1; i++) {
			cin >> arr[i];
		}

		bool b = true;
		for (int i=1; i<=n-1; i++) {
			for (int j=0; j<i; j++) {
				if (arr[i] == arr[j]) {
					b = false;
					break;
				}
			}
			if (b == false) {
				break;
			}
		}
		if (b == true) {
			cout << "YES" << endl;
		} else if (b == false) {
			cout << "NO" << endl;
		}
	}
}
