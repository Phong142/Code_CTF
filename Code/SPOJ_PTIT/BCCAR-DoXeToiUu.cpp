#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[25];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        cout << (a[n-1]-a[0])*2 << endl;
    }
    return 0;
}