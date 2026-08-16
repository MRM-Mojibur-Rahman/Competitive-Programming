#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    vector<ll> bits(60, 0);
    for (auto it : a)
    {
        for (ll i = 0; i < 60; i++)
        {
            if (it & (1LL << i))
                bits[i]++;
        }
    }
    vector<ll> pw(60);
    pw[0] = 1;
    for (int i = 1; i < 60; i++)
        pw[i] = (pw[i - 1] * 2) % mod;

    ll ans = 0;
    for (auto it : a)
    {
        for (ll i = 0; i < 60; i++)
        {
            if (it & (1LL << i))
            {
                ans = (ans % mod + ((n - bits[i]) * pw[i]) % mod) % mod;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
