#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	string s;
	cin >> s;
 
	char ch = toupper(s[0]);
	s = s.erase(0, 1);
	s = s.insert(0,1, ch);
	cout << s;
 
 
	return 0;
}
