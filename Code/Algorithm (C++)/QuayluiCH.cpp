// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// int n, k, a[1001], c[1001];
// void inkq(){
//     for(int i=1; i<=k; i++)
//         cout << a[i];
//     cout << endl;
// }
// void qlch(int i){
//     for(int j=1; j<=n; j++){
//         if(!c[j]){
//             a[i]=j;
//             if(i==k)
//                 inkq();
//             else{
//                 c[j]=1;
//                 qlch(i+1);
//                 c[j]=0;
//         }
//     }
// }
// }
// int main() {
//     cin >> n >> k;
//     qlch(1);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n, k, a[1001], c[1001];
void inkq(){
    for(int i=1; i<=k; i++)
        cout << a[i];
    cout << endl;
}
void qlch(int i){
    for(int j=1; j<=n; j++){
        if(!c[j]){
            a[i]=j;
            if(i==k)
                inkq();
            else{
                c[j]=1;
                qlch(i+1);
                c[j]=0;
        }
    }
}
}
int main() {
    cin >> n >> k;
    qlch(1);
    return 0;
}