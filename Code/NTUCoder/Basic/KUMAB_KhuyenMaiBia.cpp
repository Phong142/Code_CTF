#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int a, b;
    cin >> a >> b;
    int mul=sqrt(b);
    int s=mul-a+1;
    cout << s;
    return 0;
}