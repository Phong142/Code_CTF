#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long mod=123456789;
long long sqr(long long x){
    return x*x;
}
long long mul(long long n){         // công thức chung: 2^(n-1)
    if(n==0) return 1;
    if(n==1) return 2;
    long long p=mul(n/2);
    if(n%2==0) return (sqr(p)%mod) % mod;
    return 2*(sqr(p)%mod) % mod;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        n--;
        cout << mul(n);
        cout << endl;
    }
    return 0;
}