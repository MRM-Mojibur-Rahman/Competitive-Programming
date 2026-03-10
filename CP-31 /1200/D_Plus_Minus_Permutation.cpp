#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Lcm(ll a, ll b)
{
    return (b*a / __gcd(a, b)) ;
}
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll lcm = Lcm(x, y);
    ll xs = n / x, ys = n / y, lcms = n / lcm;
    xs -= lcms, ys -= lcms;
    ll yside = ys * (ys + 1) / 2;
    ll xside = n * (n + 1) / 2 - (n - xs) * (n - xs + 1) / 2;
    cout << xside - yside << endl;
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
