#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;

    ll x = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < x)
        {
            x += a[i];
        }
        else
            x = a[i];
    }
    cout << x << endl;
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
