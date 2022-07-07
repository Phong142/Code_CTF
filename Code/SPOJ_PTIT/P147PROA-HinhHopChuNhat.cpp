#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    long long s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	long long a, b, c; //ab = s1, bc = s2, ac = s3
	a = (sqrt(s1*s2*s3))/s2;
	b = s1/a;
	c = s3/a;
	cout << 4*(a+b+c);
	return 0;
}