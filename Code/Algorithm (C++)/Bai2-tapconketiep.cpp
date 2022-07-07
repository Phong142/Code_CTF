#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void SinhTCketiep(){
    int n,k;
    cin >> n >> k;
    int tc[n+5];
    for(int i=0; i<k; i++)
        cin >> tc[i];
    int i=k-1;
    while(i>=0 && tc[i]==n-k+i+1) i--;
    if(i>=0){
        tc[i]++;
        for(int j=i+1; j<k; j++)
            tc[j]=tc[j-1]+1;
        for(int i=0; i<k; i++)
            cout << tc[i] << ' ';
        cout << endl;
    }
    else
        for(int j=0; j<k; j++)
            cout << j+1 << ' ';
        cout << endl;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        SinhTCketiep();
    }
    return 0;
}