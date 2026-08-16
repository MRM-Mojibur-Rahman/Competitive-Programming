#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = 0, b = 1, m = LONG_MAX;

    while (n >= b)
    {
        m = min(k, n / b);
        ans += m;
        n -=( m * b);
        b *= 2;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
