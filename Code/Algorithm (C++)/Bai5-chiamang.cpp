#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int chia(int n, int k){
    int a[1001];
    int sum1=0, sum2=0;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<k; i++)
        sum1+=a[i];
    for(int i=k; i<n; i++)
        sum2+=a[i];
    cout << sum2-sum1;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        chia(n,k);
        cout << endl;
    }
    return 0;
}