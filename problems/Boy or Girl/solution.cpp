#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	
	int n=0;
	string s;
	cin >> s;
 
	for (int i=0; i<s.length(); ++i) {
		bool b = false;
		for (int j=0; j<s.length(); ++j) {
			if (s[i] == s[j] && i<j) {
				b=true;
				break;
			} 
		}
		if (!b) {
			++n;
		}
	}
	if (n%2!=0) {
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}
	return 0;
}
