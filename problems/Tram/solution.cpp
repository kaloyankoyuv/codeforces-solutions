#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int n, x;
	vector<int> v;
	cin >> n;
	int arr[n][2];
 
	for (int i=0; i<n; ++i) {
		cin >> arr[i][0] >> arr[i][1];
	}
 
	v.push_back(arr[0][1]);
 
	for (int i=0; i<n-1; ++i) {
		x = arr[i][1] - arr[i+1][0] + arr[i+1][1];
		arr[i+1][1] = x;
		v.push_back(x);
	}
 
	cout << *max_element(v.begin(), v.end());
	return 0;
}
