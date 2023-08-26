#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	string s;
	int u=0;
	int l=0;
	cin >> s;
 
 
	for (int i=0; i<s.length(); ++i) {
		if (s[i] == tolower(s[i])) {
			++l;		
		} 
	       	if (s[i] == toupper(s[i])) {
			++u;	
		}
	}
	if (u>l) {
		for (int i=0; i<s.length(); ++i) {
			s[i] = toupper(s[i]);
		}
	} else if (l>=u) {
		for (int i=0; i<s.length(); ++i) {
			s[i] = tolower(s[i]);
		}
	}
	cout << s;
	return 0;
}
