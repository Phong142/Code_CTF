#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    long long n, k;
    cin >> n >> k;
    if(n==1) cout << 1;
    else{
        if(n%2==0){
            if(k<=n/2) cout << 2*k-1;
            else cout << 2*k-n;
        }
        else{
            if(k<=n/2+1) cout << 2*k-1;
            else cout << 2*k-1-n;
        }
    }
    return 0;
}