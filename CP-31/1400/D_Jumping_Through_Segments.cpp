#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    vector<int> op(n);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        p[i] = {x, y};
    }
    for (int i = 1; i < n; i++)
    {
        if (p[i].first >= p[i - 1].second )
            op[i - 1] = 1;
        else
            op[i - 1] = 0;
    }

    auto ok = [&](ll k)
    {
        ll lst = 0;
        for (ll i = 0; i < n; i++)
        {
            // cout<<lst<<endl;
            if (p[i].first >= lst)
            {
                if (lst + k >= p[i].first)
                {
                    if (op[i])
                    {
                        lst = min(p[i].second, lst + k);
                    }
                    else
                        lst = min(p[i].first, lst + k);
                }
                else
                    return false;
            }
            else
            {

                if (lst <= p[i].second + k)
                {
                    if (op[i])
                    {
                        lst = max(p[i].second, lst - k);
                    }
                    else
                        lst = max(p[i].first, lst - k);
                }
                else
                    return false;
            }
        }
        return true;
    };

    ll l = 0, r = 10e9 + 10;
    ll ans = r;
    ll mid = l + (r - l) / 2;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
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
