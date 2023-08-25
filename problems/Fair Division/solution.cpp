#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int sum_all = 0;
		int ones = 0;
		int twos = 0;

		int a[n];
		for (int i=0; i<=n-1; i++) {
			cin >> a[i];
			sum_all+=a[i];
			if (a[i] == 1) {
				ones++;
			} else if (a[i] == 2) {
				twos++;
			}
		}
		if (sum_all%2 != 0) {
			cout << "NO\n";
			continue;
		}

		if (ones >= 2) {
			cout << "YES\n";
		} else {
			if (n%2==0) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}

		}

	}

	return 0;
}
