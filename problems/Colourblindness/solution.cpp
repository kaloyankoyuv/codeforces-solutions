#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string s1, s2;
		cin >> s1 >> s2;

		bool ans = true;
		for (int i=0; i<=n-1; i++) {
			if (s1[i] == 'R' && s2[i] != 'R') {
				ans = false;
				break;
			} else if (s1[i] == 'G' && s2[i] == 'R') {
				ans = false;
				break;
			} else if (s1[i] == 'B' && s2[i] == 'R') {
				ans = false;
				break;
			}
		}
		if (ans == true) {
			cout << "YES" << endl;
		} else if (ans == false) {
			cout << "NO" << endl;
		}
	}
}
