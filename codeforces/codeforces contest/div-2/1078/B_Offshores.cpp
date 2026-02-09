#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll mx = 0, ans = 0, div = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        div = (a[i] / x);
        ans += (y * div);
        if ((a[i] % x) + div * (x - y) > mx)
        {
            mx = a[i] % x + div * (x - y);
        }
    }

    cout << mx + ans << endl;
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