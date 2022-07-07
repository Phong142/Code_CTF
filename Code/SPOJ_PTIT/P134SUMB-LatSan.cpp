#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
	long long g, y;
	cin >> x >> y;
	// so gach xanh = chu vi - 4 => m + n = (g + 4)/2;
	// so gach vang = dien tich - so gach xanh => m*n = g + y;
	long long delta = pow((g+4)/2,2) - 4*(g+y);
	long long m1 = ((g+4)/2 + sqrt(delta))/2;
	long long n1 = (g+4)/2 - m1;
	long long m2 = ((g+4)/2 - sqrt(delta))/2;
	long long n2 = (g+4)/2 - m2;
	if (m1 >= 0 && m1 <= n1) cout << m1 << n1;
	else if (m2 >=0 && m2 < n2) cout << m2 << n2;
	return 0;
}
    return 0;
}