#include <bits/stdc++.h>
using namespace std;
#define ll long long
// I take hint and help to solve this problem
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll l = max(0LL, n - m), r = n + m;
    ll ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ll u = l;
        if (~u & (1LL << i))
        {
            u |= (1LL << i);
            u &= ~((1LL << i) - 1);
        }
        if (u <= r)
        {
            ans |= (1LL << i);
        }
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
