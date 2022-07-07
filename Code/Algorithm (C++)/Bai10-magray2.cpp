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
        for(int i=0; i<s.size();i++){
            if(i==0) cout << s[i];
            else{
                if(s[i]!=s[i-1]) cout << 1;     //xor(i-1,i)
                else cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}