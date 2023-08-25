#include <iostream>
using namespace std;

int main() {

  int k, r;
  cin >> k >> r;

  int x=1;

  while ((x*k)%10!=r) {
    if ( (x*k)%10==0) {
      break;
    }
    ++x;
  }

  cout << x;
  
  return 0;
}
