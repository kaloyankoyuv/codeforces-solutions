#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, h;
	int r=0;
	cin >> n >> h;
	int a[n];

	for (int i=0; i<n; ++i) {
		cin >> a[i];	
	}
	
	for (int i=0; i<n; ++i) {
		if (a[i]>h) {
			r+=2;
		} else if (a[i] <=h) {
			++r;
		}
	}

	cout << r;
	return 0;
}
