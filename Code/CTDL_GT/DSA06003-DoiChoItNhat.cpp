#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5]={}, count=0;
        for(int i=0; i<n; i++) cin >> a[i]; 
        for(int i=0; i<n-1; i++){
            int k = i;
            for(int j=i+1; j<n; j++){
                if(a[j]<a[k]) k=j;
            }
            if (k!=i)
            {
                swap(a[i],a[k]);
                count++;
            }
        }
        cout << count << endl;
    }
}