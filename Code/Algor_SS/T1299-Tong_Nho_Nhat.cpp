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
        int a[n+5];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        long long sumc=0, suml=0;
        for(int i=0; i<n; i++){
            if(i%2==0)
                sumc=sumc*10+a[i];
            else
                suml=suml*10+a[i];
        }
        cout << sumc+suml;
        cout << endl;
    }
    return 0;
}