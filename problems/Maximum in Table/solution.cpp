#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[n][n];

	for (int i=0; i<=n-1; i++) {
		for (int j=0; j<=n-1; j++) {

			if (i==0) {
				arr[0][j] = 1;
				continue;
			}
			if (j==0) {
				arr[i][0] = 1;
				continue;
			}

			arr[i][j] = arr[i-1][j] + arr[i][j-1]; 
		}
	}

	cout << arr[n-1][n-1];
	return 0;
}
