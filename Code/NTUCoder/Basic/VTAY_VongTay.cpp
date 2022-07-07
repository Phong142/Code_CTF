#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int s=n/7;
    int s2=n%7;
    if(s%2==0){
        cout << 7-s2 << " " << s2; 
    }
    else cout << s2 << " " << 7-s2;
    return 0;
}