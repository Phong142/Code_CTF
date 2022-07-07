#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, a[1001], stop, i;
void inkq(){
    for(int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
}
void sinhnp(){
    i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--; 
    }
    if(i>=0) a[i]=1;
    else stop=0;
}
int main() {
    faster;
    cin >> n;
    stop=1;
    while(stop){
        inkq();
        sinhnp();
    }
    return 0;
}