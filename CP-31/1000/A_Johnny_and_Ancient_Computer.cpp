#include <bits/stdc++.h>
using namespace std;
#define ll long long
int msb(ll a)
{
    return 63 - __builtin_clzll(a);
}
int ans(int cnt)
{
    int an = 0;
    if (cnt >= 3)
    {
        an += (cnt / 3);
        cnt %= 3;
    }
    if (cnt >= 2)
    {
        an += (cnt / 2);
        cnt%=2;
    }
    an += cnt;
    return an;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = min(a, b), y = max(a, b);
    int cnt = 0;
    while (x < y)
    {
        x = (x << 1);
        cnt++;
    }
    if (x == y)
    {
        cout << ans(cnt) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
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
