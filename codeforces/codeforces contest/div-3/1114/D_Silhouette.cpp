#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, vector<ll>> mp, ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    auto it = mp.begin();
    auto pre = it;

    ll lst = 0;
    ll presum = 0;

    if (it->first != 0)
    {
        cout << -1 << endl;
        return;
    }
    while (it != mp.end())
    {
        ll curLen = pre->second.size();
        if (it->first != 0)
        {
            ll curS = (it->first - presum),
                cur = curS / curLen;
            if (curS % curLen == 0 && cur > lst)
            {

                ans[cur] = pre->second;
                lst = cur;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
            presum += (cur * pre->second.size());
        }

        pre = it;
        it++;
    }
    ans[lst + 1] = pre->second;
    vector<ll> b(n);
    for (auto [x, y] : ans)
    {
        for (auto it : y)
            b[it] = x;
    }

    for (auto it : b)
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
