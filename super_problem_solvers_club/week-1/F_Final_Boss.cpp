#include <bits/stdc++.h>
using namespace std;
#define ll long long

__int128 damage(ll dam, ll c, ll k)
{
    return (__int128)dam * ((k - 1) / c + 1);
}

void solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (auto &it : a) cin >> it;
    for (auto &it : c) cin >> it;

    auto ok = [&](ll turns)
    {
        __int128 total_dam = 0;
        for (int i = 0; i < n; i++)
        {
            total_dam += damage(a[i], c[i], turns);
            if (total_dam >= h) return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
