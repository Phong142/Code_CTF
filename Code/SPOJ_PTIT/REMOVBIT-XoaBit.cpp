#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string s;
void rm(){
    int vt=-1;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='0')
            vt=i;
    }
    if(vt!=-1)
        s.erase(s.begin()+vt, s.begin()+vt+1);
    else
        s.erase(s.begin(), s.begin()+1);
    cout << s;
}
int main() {
    faster;
    cin >> s;
    rm();
    return 0;
}