#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    while(1){
        int n, m;
        cin >> n >> m;
        if(n==0 && m==0)
            break;
        char a[101][101]={};
        long long b[101][101]={};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='*')
                    b[i][j]=-1;
                else{
                    if(a[i+1][j]=='*')
                        b[i][j]++;
                    if(a[i][j+1]=='*')
                        b[i][j]++;
                    if(a[i-1][j]=='*')
                        b[i][j]++;
                    if(a[i][j-1]=='*')
                        b[i][j]++;
                    if(a[i-1][j-1]=='*')
                        b[i][j]++;
                    if(a[i-1][j+1]=='*')
                        b[i][j]++;
                    if(a[i+1][j-1]=='*')
                        b[i][j]++;
                    if(a[i+1][j+1]=='*')
                        b[i][j]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[i][j]>=0)
                    cout << b[i][j];
                else if(b[i][j]==-1)
                    cout << '*';    
            }
            cout << endl;
        }
    }
    return 0;
}