// #include <bits/stdc++.h>
// using namespace std;


// int main() 
// {
// 	int b[50];
//     for (int y=1;y<=255;y++)
//     {
//         int a[] = {19, 125, 82, 80, 44, 104, 116, 90, 12, 37, 76, 46, 70, 72, 27, 5, 50, 125, 89, 124, 87, 29, 87, 118, 112};
//         int x=y;
// 		for ( int i = 0; i < 2606; ++i )  
//         {

//             b[24]=x;
//             for (int j=23;j>=0;j--)
//             {
//                 b[j]=a[j+1]^b[j+1];
//             }
//             x=a[0]^b[0];
//             for (int j=24;j>=0;j--)
//                 a[j]=b[j];
             
//         }
//         if (a[0]==73)
//         {
//             for (int i=0;i<24;i++)
//                 cout<< char(a[i]);
//             cout << "}";
//             break;
//         }
        
//     }
// }
#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int hv[1001], stop;

void inhv(int n){
    for(int i=1; i<=n; i++)
        hv[i]=i;
}
void inkq(int n){
    for(int i=1; i<=n; i++)
        cout << hv[i] << " ";
    cout << endl;
}
void sinhhv(int n){
    int i=n-1;
    while(i>0 && hv[i] > hv[i+1]) i--;
    if(i<=0) stop=1;
    else{
        int k=n;
        while(hv[k]<hv[i]) k--;
        swap(hv[k], hv[i]);
        int l=i+1, r=n;
        while(l<r){
            swap(hv[l], hv[r]);
            l++; r--;
        }
    }
}
int check(int n, int k){
    if(hv[1]!=k)
        return 0;
    else    
        return 1;
}
void HV(int n, int k){
    inhv(n);
//    inkq(n);
    while(!stop){
        if(check(n, k)==1){
            inkq(n);
            sinhhv(n);
        }
        else sinhhv(n);
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    HV(n, k);
    return 0;
}