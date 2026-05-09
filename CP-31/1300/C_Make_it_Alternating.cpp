#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn = 2e5 + 4;
const ll mod = 998244353;
vector<ll> fact(mxn, 1);

void solve()
{

    string a;
    cin >> a;

    vector<ll> same;
    ll n = a.size();
    for (ll i = 0; i < n; i++)
    {
        ll cnt = 1;
        while (i < n - 1 && a[i] == a[i + 1])
        {
            cnt++;
            i++;
        }
       
            same.push_back(cnt);
    }
    ll cnt = 1;
    for (auto it : same)
        cnt = ((cnt % mod) * (it % mod)) % mod;
    ll ans = (cnt * fact[n - same.size()]) % mod;
    cout << n - same.size() << " " << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    for (ll i = 1; i < mxn; i++)
    {
        fact[i] = ((fact[i - 1] % mod) * (i % mod)) % mod;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}
