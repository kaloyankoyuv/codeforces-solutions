#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

	int side = min(max(a * 2, b), max(a, b * 2));
	cout << side*side << endl;

    }

    return 0;
}
