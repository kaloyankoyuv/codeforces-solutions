#include <iostream>
#include <string>
using namespace std;

int main() {
    int w, p1, p2;
    string s;
    cin >> w;

    for (int i=0; i<w; ++i) {
        p1 = i;
        p2 = w-i;
        
        if (p1%2==0 && p2%2==0 && p1!=0 && p2!=0) {
            s = "YES";
            break;
        } else {
            s = "NO";
        }

    }
    cout << s;
    return 0;
}
