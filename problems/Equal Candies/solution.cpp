#include <iostream>
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
		int min = arr[0];
		for (int i=1; i<=n-1; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}

		int ans = 0;
		for (int i=0; i<=n-1; i++) {
			if (arr[i] != min) {
				ans = ans + arr[i] - min;
			}
		}
		cout << ans << endl;

	}
}
