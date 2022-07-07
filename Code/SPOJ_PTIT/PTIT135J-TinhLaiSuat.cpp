#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        float N, L, M;
        float count=0;
        cin >> N >> L >> M;
        float sum=N;
        while(sum<=M){
            sum=sum+(sum*L)/100;
            count++;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}