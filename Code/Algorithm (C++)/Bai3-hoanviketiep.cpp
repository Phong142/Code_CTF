#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void SinhHVketiep(){
    int n;
    cin >> n;
    int hv[n+5];
    for(int i=1; i<=n; i++)
        cin >> hv[i];
    int i=n-1;
    while(i>0 && hv[i]>hv[i+1]) i--;
    if(i<=0){
        for(int i=1;i<n; i++)
            cout << i;
        cout << endl;
    }
    else{
        int k=n;
        while(hv[k]<hv[i]) k--;         // xet tu cuoi len dau de tim so lon hon i
        swap(hv[k], hv[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(hv[l], hv[r]);
            l++, r--;
        }
        for(int i=1; i<=n; i++)
            cout << hv[i] << ' ';
        cout << endl;
    }
}
int main() { 
    faster;
    int test;
    cin >> test;
    while (test--) {
        SinhHVketiep();
    }
    return 0;
}