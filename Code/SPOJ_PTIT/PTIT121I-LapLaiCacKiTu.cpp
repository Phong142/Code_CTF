#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, r;
        string s;
        cin.ignore();
        cin >> n >> r;
        cin >> s;
        cout << n << " ";
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < r; j++)
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}