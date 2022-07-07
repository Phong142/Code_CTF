#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const long long mod=1e9+7;
int main() {
    faster;
    long long n;
    cin >> n;
    priority_queue <long long, vector <long long>, greater<long long> > q;
    for(int i=0; i<n; i++){
        long long x;
        cin >> x;
        q.push(x);
    }
    long long count=0;
    while(q.size()>1){
        long long x=q.top(); q.pop();
        long long y=q.top(); q.pop();
        long long tmp=(x+y)%mod;
        q.push(tmp);
        count+=tmp;
        count%=mod;
    }
    cout << count << endl;
    return 0;
}