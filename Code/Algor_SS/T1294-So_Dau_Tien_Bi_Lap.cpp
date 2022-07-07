#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        long long a[n+5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int check=1;
        int x=0;
        int i=0;
        while(i<n-1 && check){
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    check=0;
                    x=i;
                }
            }
            i++;
        }
        if(!check)    cout << a[x];
        else    cout << "NO";
        cout << endl;
    }
    return 0;
}