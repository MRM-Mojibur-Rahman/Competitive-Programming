#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll j, ll k)
{
    return j * (2 * k + j - 1) / 2;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll total = n * (2 * k + n - 1) / 2;

    ll l = 1, r = n - 1;
    ll ans = LLONG_MAX;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll left = sum(mid, k);
        ll diff = llabs(total - 2 * left);
        ans = min(ans, diff);

        if (2 * left < total)
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
