#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    string s;
    cin >> s;
    while(s.size()%3!=0)
        s='0'+s;
    for(int i=0; i<s.size()-2; i+=3){
        string find="";
        for(int j=i; j<i+3; j++)
            find+=s[j];
        if(find=="000") cout << 0;
        if(find=="001") cout << 1;
        if(find=="010") cout << 2;
        if(find=="011") cout << 3;
        if(find=="100") cout << 4;
        if(find=="101") cout << 5;
        if(find=="110") cout << 6;
        if(find=="111") cout << 7;
    }
    return 0;
}