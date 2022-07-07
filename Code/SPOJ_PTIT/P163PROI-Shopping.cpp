#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int d1, d2, d3;
    cin >> d1 >> d2 >>d3;
    long long ar[5];
    ar[0]=d1+d2+d3;
    ar[1]=2*d1+2*d2;
    ar[2]=2*d1+2*d3;
    ar[3]=2*d2+2*d3;
    sort(ar, ar+4);
    cout << ar[0];
    return 0;
}