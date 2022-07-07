#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int f[100][100]={0};
    f[0][0]=1;
    for(int m=1; m<=n; m++)
        for(int v=m; v<=n; v++)
            if(m>v) f[m][v]=f[m-1][v];
            else
                f[m][v]=f[m-1][v]+f[m][v-m];
    cout << f[n][n];
    return 0;
}