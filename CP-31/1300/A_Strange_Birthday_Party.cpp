#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), b(m + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    ll idx = 1;
    ll ans = 0;
    for (ll i = n; i >= 1; i--)
    {
        if (b[a[i]] <= b[idx])
        {
            ans += b[a[i]];
        }
        else
        {
            ans += b[idx];
            idx++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
