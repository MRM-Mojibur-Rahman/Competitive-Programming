#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7, mxn = 1e6 + 7;
vector<ll> a;
ll n, x;
vector<ll> dp(mxn, -1); // State =  the number of ways to make the coin
ll ways(int target)
{
    if (target == 0)
    {
        return 1;// if target == 0 then 1 ways
    }
    if (dp[target] != -1)
        return dp[target];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= target)
        {
            ans = (ans + ways(target - a[i])) % mod; // transition dp[i] = dp[i-it]
        }
    }
    return dp[target] = ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    cout << ways(x) << endl;

    // vector<ll>dp(x+1,0);
    // dp[0]=1;

    // for (int i = 1; i <=x; i++)
    // {
    //     for(auto it:a)
    //     {
    //         if(i>=it && dp[i-it]!=0)
    //         {
    //            dp[i]=(dp[i]+dp[i-it])%mod;
    //         }
    //     }
    // }
    // cout<<dp[x]<<endl;

    return 0;
}
