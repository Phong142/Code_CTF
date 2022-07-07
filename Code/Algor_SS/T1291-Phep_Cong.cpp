// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         string s;
//         cin.ignore();
//         getline(cin, s);
//         if(s[0]-'0'+s[4]-'0'==s[8]-'0')
//             cout << "YES";
//         else
//             cout << "NO";
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b, c;
        string s1, s2;
        cin >> a >> s1 >> b >> s2 >> c;
        if(a+b==c) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}