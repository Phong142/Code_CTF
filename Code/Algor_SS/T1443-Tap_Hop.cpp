#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, s, c[25], ans;
void in(){
    int t=0;
    for(int i=1; i<=k ;i++) t+=c[i];
    if(t==s) ans++;
}
void tryy(int i){
    for(int j=c[i-1]+1; j<=n-k+i; j++){
        c[i]=j;
        if(i==k) in();
        else tryy(i+1);
    }
}
int main() {
    faster;
    while(true){
        cin >> n >> k >> s;
        if(!n && !k && !s) break;
        ans=0;
        tryy(1);
        cout << ans << endl;
    }
    return 0;
}