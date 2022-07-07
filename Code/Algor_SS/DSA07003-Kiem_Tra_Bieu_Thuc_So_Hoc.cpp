#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int check(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            int j=st.top(); st.pop();
            if(i-j==2) return 1;
            if(s[j+1]=='(' && s[i-1]==')') return 1;
        }
    }
    return 0;
}
int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        getline(cin, s);
        if(check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}