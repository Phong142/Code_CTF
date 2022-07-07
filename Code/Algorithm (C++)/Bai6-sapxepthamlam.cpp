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
        int check=0;
        int a[1001], b[1001]={};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b, b+n);
        for(int i=0; i<n; i++){
            if(a[i]==b[i] || a[i]==b[n-i-1])
                check++;
            else
                check=0;
        }
        if(check > 0)
            cout << "YES";
        else
            cout <<"NO";
        cout << endl;
    }
    return 0;
}