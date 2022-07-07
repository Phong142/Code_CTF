#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n, m;
    cin >> n >> m;
    int a[n+1];
    int b[m+1];
    int c[1001]={};
    for(int i=0; i<n; i++){
        cin >> a[i];
        c[a[i]]++;
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
        c[b[i]]++;
    }
    for(int i=0; i<1001; i++){
        if(c[i]>1)
            cout << i << " ";
    }
    return 0;
}