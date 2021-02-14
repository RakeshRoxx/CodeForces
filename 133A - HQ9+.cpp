#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (char x : s) {
        if (x == 'H' || x == 'Q' || x == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}