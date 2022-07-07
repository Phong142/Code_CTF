#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long x;
        cin >> x;
        int sum=0;
        sum=x%9;
        if(sum==0) cout << 9 << endl; // in ra 9 vì số nén phải > 0
        else cout << sum << endl;
    }
    return 0;
}