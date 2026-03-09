#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn = 1e6 + 5;
ll n, target;
vector<ll> a;

vector<ll> dp(mxn, -1);
ll knapscak(ll sum)
{
    if (sum == 0)
    {
        return 0;
    }
    if (dp[sum] != -1)
        return dp[sum];
    ll ans = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= sum)
        {
            ans = min(ans, knapscak(sum - a[i])+1);
        }
    }
    // return ans;
    return dp[sum] = ans;
}
void solve()
{

    cin >> n >> target;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());
    // cout<<target<<endl;
    cout << knapscak(target) << endl;
    // cout << dp[target] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
