#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    // vector<ll>a(n);
    ll ans = INT_MAX;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if(x%k==0) ans =0;
        else ans = min(ans, k - x % k);
        if(x%2==0) even++;
    }
    if(k==4)
    {
        if(even>=2) ans = 0 ;
        else if (even ==1) ans = min(ans,1LL);
        else  ans = min(ans,2LL);
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
