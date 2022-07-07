#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int k;
        string s;
        cin >> k;
        cin >> s;
        char ar[27]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        int dd[27]={};
        priority_queue<int> q;
        // for(long long i=0; i<s.size(); i++)
        //     b[s[i]-'A'+1]++;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<27; j++){
                if(s[i]==ar[j]){
                    dd[j]++;
                    break;
                }
            }
        }
        for(int i=0; i<27; i++){
            if(dd[i]!=0)
                q.push(dd[i]);
        }
        while(k--){
            long long x=q.top();
            q.pop();
            x--;
            q.push(x);
        }
        long long count=0;
        while(q.size()>0){
            long long x=q.top();
            q.pop();
            count+=x*x;
        }
        cout << count <<  endl;
    }
    return 0;
}