#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> a, pair<int, int> b)
{

    if (a.first == b.first)
    {
        return a.second > b.second;
    }
     return a.first < b.first;
}
void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    vector<pair<ll, ll>> mn(n);
    for (int i = 0; i < n; i++)
    {
        mn[i] = {b[i], a[i]};
    }
    sort(mn.begin(), mn.end(), cmp);
    ll x = n ,ans =0 ;
    for (int i = 0; i <n; i++)
    {
        if(x==0||mn[i].first>p) break;

    
        ans+=p+min(mn[i].second,x-1)*mn[i].first;
        x-=((min(mn[i].second,x-1))+1);

        
    }
    ans+=x*p;
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
