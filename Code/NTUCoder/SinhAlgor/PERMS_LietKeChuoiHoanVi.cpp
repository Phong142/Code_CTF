#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int stop, a[1001];

void hv1(int n){
    for(int j=1; j<=n; j++){
        a[j]=j;
    }
}
void inkq(int n){
    for(int j=1; j<=n; j++)
        cout << a[j];
    cout << endl;
}
void sinhhv(int n){
    int i=n-1;
    while(i>0 && a[i]>a[i+1]) i--;
    if(i<=0) stop=1;
    else{
        int k=n;
        while(a[i]>a[k]) k--;
        swap(a[k],a[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++; r--;
        }
    }
}
int main() {
    faster;
    int n;
    cin >>n;
    int count=1;
    for(int i=1; i<=n; i++){
        count*=i;
    }
    cout << count << endl;
    hv1(n);
    while(!stop){
        inkq(n);
        sinhhv(n);
    }
    return 0;
}