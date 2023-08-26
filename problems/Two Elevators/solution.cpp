#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		if (b>c) {
			if (b > a) {
				cout << 1 << endl;
			} else if (b<a) {
				cout << 2 << endl;
			} else if (b==a) {
				cout << 3 << endl;
			}
		} else if (b<c) {
			if ((c - b) + c > a) {
				cout << 1 << endl;
			} else if ((c-b)+c<a) {
				cout << 2 << endl;
			} else if ((c-b)+c==a) {
				cout << 3 << endl;
			}
		}
	}
}
