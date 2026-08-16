#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    vector<bool> vis(n + 1, true);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        vis[a[i]] = false;
    }

    if (s.size() == n)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
            {
                cout << i << endl;
                return;
            }
        }
    }
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
