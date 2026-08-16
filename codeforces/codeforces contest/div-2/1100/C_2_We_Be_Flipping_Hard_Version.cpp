#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> neg(n + 1);
    if (a[1] < 0)
        neg[1] = abs(a[1]);
    else
        neg[1] = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (a[i] < 0)
            neg[i] += (neg[i - 1] + abs(a[i]));
        else
            neg[i] = neg[i - 1];
    }
    ll mxpoint = -1, dif = 0;
    for (ll i = n; i > 0; i--)
    {
        if (a[i] < neg[i] && a[i] > 0)
        {
            if (abs(neg[i] - a[i]) > dif)
            {
                dif = abs(neg[i] - a[i]);
                mxpoint = i;
            }
        }
    }

    if (mxpoint == -1)
    {
        cout << 0 << endl;
        cout << endl;
        return;
    }

    vector<pair<ll, ll>> pos;
    ll r = 1;
    while (r < mxpoint)
    {
        if (a[r] < 0)
        {
            while (r < mxpoint && a[r] < 0)
            {
                r++;
            }
            pos.push_back({r - 1, 0});
        }
        else if (a[r] > 0)
        {
            while (r < mxpoint && a[r] > 0)
            {
                r++;
            }
            pos.push_back({r - 1, 1});
        }
    }

    ll len = pos.size();
    vector<ll> ans;
    ll i = len - 1;
    while (i >= 0 && pos[i].second == 0)
    {
        i--;
    }
    for (; i >= 0; i--)
    {
        ans.push_back(pos[i].first);
    }
    ans.push_back(mxpoint);
    cout << ans.size() << endl;
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
