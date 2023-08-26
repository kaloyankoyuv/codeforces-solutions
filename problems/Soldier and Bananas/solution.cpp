#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	int k, n, w, x;
        int y = 0;
	cin >> k >> n >> w;
 
	for (int i=1; i<=w; ++i) {
		x = i*k;
		y +=x;
	}
	
	if (y-n<0) {
		cout << 0;
	} else if (y-n>=0) {
		cout << y-n;
	}
 
	return 0;
}
