#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int x;

  for (int i=n+1; true; i++) {

    bool prime = true;

    for (int j=2; j<i; j++) {
      if (i%j==0) {
	prime = false;
	break;
      }
    }
    
    if (prime == true) {
      x = i;
      break;
    }      
    
  }
  
  if (m == x) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
 
