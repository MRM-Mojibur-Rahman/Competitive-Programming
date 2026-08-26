#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);

    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    a.push_back(0);
    b.push_back(0);

    ll fst = 0 , nd = 0;

    for (ll i = 0; i < n; i++)
    {
        fst+=(a[i]-a[i+1]+1);
    }
    for (ll i = 0; i < m; i++)
    {
        nd+=(b[i]-b[i+1]+1);
    }
    if(fst>=nd) cout<<1<<endl;
    else cout<<2<<endl;
    
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
