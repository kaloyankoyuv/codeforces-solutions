#include <iostream>
using namespace std;

int solve(string n) {
  int ans=0;
  int i=0;
  string pi = "3141592653589793238462643383279";
  while (n[i]==pi[i]) {
    ans++;
    i++;
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;

    cout << solve(n) << endl;
  }
  
  return 0;
}
