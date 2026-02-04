#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    ll it = a;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans%mod * (a%mod))%mod;
        }
    
        b >>= 1;
        a = 1LL * a * a % mod;
    }
    cout<<ans<<endl;
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
