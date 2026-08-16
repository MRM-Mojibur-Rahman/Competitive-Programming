#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n + 1);
    int gcd = __gcd(x, y);
    bool is = false;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (abs(a[i] - i) % gcd != 0)
        {
            is = true;
        }
    }
    if (is)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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
