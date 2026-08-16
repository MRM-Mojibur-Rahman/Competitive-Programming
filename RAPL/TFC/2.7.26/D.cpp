#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    map<ll, ll> x, y;

    for (auto it : a)
        x[it]++;
    for (auto it : b)
        y[it]++;

    ll ans = 0;
    for (auto [p, q] : x)
    {
        ans += ((q-1)*q)/2;
    }
    for (auto [p, q] : y)
    {
        ans += ((q-1)*q)/2;
    }
    cout << ans << endl;
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
