#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int ans=n;
		if (n%2==0) {
			for (int i=0; i<=n/2 -1; i++) {
				if (s[i]==s[n-1-i]) {
					break;
				} else if (s[i]!=s[n-1-i]) {
					ans-=2;
				}
			}
		} else if (n%2!=0) {
			for (int i=0; i<=(n-1)/2 -1; i++) {
				if (s[i]==s[n-1-i]) {
					break;
				} else if (s[i]!=s[n-1-i]) {
					ans-=2;
				}
			}
		}
		cout << ans << endl;
	}
}
