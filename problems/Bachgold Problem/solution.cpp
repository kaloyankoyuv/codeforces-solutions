#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	if (n%2==0) {
		cout << n/2 << "\n";
		for (int i =0; i<=n/2 -1; i++) {
			cout << 2 << ' ';
		}
	} else if (n%2!=0) {
		cout << n/2 << "\n";
		for (int i=0; i<=n/2-1; i++) {
			if (i==n/2-1) {
				cout << 3;
				break;
			}

			cout << 2 << ' ';
		}
	}

	return 0;
}
