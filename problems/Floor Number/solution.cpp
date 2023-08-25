#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int apNum, numOfApsPerFloor;
    cin >> apNum >> numOfApsPerFloor;
    
    if (apNum == 1 || apNum == 2) {
      cout << 1 << endl;
    } else {
      int flNum = 2;
      int i = 3;
      int j = 1;
      while (true) {
	if (i == apNum) {
	  cout << flNum << endl;
	  break;
	}

	if (j == numOfApsPerFloor) {
	  flNum++;
	  j = 0;
	}
	i++;
	j++;
      
      }
    }
  }
}
