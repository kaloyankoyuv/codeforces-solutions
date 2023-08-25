#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		string str_n;
		cin >> str_n;

		int dig_n = stoi(str_n);
		if (dig_n%7==0) {
			cout << dig_n << "\n";
		} else {
			int i=0;
			str_n[str_n.length()-1] = '0';
			while (dig_n%7!=0) {
				dig_n = stoi(str_n);
				str_n[str_n.length()-1]++;
			}
			cout << dig_n << "\n";
		}

	}
	return 0;
}
