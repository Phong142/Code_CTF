#include <bits/stdc++.h>

using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    faster;
    int n, k, f[101][101] = {0};
    cin >> n >> k;
    // if (k <= 9) f[1][k] = 1;
    // else f[1][k] = 0;
    for (int i = 1; i <= 9; i++) f[1][i] = 1;
    for (int i = 2; i <= n; i++)
        for (int t = 0; t <= 9; t++)
            if (k - t >= 0) f[i][k] += f[i - 1][k - t];
    cout << f[n][k];
    return 0;
}