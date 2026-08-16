#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1, 0), pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = a[i] + pre[i - 1];
    }
    ll ans = 1;
    for (int i = 1; i < n; i++)
    {
            ans = max(ans, __gcd(pre[i],pre[n]));
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
