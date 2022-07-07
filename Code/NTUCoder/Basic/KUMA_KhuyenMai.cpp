#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t, m, n;
    cin >> m >> n >> t;
    int count=0;
    int cnt=0;
    for(int i=1; i<=n; i++){
        count++;
        if(count==m)
            cnt++;
    }
    cout << n*t-cnt*t;
    return 0;
}