#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n, m;
    cin >> n >> m;
    if(n<m)
        cout << n << " " << (m-n)/2;
    else
        cout << m << " " << (n-m)/2;
    return 0;
}