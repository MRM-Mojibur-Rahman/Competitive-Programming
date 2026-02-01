#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    auto ok = [&](int mex)
    {
        set<int> subset;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mex)
            {
                subset.insert(v[i]);
            }
            if ((int)subset.size() == mex)
            {
                cnt++;
                subset.clear();
            }
        }
        return cnt >= k;
    };
    int l = 0, r = n + 1, ans = 0, mid = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
            
    }
    cout << ans << '\n';
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
