#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n;
    cin >> n;
    double sum;
    for(int i=1; i<=n; i++){
        double p;
        cin >> p;
        sum+=p;
    }
    cout << fixed << setprecision(12) << sum/n;
    return 0;
}