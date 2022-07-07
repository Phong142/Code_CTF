#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    int ti, teo, to;
    int count=0;
    for(int i=0; i<n; i++){
        cin >> ti >> teo >> to;
        if(ti==1 && teo==1|| teo==1 && to==1 || ti==1 && to==1 || ti==1 && teo==1 && to==1) 
            count++;
    }
    cout << count;
    return 0;
}