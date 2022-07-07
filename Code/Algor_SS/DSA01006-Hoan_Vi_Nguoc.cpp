#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int a[15], n, b[15];
void in() {
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void tryy(int i){
    for(int j=n; j>=n; j--){
        if(b[j]==0){
            a[i]=j;
            b[j]=1;
            if(i==n) in(); 
            else tryy(i+1);
            b[j]=0;
        }
    }
}
int main() {
    faster;
    cin >> n;
    tryy(1);
    return 0;
}