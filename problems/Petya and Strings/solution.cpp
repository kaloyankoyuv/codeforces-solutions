#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
	string s1;
	string s2;
 
	cin >> s1 >> s2;
 
	for (int i=0; i<s1.length(); ++i) {
		char ch = tolower(s1[i]);
		s1[i] = ch;
	}
 
	for (int i=0; i<s2.length(); ++i) {
		char ch = tolower(s2[i]);
		s2[i] = ch;
	}
 
	if (s1 < s2) {
		cout << "-1";
	} else if (s2 < s1) {
		cout << "1";
	} else if (s1 == s2) {
		cout << "0";
	}
 
	return 0;
}
