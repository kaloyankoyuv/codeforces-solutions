#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i=0; i<=n-1; i++) {
		cin >> a[i];
	}

	vector<int> v = {1};
	int counter = 1;
	for (int i=1; i<=n-1; i++) {
		if (a[i] > a[i-1]) {
			counter = counter + 1;
			v.push_back(counter);
		} else if (a[i] <= a[i-1]) {
			counter = 1;
		}
	}

	cout << *max_element(v.begin(), v.end());
}
