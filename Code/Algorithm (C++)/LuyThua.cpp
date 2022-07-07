#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long mod=1e10+7;
long long dq(long long a, long long b){
    if(b==0) return 1;
    if(b%2==0){
        long long p=dq(a, b/2);
        return (p*p)%mod;
    }
    else{
        long long p=dq(a, b-1);
        return (p*a)%mod;
    }
}
int main() {
    faster;
    long long a,b;
    while (1) {
        cin >> a >> b;
        if(a==0 && b==0) break;
        cout << dq(a,b) << endl;
    }
    return 0;
}