#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll k, x;
    cin >> k >> x;

    auto ok = [&](ll m)
    {
        ll total = 0;
        if (m <= k)
        {
            total += (m * (m + 1)) / 2;
        }
        else
        {
            total += (k * (k + 1)) / 2;
            ll tem = m - k;
            total += tem * (2 * k - tem - 1) / 2;
        }
        if (total <= x)
            return true;
        else
            return false;
    };

    ll l = 1, r = (2 * k) - 1;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    // cout<<ok(4)<<endl;
    ll total = 0;
    if (ans <= k)
    {
        total += (ans * (ans + 1)) / 2;
    }
    else
    {
        total += k * (k + 1) / 2;
        ll tem = ans - k;
        total += tem * (2 * k - tem - 1) / 2;
    }
    if(x>total && ans< 2*k-1) ans++;
    // cout<<total<<endl;
    cout << ans << endl;
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
