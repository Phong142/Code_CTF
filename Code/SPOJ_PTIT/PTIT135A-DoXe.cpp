#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int a[101]={};
    int xe=3;
    while(xe--){
        int m, n;
        cin >> m >> n;
        for(int i=m; i<n; i++)
            a[i]++;
    }
    int count=0;
    for(int i=0; i<101; i++){
        if(a[i]==1) count+=x1;
        else if(a[i]==2) count+=2*x2;
        else if(a[i]==3) count+=3*x3;
    }
    cout << count << endl;
    return 0;
}