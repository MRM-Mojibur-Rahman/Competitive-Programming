#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, bool> pre;
    for (auto &it : a)
    {
        cin >> it;
        pre[it] = true;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    sort(a.rbegin(), a.rend());
    ll z = 0;
    for (ll i = 1; i < n; i++)
    {
        ll x = a[0] - a[i];
        z = __gcd(x, z);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += (a[0] - a[i]) / z;
    }
    for (ll i = a[0] - z, j = 1; 1; i -= z, j++)
    {
        if (pre[i] == false)
        {
            cout << ans + j << endl;
            return;
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
