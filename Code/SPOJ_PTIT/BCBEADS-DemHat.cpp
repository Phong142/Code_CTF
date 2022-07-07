#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+1];
    int count=0;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=1; i<n; i++){
        if(a[i]!=a[i-1])
            count++;
    }
    cout << count;
    return 0;
}