#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string r = "YES";
        for (int i=0; i<=n-2; i++) {
            if (s[i] != s[i+1]) {
                for (int j=i+1; j<=n-1; j++) {
                    if (s[i] == s[j]) {
                        r = "NO";
                    }
                }
            }
        }
        cout << r << endl;

    }

    return 0;
}
