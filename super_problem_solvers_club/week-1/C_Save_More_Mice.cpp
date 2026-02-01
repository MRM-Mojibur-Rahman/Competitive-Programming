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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (auto &it : v)
            cin >> it;

        sort(v.begin(), v.end());
        auto ok = [&](ll h)
        {
            ll time = 0;
            // ll cat = 0;
            for (int i = k - 1; i >= 0 && h; i--, h--)
            {
                if (v[i] <= time)
                    return false;
                time += n - v[i];
                
            }
            if (time <= n)
                return true;
            else
                return false;
        };

        ll l = 0, r = k, ans = 0, mid;
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
