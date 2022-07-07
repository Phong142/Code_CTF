#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int m, n, k;
    cin >> m >> n >> k;
    int maxdoi=min(m/2, n);
    if(m-maxdoi*2+n-maxdoi>=k)
        cout << maxdoi << endl;
    else{
        while(maxdoi>0 && m-maxdoi*2+n-maxdoi<k){
            maxdoi--;
        }
        cout << maxdoi << endl;
    }
    return 0;
}