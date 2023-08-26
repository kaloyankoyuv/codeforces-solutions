#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> v;
	for (int i=0; i<=n-1; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int s = 0;
	int d = 0;
	int i=0;

	for (int i=0; i<=n-1; i++) {
		if (i%2==0) {
			if (i==n-1) {
				s+= v.front();
			} else if (v.front() > v.back()) {
				s+=v.front();
				v.erase(v.begin());
			} else if (v.front() < v.back()) {
				s+=v.back();
				v.pop_back();
			}
		} else if (i%2!=0) {
			if (i==n-1) {
				d+= v.front();
			} else if (v.front() > v.back()) {
				d+=v.front();
				v.erase(v.begin());
			} else if (v.front() < v.back()) {
				d+=v.back();
				v.pop_back();
			}
		}
	}

	cout << s << ' ' << d << "\n";

	return 0;
}
