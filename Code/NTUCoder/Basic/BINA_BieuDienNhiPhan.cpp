#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    long long n;
    cin >> n;
    string sum="";
    while(n){
        sum+=n%2+'0';
        n/=2;
    }
    for(int i=sum.size()-1; i>=0; i--){
        cout << sum[i];
    }
    return 0;
}