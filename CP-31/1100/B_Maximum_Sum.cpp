#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    vector<ll> presum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        presum[i] = presum[i - 1] + a[i];
    }
    ll ans = 0;
    int lst = n - k;
    int fst = 0;
    for (int i = 1; i <= k+1 ; i++)
    {
        ans=max(ans,presum[lst]-presum[fst]);
        lst++;
        fst+=2;
    }
    cout<<ans<<endl;
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
