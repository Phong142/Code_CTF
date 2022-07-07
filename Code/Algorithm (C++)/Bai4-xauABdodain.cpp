#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001];
void qlab(int i){
    for(int j=0; j<=1; j++){
        a[i]=j;
        if(i==n){
            for(int k=1; k<=n; k++){
                if(a[k]==0) cout << 'A';
                else cout << 'B';
            }
            cout << ' ';
        }
        else qlab(i+1);
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        qlab(1);
        cout << endl;
    }
    return 0;
}