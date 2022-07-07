#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    while (1) {
        cin >> n;
        if(n==0) break;
        int cnt=1;
        while(n!=1){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n=n*3+1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}