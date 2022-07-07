#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    vector<int> a[n+5];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n ;j++){
            int s;
            cin >> s;
            if(s==1) a[i].push_back(j);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<a[i].size(); j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}

// int main(){
//     faster;
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         vector<int> a;
//         for(int j=1; j<=n; j++){
//             int s;
//             cin >> s;
//             if(s==1) a.push_back(j);
//         }
//         for(int j=0; j<a.size(); i++)
//             cout << a[j] << ' ';
//         cout << endl;
//     }
// }