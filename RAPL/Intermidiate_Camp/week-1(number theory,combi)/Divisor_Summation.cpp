#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll tem = n;
    map<ll, ll> mp;
    for (ll i = 2; i*i  <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }

    if(n>1)
    mp[n]++;
    ll ans = 1;
    for (auto [x, y] : mp)
    {
       
        ll p = 1;
        ll idx = 0;
        while (idx <= y)
        {
            p *= x;
            idx++;
        }

        ans*= (double)(p-1)/(x-1);
    }
    cout<<ans-tem<<endl;
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
