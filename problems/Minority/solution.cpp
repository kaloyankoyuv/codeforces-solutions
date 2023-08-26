#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int zeros=0;
		int ones=0;
		for (int i=0; i<s.length(); i++) {
			if (s[i] == '0') {
				zeros++;
			} else if (s[i] == '1') {
				ones++;
			}
		}

		if (zeros == ones) {
			cout << min(zeros, ones) - 1 << "\n";
		} else {
			cout << min(zeros, ones) << "\n";
		}
	}
	return 0;
}
