#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	int x;
	cin >> x;	
	
	if (x%5==0) {
		cout << x/5;
	} else if (x%5 <= 5) {
		cout << x/5+1;
	} else if (x%5 > 5) {
		cout << x/5+2;
	}
 
 
	return 0;
}
