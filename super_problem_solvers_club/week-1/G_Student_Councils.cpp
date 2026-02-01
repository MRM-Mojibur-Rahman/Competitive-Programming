#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n;
    cin >> k >> n;

    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;

    auto ok = [&](ll x)
    {
        ll sum = 0;
        for (ll a : v)
        {
            sum += min(a, x);
        }
        return sum >= x * k;
    };

    ll l = 0;
    ll r = accumulate(v.begin(), v.end(), 0LL) / k;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
