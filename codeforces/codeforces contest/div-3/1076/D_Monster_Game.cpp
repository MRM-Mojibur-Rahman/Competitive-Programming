#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll>  level(n), pre(n);
    map<int,int>mp;
    
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> level[i];
    }
    pre[0] = level[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = level[i]+ pre[i - 1];
    }
    ll ans = 0;
    int total = n;
    for (auto [x,y]:mp)
    {
        ll cnt = upper_bound(pre.begin(),pre.end(),total)-pre.begin();
        ans=max(ans,cnt*x);
        total-=y;


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
