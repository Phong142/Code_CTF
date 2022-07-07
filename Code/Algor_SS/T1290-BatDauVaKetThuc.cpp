#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        if(s[0]==s[s.size()-1])
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
    return 0;
}