#include <iostream>
using namespace std;

void zeromult (int x) {
  for (int i=0; i<=x-1; i++) {
    cout << '0';
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int n=0;
    for (int i=0; i<=s.length() -1; i++) {
      if (s[i] != '0') {
	n++;
      }
    }
    cout << n << endl;
    for(int i=0; i<=s.length() - 1; i++) {
      if (s[i] != '0') {
	cout << s[i];
	zeromult(s.length()-1-i);
        cout << ' ';
      }
    }

    cout << endl;
  }
}
