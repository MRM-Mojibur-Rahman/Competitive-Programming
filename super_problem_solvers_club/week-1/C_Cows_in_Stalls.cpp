#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int stall, n;
    cin >> stall >> n;
    vector<int> dis(stall);
    for (auto &it : dis)
        cin >> it;
    // ok
    auto ok = [&](ll x)
    {
        ll tem = dis[0];
        for (int i = 0; i < n-1; i++)
        {
            auto it = lower_bound(dis.begin(), dis.end(), tem + x);
            if (it == dis.end())
            {
                return false;
            }
            tem = *it;
        }
        return true;
    };
    //  binary scearch
    ll l = 0, r = 1e10, ans = 0, mild;
    while (l <= r)
    {
        mild = (l + r) / 2;
        if (ok(mild))
        {
            ans = mild;
            l = mild + 1;
        }
        else
            r = mild - 1;
    }
    cout << ans << endl;
    return 0;
}
