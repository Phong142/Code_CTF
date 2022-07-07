#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s, bin="";
        cin >> s;
        bin=s[0];
//      bin[i]=bin[i-1] ^ s[i]              s= 01101
//      n<=> i-1                            bin=01001
        for(int i=1; i<s.size(); i++){     
            int n=bin.size()-1;
            if(bin[n]!=s[i]) bin+='1';
            else bin+='0';
        }
        cout << bin << endl;
    }
    return 0;
}