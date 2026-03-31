#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1, 0), pSum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pSum[i] = pSum[i - 1] + a[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if(n%i!=0) continue; 
        ll mx = LLONG_MIN, mn = LLONG_MAX;

        for (int j = i; j <= n; j += i)
        {
            mx = max(mx, pSum[j] - pSum[j - i]);
            mn = min(mn, pSum[j] - pSum[j - i]);
        }
        // cout<<mx-mn<<endl;
        ans = max(ans, mx - mn);
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
