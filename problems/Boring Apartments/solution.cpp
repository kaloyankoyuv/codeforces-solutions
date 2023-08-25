#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		string x;
		cin >> x;

		int dig = x[0] - '0' -1;

		int len = x.length();
		cout << dig*10 + len * (len+1) / 2 << "\n";
	}
		
	return 0;
}
