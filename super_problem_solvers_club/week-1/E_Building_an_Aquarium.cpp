#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        vector<ll> v(n);
        for (auto &it : v)
            cin >> it;

        sort(v.begin(), v.end());
        auto ok = [&](ll h)
        {
            ll tem = w;
            for (int i = 0; i < n; i++)
            {
                if (h <= v[i])
                    break;
                if (tem == 0)
                    return false;
                if(h-v[i]>tem) return false;
                tem -= h - v[i];
            }
            // cout<<tem<<"he\n";/
            return true;
        };

        ll l = 0, r = 10e9, ans = 0, mid;
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
    return 0;
}
