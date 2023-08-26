#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	int n, k;
	cin >> n >> k;
 
	if (n>=10) {
		for (int i=0; i<k; ++i) {
			if (n%10==0) {
				n /= 10;
			} else {
				--n;
			}
		}
		cout << n;
	} else {
		for (int i=0; i<k; ++i) {
				--n;
		}
		cout << n;
	}
	return 0;
}
