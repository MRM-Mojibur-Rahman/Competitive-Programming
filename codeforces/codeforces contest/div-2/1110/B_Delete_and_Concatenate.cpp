#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.rbegin(),a.rend());

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<c && i>=(n+1)/2 && n!=1) break;
        ans+=a[i]-c;
    }
    
    cout << ans << endl;
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
