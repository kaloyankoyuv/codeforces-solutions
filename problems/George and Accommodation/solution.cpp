#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][2];
	int r=0;

	for (int i=0; i<n; ++i) {
		cin >> a[i][0] >> a[i][1]; 
		if (a[i][1] - a[i][0] >= 2) {
			++r;
		}
	}

	cout << r;
	return 0;
}
