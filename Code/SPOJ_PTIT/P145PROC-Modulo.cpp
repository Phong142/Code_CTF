#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int Mol=42;
    int n;
    int count=0;
    int a[45]={0};
    int so=10;
    while(so--){
        cin >> n;
        if(n>=0 && n<=41)
            a[n]++;
        else
            a[n%Mol]++;
    }
    for(int i=0; i<42; i++){
        if(a[i]>=1)
            count++;
    }
    // for(int i=0; i<42; i++){
    //     cout << a[i] << " ";
    // }
    cout << count;
    // for(int i=0; i<x; i++)  
    //     cout << a[i] << " ";
    return 0;
}