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
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll mn = 0, mx = 0;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                mn++;
            else if (a[i] < a[j])
                mx++;
        }
        cout << max(mn, mx) << " ";
    }
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
