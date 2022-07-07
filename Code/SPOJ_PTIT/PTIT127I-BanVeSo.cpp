#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int ktra(int a[]){
    for(int i=1; i<=49; i++){
        if(a[i]==0) return 0;
    }
    return 1;
}
int main() {
    faster;
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        int dd[101]={0};
        long long a;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=6; j++){
                cin >> a;
                if(a>=1 && a<=49)
                    dd[a]++;
            }
        }
        if(ktra(dd)) cout << "Yes" << endl;
        else cout << "No" << endl; 
        // for(int i=0; i<49; i++){
        //     cout << dd[i] << " ";
        // }
    }
    return 0;
}