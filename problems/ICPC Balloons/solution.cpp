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

		int ans = 2;
		for (int i=1; i<=n-1; i++) {
			bool solved = false;
			for (int j=0; j<=i-1; j++) {
				if (s[i] == s[j]) {
					solved = true;
					break;
				}
			}
			if (solved == true) {
				ans++;
			} else if (solved == false) {
				ans+=2;
			}
		}
		cout << ans << endl;
	}
}
