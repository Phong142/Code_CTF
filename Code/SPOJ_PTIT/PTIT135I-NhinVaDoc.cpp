#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
        int a[10]={};
        string index="";
        for(int i=0; i<s.size(); i++){                      
            int cnt=1;                                      
            if(s[i]==1) continue;
            else{
                for(int j=i+1; j<s.size(); j++){
                    if(s[j]!=s[i]){
    //                    index+=to_string(cnt)+s[i];
                        break;
                    }
                    else{
                        cnt++;
                        s[j]=1;
                    }
                }
            }
            index+=to_string(cnt)+s[i];
        }
        cout << index << endl;
    }
    return 0;
}