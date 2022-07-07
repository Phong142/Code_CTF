#include <bits/stdc++.h>

using namespace std;

int n, a[1000], i, ok;
void in(){
    for(int j=1; j<=n; j++)
        cout << a[j];
    cout << endl;
}
void ql(int i){
    for(int j=0; j<=1; j++){
        a[i]=j;                 // gan a[i]=0
        if(i==n)                // neu i chay den n roi thi in
            in();
        else ql(i+1);           // i se tang 1
    }
}
int main(){
    cin >> n;
    ql(1);
}