#include <iostream>
using namespace std;

int main() {

  int n;
  int x=0;
  string result;
  cin >> n;
  int a[n];

  for (int i=0; i<n; ++i){
    cin >> a[i];
  }
  for (int i=0; i<n; ++i){
    if (a[i] == 1) {
      ++x;
    }
  }
  if (x == 0) {
    result = "EASY";
  } else {
    result = "HARD";
  }
  cout << result;
  return 0;
}
