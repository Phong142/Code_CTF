#include <iostream>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    faster;
    string sp;
    while(1){
        cin >> sp;
        if(sp=="#")
            break;
        int len=sp.length();
        int yes=0;
        int no=0;
        int p=0;
        int nq=0;
        for(int i=0; i<len; i++){
            if(sp[i]=='Y')
                yes++;
            if(sp[i]=='N')
                no++;
            if(sp[i]=='P')
                p++;
            if(sp[i]=='A')
                nq++;
        }
        if((float)nq>=(float)len/2.0) 
            cout << "need quorum" << endl;
        else{
            if(yes>no) cout << "yes" << endl;
            else if(no>yes) cout << "no" << endl;
            else cout << "tie" << endl;
        }
    }
}