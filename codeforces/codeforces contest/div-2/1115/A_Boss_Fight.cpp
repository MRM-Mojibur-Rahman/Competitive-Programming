#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mp[x], mx);
    }
    int a = 0;
    int ans = 0;
    for (auto [x, y] : mp)
    {
        ans += x * y;
        if (mx == y)
            a = x;
    }
    if (n - mx + 2 < mx)
    {
        ans -= (2 * mx - n - 2) * a;
    }
    cout<<ans<<endl;
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
