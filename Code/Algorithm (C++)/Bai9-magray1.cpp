#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int k=1;
        for(int i=1; i<=n; i++)
            k*=n;
        string s[k+5];
        s[1]='0';
        s[2]='1';
        if(n>1){
            int t=2;
            for(int i=2; i<=n; i++){
                int l=1;
                for(int j=1; j<=i; j++)
                    l*=2;
                for(int j=1; j<=t; j++){
                    s[l-j+1]='1'+s[j];
                    s[j]='0'+s[j];
                }
                t=l;
            }
        }
        for(int i=1; i<=k; i++)
            cout << s[i] << ' ';
        cout << endl;
    }
    return 0;
}