#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int arr[2*n];
		for (int i=0; i<=(2*n)-1; i++) {
			cin >> arr[i];
		}

		int even = 0;
		int odd = 0;

		for (int i=0; i<=(2*n)-1; i++) {
			if (arr[i]%2==0) {
				even++;
			} else if (arr[i]%2!=0) {
				odd++;
			}

		}

		if (even == odd) {
			cout << "YES" << endl;
		} else if (even != odd) {
			cout << "NO" << endl;
		}
	}
}
