#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[2*n];
        for (int i=0; i<=2*n-1; i++) {
            cin >> a[i];
        }

        cout << a[0] << ' ';
        for (int i=1; i<=2*n-1; i++) {
            bool is_uniqe = true;
            for (int j=0; j<i; j++) {
                if (a[i] == a[j]) {
                    is_uniqe = false;
                    break;
                }
            }
            if (is_uniqe) {
                cout << a[i] << ' ';
            }
        }

        cout << "\n";

    }

    return 0;
}
