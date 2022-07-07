#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    string s;
    int count=0;
    for (int i=1; i<=n; i++){
        cin >> s;
        if(s=="X++"||s=="++X") count++;
        if(s=="X--"||s=="--X") count--;
    }
    cout << count;
    return 0;
}