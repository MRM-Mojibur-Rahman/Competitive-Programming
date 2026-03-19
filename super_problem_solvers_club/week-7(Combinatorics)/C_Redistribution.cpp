#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
vector<ll> factorial(2000 + 5);

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
    // O(n)
    // ll ans = 1;
    // for (int i = 1; i <= mod -2; i++)
    // {
    //     ans = (ans*x)%mod;
    // }

    // O(log(n))

    return BinExpo(x);
}
ll NcR(ll n, ll r)
{
    ll a = factorial[n];
    ll b = (factorial[r] * factorial[n - r]) % mod;
    ll ans = (a * modInverse(b)) % mod;
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    factorial[0] = 1;
    for (int i = 1; i <= 2000; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }

    int n;
    cin >> n;
    int stars = n-3;
    cout<<NcR(stars+2,2)<<endl;
    

    return 0;
}
