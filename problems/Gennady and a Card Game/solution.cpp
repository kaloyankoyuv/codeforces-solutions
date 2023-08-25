#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	cin >> s1;

	string c1, c2, c3, c4, c5;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	string s2 = c1 + c2 + c3 + c4 + c5;

	bool b = false;
	for (int i=0; i<=s2.length(); i++) {
		if (s2[i] == s1[0] || s2[i] == s1[1]) {
			b = true;
			break;
		}
	}
	if (b == true) {
		cout << "YES" << endl;
	} else if (b == false) {
		cout << "NO" << endl;
	}
}
