#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minn(string s1, string s2){
    int a=0, b=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='6')
            s1[i]='5';
        a=a*10+s1[i]-'0';
    }
    for(int i=0; i<s2.size(); i++){
        if(s2[i]=='6')
            s2[i]='5';
        b=b*10+s2[i]-'0';
    }
    return a+b;
}
int maxx(string s1, string s2){
    int a=0, b=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='5')
            s1[i]='6';
        a=a*10+s1[i]-'0';
    }
    for(int i=0; i<s2.size(); i++){
        if(s2[i]=='5')
            s2[i]='6';
        b=b*10+s2[i]-'0';
    }
    return a+b;
}
int main() {
    faster;
    string n, m;
    cin >> n >> m;
    cout << minn(n,m) << ' ' << maxx(n,m);
    return 0;
}