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
        ll n, m, k;
        cin >> n >> m >> k;

        auto ok = [&](ll becn)
        {
            if (becn > m)
                return false;
            ll total = m - (m / (becn + 1));
            if (total * n >= k)
                return true;
            return false;
        };
        // binary
        ll l = 1, r = m, ans = 0, mild;
        while (l <= r)
        {
            mild = (l + r) / 2;
            if (ok(mild))
            {
                ans = mild;
                r=mild-1;
            }
            else
                l = mild + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
