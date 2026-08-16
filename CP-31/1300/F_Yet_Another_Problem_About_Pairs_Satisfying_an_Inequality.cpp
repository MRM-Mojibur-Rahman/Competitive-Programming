#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1), pre(n + 1, 0);
    set<ll> s;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < i)
        {
            pre[i] += 1;
            s.insert(i);
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1];
    }

    ll ans = 0;
    for (auto it : s)
    {
        if (a[it] != 0)
        {
            if (a[it] - 1 <= n)
                ans += pre[a[it] - 1];
            else
                ans += pre[n];
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
