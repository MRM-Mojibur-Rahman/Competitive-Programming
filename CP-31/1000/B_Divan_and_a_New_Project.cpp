#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    vector<pair<ll, ll>> polls(n);
    for (ll i = 0; i < n; i++)
    {
        polls[i] = {a[i], i};
    }
    sort(polls.rbegin(), polls.rend());
    vector<ll> ans(n + 1);
    ans[0] = 0;
    ll idx = 1;
    ll time = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans[polls[i - 1].second+1] = idx;

        time += abs(idx) * polls[i - 1].first;
        if (idx < 0)
            idx = abs(idx) + 1;
        else
            idx = -idx;
    }
    cout << 2*time << endl;
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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
