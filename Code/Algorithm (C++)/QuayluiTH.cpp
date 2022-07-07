#include <bits/stdc++.h>

using namespace std;

int n, a[1000], i, ok, k;
void in(){
    for(int j=1; j<=k; j++)
        cout << a[j] << ' ';
    cout << endl;
}
void ql(int i){                             // 6 3
    for(int j=a[i-1]+1; j<=n-k+i; j++){     //vòng 1 nhận: 1 2 3 4   
        a[i]=j;                             // vòng 2 của 1 nhận: 2 3 4 5
        if(i==k)
            in();
        else ql(i+1);
    }
}
int main(){
    cin >> n >> k;
    ql(1);
}