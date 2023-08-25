#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool b(string s) {

    sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++) {
        if(s[i]==s[i+1]) {
            return true;
        }
    }

    return false;
}

int main() {

    int y;
    cin >> y;
    ++y;
    string s = to_string(y);

    while (b(s)) {
        ++y;
        s = to_string(y);
    }

    cout << y;
    return 0;
}
