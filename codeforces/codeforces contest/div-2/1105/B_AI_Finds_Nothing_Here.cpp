#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll const mod = 998244353;
void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    ll cnt = (c - 1) * n + (r - 1) * m - (c - 1) * (r - 1);

    ll ans = 1;
    ll base = 2;
    while (cnt > 0)
    {
        if (cnt & 1)
            ans = (ans * base) % mod;

        base = (base * base) % mod;
        cnt /= 2;
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
