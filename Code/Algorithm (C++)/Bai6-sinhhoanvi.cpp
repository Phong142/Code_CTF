#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int hv[1001], stop;
void CH1(int n){
    for(int i=1; i<=n; i++)
        hv[i]=i;
}
void inkq(int n){
    for(int i=1; i<=n; i++)
        cout << hv[i];
    cout << endl;
}
void SinhHV(int n){
    int i=n-1;
    while(i>0 && hv[i]>hv[i+1]) i--;
    if(i<=0) stop=1;
    else{
        int k=n;
        while(hv[k]<hv[i]) k--;
        swap(hv[k], hv[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(hv[l], hv[r]);
            l++; r--;
        }
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        CH1(n);
        while(!stop){
            inkq(n);
            SinhHV(n);
        }
    }
    return 0;
}