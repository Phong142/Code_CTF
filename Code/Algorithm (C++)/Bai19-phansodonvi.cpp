#include <bits/stdc++.h>
using namespace std;
 
void ps(long long a, long long b){
	long long x=__gcd(a, b);
	if(x>1) return ps(a/x, b/x);
	if(a==1){
		cout << a << '/' << b << endl;
		return;
	}
	long long k=b/a+1;
	cout << 1 << '/' << k << " + ";
	ps(a*k-b, b*k);
}

int main(){
    int t; cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		ps(a, b);
	}
	return 0;
}