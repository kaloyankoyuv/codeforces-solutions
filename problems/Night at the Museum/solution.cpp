#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	s = "a" + s;

	int ans=0;

	for(int i=0; i<=s.length()-2; i++) {

		if(int(s[i+1]) > int(s[i])) {

			if(int(s[i+1]) - int(s[i]) <= 13) {
				ans = ans + int(s[i+1]) - int(s[i]);
			} else if (int(s[i+1]) - int(s[i]) > 13) {
				ans = ans + (26-(int(s[i+1]) - int(s[i])));
			}

		} else if (int(s[i+1]) < int(s[i])) {

			if(int(s[i]) - int(s[i+1]) <= 13) {
				ans = ans + int(s[i]) - int(s[i+1]);
			} else if (int(s[i]) - int(s[i+1]) > 13) {
				ans = ans + (26-(int(s[i]) - int(s[i+1])));
			}

		}
	}
	cout << ans;
}
