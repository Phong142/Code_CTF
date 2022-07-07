#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]==1) sum--;
        if(a[i]==2) sum++;
    }
    cout << abs(sum);
    return 0;
}