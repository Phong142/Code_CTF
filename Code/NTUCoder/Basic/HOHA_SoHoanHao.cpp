#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void hh(int n){
    long long sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) cout << "YES";
    else cout << "NO";
}
int main() {
    faster;
    int n;
    cin >> n;
    hh(n);
    return 0;
}