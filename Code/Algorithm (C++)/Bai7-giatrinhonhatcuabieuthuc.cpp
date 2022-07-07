#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int sum=0;
        int a[101], b[101];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(b[i]<b[j]){
                    int tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }
            }
        }
        for(int i=0; i<n; i++){
            sum+=a[i]*b[i];
        }
        cout << sum << endl;
    }
    return 0;
}