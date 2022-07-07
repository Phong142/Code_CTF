#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int tang(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i] > s[i+1]) return 0;
    }
    return 1;
}
int giam(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i] < s[i+1]) return 0;
    }
    return 1;
}
int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
        if(tang(s)==1 || giam(s)==1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}