#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    vector <int> ra;
    vector <int> di;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        ra.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        di.push_back(x);
    }
    sort(ra.begin(), ra.end());
    sort(di.begin(), di.end());
    int count=0;
    for (int i=0; i<ra.size(); i++) {
        for (int j=0; j<di.size(); j++) {
            if(di[i]==-1) continue;
            if(di[j]>ra[i]){
                count++;
                di[j]=-1;
            }
        }
    }
    cout << count;
    return 0;
}