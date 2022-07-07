#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int hv[1001], n, stop,i,a;
void SinhNP(){
    int i=n-1;
    while(i>=0 && hv[i]==1){
        hv[i]=0;
        i--;
    }
    if(i>=0)
        hv[i]=1;
    else stop=0;
}
void inkq(int n, int a){
    int check=0;
    for(int i=0; i<n; i++)
        if(hv[i]==1)
            check++;
    if(check==a){
        for(int i=0; i<n; i++)
            cout << hv[i];
        cout << endl;
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n >> a;
        stop=1;
        while(stop){
            inkq(n,a);
            SinhNP();
        }
        cout << endl;
    }
    return 0;
}