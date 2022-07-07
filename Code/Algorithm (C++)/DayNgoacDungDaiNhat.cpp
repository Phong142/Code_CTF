#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int count=0;
        stack<int> st;
        st.push(-1);
        for(int i=0; i<s.size();i++){
            if(s[i]=='(')
                st.push(i);
            else{
                st.pop();
                if(st.size() > 0)
                    count=max(count, i-st.top());
                if(st.size()==0) st.push(i);
            }
        }
        cout << count << endl;
    }
    return 0;
}