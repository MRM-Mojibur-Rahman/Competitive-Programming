#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll BinExpo(ll x)
{
    ll ans = 1;
    ll b = mod - 2;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans % mod * (x % mod)) % mod;
        }
        b >>= 1;
        x = 1LL * x * x % mod;
    }
    return ans;
}
ll modInverse(ll x)
{
    return BinExpo(x);
}
void solve()
{
    ll n;
    cin >> n;

    ll ans = ((((n * (n + 1))%mod * ((4 * n - 1)%mod))%mod * modInverse(6)) % mod * 2022) % mod;
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
