#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    vector<ll> powers;
    ll lst = 1;

    while (l1 * lst <= r2)
    {
        powers.push_back(lst);
        lst *= k;
    }
    ll ans = 0;

    for (auto it : powers)
    {

        ll l = max(l1, (l2+it-1) / it);
        ll r = min(r1, (ll)r2 / it);
        if (l <= r )
            ans += (r - l + 1);
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
