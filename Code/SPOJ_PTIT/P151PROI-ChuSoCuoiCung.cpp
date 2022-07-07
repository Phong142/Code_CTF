#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int OneDigit(int x) {
    if (x >= 0 && x <= 9)
        return 1;
    return 0;
}
int SumOfDigits(int x) {
    int S = 0;
    while (x != 0) {
        int mod = x % 10;
        S += mod;
        x = x / 10;
    }
    return S;
}
int FinalDigit(int x) {
    while (1) {

            break;
        x = SumOfDigits(x);
    }
    return x;
}
int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int x;
        cin >> x;
        cout << FinalDigit(x) << endl;
    }
    return 0;
}