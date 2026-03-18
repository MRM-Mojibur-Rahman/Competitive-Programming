#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll mix = m / lcm(a, lcm(b, c)) * 2;
    ll ansa = (m / a) * 6 - (m / lcm(a, b)) * 3 - (m / lcm(a, c)) * 3 + mix;
    ll ansb = (m / b) * 6 - (m / lcm(a, b)) * 3 - (m / lcm(b, c)) * 3 + mix;
    ll ansc = (m / c) * 6 - (m / lcm(a, c)) * 3 - (m / lcm(b, c)) * 3 + mix;
    cout << ansa << " " << ansb << " " << ansc << endl;
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
