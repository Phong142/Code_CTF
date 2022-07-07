#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test, testcase;
    cin >> test;
    string s;
    for(int i=1; i<=test; i++){
        cin >> testcase >> s;
        cout << testcase << ' ';
        int a[1001], n;
        for(int j=1; j<=s.size(); j++)
            a[j]=int (s[j-1]-'0');
        n=s.size()-1;
        while(n>0 && a[n]>=a[n+1]) n--;
        if(n<=0) cout << "BIGGEST" << endl;
        else{
            int k=s.size();
            while(a[k]<=a[n]) k--;
            swap(a[k], a[n]);
            int l=n+1, r=s.size();
            while(l<r){
                swap(a[l], a[r]);
                l++; r--;
            }
            for(int j=1; j<=s.size(); j++)
                cout << a[j];
            cout << endl;
        }
    }
    return 0;
}