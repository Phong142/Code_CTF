#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int v[105]={0}, n, m, a[105][105];
int main() {
    faster;
    // int n, a[100][100], ans[100][100], c=0, visit[105]={0};
    int u;
    cin >> n >> m >> u;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=100; j++)
            a[i][j]=0;
    }
    for(int i=1; i<=m; i++){
        int c, d;
        cin >> c >> d;
        a[c][d]=1;
        a[d][c]=1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    v[u]=1;
    queue <int> q;
    q.push(u);
    cout << u << " ";
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=1; i<=n; i++){
            if(a[x][i]==1 && v[i]==0){
                v[i]=1;
                cout << i << " ";
                q.push(i);
            }
        }
    }
}