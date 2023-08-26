#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    int r=0;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    for (int i=0; i<n; ++i) {
        if ( a[i] >0) {        
            if (a[i] >= a[k-1]) {
                ++r;
            }
        }
    }
    cout << r;
    return 0;
}
