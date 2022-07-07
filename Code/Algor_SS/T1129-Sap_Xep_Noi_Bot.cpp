#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void In(int a[], int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}
void SapXep(int a[], int n){
    for(int i=0; i<n; i++){
        int check=0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                check=1;
            }
        }
        if(check==1){
            cout << "Buoc " << i+1 << ": ";
            In (a, n);
            cout << endl;
        }
    }
}
int main() {
    faster;
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i=0; i<n; i++)
        cin >> a[i];
    SapXep(a, n);    
    return 0;
}