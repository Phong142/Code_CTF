#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    set <int> a;
    int x=1, dem=0;
    for(int i=0; i< s.size(); i++)
    {
        a.insert(s[i]);
        if(a.size()==x)
        {
            dem++;
            x++;
        }
    }
    cout << dem;
}