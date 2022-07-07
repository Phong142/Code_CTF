#include <bits/stdc++.h>

using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n, a[1001], ok[1001];
void inkq() {
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
void qlhv(int i) {
    for (int j = 1; j <= n; j++) {
        if (!ok[j]) {
            a[i] = j;
            ok[j] = 1;
            if (i == n)
                inkq();
            else qlhv(i + 1);
            ok[j] = 0;
        }
    }
}
int main() {
    cin >> n;
    qlhv(1);
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;
// #define faster ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0)
// int n, a[1001], ok[1001];
// void inkq() {
//     for (int i = 1; i <= n; i++)
//         cout << a[i];
//     cout << endl;
// }
// void qlhv(int i) {
//     for (int j = 1; j <= n; j++) {
//         if (!ok[j]) {
//             a[i] = j;
//             if (i == n)
//                 inkq();
//             else {
//                 ok[j] = 1;
//                 qlhv(i + 1);
//                 ok[j] = 0;
//             }
//         }
//     }
// }
// int main() {
//     cin >> n;
//     qlhv(1);
//     return 0;
// }