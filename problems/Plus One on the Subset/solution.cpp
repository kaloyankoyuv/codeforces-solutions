#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int a[n];

		for (int i=0; i<n; ++i) {
			cin >> a[i];
		}

		int lnum = a[0];
		int snum = a[0];

		for (int i=0; i<n; ++i) {
			if (a[i] >= lnum) {
				lnum = a[i];
			}
		}

		for (int i=0; i<n; ++i) {
			if (a[i] <= snum) {
				snum = a[i];
			}
		}
		
		cout << lnum - snum << endl;
	}

	return 0;
}
