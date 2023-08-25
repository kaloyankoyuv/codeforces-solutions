#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a=0;
    int d=0;

    for (int i=0; i<s.size(); ++i) {
        if (s[i] == 'A') {
            ++a;
        } else if (s[i] == 'D') {
            ++d;
        }
    }

    if (a>d) {
        cout << "Anton";
    } else if (d>a) {
        cout << "Danik";
    } else if (d==a) {
        cout << "Friendship";
    }
    

    return 0;
}
