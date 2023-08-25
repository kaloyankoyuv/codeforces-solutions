#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}

	int li=0;
	int lnum = a[0];
	for (int i=0; i<n; i++) {
		if (a[i] > lnum) {
			lnum = a[i];
			li = i;
		}
	}

	int si=0;
	int snum = a[0];
	for (int i=0; i<n; i++) {
		if (a[i] <= snum) {
			snum = a[i];
			si = i;
		}
	}

	if (li < si) {

		int r=0;
		while (li != 0) {
			li--;		
			r++;
		}
		while (si != n-1) {
			si++;		
			r++;
		}
		cout << r;
	} else if (li > si) {

		int r=0;
		while (li != 0) {
			li--;		
			r++;
		}
		while (si != n-1) {
			si++;		
			r++;
		}
		cout << r-1;
	}
	return 0;
}
