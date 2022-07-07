#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> qu;
        string s = "1";
        qu.push(s);
        while (n--)
        {
            cout << qu.front() << " ";
            qu.push(qu.front() + "0");
            qu.push(qu.front() + "1");
            qu.pop();
        }
        cout << endl;
    }
}