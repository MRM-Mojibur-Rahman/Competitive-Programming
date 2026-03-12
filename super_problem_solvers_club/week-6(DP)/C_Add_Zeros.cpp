#include <bits/stdc++.h>
using namespace std;
#define ll long long
// ll mx_len(ll n)
// {
//     if(mp[n].empty()) return n;
//     ll ans = n;
//     for(auto it:mp[n])
//     {
//         if(it!=0)
//         ans=max(ans,mx_len(n+it));
//     }
//     return ans;
// }
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    map<ll, vector<ll>> mp;

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i] + i - 1].push_back(i - 1);
    }
    map<ll, ll> dp;
    for (auto i = mp.rbegin(); i != mp.rend(); i++)
    {
        ll mx = 0;
        for (auto it : i->second)
        {
            mx=max(mx,dp[i->first+it]+it);

        }
        dp[i->first]=mx;
    }
    cout<<dp[n]+n<<endl;
    // cout << mx_len(n) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        // mp.clear();
        solve();
    }
    return 0;
}
