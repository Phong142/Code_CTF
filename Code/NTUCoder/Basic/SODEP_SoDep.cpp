#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s;
    cin >> s;
    long long sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=(s[i]-'0');
    }
    if(sum%10==9)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}