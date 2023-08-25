#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
	int x = 0;
	int n;
	cin >> n;
	for (int i=0; i<n; ++i) {
		string st;
		cin >> st;
		if (st == "X++" || st == "++X") {
			++x;
		} else if (st == "X--" || st == "--X") {
			--x;
		}
	}
	cout << x;
	return 0;
}
