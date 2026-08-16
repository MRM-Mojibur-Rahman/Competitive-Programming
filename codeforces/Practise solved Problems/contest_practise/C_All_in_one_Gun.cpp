#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, h, k;
    cin >> n >> h >> k;
    vector<ll> a(n), pre(n+1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
            pre[i] = pre[i - 1] + a[i];
        else
            pre[i] = a[i];
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    ll ans = 0;
    ans += (h / sum) * (n + k);

    h %= sum;

    if (h == 0)
    {
        cout << ans - k << endl;
        return;
    }
    vector<ll> mx(n+1);
    mx[n ] = a[n - 1];
    for (ll i = n - 1; i >= 0; i--)
    {
        mx[i] = max(mx[i + 1], a[i]);
    }
    ll mn = a[0];
    ll i = 0;
    for (; i < n; i++)
    {
        mn = min(mn, a[i]);
        ll cursum = pre[i] - mn + mx[i+1];
        if (cursum >= h || pre[i]>=h)
            break;
    }

    cout << ans + i + 1 << endl;
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
