#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long nt(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) if (n % i == 0) return 0;
    return 1;
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        long long n, dem =0;
        cin >> n;
        for(int i = 2; i <= sqrt(n);i++){
            if(nt(i)) dem ++;
        }
        cout << dem << endl;
    }
}