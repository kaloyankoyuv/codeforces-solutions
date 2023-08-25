#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	
	if (n%2==0) {
		if (k <= n/2) {
			cout << k*2 - 1;
		} else {
			long long x = k - n/2;
			cout << x*2;
		}
	} else {
		if (k <= n/2 + 1) {
			cout << k*2 - 1;
		} else {
			long long x = k - n/2 - 1;
			cout << x*2;
		}
	}

}
 
