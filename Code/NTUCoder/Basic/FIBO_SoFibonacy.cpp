#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void fibo(int n){
    int f1=1;
    int f2=1;
    long long f3;
    vector <int> v;
    cout << f1 << " " << f2 << " ";
    for(int i=0; i<n-2; i++){
        f3=f1+f2;
        v.push_back(f3);
        f1=f2;
        f2=f3;
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}
int main() {
    faster;
    int n;
    cin >> n;
    fibo(n);
    return 0;
}