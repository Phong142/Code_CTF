#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n;
struct sx{
    int st, end; 
};
bool cmp(sx a, sx b){
    return a.end < b.end;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        sx h[n+1];
        for(int i=0; i<n; i++){
            cin >> h[i].st;
            cin >> h[i].end;
        }
        sort(h, h+n, cmp);
        int count=1, j=0;
        for(int i=1; i<n; i++){
            if(h[i].st>=h[j].end){
                count++;
                j=i;
            }
        }
        cout << count << endl;
    }
    return 0;
}