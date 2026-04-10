#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }
    sort(a.begin() + 1, a.end());
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (k - a[i] >= 0)
        {
            ans++;
            k -= a[i];
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
