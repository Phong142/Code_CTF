#include <bits/stdc++.h>

using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int a[n + 5] = {}, count = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
        cout << "Buoc " << count << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        count++;
        cout << endl;
    }
    return 0;
}