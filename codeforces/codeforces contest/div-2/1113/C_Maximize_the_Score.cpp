#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n + 1);

    map<ll, ll> mp;

    vector<ll> val(2 * n + 1, 0);
    for (ll i = 1; i <= 2 * n; i++)
    {
        cin >> a[i];
        if (mp[a[i]] == 0 && i)
        {
            val[i] = 1;
            mp[a[i]] = i;
        }
        else
        {
            val[i] = (i - mp[a[i]] + 1) * (i - mp[a[i]] + 1);
        }
    }

    vector<ll> mx(2 * n + 1, 0);
    for (ll i = 1; i <= 2 * n; i++)
    {
        mx[i] = 1 + mx[i - 1];

        if (mp[a[i]] < i)
        {

            mx[i] = max(mx[i], mx[mp[a[i]] - 1] + val[i]);
        }
    }

    

    // for (auto it : mx)
    // {
    //     cout << it << " ";
    // }
    cout << mx[2 * n] << endl;
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
