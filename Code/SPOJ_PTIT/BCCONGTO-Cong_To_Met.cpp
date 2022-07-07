#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    while(1){
        string s;
        cin >> s;
        if(s=="0") break;
        long long sum=0;
        for(int i=0; i<s.length();i++){
            int so=s[i]-'0';
            if(so>4) 
                so--;
            sum=sum*9+so;
        }
        cout << s << ": " << sum << endl;
    }
    return 0;
}