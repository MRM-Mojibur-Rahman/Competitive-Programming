#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    map<pair<int, int>, int> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        int mx = val % x;
        int my = val % y;

        ans += mp[{(x - mx) % x, my}];
        mp[{mx, my}]++;
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
