#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll msb(ll x) { return 63 - __builtin_clzll(x); }
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    ll len = msb(mn);
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (msb(a[i]) != len)
        {
            ans += msb(a[i]) - len;
            a[i] = a[i] >> (msb(a[i]) - len);
        }
    }
 
    for (ll i = len - 1; i >= 0; i--)
    {
        ll one = 0;
        for (ll g = 0; g < n; g++)
        {
            if (a[g] & (1 << i))
                one++;
        }
        
        if (one != n && one != 0)
        {
            ans += (n * (i + 1));
            break;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        ans += msb(a[i]) - len;
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
