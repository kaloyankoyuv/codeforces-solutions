#include <iostream>
#include <vector>
using namespace std;

int main() {

  int n, x, y;
  cin >> n;

  vector<int> v;

  cin >> x;
  for (int i=0; i<x; ++i) {
    int k;
    cin >> k;
    v.push_back(k);
  }

  cin >> y;
  for (int i=0; i<y; ++i) {
    int k;
    cin >> k;
    v.push_back(k);
  }
  int s = v.size();
  for (int i=0; i<v.size(); ++i) {
    for (int j=0; j<i; ++j) {
      if (v[i] == v[j]) {
	--s;
      }
    }
  }

  if (s == n) {
    cout << "I become the guy.";
  } else {
    cout << "Oh, my keyboard!";
  }
  return 0;
}
