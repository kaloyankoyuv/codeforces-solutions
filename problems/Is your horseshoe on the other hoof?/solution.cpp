#include <iostream>
using namespace std;

int main() {

    int a[4];
    int x = 1;
    bool b;

    for (int i=0; i<4; ++i) {
        cin >> a[i];
    }

    for (int i=1; i<4; ++i) {
        for (int j = 0; j<i; ++j) {
            if (a[i] != a[j]) {
                b = true;
            } else {
                b = false;
                break;
            }
        }
        if (b == true) {
            ++x;
        }
    }

    cout << 4-x;
    return 0;
}
