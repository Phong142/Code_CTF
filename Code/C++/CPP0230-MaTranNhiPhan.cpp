#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n + 5][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++) {
        int m = 0, k = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1) m++;
            else k++;
        }
        if (m > k) dem++;
    }
    cout << dem << endl;
    return 0;
}