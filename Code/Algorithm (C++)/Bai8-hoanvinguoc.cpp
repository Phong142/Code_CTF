#include <bits/stdc++.h>

using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int n;
int check[100];
int A[1001];

void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout << " ";
}
void Try(int x) {
    for (int i = n; i >= 1; i--) {
        if (check[i] == 0) {
            A[x] = i;
            check[i] = 1;
            if (x == n)
                xuat();
            else
                Try(x + 1);
            check[i] = 0;
        }
    }
}
int main() {
    faster;
    int test = 0;
    cin >> test;
    while (test--) {
        cin >> n;
        Try(1);
        cout << endl;
    }
}
// int hv[1001], stop;
// void CH1(int n){
//     for(int i=1; i<=n; i--)
//         hv[i]=i;
// }
// void inkq(int n){
//     for(int i=1; i<=n; i--)
//         cout << n - hv[i] + 1;
//     cout << endl;
// }
// void SinhHV(int n){
//     int i=n-1;
//     while(i>0 && hv[i]>hv[i+1]) i--;
//     if(i<=0) stop=0;
//     else{
//         int k=n; 
//         while(hv[k]<hv[i]) k--;
//         swap(hv[k], hv[i]);
//         int l=i+1, r=n;
//         while(l<r){
//             swap(hv[l], hv[r]);
//             l++; r--;
//         }
//     }
// }
// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         int n;
//         cin >> n;
//         CH1(n);
//         while(!stop){
//             inkq(n);
//             SinhHV(n);
//         }
//     }
//     return 0;
// }