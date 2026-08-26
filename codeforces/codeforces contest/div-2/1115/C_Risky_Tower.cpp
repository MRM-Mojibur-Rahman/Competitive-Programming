#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));

    vector<ll> sta(n);
    for (auto &it : sta)
        cin >> it;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<ll> an(n, LONG_MAX);
    priority_queue<ll> pq;
    for (ll i = n - 1; i >= 0; i--)
    {
    priority_queue<ll> tem;

        ll sum = 0;
        for (auto it : a[i])
            pq.push(it);

        for (ll j = 0; j < m; j++)
        {
            sum += pq.top();
            tem.push(pq.top());
            pq.pop();

            if (sta[i] <= sum)
            {
                an[i] = min(j + 1, an[i]);
            }
        }

        pq = tem;
    }
    ll ans = m;
    for (auto it : an)
        ans = min(ans, it);
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
