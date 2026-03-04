#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }
    bool ok = [&](ll x)
    {
        

    };

    ll l = 0 , r = m,ans = 0 , mid = 0 ;
    while (l<=r)
    {
        mid = (l + r)/2;
        if(ok(mid))
        {
            l = mid+1;
            ans = mid;
        }
        else r = mid -1 ;

    }
    



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
