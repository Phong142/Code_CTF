#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void HVketiep(){
    int n;
    cin >> n;
    int hv[n+5];
    for(int i=1; i<=n; i++)
        cin >> hv[i];
    int i=n-1;
    while(i>0 && hv[i] > hv[i+1]) i--;  
    if(i<=0){
        for(int i=1; i<=n; i++)
            cout << i;
        cout << endl;
    }
    else{
        int k=n;
        while(hv[k]<hv[i]) k--;
        swap(hv[k], hv[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(hv[l], hv[r]);
            l++; r--;
        }
        for(int i=1; i<=n; i++)
            cout << hv[i] << ' ';
        cout << endl;
    }
}
int main() {
    HVketiep();
    return 0;
}