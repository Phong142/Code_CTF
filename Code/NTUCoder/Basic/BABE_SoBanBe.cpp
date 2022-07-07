#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int bbe(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0) sum+=i;
    }
    return sum;
}
int main() {
    faster;
    int m, n;
    cin >> m >> n;
    if(bbe(m)==n && bbe(n)==m) cout << "YES";
    else cout << "NO";
    return 0;
}