#include <iostream>
using namespace std;

int main() {

    int n;
    double r=0;
    cin >> n;
    double a[n];

    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    
    for (int i=0; i<n; ++i) {
        r+=a[i];
    }

    double x = n;
    cout.precision(14);
    cout << (r/(x*100))*100;
    
    return 0;
}
