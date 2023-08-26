#include <iostream>
 #include<math.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n>=4) {
            int a[n];
            for (int i=0; i<=n-1; i++) {
                a[i] = pow(2, i+1);
            }

            int pile1 = a[n-1];
            int pile2 = 0;

            // 2, 4, 8, 16, 32, 64
            for (int i=0; i<n/2-1; i++) {
                pile1 += a[i];
            }

            for (int i=n/2-1; i<=n-2; i++) {
                pile2 += a[i];
            }

            int r = pile1 - pile2;
            cout << r << "\n";

        } else if (n==2) {
            cout << 2 << "\n";
        }
    }

    return 0;
}
