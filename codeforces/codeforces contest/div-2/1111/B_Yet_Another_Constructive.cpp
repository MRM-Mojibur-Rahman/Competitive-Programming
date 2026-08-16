#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    if (k > m)
    {
        cout << "NO\n";
        return;
    }

    ll sum = 0;
    ll div = m / k;
    vector<ll> a;

    for (ll i = 1; i < k; i++)
    {
        a.push_back(div);
        sum += div;
    }

    a.push_back(m - sum);
    ll x = div, y = m - sum;

    for (ll i = k; i < n ; i++)
    {
        a.push_back(div);
    }

    cout << "YES\n";
    for (auto it : a)
        cout << it << " ";
    cout << endl;
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
