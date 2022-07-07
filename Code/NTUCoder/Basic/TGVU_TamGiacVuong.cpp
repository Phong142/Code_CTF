#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n+5][n+5];
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}