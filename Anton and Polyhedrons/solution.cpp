#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	string a[n];
	for (int i=0; i<n; ++i) {
		cin >> a[i];
	}
	
	int r=0;
	for (int i=0; i<n; ++i) {
		if (a[i] == "Icosahedron") {
			r+= 20;
		} else if (a[i] == "Tetrahedron") {
			r+= 4;
		} else if (a[i] == "Cube") {
			r+= 6;
		} else if (a[i] == "Octahedron") {
			r+= 8;
		} else if (a[i] == "Dodecahedron") {
			r+= 12;
		} 
	}
	cout << r;
	return 0;
}
