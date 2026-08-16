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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum <= 0)
        {
            cout << "NO\n";
            return;
        }
    }
    sum = 0;
    for (ll i = n - 1; i >= 0; i--)
    {

        sum += a[i];
        if (sum <= 0)
        {
            cout << "NO\n";
            return;
        }
    }

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
