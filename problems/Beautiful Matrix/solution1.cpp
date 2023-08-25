#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
	int m[5][5];
	int result = 0;
	int x, y;
 
	for (int i=0; i<5; ++i) {
		for (int j=0; j<5; ++j) {
			cin >> m[i][j];
			if (m[i][j] == 1) {
				x = i;
				y = j;	
			}
		}
	}
 
	if (x == 0) {
		result += 2;
	} else if (x == 1) {
		result += 1;
	} else if (x == 2) {
		result += 0;
	} else if (x == 3) {
		result += 1;
	} else if (x == 4) {
		result += 2;
	}
 
	if (y == 0) {
		result += 2;
	} else if (y == 1) {
		result += 1;
	} else if (y == 2) {
		result += 0;
	} else if (y == 3) {
		result += 1;
	} else if (y == 4) {
		result += 2;
	}
 
	cout << result;
	return 0;
}
