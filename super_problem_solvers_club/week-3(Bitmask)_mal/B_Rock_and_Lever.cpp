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
    map<ll, ll> lgs;
    for (int i = 0; i < n; i++)
    {
        lgs[__lg(a[i])]++;
    }
    ll ans = 0;
    for (auto [x, y] : lgs)
    {
        ans +=(ll) (y * (y - 1) )/ 2;
        
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
