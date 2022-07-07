#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int so=4;
    int n;
    int count=0;
    int a[5];
    while(so--){
        cin >> n;
        int kt=0;
        for(int i=0; i<count; i++){
            if(n==a[i]){
                kt=1;
                break;
            }
        }
        if(kt==0){
            a[count++]=n;
        }
    }
    // for(int i=0; i<x; i++){
    //     cout << a[i] << " ";
    // }
    cout << 4-count;
    return 0;
}

// #include <stdio.h>

// int main ()
// {
//     int n = 0;
//     int arr[5];
//     int tmp;
//     for (int i=1; i<=4; i++)
//     {
//         scanf("%d", &tmp);
//         int kt = 0;
//         for (int i=1; i<=n; i++)
//         {
//             if (tmp==arr[i])
//             {
//                 kt = 1;
//                 break;
//             }
//         }
//         if (kt==0)
//         {
//             n++;
//             arr[n]=tmp;
//         }
//     }
//     printf ("%d", 4-n);
//     return 0;
// }