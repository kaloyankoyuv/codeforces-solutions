#include <iostream>
using namespace std;

bool endsInThree(int x) {

  string s = to_string(x);
  if (s[s.length()-1] != '3') {
    return false;
  } else {
    return true;
  }
  
}

int main() {
  
  int t;
  cin >> t;

  while (t--) {

    int k;
    cin >> k;

    int i = 0;
    while (1) {
      i++;
      if (i%3==0 || endsInThree(i)) {
	continue;
      }
      --k;
      if (k == 0) {
	cout << i << "\n";
	break;
      }
      
      
    }
  }
  
  return 0;
}
