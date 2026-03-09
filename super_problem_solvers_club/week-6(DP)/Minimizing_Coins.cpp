#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn = 1e6 + 5;
ll n, target;
vector<ll> a;

vector<ll> dp(mxn, -2);
// ll knapscak(ll sum)
// {
//     if (sum == 0)
//     {
//         return 0;
//     }
//     if (dp[sum] != -2)
//         return dp[sum];
//     ll ans = INT_MAX;
//     for (ll i = 0; i < n; i++)
//     {
//         if (a[i] <= sum)
//         {
//             ll x = knapscak(sum - a[i]) + 1;
//             if (x != 0)
//                 ans = min(ans, x);
//         }
//     }
//     return dp[sum] = (ans == INT_MAX) ? -1 : ans;
// }
void solve()
{

    cin >> n >> target;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<ll> dp(mxn, INT_MAX);
    dp[0] = 0;
    // cout << knapscak(target) << endl;
    for (int i = 1; i <= target; i++)
    {
        for(auto it:a)
        {
            if(it<=i && dp[i-it]!=INT_MAX)
            {
                dp[i]=min(dp[i],dp[i-it]+1);
            }
        }
    }
    cout<<((dp[target]!=INT_MAX)? dp[target]:-1)<<endl;
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
