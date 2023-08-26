#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	int n;
	int result = 0;
	string s;
	cin >> n;
	cin >> s;
 
	for (int i=0; i<n; ++i) {
		if (s[i] == s[i+1]) {
			++result;
		}
	}
	cout << result;
 
	return 0;
}
