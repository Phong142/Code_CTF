#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void sangNTo(int n){
    int a[1001]={0};
    for(int i=2; i<=sqrt(n); i++){
        if(!a[i]){
            for(int j=i*i; j<=n; j+=i){
                a[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(!a[i])   
            cout << i << " ";
    }
}
int main() {
    faster;
    int n;
    cin >> n;
    sangNTo(n);
    return 0;
}