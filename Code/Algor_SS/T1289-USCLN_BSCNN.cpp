#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long m, n;
        cin >> m >> n;
        cout << __gcd(m, n) << " ";
        cout << m*n/__gcd(m, n);
        cout << endl;
    }
    return 0;
}