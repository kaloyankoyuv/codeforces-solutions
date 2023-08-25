#include <iostream>
using namespace std;

int main() {

	long long t;
	cin >> t;

	while (t--) {
		long long hc, dc;
		cin >> hc >> dc;

		long long hm, dm;
		cin >> hm >> dm;

		long long k, w, a;
		cin >> k >> w >> a;

		string ans = "NO";
		for (long long i=0; i<=k; i++) {
			long long nhc = hc + i*a;
			long long ndc = dc + (k-i)*w;

			if ((hm + ndc -1)/ndc <= (nhc + dm - 1)/dm) {
				ans = "YES";
				break;
			}
		}
		cout << ans << "\n";
		
	}
	return 0;
}
