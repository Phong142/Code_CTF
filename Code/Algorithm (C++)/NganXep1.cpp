#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ar[101];
    int count=-1;
    while(cin >> s){
        if(s=="push"){
            count++;
            cin >> ar[count];
        }
        else if(s=="pop"){
            if(count >= 0)
               count--; 
        }
        else if(s=="show"){
            if(count >= 0){
                for(int i=0; i<=count; i++)
                    cout << ar[i] << ' ';
                cout << endl;
            }
            else cout << "empty" << endl;
        }
    }
    return 0;
}