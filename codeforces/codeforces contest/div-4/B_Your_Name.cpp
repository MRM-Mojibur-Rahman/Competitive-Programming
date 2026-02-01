#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<char,int> s, t;
        for (int i = 0; i < n; i++)
        {
            s[a[i]]++;
            t[b[i]]++;
        }
        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
