#include <iostream>
#include <string>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  
  int x=1;
  
  for (int i=1; i<=n; ++i) {
    if (i%2==0) {

      if (x==1) {
	for (int j=0; j<m-1; ++j) {
	  cout << '.';
	}
	cout << '#';
	x=0;
      } else if (x==0) {
	cout << '#';
	for (int j=0; j<m-1; ++j) {
	  cout << '.';
	}
	x=1;
      }
      cout << endl;
      
    } else if (i%2!=0) {
      for (int j=0; j<m; ++j) {
	cout << '#';
      }
      cout << endl;
    }
  }
  return 0;
}
