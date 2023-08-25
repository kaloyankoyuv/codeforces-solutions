#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		char c;
		cin >> c;

		string s = "codeforces";

		bool b = false;
		for (int i=0; i<=s.length() -1; i++) {
			if (c == s[i]) {
				b = true;
				break;
			}
		}
		if(b)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
