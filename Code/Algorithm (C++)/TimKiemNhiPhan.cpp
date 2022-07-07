#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int tk(int a[], int l, int r, int x){
    int mid=(l+r)/2;
    if(a[mid]==x) return 1;
    else if(a[mid]>x) return tk(a, l, mid-1, x);
    else return tk(a, mid+1, r , x);
    return 0;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n,k, a[1001];
        cin >> n;
        for(int i=1; i<=n; i++)
            cin >> a[i];
        int l=a[0], r=a[n-1];
        for(int i=1; i<=n; i++){
            if(tk(a, l, r, k)) cout << i;
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}