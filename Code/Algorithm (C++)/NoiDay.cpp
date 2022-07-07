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
        long long hi;
        priority_queue<long long, vector<long long>, greater<long long> > a;
        for(int i=0; i<n; i++){
            cin >> hi;
            a.push(hi);
        }
        int count=0;
        while(a.size()>1){
            long long x=a.top(); a.pop();
            long long y=a.top(); a.pop();
            a.push(x+y);
            count+= x+y;
        }
        cout << count << endl;
    }
    return 0;
}