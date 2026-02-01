#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, y;
    cin >> n >> x >> y;
    // calcultion function
    auto ok = [&](ll sec)
    {
        ll temp = n - 1;
        if (sec < min(x, y))
            return false;
        sec -= min(x, y);
        if ((sec / x + sec / y) >= temp)
            return true;
        return false;
    };
    //  binary scearch
    ll l = 0, r = 1e18, ans = 0, mild;
    while (l <= r)
    {
        mild = (l + r) / 2;
        if (ok(mild))
        {
            ans = mild;
            r = mild - 1;
        }
        else
            l = mild + 1;
    }
    cout << ans << endl;

    return 0;
}
