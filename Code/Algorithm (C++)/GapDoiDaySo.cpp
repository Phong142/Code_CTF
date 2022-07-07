#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int tk(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    long long p=tk(n/2);
    if(n%2==1) return 2*p*p;
    return p*p;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        long long k;
        cin >> n >> k;
        long long len=tk(n)/2;
        while(1){
            if(n==1){
                cout << 1;
                break;
            }
            if(len==k){
                cout << n;
                break;
            }
            if(k>len){
                k=len-(k-len);
            }
            n--;
            len/=2;
        }
        cout << endl;
    }
    return 0;
}