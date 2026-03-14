#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n + 1), pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 1; i <= n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if(k-pre[i]< 0) break;
        ans +=( (k - pre[i] ) / i) +1;
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
