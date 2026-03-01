#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, e;
    cin >> n >> e;

    vector<ll> adj(n, 0);

    for (int i = 0; i < e; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        adj[x]++;
        adj[y]++;
    }

    map<ll, ll> a;

    for (int i = 0; i < n; i++)
    {
        if (adj[i] > 1)
            a[adj[i]]++;
    }

    ll ansx = 0, ansy = 0;

    for (auto [x, y] : a)
    {
        if (y > 1)
            ansy = x - 1;
        else
            ansx = x;
    }

    if (a.size() == 1)
        ansx = ansy + 1;

    cout << ansx << " " << ansy << endl;
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
