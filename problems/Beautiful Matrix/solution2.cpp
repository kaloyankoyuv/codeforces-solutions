#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int m[5][5];
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

	cout << abs(2-x) + abs(2-y); 
	return 0;
}
