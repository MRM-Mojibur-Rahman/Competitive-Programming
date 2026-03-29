#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1), b(n + 1), mxb(n + 1), presum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        presum[i] = presum[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        mxb[i] = max(b[i], mxb[i - 1]);
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > k)
            break;
        ans = max(ans, presum[i] + mxb[i] * (k - i));
    }
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
