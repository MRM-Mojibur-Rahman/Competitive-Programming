#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, m;
    cin >> n >> k;
    m = k - 1;
    vector<ll> left(n), right(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> left[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> right[i];
    }
    vector<ll> a(n), b(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        a[i] = max(left[i], right[i]);
        b[i] = min(left[i], right[i]);
        sum += a[i];
    }
    sort(b.rbegin(), b.rend());
    for (ll i = 0; i < m; i++)
    {
        sum += b[i];
    }
    cout << sum + 1 << endl;
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
