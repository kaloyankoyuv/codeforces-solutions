#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int x=0,y=0;
		int n;
		cin >> n;

		string s;
		cin >> s;

		bool b = false;
		for (int i=0; i<=n-1; i++) {
			if (s[i] == 'U') {
				y++;
			} else if (s[i] == 'D') {
				y--;
			} else if (s[i] == 'R') {
				x++;
			} else if (s[i] == 'L') {
				x--;
			}
			if (x==1 && y ==1) {
				b = true;
				break;
			}
		}
		if (b) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
