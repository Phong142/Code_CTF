#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n, l[1001]={0}, a[1001], res=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=n-1; i>=0; i--){
        int lmax=0;
        for(int j=i+1; j<n; j++)
            if(a[i]<a[j] && l[j]>lmax) lmax=l[j];
        l[i]=lmax+1;
        if(l[i]>res) res=l[i];
    }
    cout << res;
    return 0;
}
