#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n;
struct sx{
    int st, end;
};
sx h[1001];
bool cmp(sx a, sx b){
    return a.end < b.end;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> h[i].st;
        for(int i=0; i<n; i++)
            cin >> h[i].end;
        sort(h, h+n, cmp);
        int d=1, j=0;
        for(int i=1; i<n; i++){
            if(h[i].st>=h[j].end){
                d++;
                j=i;
            }
        }
        cout << d << endl;
    }
    return 0;
}