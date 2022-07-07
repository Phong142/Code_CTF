#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    long long mul=1;
    for(int i=1; i<=n; i++){
        mul*=i;
    }
    cout << mul;
    return 0;
}