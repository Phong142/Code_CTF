#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int max=9;
        int count=0;
        while(max>=0){
            count+=n/a[max];
            n%=a[max];
            max--;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}