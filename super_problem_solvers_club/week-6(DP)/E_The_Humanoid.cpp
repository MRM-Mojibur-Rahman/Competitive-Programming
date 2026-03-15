#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll> a;
// vector<vector<vector<ll>>> dp(1e6 + 10, vector<vector<ll>>(3, vector<ll>(2, -1)));
ll ans(ll idx, ll h, ll g, ll b)
{

    if ((idx == n))
        return 0;
    if (a[idx] < h)
        return ans(idx + 1, h + (a[idx] / 2), g, b) + 1;
    else
    {
        ll tem = 0;

        if (g > 0)
            tem = max(tem, ans(idx, h * 2, g - 1, b));
        if (b > 0)
            tem = max(tem, ans(idx, h * 3, g, b - 1));
        return tem;
    }
}
void solve()
{
    ll h;
    cin >> n >> h;
    a.resize(n);
    // for (ll i = 0; i <= 1e6; i++)
    // {
    //     for (ll j = 0; j <= 2; j++)
    //     {
    //         for (ll k = 0; k <= 1; k++)
    //         {
    //             dp[i][j][k] = -1;
    //         }
    //     }
    // }

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << ans(0, h, 2, 1) << endl;
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
