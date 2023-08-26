#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		if (n!=5) {
			cout << "NO" << endl;
		} else if (n==5) {
			int T = 0, i = 0, m = 0, u = 0, r = 0;
			for(int j=0; j<=s.length()-1;j++) {
				if (s[j] == 'T') {
					T++;
				} else if (s[j] == 'i') {
					i++;
				} else if (s[j] == 'm') {
					m++;
				} else if (s[j] == 'u') {
					u++;
				} else if (s[j] == 'r') {
					r++;
				}
			}

			if (T==1 && i==1 && m==1 && u==1 && r==1) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
}
