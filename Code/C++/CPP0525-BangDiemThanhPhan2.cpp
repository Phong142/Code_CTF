#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct SinhVien{
    string hoten;
	string ma;
	string lop;
	float d1, d2, d3;
};

void nhap(struct SinhVien &a){
	cin >> a.ma;
	scanf("\n");
	getline(cin, a.hoten);
	cin >> a.lop;
	cin >> a.d1 >> a.d2 >> a.d3;
}

void in(struct SinhVien a){
	cout << a.ma << " " << a.hoten << " " << a.lop << fixed << setprecision(1) << " " << a.d1 << " " << a.d2 << " " << a.d3 << endl;
}

int cmp(struct SinhVien a, struct SinhVien b){
	return a.hoten < b.hoten;
}

void inds(struct SinhVien ds[], int n){
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " ";
		in(ds[i]);
	}
}

int main(){
    struct SinhVien ds[101];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}









// B20DCCN999
// Nguyen Van An
// D20CQCN04-B
// 10.0
// 9.0
// 8.0
// B20DCAT001
// Le Van Nam
// D20CQAT02-B
// 6.0
// 6.0
// 4.0
// B20DCCN111
// Tran Hoa Binh
// D20CQCN04-B
// 9.0
// 5.0
// 6.0