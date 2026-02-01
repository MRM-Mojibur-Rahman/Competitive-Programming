#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    auto ok = [&](ll x)
    {
        __int128 val = (__int128)x * (x - 1) / 2;
        return val <= n;
    };

    ll l = 0, r = 2e9, k = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            k = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    ll used = (ll)((__int128)k * (k - 1) / 2);
    ll rem = n - used;

    cout << k + rem << "\n";
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
