#include<bits/stdc++.h>

using namespace std;
int F[1005][1005]={0};
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int res = 0;
        memset(F, 0, sizeof(F));
        for(int i = 1; i <= s1.length(); i++) {
            for(int j = 1; j <= s2.length(); j++) {
                if(s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1] + 1;
                else F[i][j] = max(F[i-1][j],F[i][j-1]);
                res = max(res,F[i][j]);
            }
        }
        cout << res << endl;
    }
}