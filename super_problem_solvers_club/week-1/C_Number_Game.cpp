#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), tem(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());

    auto ok = [&](int k)
    {
        tem = v;
        for (int i = 1; i <= k; i++)
        {
            if(tem.empty()) return false;
            auto it = upper_bound(tem.begin(), tem.end(), k - i + 1);
            if (it == tem.begin())
                return false;
            it--;
            tem.erase(it);
            tem[0] += k - i + 1;
            sort(tem.begin(), tem.end());
        }
        return true;
    };
    int l = 0, r = n, ans = 0, mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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
