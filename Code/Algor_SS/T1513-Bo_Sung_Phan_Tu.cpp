#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        set <int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a, a+n);
        int k=a[n-1]-a[0]+1;
        int dem=k-s.size();
        cout << dem << endl;
    }
}