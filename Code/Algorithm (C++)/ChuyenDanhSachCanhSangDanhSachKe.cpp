#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int v, e;
        cin >> v >> e;
        vector<int> ke[v+5];
        for(int i=0; i<e; i++){
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b); //thêm đỉnh b vào ds kề đỉnh a
            ke[b].push_back(a);
        }
        for(int i=1; i<=v; i++){
            sort(ke[i].begin(), ke[i].end());
        }
        for(int i=1; i<=v; i++){
            cout << i << ':';
            for(int j=0; j<ke[i].size(); j++)
                cout << ' ' << ke[i][j];
            cout << endl;
        }
    }
    return 0;
}