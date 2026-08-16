#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int l = -1, r = -1;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            l = i, r = n - 1 - i;
            break;
        }
    }

    if (l == -1 && r == -1)
    {
        cout << "YES\n";
        return;
    }

    string ls = "", rs = "";

    for (int i = 0; i < n; i++)
    {
        if (i != l)
        {
            ls.push_back(a[i]);
        }
        if (i != r)
        {
            rs.push_back(a[i]);
        }
    }

    string teml = ls;
    reverse(ls.begin(), ls.end());
    if (teml == ls)
    {
        cout << "YES\n";
        return;
    }
    teml = rs;
    reverse(rs.begin(), rs.end());
    if (teml == rs)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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
