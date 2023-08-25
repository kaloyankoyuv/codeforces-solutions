#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[n][2];
	for (int i=0; i<n; i++) {
		for (int j=0; j<2; j++) {
			cin >> a[i][j];
		}
	}
	
	int r=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i!=j && a[i][0] == a[j][1]) {
				r++;
			} 
		}
	}

	cout << r;
	return 0;
}
