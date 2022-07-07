#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void SinhNPketiep(){
    string s;
    cin >> s;
    int i=s.size()-1;
    while(i>=0 && s[i]=='1'){
        s[i]='0';
        i--;
    }
    if(i<0){
        for(int i=0; i<s.size(); i++)
            cout << 0;
        cout << endl;
    }
    else{
        s[i]='1';
        // for(int j=i+1; j<s.size(); j++)
        //     s[j]='0';
        cout << s << endl;;
    }
}
int main() {
    faster;
    int test;
    cin >> test;
    while(test--){
        SinhNPketiep();
    }
    return 0;
}