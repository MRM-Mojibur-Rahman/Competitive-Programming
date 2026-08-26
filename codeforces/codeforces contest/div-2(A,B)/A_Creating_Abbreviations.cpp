#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    set<char> s, an;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s.insert(toupper(a[0]));
    }

    for (int i = 0; i < m; i++)
    {

        string a;
        cin >> a;

        for (auto it : a)
            an.insert(toupper(it));
    }


    for (auto it : an)
    {
        if (s.find(it) == s.end())
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
