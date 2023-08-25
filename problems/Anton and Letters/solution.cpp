#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;
  int output=0;
  bool b;
  getline(cin, input);

  for (int i=0; i<input.size(); ++i) {
    for (int j=0; j<i; ++j) {
      if (input[i] >= 'a' && input[i] <= 'z' && input[i] != input[j]) {
	b = true;
      } else {
	b = false;
	break;
      }
    }
    if (b == true) {
      ++output;
    }
  }
  cout << output -1;
  return 0;
}
