#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
int main() {
	
	int a, b;
	int result=0;
	cin >> a >> b;
 
	while (a<=b) {
		a*=3;
		b*=2;
		++result;
	}
	cout << result;
 
	return 0;
}
